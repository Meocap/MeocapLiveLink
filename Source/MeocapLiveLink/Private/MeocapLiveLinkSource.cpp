#include "MeocapLiveLinkSource.h"
#include "Roles/LiveLinkAnimationRole.h"
#include "Roles/LiveLinkAnimationTypes.h"
#include "Roles/LiveLinkCameraTypes.h"
#include "Roles/LiveLinkCameraRole.h"
#include "Roles/LiveLinkLightRole.h"
#include "Roles/LiveLinkLightTypes.h"
#include "Features/IModularFeatures.h"
#include "Runtime/Core/Public/Containers/UnrealString.h"
#include "Runtime/JsonUtilities/Public/JsonObjectConverter.h"
#include "Serialization/BufferArchive.h"
#include "Dom/JsonObject.h"
#include "meocap_sdk.h"
#include "MeocapLog.h"

#define LOCTEXT_NAMESPACE "MeocapLiveLinkModule"

const FString DEFAULT_THREAD_NAME = "MeocapTCPThread";
TMap<FName, TSharedPtr<FMeocapLiveLinkSource>> FMeocapLiveLinkSource::IntanceNamedMap;


FMeocapLiveLinkSource::FMeocapLiveLinkSource(uint16 port,FName subjectName):
	mRunning(false),
	mThread(nullptr),
	mSocket(0),
	mCommandSocket(0),
	mClient(nullptr),
	mSubjectName(subjectName),
	mServerAddressPort(port),
	mIsThreadFinished(true)
{
	UE_LOG(LogMeocapLiveLink, Warning, TEXT("InitMeocapLiveLinkSource Port: %d"), port );
	SMeocapLiveLinkSourceFactory::AddSubject(port, mSubjectName);
	UE_LOG(LogMeocapLiveLink, Warning, TEXT("Creating Meocap LiveLink Source!!!"));
}

FMeocapLiveLinkSource::~FMeocapLiveLinkSource() {
	bool bIsReadyToShutdown = false;
	while (!bIsReadyToShutdown) {
		bIsReadyToShutdown = ShutdownThreadAndSocket();
	}
}

void FMeocapLiveLinkSource::ReceiveClient(ILiveLinkClient* InClient, FGuid InSourceGuid)
{
	mClient = InClient;
	mSourceGuid = InSourceGuid;
	
	InitSocket();
}


bool FMeocapLiveLinkSource::IsSourceStillValid() const
{
	return mRunning;
}

bool FMeocapLiveLinkSource::RequestSourceShutdown()
{
	return ShutdownThreadAndSocket();
}

FText FMeocapLiveLinkSource::GetSourceType() const
{
	return FText(LOCTEXT("sourceType", "Meocap LiveLink"));
}

FText FMeocapLiveLinkSource::GetSourceMachineName() const
{
	return FText(LOCTEXT("sourceMachineName", "Meocap LiveLink"));
}

FText FMeocapLiveLinkSource::GetSourceStatus() const
{
	FText portString = FText::FromString(FString::FromInt(mServerAddressPort));
	FText sourceStatus = FText::Format(LOCTEXT("SourceStatusReceiving", "Listening to port {0}"), portString);
	return sourceStatus;
}

int FMeocapLiveLinkSource::SetSkel(SkelBase base)
{
	mDataHandler.mSkel = base;
	mDataHandler.mNeedUpdateSkel = true;
	return 0;
}



FQualifiedFrameTime FMeocapLiveLinkSource::GetQualifiedFrameTime()
{
	std::tm localTime;
	time_t ctime = time(nullptr);
#ifdef _WIN64
	localtime_s(&localTime, &ctime);
#elif __APPLE__
	localtime_r(&time, &localTime);
#endif
	FTimecode meocapTimecode;
	meocapTimecode.Hours = localTime.tm_hour;
	meocapTimecode.Minutes = localTime.tm_min;
	meocapTimecode.Seconds = localTime.tm_sec;
	FFrameRate meopcapFrameRate;
	meopcapFrameRate.Numerator = 60.0;
	meopcapFrameRate.Denominator = 1;
	FQualifiedFrameTime meocapFrameTime = FQualifiedFrameTime(meocapTimecode, meopcapFrameRate);
	return meocapFrameTime;
}

