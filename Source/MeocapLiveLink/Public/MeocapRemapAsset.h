#pragma once

#include "CoreMinimal.h"
#include "LiveLinkRemapAsset.h"
#include "MeocapRemapAsset.generated.h"


UCLASS()
class MEOCAPLIVELINK_API UMeocapRemapAsset : public ULiveLinkRemapAsset
{
	GENERATED_BODY()

	// ULiveLinkRemapAsset interface
	void BuildPoseFromAnimationData(float DeltaTime,
		const FLiveLinkSkeletonStaticData* InSkeletonData,
		const FLiveLinkAnimationFrameData* InFrameData,
		FCompactPose& OutPose) override;


protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Custom)
	FName TargetSkeletonHipBoneName = "root";

	// cached bone mapping from GetRemappedBoneName
	TMap<FName, FName> mBoneNameMap;

	virtual FVector ConvertRootPosition(FVector position) const;
	virtual FQuat ConvertBoneRotation(FQuat rotation) const;

	bool mHasInitialized = false;

	// World Space rotations for all bones
	TArray<FQuat> mWorldSpaceRotations;

};
