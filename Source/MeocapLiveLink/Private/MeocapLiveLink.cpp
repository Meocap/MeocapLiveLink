// Copyright Epic Games, Inc. All Rights Reserved.

#include "MeocapLiveLink.h"
#include "MeocapLog.h"
#include "Interfaces/IPluginManager.h"
#include "Internationalization/Internationalization.h"
#include "Internationalization/Culture.h"
#include "Misc/Paths.h"
#include "meocap_sdk.h"

DEFINE_LOG_CATEGORY(LogMeocapLiveLink);

#define LOCTEXT_NAMESPACE "FMeocapLiveLinkModule"

void FMeocapLiveLinkModule::StartupModule()
{
	UE_LOG(LogMeocapLiveLink, Warning, TEXT("Startup Module"));
	FString BaseDir = IPluginManager::Get().FindPlugin("MeocapLiveLink")->GetBaseDir();
	FString LibraryPath;
#if PLATFORM_WINDOWS
	LibraryPath = FPaths::Combine(*BaseDir, TEXT("Binaries/ThirdParty/MeocapSdk/Win64/meocap_sdk.dll"));
#elif PLATFORM_MAC
	LibraryPath = FPaths::Combine(*BaseDir, TEXT("Source/ThirdParty/testPulginLibrary/Mac/Release/libExampleLibrary.dylib"));
#elif PLATFORM_LINUX
	LibraryPath = FPaths::Combine(*BaseDir, TEXT("Binaries/ThirdParty/testPulginLibrary/Linux/x86_64-unknown-linux-gnu/libExampleLibrary.so"));
#endif // PLATFORM_WINDOWS
	mMeocapSDKHandle = !LibraryPath.IsEmpty() ? FPlatformProcess::GetDllHandle(*LibraryPath) : nullptr;

	uintptr_t DllHandleAsInt = reinterpret_cast<uintptr_t>(mMeocapSDKHandle);
	UE_LOG(LogMeocapLiveLink, Warning, TEXT("Loaded MeocapSDK with path: %s ,Handle: 0x%016llX"), *LibraryPath,DllHandleAsInt);

	int32_t SelfTest = meocap_hello(100);
	UE_LOG(LogMeocapLiveLink, Warning, TEXT("Run MeocapSDK self-test: %d"), SelfTest-100);

}

void FMeocapLiveLinkModule::ShutdownModule()
{
	FPlatformProcess::FreeDllHandle(mMeocapSDKHandle);
}



#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FMeocapLiveLinkModule, MeocapLiveLink)