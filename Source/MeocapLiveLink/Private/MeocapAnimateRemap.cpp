#include "MeocapAnimateRemap.h"
#include "MeocapLog.h"

const FName MEO_BONES[24] = {
	"m_avg_Pelvis",
	"m_avg_L_Hip",
	"m_avg_R_Hip",
	"m_avg_Spine1",
	"m_avg_L_Knee",
	"m_avg_R_Knee",
	"m_avg_Spine2",
	"m_avg_L_Ankle",
	"m_avg_R_Ankle",
	"m_avg_Spine3",
	"m_avg_L_Foot",
	"m_avg_R_Foot",
	"m_avg_Neck",
	"m_avg_L_Collar",
	"m_avg_R_Collar",
	"m_avg_Head",
	"m_avg_L_Shoulder",
	"m_avg_R_Shoulder",
	"m_avg_L_Elbow",
	"m_avg_R_Elbow",
	"m_avg_L_Wrist",
	"m_avg_R_Wrist",
	"m_avg_L_Hand",
	"m_avg_R_Hand"
};

const FName MEO_BONES_EX[25] = {
	"m_avg_Pelvis",
	"m_avg_L_Hip",
	"m_avg_R_Hip",
	"m_avg_Spine1",
	"m_avg_L_Knee",
	"m_avg_R_Knee",
	"m_avg_Spine2",
	"m_avg_L_Ankle",
	"m_avg_R_Ankle",
	"m_avg_Spine3",
	"m_avg_L_Foot",
	"m_avg_R_Foot",
	"m_avg_Neck",
	"m_avg_L_Collar",
	"m_avg_R_Collar",
	"m_avg_Head",
	"m_avg_L_Shoulder",
	"m_avg_R_Shoulder",
	"m_avg_L_Elbow",
	"m_avg_R_Elbow",
	"m_avg_L_Wrist",
	"m_avg_R_Wrist",
	"m_avg_L_Hand",
	"m_avg_R_Hand",
	"virtual_root"
};



FName UMeocapAnimateRemapData::GetRemappedBoneName_Implementation(FName CurveName) const
{
	if (auto it = RetargetMap.Find(CurveName)) {
		UE_LOG(LogMeocapLiveLink, Display, TEXT("GetRemappedBoneName_Implementation %s %s"), *CurveName.ToString(), *it->ToString());
		return *it;
	}
	UE_LOG(LogMeocapLiveLink, Warning, TEXT("GetRemappedBoneName_Implementation %s failed!"), *CurveName.ToString());
	return "";
}