void FMeocapLiveLinkSource::HandleClearSubject(const FName subjectName)
{
	if (mClient == nullptr)
	{
		UE_LOG(LogMeocapLiveLink, Warning, TEXT("Client was null!!!!!!"));
		return;
	}
	SMeocapLiveLinkSourceFactory::RemoveSubject(mServerAddressPort);
	mClient->RemoveSubject_AnyThread(FLiveLinkSubjectKey(mSourceGuid, subjectName));
}


bool FMeocapLiveLinkSource::InitSocket()
{
	if (mSocket == NULL) {
		mRunning = false;
		UE_LOG(LogMeocapLiveLink, Warning, TEXT("Connecting to Data Server"));
		Addr addr{};
		addr.a = 127; addr.b = 0; addr.c = 0; addr.d = 1; addr.port = mServerAddressPort;
		auto ret = meocap_bind_listening_addr(&addr);
		mSocket = ret.socket;
		UE_LOG(LogMeocapLiveLink, Warning, TEXT("Connected Data Server With [Error Type: %d],[Info: %u],[Socket: %u]"),ret.err.ty,ret.err.info,ret.socket);
		
		if (mSocket == NULL) {
			return false;
		}
	}
	StartThread();
	return true;
}

void FMeocapLiveLinkSource::StartThread()
{

	FString udpThreadName = DEFAULT_THREAD_NAME;
	mThreadName = udpThreadName;
	uint32 threadStackSize = 1024 * 1024; 
	UE_LOG(LogMeocapLiveLink, Warning, TEXT("Starting Thread"));
	mRunning = true;
	mThread = FRunnableThread::Create(this, *mThreadName, threadStackSize, TPri_AboveNormal, FPlatformAffinity::GetPoolThreadMask());
}

void FMeocapLiveLinkSource::UpdateFrameData(FLiveLinkAnimationFrameData& outFrame)
{
	outFrame.Transforms.SetNumUninitialized(mDataHandler.SKELETON_NUM_BONES);

	// Then Set values for rest of the bones
	for (size_t i = 0; i < mDataHandler.SKELETON_NUM_BONES; i++)
	{
		const MeocapBoneData bone = mDataHandler.GetBoneInfoByIndex(i);
		auto boneTranslation = FVector(bone.default_pos[0], bone.default_pos[1], bone.default_pos[2]);
		if (i == 24||i==0) {
			boneTranslation = FVector(bone.pos[0], bone.pos[1], bone.pos[2]);
		}
		auto boneRotation = FQuat(bone.local_rot[0], bone.local_rot[1], bone.local_rot[2], bone.local_rot[3]);
		outFrame.Transforms[i] = FTransform(boneRotation, boneTranslation);
	}
	// Set Timecode information on this frame
	MeocapFrameMetaData metaData = mDataHandler.GetFrameMetaData();

	outFrame.MetaData.SceneTime = GetQualifiedFrameTime();
	outFrame.FrameId = metaData.frameId;
}

double GetUnixTimestampDecimal(const FDateTime& time)
{
	int64 ticks = time.GetTicks() - FDateTime(1970, 1, 1).GetTicks();
	double seconds = static_cast<double>(ticks) / ETimespan::TicksPerSecond;
	return seconds;
}


