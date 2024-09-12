#pragma once
#include "Editor/AnimGraph/Public/AnimGraphNode_SkeletalControlBase.h"
#include "MeocapPoseProvider.h"
#include "MeocapPoseProviderNode.generated.h"

UCLASS(meta = (Keywords = "Meocap Pose Provider"))
class MEOCAPLIVELINKEDITOR_API UMeocapPoseProviderNode final : public UAnimGraphNode_SkeletalControlBase {
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, Category = Settings)
	FMeocapPoseProvider mProvider;

private:
	FText GetNodeTitle(ENodeTitleType::Type TitleType) const final;
	FText GetTooltipText() const final;
	FText GetControllerDescription() const final;
	void ValidateAnimNodeDuringCompilation(USkeleton* ForSkeleton, FCompilerResultsLog& MessageLog) final;
	void CopyNodeDataToPreviewNode(FAnimNode_Base* InPreviewNode) final;
	void CopyPinDefaultsToNodeData(UEdGraphPin* InPin) final;
	void PreloadRequiredAssets() final;
	const FAnimNode_SkeletalControlBase* GetNode() const final { return &mProvider; }
	void check_for_warnings(FName name, FBoneReference bone, USkeleton* for_skeleton, FCompilerResultsLog& message_log);
};