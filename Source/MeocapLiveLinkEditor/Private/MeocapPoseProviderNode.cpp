#include "MeocapPoseProviderNode.h"
#include "MeocapLiveLinkEditor.h"
#include "Kismet2\CompilerResultsLog.h"
#define LOCTEXT_NAMESPACE "FMeocapLiveLinkModule"



FText UMeocapPoseProviderNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return GetControllerDescription();
}

FText UMeocapPoseProviderNode::GetTooltipText() const
{
	return LOCTEXT("MeocapPose Tip", "This node provide pose from MeocapClient's Universal protocol");
}

FText UMeocapPoseProviderNode::GetControllerDescription() const
{
	return LOCTEXT("Meocap Pose", "Meocap Pose Provider");
}

void UMeocapPoseProviderNode::ValidateAnimNodeDuringCompilation(USkeleton* ForSkeleton, FCompilerResultsLog& MessageLog)
{
    Super::ValidateAnimNodeDuringCompilation(ForSkeleton, MessageLog);
    
    UClass* retargetAssetPtr = mProvider.mRetargetAsset.Get();
    bool isAssetRetargetted = false;
    if (IsValid(retargetAssetPtr)) {
        FString Msg = "retarget asset: " + mProvider.mRetargetAsset->GetName();
        MessageLog.Note(*Msg, this);
        mProvider.mCurrentRemapAsset = NewObject<ULiveLinkRemapAsset>(GetTransientPackage(), retargetAssetPtr);
        mProvider.mCurrentRemapAsset->Initialize();
        isAssetRetargetted = true;
    }
    else {
        FString msg = "could not get retarget asset!";
        MessageLog.Warning(*msg, this);
    }
    bool check_bone_overrides = true;
    if (isAssetRetargetted && mProvider.mCurrentRemapAsset->IsValidLowLevel()) {
        mProvider.InitBoneMap();
    }
    else {
        FString msg = "Bone map override appears to not be set.  If is set, try recompiling";
        MessageLog.Warning(*msg, this);
        check_bone_overrides = false;
    }

    bool isBoneOverrides = true;
    if (isAssetRetargetted && mProvider.mCurrentRemapAsset->IsValidLowLevel()) {
        mProvider.InitBoneMap();
    }
    else {
        FString msg = "Bone map override appears to not be set.  If is set, try recompiling";
        MessageLog.Warning(*msg, this);
        isBoneOverrides = false;
    }

    if (isBoneOverrides && ForSkeleton && !ForSkeleton->HasAnyFlags(RF_NeedPostLoad)) {
        const int BONE_RANGE_24_E[24] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23 };
        const FName MEO_BONES_E[24] = {
    "m_avg_Pelvis",
    "m_avg_L_Hip",
    "m_avg_R_Hip",
    "m_avg_Spine1",
    "m_avg_L_Knee",
    "m_avg_R_Knee",
    "m_avg_Spine2",
    "m_avg_L_Ankle",
    "m_avg_R_Ankle",
    "m_avg_Spine3",
    "m_avg_L_Foot",
    "m_avg_R_Foot",
    "m_avg_Neck",
    "m_avg_L_Collar",
    "m_avg_R_Collar",
    "m_avg_Head",
    "m_avg_L_Shoulder",
    "m_avg_R_Shoulder",
    "m_avg_L_Elbow",
    "m_avg_R_Elbow",
    "m_avg_L_Wrist",
    "m_avg_R_Wrist",
    "m_avg_L_Hand",
    "m_avg_R_Hand"
        };
        for (int i : BONE_RANGE_24_E) {
            check_for_warnings(MEO_BONES_E[i],mProvider.mBoneRefs[i],ForSkeleton,MessageLog);
        }
    }

    MessageLog.Note(*LOCTEXT("UsageNote",
        "@@ - For this animation node to work properly the character needs to be in T-pose when this node is evaluating "
        "the pose and all bones in Bone Map need to be specified. This node will change the body position of the "
        "character to match that of the Meocap, assuming the character is in TPose, which means it will set an "
        "absolute position of the character. If you want to change the position of the character is better to do it "
        "after this node. The alpha value of this node is ignored at the moment.")
        .ToString(),
        this);
        
    
}

void UMeocapPoseProviderNode::CopyNodeDataToPreviewNode(FAnimNode_Base* InPreviewNode)
{
	FMeocapPoseProvider* modify_bone = static_cast<FMeocapPoseProvider*>(InPreviewNode);
	mProvider.mRetargetAsset = modify_bone->mRetargetAsset;
}

void UMeocapPoseProviderNode::CopyPinDefaultsToNodeData(UEdGraphPin* InPin)
{

}

void UMeocapPoseProviderNode::PreloadRequiredAssets()
{
	Super::PreloadRequiredAssets();
	PreloadObject(mProvider.mRetargetAsset);
}

void UMeocapPoseProviderNode::check_for_warnings(FName name, FBoneReference bone, USkeleton* for_skeleton, FCompilerResultsLog& message_log)
{
    if (for_skeleton->GetReferenceSkeleton().FindBoneIndex(bone.BoneName) == INDEX_NONE) {
        if (bone.BoneName == NAME_None) {
            FFormatNamedArguments args;
            args.Add(TEXT("BoneName"), FText::FromName(name));
            FText msg = FText::Format(LOCTEXT("NoBoneFoundToModify", "@@ - Bone {BoneName} override in the bone override map is not set"), args);
            message_log.Warning(*msg.ToString(), this);
        }
        else {
            FFormatNamedArguments args;
            args.Add(TEXT("BoneName"), FText::FromName(name));
            args.Add(TEXT("OverrideName"), FText::FromName(bone.BoneName));
            FText msg = FText::Format(
                LOCTEXT("NoBoneFoundToModify",
                    "@@ - Bone override of \"{OverrideName}\" for \"{BoneName}\" in the bone override map wasn't found in the skeleton"),
                args);
            message_log.Warning(*msg.ToString(), this);
        }
    }
}

