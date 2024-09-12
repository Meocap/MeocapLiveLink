#pragma once

#include "CoreMinimal.h"
#include "LiveLinkSourceSettings.h"
#include "MeocapLiveLinkSourceSetting.generated.h"

UCLASS()
class MEOCAPLIVELINK_API UMeocapLiveLinkSourceSettings : public ULiveLinkSourceSettings {
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category="Source")
	bool bSyncSkelToClient = false;
};