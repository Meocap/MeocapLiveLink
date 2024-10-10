#pragma once
#include <vector> 
#include "meocap_sdk.h"

struct MeocapBoneData{
	const char* jointName;
	int parentIndex;
	double pos[3];
	double local_rot[4];
	double default_pos[3];
	FQuat default_rot;
};

struct MeocapFrameMetaData {
	int frameId;
};

struct MeocapFrameHandler {
public:
	MeocapFrameHandler();
	void ProcessFrameData(meoframe* frame);
	const MeocapBoneData& GetBoneInfoByIndex(int index);
	const MeocapFrameMetaData GetFrameMetaData();
	const int SKELETON_NUM_BONES = 25;
	static const int MEO_BONEMAP[25];
private:
	// Unvariable joint number at this point.

	// For scaling translation values
	const double BONE_SCALE = 100.0;
	std::vector<MeocapBoneData>	mBoneDataArray;
	MeocapFrameMetaData mFrameMetaData;
	void InitializeSkeletonChannels();

};