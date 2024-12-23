#include "MeocapLiveLinkSourceFactory.h"

#include "MeocapLiveLinkSource.h"

#define LOCTEXT_NAMESPACE "MeocapLiveLinkModule"

FText UMeocapLiveLinkSourceFactory::GetSourceDisplayName() const
{
    return LOCTEXT("SourceDisplayName", "Meocap LiveLink");
}

FText UMeocapLiveLinkSourceFactory::GetSourceTooltip() const
{
    return LOCTEXT("SourceTooltip", "Creates a connection to Meocap Sensors");
}

TSharedPtr<SWidget> UMeocapLiveLinkSourceFactory::BuildCreationPanel(FOnLiveLinkSourceCreated InOnLiveLinkSourceCreated) const
{
    return SNew(SMeocapLiveLinkSourceFactory)
        .OnCreateClicked(SMeocapLiveLinkSourceFactory::FOnCreateClicked::CreateUObject(this, &UMeocapLiveLinkSourceFactory::OnCreateClicked, InOnLiveLinkSourceCreated));
}

TSharedPtr<ILiveLinkSource> UMeocapLiveLinkSourceFactory::CreateSource(const FString& ConnectionString) const
{
    uint64 port = DEFAULT_MEOCAP_PORT;
    FName subjectName = FName(*DEFAULT_SKELETON_NAME);

    TArray<FString, FDefaultAllocator> Parts;
    int result = ConnectionString.ParseIntoArrayLines(Parts, true);
    if (Parts.Num() >= 2)
    {
        port = FCString::Atoi(*Parts[0]);
        subjectName = FName(*Parts[1]);
    }

    auto source = MakeShared<FMeocapLiveLinkSource>(port, subjectName);
    FMeocapLiveLinkSource::AddInstanceWithSubjectName(subjectName,source);
    return source;
}

void UMeocapLiveLinkSourceFactory::OnCreateClicked(uint16 inputPort, FName subjectName, FOnLiveLinkSourceCreated onLiveLinkSourceCreated) const
{

    FString connectionString = FString::Format(TEXT("tcp://{0}:\n{1}"), { inputPort, subjectName.ToString()});
    auto source = MakeShared<FMeocapLiveLinkSource>(inputPort, subjectName);
    FMeocapLiveLinkSource::AddInstanceWithSubjectName(subjectName, source);
    onLiveLinkSourceCreated.ExecuteIfBound(source, connectionString);
}


#undef LOCTEXT_NAMESPACE
