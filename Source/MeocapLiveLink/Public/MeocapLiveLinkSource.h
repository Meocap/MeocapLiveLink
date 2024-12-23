#pragma once

#include "CoreMinimal.h"
#include "ILiveLinkClient.h"
#include "ILiveLinkSource.h"
#include "Runtime/Sockets/Public/Sockets.h"
#include "Roles/LiveLinkAnimationTypes.h"
#include "Runtime/Core/Public/HAL/Runnable.h"
#include "Runtime/Core/Public/HAL/RunnableThread.h"
#include <mutex>
#include <optional>

#include "MeocapLiveLinkSourceSetting.h"
#include "MeocapLiveLinkFrame.h"
#include "MeocapSkeletonData.h"
#include "SMeocapLiveLinkSourceFactory.h"


class MEOCAPLIVELINK_API FMeocapLiveLinkSource: public ILiveLinkSource,public FRunnable {
public:
	FMeocapLiveLinkSource(uint16 port, FName subjectName);

	virtual ~FMeocapLiveLinkSource();

	// ILiveLinkSource Interface
	virtual void ReceiveClient(ILiveLinkClient* InClient,FGuid InSourceGuid);

	virtual bool IsSourceStillValid() const override;
	virtual bool RequestSourceShutdown();
	
	virtual FText GetSourceType() const;
	virtual FText GetSourceMachineName() const;
	virtual FText GetSourceStatus() const;

	int SetSkel(SkelBase base);

	//static void SetInstance(TSharedPtr<FMeocapLiveLinkSource> NewInstance) { instance = NewInstance; };

	// FRunnable Interface
	virtual bool Init() override { return true; }
	virtual uint32 Run() override;
	virtual void Stop() override
	{
		mRunning = false;
	}
	virtual void Exit() override { }

	static FQualifiedFrameTime GetQualifiedFrameTime();

	static TMap<FName, TSharedPtr<FMeocapLiveLinkSource>> IntanceNamedMap;

	static std::optional<TSharedPtr<FMeocapLiveLinkSource>> GetInstanceBySubjectName(FName name) {
		if (auto it = IntanceNamedMap.Find(name)) {
			return *it;
		}
		return {};
	};

	static void AddInstanceWithSubjectName(FName name, TSharedPtr<FMeocapLiveLinkSource> source) {
		IntanceNamedMap.Add(name, source);
	};

	static void RemoveInstanceWithSubjectName(FName name) {
		IntanceNamedMap.Remove(name);
	};
	



private:
	void HandleClearSubject(const FName subjectName);
	bool InitSocket();
	void StartThread();
	void UpdateFrameData(FLiveLinkAnimationFrameData& outFrame);
	bool ShutdownThreadAndSocket();
	void DefineNewMeocapSubject();


	//Our identifier in LiveLink
	FGuid mSourceGuid;
	ILiveLinkClient* mClient;




	std::mutex mtx;

	int mServerAddressPort;
	int mCommandServerAddressPort;
	FString mThreadName;
	MeocapFrameHandler mDataHandler;

	const CSocket *mSocket { NULL };
	const CSocket *mCommandSocket{ 0 };

	FName mSubjectName; // This instance's LiveLink subject

	std::atomic_bool mRunning;
	std::atomic_bool mIsThreadFinished;


	FRunnableThread* mThread{ nullptr };





};