uint32 FMeocapLiveLinkSource::Run()
{
	UE_LOG(LogMeocapLiveLink, Warning, TEXT("Running..."));
	mIsThreadFinished = false;
	bool bIsDefineSkel = false;
	while (mRunning) {
		FDateTime time = FDateTime::UtcNow();
		double secs = GetUnixTimestampDecimal(time);
		if (mSocket == NULL)
			continue;
		MeoFrame frame{};
		//UE_LOG(LogMeocapLiveLink, Warning, TEXT("Try to recv one frame..."));
		auto ret = meocap_recv_frame(mSocket, &frame);
		if (!mRunning)
			break;
		if (ret.ty != 0) {
			//UE_LOG(LogMeocapLiveLink, Warning, TEXT("Cannot recv frame... [ErrorType: %d],[Info: %u]"),ret.ty,ret.info);
			continue;
		}
		if (!bIsDefineSkel) {
			DefineNewMeocapSubject();
			bIsDefineSkel = true;
		}
		if (mDataHandler.mNeedUpdateSkel) {
			auto ret_skel = meocap_command_set_skel(mSocket, &frame.src, &mDataHandler.mSkel);
			UE_LOG(LogMeocapLiveLink, Warning, TEXT("Set Skel to MeocapClient. [ErrorType: %d],[Info: %u]"), ret_skel.ty, ret_skel.info);
			mDataHandler.mNeedUpdateSkel = false;
		}
		mDataHandler.ProcessFrameData(&frame);
		FLiveLinkFrameDataStruct frameDataStruct = FLiveLinkFrameDataStruct(FLiveLinkAnimationFrameData::StaticStruct());
		FLiveLinkAnimationFrameData& frameData = *frameDataStruct.Cast<FLiveLinkAnimationFrameData>();
		UpdateFrameData(frameData);
		FLiveLinkSubjectKey subjectKey = { mSourceGuid, mSubjectName };
		mClient->PushSubjectFrameData_AnyThread(subjectKey, MoveTemp(frameDataStruct));
	}
	mIsThreadFinished = true;
	UE_LOG(LogMeocapLiveLink, Warning, TEXT("End..."));
	return 0;
}



bool FMeocapLiveLinkSource::ShutdownThreadAndSocket()
{
	SMeocapLiveLinkSourceFactory::RemoveSubject(this->mServerAddressPort);
	UE_LOG(LogMeocapLiveLink, Warning, TEXT("Shutdown all...."));
	if (mRunning)
	{
		Stop();
	}

	if (!mIsThreadFinished)
	{
		return false;
	}

	if (mThread != nullptr)
	{
		delete mThread;
		mThread = nullptr;
	}

	if (mSocket != NULL)
	{
		meocap_clean_up(mSocket);
		mSocket = NULL;
	}
	return true;
}

void FMeocapLiveLinkSource::DefineNewMeocapSubject()
{
	FLiveLinkStaticDataStruct staticDataStruct = FLiveLinkStaticDataStruct(FLiveLinkSkeletonStaticData::StaticStruct());
	FLiveLinkSkeletonStaticData& skeletonStaticData = *staticDataStruct.Cast<FLiveLinkSkeletonStaticData>();
	skeletonStaticData.BoneNames.SetNumUninitialized(mDataHandler.SKELETON_NUM_BONES);
	skeletonStaticData.BoneParents.SetNumUninitialized(mDataHandler.SKELETON_NUM_BONES);

	for (int boneIndex = 0; boneIndex < mDataHandler.SKELETON_NUM_BONES; boneIndex++)
	{
		const MeocapBoneData boneData = mDataHandler.GetBoneInfoByIndex(boneIndex);
		UE_LOG(LogMeocapLiveLink, Warning, TEXT("Define New Meocap Subject: %hs"), boneData.jointName);
		skeletonStaticData.BoneNames[boneIndex] = FName(boneData.jointName);
		skeletonStaticData.BoneParents[boneIndex] = boneData.parentIndex;
	}

	mClient->PushSubjectStaticData_AnyThread({ mSourceGuid, mSubjectName }, ULiveLinkAnimationRole::StaticClass(), MoveTemp(staticDataStruct));
}

