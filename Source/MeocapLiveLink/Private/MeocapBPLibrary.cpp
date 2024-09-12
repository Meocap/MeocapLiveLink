#include "MeocapBPLibrary.h"
#include "MeocapLiveLinkSource.h"
#include "ILiveLinkClient.h"
#include "LiveLinkClientReference.h"


void UMeocapBPLibrary::CreateMeocapSource(FLiveLinkSourceHandle& handle, const int inputPort,const int commandPort, const FString& subjectName)
{
	TSharedPtr<ILiveLinkSource> meocapSource = MakeShared<FMeocapLiveLinkSource>(inputPort, commandPort, FName(subjectName));

	FLiveLinkClientReference client;
	client.GetClient()->AddSource(meocapSource);

	handle.SetSourcePointer(meocapSource);
}
