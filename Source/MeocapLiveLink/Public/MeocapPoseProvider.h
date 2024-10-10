#pragma once
#include <optional>
#include <tuple>
#include "Animation/AnimInstanceProxy.h"
#include "Animation/AnimNodeBase.h"
#include "ILiveLinkClient.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_SkeletalControlBase.h"
#include "Runtime/LiveLinkAnimationCore/Public/LiveLinkRemapAsset.h"
#include "Roles/LiveLinkAnimationRole.h"
#include "MeocapAnimateRemap.h"
#include "MeocapPoseProvider.generated.h"

extern const int BONE_RANGE_24[24];
extern const int BONE_RANGE_25[25];
USTRUCT()
struct MEOCAPLIVELINK_API FMeocapPoseProvider: public FAnimNode_SkeletalControlBase {

	GENERATED_USTRUCT_BODY()

	FMeocapPoseProvider();

	UPROPERTY(transient)
	ULiveLinkRemapAsset* mCurrentRemapAsset = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Category = Retarget, meta = (PinShownByDefault))
	TSubclassOf<ULiveLinkRemapAsset> mRetargetAsset;

	UPROPERTY(EditAnywhere, Category = "LiveLink")
	FLiveLinkSubjectName mLiveLinkSubjectName = FName("MeoLink");

	UPROPERTY()
	TArray<FBoneReference> mBoneRefs;

	virtual void OnInitializeAnimInstance(const FAnimInstanceProxy* InProxy, const UAnimInstance* InAnimInstance) override;

	virtual void GatherDebugData(FNodeDebugData& DebugData) override;

	virtual void EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms) override;

	virtual bool HasPreUpdate() const override final { return true; }

	virtual void PreUpdate(const UAnimInstance* InAnimInstance) override final;

	void InitBoneMap();

	virtual bool IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones) override { return true; };

	virtual void UpdateComponentPose_AnyThread(const FAnimationUpdateContext& Context) override;

	virtual void UpdateInternal(const FAnimationUpdateContext& Context) override;

	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;

private:

	ILiveLinkClient* mLivelinkClient;

	bool mHasInit = false;

	bool mHasDefiSkel = false;

	TArray<std::optional<FTransform>> tPoseTranforms;

	virtual void InitializeBoneReferences(const FBoneContainer& RequiredBones) override;


};

