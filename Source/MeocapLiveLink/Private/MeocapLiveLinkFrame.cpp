#include "MeocapLiveLinkFrame.h"

const int MeocapFrameHandler::MEO_BONEMAP[25] = {
    0,
    1, //torso_1
    2,
    3,
    4, 
    5,
    6, //6
    7, //7
    8, 
    9,
    10, //10
    11,
    12,
    13, //13
    14,
    15,
    16,
    17, //17
    18,
    19,
    20,
    21,
    22, //22
    23,
    -1
};

MeocapFrameHandler::MeocapFrameHandler()
{
    InitializeSkeletonChannels();
}

void MeocapFrameHandler::ProcessFrameData(meoframe* frame)
{
    int index = 0;
    for (auto i : MEO_BONEMAP) {
        mBoneDataArray[index].local_rot[0] = -frame->joints[i].loc_rot[0];
        mBoneDataArray[index].local_rot[1] = frame->joints[i].loc_rot[1];
        mBoneDataArray[index].local_rot[2] = -frame->joints[i].loc_rot[2];
        mBoneDataArray[index].local_rot[3] = frame->joints[i].loc_rot[3];
        if (i == 0) {
            mBoneDataArray[index].pos[0] = frame->translation[0] * BONE_SCALE 
                + mBoneDataArray[index].default_pos[0];
            mBoneDataArray[index].pos[1] = -frame->translation[1] * BONE_SCALE
                + mBoneDataArray[index].default_pos[1];
            mBoneDataArray[index].pos[2] = frame->translation[2] * BONE_SCALE
                + mBoneDataArray[index].default_pos[2];
        }
        else if (i!=-1) {
            mBoneDataArray[index].pos[0] = frame->joints[i].pos[0] * BONE_SCALE;
            mBoneDataArray[index].pos[1] = -frame->joints[i].pos[1] * BONE_SCALE;
            mBoneDataArray[index].pos[2] = frame->joints[i].pos[2] * BONE_SCALE;
        }
        else {
            mBoneDataArray[index].pos[0] = frame->translation[0] * BONE_SCALE;
            mBoneDataArray[index].pos[1] = -frame->translation[1] * BONE_SCALE;
            mBoneDataArray[index].pos[2] = frame->translation[2] * BONE_SCALE;
        }

        index++;
    }
    mFrameMetaData.frameId = frame->frame_id;
}

const MeocapBoneData& MeocapFrameHandler::GetBoneInfoByIndex(int index)
{
    return mBoneDataArray[index];
}

const MeocapFrameMetaData MeocapFrameHandler::GetFrameMetaData()
{
    return mFrameMetaData;
}

