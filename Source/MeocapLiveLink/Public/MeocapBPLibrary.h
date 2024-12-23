#pragma once

#include "ILiveLinkSource.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MeocapBPLibrary.generated.h"


UCLASS()
class MEOCAPLIVELINK_API UMeocapBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "MeocapLiveLink", meta = (Keywords = "livelink"))
	static void CreateMeocapSource(FLiveLinkSourceHandle& handle, const int inputPort = 14999, const FString& subjectName = "MeoLink");
};
