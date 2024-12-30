#include "MeocapPoseProvider.h"
#include "MeocapLog.h"
#include <MeocapLiveLinkSource.h>

const int BONE_RANGE_24[24] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23 };
const int BONE_RANGE_25[25] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24 };

FMeocapPoseProvider::FMeocapPoseProvider()
{
}

void FMeocapPoseProvider::OnInitializeAnimInstance(const FAnimInstanceProxy* InProxy, const UAnimInstance* InAnimInstance)
{
	Super::OnInitializeAnimInstance(InProxy, InAnimInstance);
}

void FMeocapPoseProvider::GatherDebugData(FNodeDebugData& DebugData)
{
	const FString DebugLine = DebugData.GetNodeName(this);
	DebugData.AddDebugItem(DebugLine);
	ComponentPose.GatherDebugData(DebugData);
}

void FMeocapPoseProvider::EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{
	USkeletalMeshComponent* skelComp = Output.AnimInstanceProxy->GetSkelMeshComponent();
	FCSPose<FCompactPose>& meshBases = Output.Pose;
	check(OutBoneTransforms.Num() == 0);

	if (!mLivelinkClient) {
		return;
	}
	if (!mHasInit) {
		tPoseTranforms.Empty();
		for (int i : BONE_RANGE_24) {
			const auto& boneContainer = meshBases.GetPose().GetBoneContainer();
			FCompactPoseBoneIndex mid = mBoneRefs[i].GetCompactPoseIndex(boneContainer);
			if (mid != -1) {
				FTransform ret = meshBases.GetComponentSpaceTransform(mid);
				tPoseTranforms.Push(ret);
			}
			else {
				tPoseTranforms.Push({});
			}
		};

		mHasInit = true;
		UE_LOG(LogMeocapLiveLink,Warning,TEXT("Checking Source with [SubjectName: %s]"),*mLiveLinkSubjectName.Name.ToString());
		auto source = FMeocapLiveLinkSource::GetInstanceBySubjectName(mLiveLinkSubjectName);
		if (source.has_value()&&source.value().IsValid()&&!mHasDefiSkel) {
			SkelBase base{};
			for (int i : BONE_RANGE_24) {
				auto t = tPoseTranforms[i].value_or(FTransform()).GetLocation();
				SkelJoint joint{};
				joint.pos[0] = t.X / 100.0;
				joint.pos[1] = t.Z / 100.0;
				joint.pos[2] = t.Y / 100.0;
				base.bones[i] = joint;
			}
			base.floor_y = -base.bones->pos[1];
			source.value().Get()->SetSkel(base);
		}
		else {
			UE_LOG(LogMeocapLiveLink, Warning, TEXT("Warning: The source is None [no set or no valid]"));
		}
	}



	TSubclassOf<ULiveLinkRole> subjectRole = mLivelinkClient->GetSubjectRole_AnyThread(mLiveLinkSubjectName);
	if (!subjectRole) {
		return;
	}
	FLiveLinkSubjectFrameData subjectFrameData;
	if (subjectRole->IsChildOf(ULiveLinkAnimationRole::StaticClass())) {
		if (!mLivelinkClient->EvaluateFrame_AnyThread(mLiveLinkSubjectName, ULiveLinkAnimationRole::StaticClass(), subjectFrameData)) {
			return;
		}
	}
	FLiveLinkSkeletonStaticData* skeletonData = subjectFrameData.StaticData.Cast<FLiveLinkSkeletonStaticData>();
	FLiveLinkAnimationFrameData* frameData = subjectFrameData.FrameData.Cast<FLiveLinkAnimationFrameData>();
	check(skeletonData);
	check(frameData);

	//UE_LOG(LogMeocapLiveLink,Warning,TEXT("FRAME DATA LENGTH: %d"),frame_data->Transforms.Num());

	TArray<FQuat> meocapLocRots;
	TArray<FQuat> meocapGlbRots;
	TArray<FVector> meocapPos;

	const int BONE_PARA[24] = { -1, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 12, 13, 14, 16, 17, 18, 19, 20, 21 };


	for (int i : BONE_RANGE_25) {
		int32 tid = -1;
		if (auto meocapBone = skeletonData->BoneNames.Find(MEO_BONES_EX[i],tid)) {
			meocapLocRots.Push(frameData->Transforms[tid].GetRotation());
			meocapPos.Push(frameData->Transforms[tid].GetLocation());
		}
		else {
			meocapLocRots.Push(FQuat());
			meocapPos.Push(FVector());
		}
	}

	for (int i : BONE_RANGE_24) {
		auto p = BONE_PARA[i];
		if (p != -1) {
			meocapGlbRots.Push(meocapGlbRots[p] * meocapLocRots[i]);
		}
		else {
			meocapGlbRots.Push(meocapLocRots[i]);
		}
	}

	for (int i : BONE_RANGE_24) {
		const auto& boneContainer = meshBases.GetPose().GetBoneContainer();
		FBoneReference bone = mBoneRefs[i];
		FCompactPoseBoneIndex bid = bone.GetCompactPoseIndex(boneContainer);
		if (bone.BoneIndex == -1) {
			continue;
		}
		FTransform refTransform = meshBases.GetComponentSpaceTransform(bid);
		FQuat glbRot = meocapGlbRots[i];
		glbRot = FQuat(glbRot.X,glbRot.Z,-glbRot.Y,glbRot.W);

		const FQuat boneQuat(glbRot * tPoseTranforms[i].value_or(FTransform()).GetRotation());
		refTransform.SetRotation(boneQuat);

		if (i == 0) {
			FVector trans = meocapPos[24];
			auto scale = refTransform.GetScale3D();
			//UE_LOG(LogMeocapLiveLink, Warning, TEXT("MeocapPos[24] is (%f,%f,%f)"),trans.X,trans.Y,trans.Z);
			FVector origin = tPoseTranforms[0].value_or(FTransform()).GetLocation();
			refTransform.SetLocation(origin + FVector(trans[0]*scale.X, trans[2]*scale.Y, -trans[1]*scale.Z));
		}


		meshBases.SetComponentSpaceTransform(bid, refTransform);
	}



}

