#pragma once

#include "LiveLinkRemapAsset.h" 
#include <algorithm>

#include "MeocapAnimateRemap.generated.h"

extern const FName MEO_BONES[24];
extern const FName MEO_BONES_EX[25];
typedef FName(*MeoRemapTargetSetterCallback)(int8_t index);


UCLASS(BlueprintType)
class MEOCAPLIVELINK_API UMeocapAnimateRemapData : public ULiveLinkRemapAsset
{
	GENERATED_BODY()
public:

	FName GetRemappedBoneName_Implementation(FName CurveName) const final;

	void Initialize() final { InitializeTMap(); }

	void TargetNamesSetter(MeoRemapTargetSetterCallback cb) {
		for (int i = 0; i < 24; ++i)
		{
			switch (i)
			{
			case 0: Pelvis = cb(0); break;
			case 1: L_Hip = cb(1); break;
			case 2: R_Hip = cb(2); break;
			case 3: Spine1 = cb(3); break;
			case 4: L_Knee = cb(4); break;
			case 5: R_Knee = cb(5); break;
			case 6: Spine2 = cb(6); break;
			case 7: L_Ankle = cb(7); break;
			case 8: R_Ankle = cb(8); break;
			case 9: Spine3 = cb(9); break;
			case 10: L_Foot = cb(10); break;
			case 11: R_Foot = cb(11); break;
			case 12: Neck = cb(12); break;
			case 13: L_Collar = cb(13); break;
			case 14: R_Collar = cb(14); break;
			case 15: Head = cb(15); break;
			case 16: L_Shoulder = cb(16); break;
			case 17: R_Shoulder = cb(17); break;
			case 18: L_Elbow = cb(18); break;
			case 19: R_Elbow = cb(19); break;
			case 20: L_Wrist = cb(20); break;
			case 21: R_Wrist = cb(21); break;
			case 22: L_Hand = cb(22); break;
			case 23: R_Hand = cb(23); break;
			}
		}
	}

	FName TargetNamesRead(int8_t i) {
		switch (i)
		{
		case 0: return Pelvis;
		case 1: return L_Hip;
		case 2: return R_Hip;
		case 3: return Spine1;
		case 4: return L_Knee;
		case 5: return R_Knee;
		case 6: return Spine2;
		case 7: return L_Ankle;
		case 8: return R_Ankle;
		case 9: return Spine3;
		case 10: return L_Foot;
		case 11: return R_Foot;
		case 12: return Neck;
		case 13: return L_Collar;
		case 14: return R_Collar;
		case 15: return Head;
		case 16: return L_Shoulder;
		case 17: return R_Shoulder;
		case 18: return L_Elbow;
		case 19: return R_Elbow;
		case 20: return L_Wrist;
		case 21: return R_Wrist;
		case 22: return L_Hand;
		case 23: return R_Hand;
		}
		return NAME_None; 
	}

	UMeocapAnimateRemapData()
	{
		TargetNamesSetter([] (auto index) {return MEO_BONES[index]; });
	}

	UFUNCTION(BlueprintCallable, Category = BoneRemapping)
	void InitializeTMap() {
		RetargetMap.Empty();
		RetargetMap.Reserve(24);
		const int RANGE[24] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23 };
		for (int i : RANGE) {
			RetargetMap.Add(MEO_BONES[i],TargetNamesRead(i));
		}
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	TMap<FName, FName> RetargetMap;

	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName Pelvis;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName L_Hip;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName R_Hip;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName Spine1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName L_Knee;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName R_Knee;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName Spine2;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName L_Ankle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName R_Ankle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName Spine3;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName L_Foot;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName R_Foot;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName Neck;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName L_Collar;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName R_Collar;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName Head;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName L_Shoulder;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName R_Shoulder;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName L_Elbow;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName R_Elbow;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName L_Wrist;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName R_Wrist;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName L_Hand;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BoneRemapping)
	FName R_Hand;
	


};