void MeocapFrameHandler::InitializeSkeletonChannels()
{
    //mFrameMetaData.parentJointIds.resize(SKELETON_NUM_BONES);
    //mFrameMetaData.jointIds.resize(SKELETON_NUM_BONES);
    mBoneDataArray.resize(SKELETON_NUM_BONES);

    
    for (int i = 0; i < SKELETON_NUM_BONES; i++)
    {
        mBoneDataArray[i].local_rot[0] = 0;
        mBoneDataArray[i].local_rot[1] = 0;
        mBoneDataArray[i].local_rot[2] = 0;
        mBoneDataArray[i].local_rot[3] = 1;

        mBoneDataArray[i].default_pos[0] = 0;
        mBoneDataArray[i].default_pos[1] = 0;
        mBoneDataArray[i].default_pos[2] = 0;
    }
    

    mBoneDataArray[0].jointName = "m_avg_Pelvis";
    mBoneDataArray[0].parentIndex = -1;
    mBoneDataArray[0].default_pos[0] = -0.217368;
    mBoneDataArray[0].default_pos[1] = -97.272385;
    mBoneDataArray[0].default_pos[2] = 2.858379;
    mBoneDataArray[0].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));

    mBoneDataArray[1].jointName = "m_avg_L_Hip";
    mBoneDataArray[1].parentIndex = 0;
    mBoneDataArray[1].default_pos[0] = 5.858135;
    mBoneDataArray[1].default_pos[1] = 8.228004;
    mBoneDataArray[1].default_pos[2] = -1.766408;
    mBoneDataArray[1].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));

    mBoneDataArray[2].jointName = "m_avg_R_Hip";
    mBoneDataArray[2].parentIndex = 0;
    mBoneDataArray[2].default_pos[0] = -6.030973;
    mBoneDataArray[2].default_pos[1] = 9.051329;
    mBoneDataArray[2].default_pos[2] = -1.354253;
    mBoneDataArray[2].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));
                   
    mBoneDataArray[3].jointName = "m_avg_Spine1";
    mBoneDataArray[3].parentIndex = 0;
    mBoneDataArray[3].default_pos[0] = 0.443945;
    mBoneDataArray[3].default_pos[1] = -12.440355;
    mBoneDataArray[3].default_pos[2] = -3.838522;
    mBoneDataArray[3].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));
                   
    mBoneDataArray[4].jointName = "m_avg_L_Knee";
    mBoneDataArray[4].parentIndex = 1;
    mBoneDataArray[4].default_pos[0] = 4.345143;
    mBoneDataArray[4].default_pos[1] = 38.646946;
    mBoneDataArray[4].default_pos[2] = 0.8037;
    mBoneDataArray[4].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));
                   
    mBoneDataArray[5].jointName = "m_avg_R_Knee";
    mBoneDataArray[5].parentIndex = 2;
    mBoneDataArray[5].default_pos[0] = -4.325663;
    mBoneDataArray[5].default_pos[1] = 38.368786;
    mBoneDataArray[5].default_pos[2] = -0.484304;
    mBoneDataArray[5].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));

    mBoneDataArray[6].jointName = "m_avg_Spine2";
    mBoneDataArray[6].parentIndex = 3;
    mBoneDataArray[6].default_pos[0] = 0.448844;
    mBoneDataArray[6].default_pos[1] = -13.79564;
    mBoneDataArray[6].default_pos[2] = 2.682033;
    mBoneDataArray[6].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));

    mBoneDataArray[7].jointName = "m_avg_L_Ankle";
    mBoneDataArray[7].parentIndex = 4;
    mBoneDataArray[7].default_pos[0] = -1.479033;
    mBoneDataArray[7].default_pos[1] = 42.687439;
    mBoneDataArray[7].default_pos[2] = -3.7428;
    mBoneDataArray[7].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));

    mBoneDataArray[8].jointName = "m_avg_R_Ankle";
    mBoneDataArray[8].parentIndex = 5;
    mBoneDataArray[8].default_pos[0] = 1.9055;
    mBoneDataArray[8].default_pos[1] = 42.0045;
    mBoneDataArray[8].default_pos[2] = -3.4561;
    mBoneDataArray[8].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));

    mBoneDataArray[9].jointName = "m_avg_Spine3";
    mBoneDataArray[9].parentIndex = 6;
    mBoneDataArray[9].default_pos[0] = -0.2264;
    mBoneDataArray[9].default_pos[1] = -5.60324;
    mBoneDataArray[9].default_pos[2] = 0.285504;
    mBoneDataArray[9].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));

    mBoneDataArray[10].jointName = "m_avg_L_Foot";
    mBoneDataArray[10].parentIndex = 7;
    mBoneDataArray[10].default_pos[0] = 4.105437;
    mBoneDataArray[10].default_pos[1] = 6.02895;
    mBoneDataArray[10].default_pos[2] = 12.204243;
    mBoneDataArray[10].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));

    mBoneDataArray[11].jointName = "m_avg_R_Foot";
    mBoneDataArray[11].parentIndex = 8;
    mBoneDataArray[11].default_pos[0] = -3.4839;
    mBoneDataArray[11].default_pos[1] = 6.2105;
    mBoneDataArray[11].default_pos[2] = 13.0323;
    mBoneDataArray[11].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));

    mBoneDataArray[12].jointName = "m_avg_Neck";
    mBoneDataArray[12].parentIndex = 9;
    mBoneDataArray[12].default_pos[0] = -1.339018;
    mBoneDataArray[12].default_pos[1] = -21.163551;
    mBoneDataArray[12].default_pos[2] = -3.346758;
    mBoneDataArray[12].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));


    mBoneDataArray[13].jointName = "m_avg_L_Collar";
    mBoneDataArray[13].parentIndex = 9;
    mBoneDataArray[13].default_pos[0] = 7.170248;
    mBoneDataArray[13].default_pos[1] = -11.3999;
    mBoneDataArray[13].default_pos[2] = -1.8898;
    mBoneDataArray[13].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));

    mBoneDataArray[14].jointName = "m_avg_R_Collar";
    mBoneDataArray[14].parentIndex = 9;
    mBoneDataArray[14].default_pos[0] = -8.295365;
    mBoneDataArray[14].default_pos[1] = -11.247231;
    mBoneDataArray[14].default_pos[2] = -2.3707;
    mBoneDataArray[14].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));

    mBoneDataArray[15].jointName = "m_avg_Head";
    mBoneDataArray[15].parentIndex = 12;
    mBoneDataArray[15].default_pos[0] = 1.011321;
    mBoneDataArray[15].default_pos[1] = -8.893735;
    mBoneDataArray[15].default_pos[2] = 5.040986;
    mBoneDataArray[15].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));

    mBoneDataArray[16].jointName = "m_avg_L_Shoulder";
    mBoneDataArray[16].parentIndex = 13;
    mBoneDataArray[16].default_pos[0] = 12.2921;
    mBoneDataArray[16].default_pos[1] = -4.5205;
    mBoneDataArray[16].default_pos[2] = -1.9046;
    mBoneDataArray[16].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));

    mBoneDataArray[17].jointName = "m_avg_R_Shoulder";
    mBoneDataArray[17].parentIndex = 14;
    mBoneDataArray[17].default_pos[0] = -11.322831;
    mBoneDataArray[17].default_pos[1] = -4.685328;
    mBoneDataArray[17].default_pos[2] = -0.847207;
    mBoneDataArray[17].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));

    mBoneDataArray[18].jointName = "m_avg_L_Elbow";
    mBoneDataArray[18].parentIndex = 16;
    mBoneDataArray[18].default_pos[0] = 25.53319;
    mBoneDataArray[18].default_pos[1] = 1.5649;
    mBoneDataArray[18].default_pos[2] = -2.2946;
    mBoneDataArray[18].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));

    mBoneDataArray[19].jointName = "m_avg_R_Elbow";
    mBoneDataArray[19].parentIndex = 17;
    mBoneDataArray[19].default_pos[0] = -26.01275;
    mBoneDataArray[19].default_pos[1] = 1.43693;
    mBoneDataArray[19].default_pos[2] = -3.126873;
    mBoneDataArray[19].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));

    mBoneDataArray[20].jointName = "m_avg_L_Wrist";
    mBoneDataArray[20].parentIndex = 18;
    mBoneDataArray[20].default_pos[0] = 26.570925;
    mBoneDataArray[20].default_pos[1] = -1.2698;
    mBoneDataArray[20].default_pos[2] = -0.737473;
    mBoneDataArray[20].default_rot = FQuat::MakeFromEuler(FVector(0, 0, -0));

    mBoneDataArray[21].jointName = "m_avg_R_Wrist";
    mBoneDataArray[21].parentIndex = 19;
    mBoneDataArray[21].default_pos[0] = -26.9108;
    mBoneDataArray[21].default_pos[1] = -0.6793;
    mBoneDataArray[21].default_pos[2] = -0.6026;
    mBoneDataArray[21].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));

    mBoneDataArray[22].jointName = "m_avg_L_Hand";
    mBoneDataArray[22].parentIndex = 20;
    mBoneDataArray[22].default_pos[0] = 8.669054;
    mBoneDataArray[22].default_pos[1] = 1.06306;
    mBoneDataArray[22].default_pos[2] = -1.559429;
    mBoneDataArray[22].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));

    mBoneDataArray[23].jointName = "m_avg_R_Hand";
    mBoneDataArray[23].parentIndex = 21;
    mBoneDataArray[23].default_pos[0] = -8.8753;
    mBoneDataArray[23].default_pos[1] = 0.865157;
    mBoneDataArray[23].default_pos[2] = -1.010708;
    mBoneDataArray[23].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));

    mBoneDataArray[24].jointName = "virtual_root";
    mBoneDataArray[24].parentIndex = -1;
    mBoneDataArray[24].default_pos[0] = 0;
    mBoneDataArray[24].default_pos[1] = 0;
    mBoneDataArray[24].default_pos[2] = 0;
    mBoneDataArray[24].default_rot = FQuat::MakeFromEuler(FVector(0, 0, 0));


}