void FMeocapPoseProvider::PreUpdate(const UAnimInstance* InAnimInstance)
{
	Super::PreUpdate(InAnimInstance);
	ILiveLinkClient* this_frame_client = nullptr;
	IModularFeatures& modular_features = IModularFeatures::Get();
	if (modular_features.IsModularFeatureAvailable(ILiveLinkClient::ModularFeatureName)) {
		this_frame_client = &IModularFeatures::Get().GetModularFeature<ILiveLinkClient>(ILiveLinkClient::ModularFeatureName);
	}
	mLivelinkClient = this_frame_client;
	{
		UClass* retarget_asset_ptr = mRetargetAsset.Get();
		if (!retarget_asset_ptr || retarget_asset_ptr->HasAnyClassFlags(CLASS_Abstract)) {
			retarget_asset_ptr = ULiveLinkRemapAsset::StaticClass();
			mRetargetAsset = retarget_asset_ptr;
		}
		if (!mCurrentRemapAsset || retarget_asset_ptr != mCurrentRemapAsset->GetClass()) {
			mCurrentRemapAsset = NewObject<ULiveLinkRemapAsset>(const_cast<UAnimInstance*>(InAnimInstance), retarget_asset_ptr);
			mCurrentRemapAsset->Initialize();
		}
	}
}

void FMeocapPoseProvider::InitBoneMap()
{
	mBoneRefs.Empty();
	mHasInit = false;
	mHasDefiSkel = false;

	for (int i : BONE_RANGE_24) {
		mBoneRefs.Push(mCurrentRemapAsset->GetRemappedBoneName(MEO_BONES[i]));
	}

}

void FMeocapPoseProvider::UpdateComponentPose_AnyThread(const FAnimationUpdateContext& Context)
{
	GetEvaluateGraphExposedInputs().Execute(Context);
	Super::UpdateComponentPose_AnyThread(Context);
}

void FMeocapPoseProvider::UpdateInternal(const FAnimationUpdateContext& Context)
{
	GetEvaluateGraphExposedInputs().Execute(Context);
	Super::UpdateInternal(Context);
}

void FMeocapPoseProvider::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	GetEvaluateGraphExposedInputs().Execute(Context);
	Super::Initialize_AnyThread(Context);
}

void FMeocapPoseProvider::InitializeBoneReferences(const FBoneContainer& RequiredBones)
{
	if (mCurrentRemapAsset != nullptr && mCurrentRemapAsset->IsValidLowLevel()) {
		InitBoneMap();
	}
	if (mBoneRefs.Num() == 24) {
		for (int i : BONE_RANGE_24) {
			mBoneRefs[i].Initialize(RequiredBones);
		}
	}
}
