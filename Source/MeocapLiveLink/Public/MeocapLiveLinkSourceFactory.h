#pragma once
#include "CoreMinimal.h"
#include "LiveLinkSourceFactory.h"
#include "SMeocapLiveLinkSourceFactory.h"
#include "MeocapLiveLinkSourceFactory.generated.h"


UCLASS()
class UMeocapLiveLinkSourceFactory : public ULiveLinkSourceFactory
{
public:
	GENERATED_BODY()

	virtual FText GetSourceDisplayName() const;
	virtual FText GetSourceTooltip() const;

	virtual EMenuType GetMenuType() const override { return EMenuType::SubPanel; }
	virtual TSharedPtr<SWidget> BuildCreationPanel(FOnLiveLinkSourceCreated OnLiveLinkSourceCreated) const override;

	virtual TSharedPtr<ILiveLinkSource> CreateSource(const FString& ConnectionString) const override;

private:

	// Creates the Meocap LiveLinkSource
	void OnCreateClicked(uint16 inputPort, FName subjectName, FOnLiveLinkSourceCreated onLiveLinkSourceCreated) const;
};
