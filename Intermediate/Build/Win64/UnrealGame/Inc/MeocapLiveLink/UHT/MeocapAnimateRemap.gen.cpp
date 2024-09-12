// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeocapLiveLink/Public/MeocapAnimateRemap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeocapAnimateRemap() {}

// Begin Cross Module References
LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRemapAsset();
MEOCAPLIVELINK_API UClass* Z_Construct_UClass_UMeocapAnimateRemapData();
MEOCAPLIVELINK_API UClass* Z_Construct_UClass_UMeocapAnimateRemapData_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeocapLiveLink();
// End Cross Module References

// Begin Class UMeocapAnimateRemapData Function InitializeTMap
struct Z_Construct_UFunction_UMeocapAnimateRemapData_InitializeTMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeocapAnimateRemapData_InitializeTMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeocapAnimateRemapData, nullptr, "InitializeTMap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeocapAnimateRemapData_InitializeTMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeocapAnimateRemapData_InitializeTMap_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeocapAnimateRemapData_InitializeTMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeocapAnimateRemapData_InitializeTMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeocapAnimateRemapData::execInitializeTMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeTMap();
	P_NATIVE_END;
}
// End Class UMeocapAnimateRemapData Function InitializeTMap

// Begin Class UMeocapAnimateRemapData
void UMeocapAnimateRemapData::StaticRegisterNativesUMeocapAnimateRemapData()
{
	UClass* Class = UMeocapAnimateRemapData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeTMap", &UMeocapAnimateRemapData::execInitializeTMap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeocapAnimateRemapData);
UClass* Z_Construct_UClass_UMeocapAnimateRemapData_NoRegister()
{
	return UMeocapAnimateRemapData::StaticClass();
}
struct Z_Construct_UClass_UMeocapAnimateRemapData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MeocapAnimateRemap.h" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetargetMap_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pelvis_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_L_Hip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_R_Hip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spine1_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_L_Knee_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_R_Knee_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spine2_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_L_Ankle_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_R_Ankle_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spine3_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_L_Foot_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_R_Foot_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Neck_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_L_Collar_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_R_Collar_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_L_Shoulder_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_R_Shoulder_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_L_Elbow_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_R_Elbow_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_L_Wrist_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_R_Wrist_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_L_Hand_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_R_Hand_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/MeocapAnimateRemap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_RetargetMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RetargetMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RetargetMap;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Pelvis;
	static const UECodeGen_Private::FNamePropertyParams NewProp_L_Hip;
	static const UECodeGen_Private::FNamePropertyParams NewProp_R_Hip;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Spine1;
	static const UECodeGen_Private::FNamePropertyParams NewProp_L_Knee;
	static const UECodeGen_Private::FNamePropertyParams NewProp_R_Knee;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Spine2;
	static const UECodeGen_Private::FNamePropertyParams NewProp_L_Ankle;
	static const UECodeGen_Private::FNamePropertyParams NewProp_R_Ankle;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Spine3;
	static const UECodeGen_Private::FNamePropertyParams NewProp_L_Foot;
	static const UECodeGen_Private::FNamePropertyParams NewProp_R_Foot;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Neck;
	static const UECodeGen_Private::FNamePropertyParams NewProp_L_Collar;
	static const UECodeGen_Private::FNamePropertyParams NewProp_R_Collar;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Head;
	static const UECodeGen_Private::FNamePropertyParams NewProp_L_Shoulder;
	static const UECodeGen_Private::FNamePropertyParams NewProp_R_Shoulder;
	static const UECodeGen_Private::FNamePropertyParams NewProp_L_Elbow;
	static const UECodeGen_Private::FNamePropertyParams NewProp_R_Elbow;
	static const UECodeGen_Private::FNamePropertyParams NewProp_L_Wrist;
	static const UECodeGen_Private::FNamePropertyParams NewProp_R_Wrist;
	static const UECodeGen_Private::FNamePropertyParams NewProp_L_Hand;
	static const UECodeGen_Private::FNamePropertyParams NewProp_R_Hand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeocapAnimateRemapData_InitializeTMap, "InitializeTMap" }, // 4137178035
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeocapAnimateRemapData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_RetargetMap_ValueProp = { "RetargetMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_RetargetMap_Key_KeyProp = { "RetargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_RetargetMap = { "RetargetMap", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, RetargetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetargetMap_MetaData), NewProp_RetargetMap_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_Pelvis = { "Pelvis", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, Pelvis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pelvis_MetaData), NewProp_Pelvis_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_L_Hip = { "L_Hip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, L_Hip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_L_Hip_MetaData), NewProp_L_Hip_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_R_Hip = { "R_Hip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, R_Hip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_R_Hip_MetaData), NewProp_R_Hip_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_Spine1 = { "Spine1", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, Spine1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spine1_MetaData), NewProp_Spine1_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_L_Knee = { "L_Knee", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, L_Knee), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_L_Knee_MetaData), NewProp_L_Knee_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_R_Knee = { "R_Knee", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, R_Knee), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_R_Knee_MetaData), NewProp_R_Knee_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_Spine2 = { "Spine2", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, Spine2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spine2_MetaData), NewProp_Spine2_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_L_Ankle = { "L_Ankle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, L_Ankle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_L_Ankle_MetaData), NewProp_L_Ankle_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_R_Ankle = { "R_Ankle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, R_Ankle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_R_Ankle_MetaData), NewProp_R_Ankle_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_Spine3 = { "Spine3", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, Spine3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spine3_MetaData), NewProp_Spine3_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_L_Foot = { "L_Foot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, L_Foot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_L_Foot_MetaData), NewProp_L_Foot_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_R_Foot = { "R_Foot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, R_Foot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_R_Foot_MetaData), NewProp_R_Foot_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_Neck = { "Neck", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, Neck), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Neck_MetaData), NewProp_Neck_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_L_Collar = { "L_Collar", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, L_Collar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_L_Collar_MetaData), NewProp_L_Collar_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_R_Collar = { "R_Collar", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, R_Collar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_R_Collar_MetaData), NewProp_R_Collar_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, Head), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Head_MetaData), NewProp_Head_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_L_Shoulder = { "L_Shoulder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, L_Shoulder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_L_Shoulder_MetaData), NewProp_L_Shoulder_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_R_Shoulder = { "R_Shoulder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, R_Shoulder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_R_Shoulder_MetaData), NewProp_R_Shoulder_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_L_Elbow = { "L_Elbow", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, L_Elbow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_L_Elbow_MetaData), NewProp_L_Elbow_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_R_Elbow = { "R_Elbow", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, R_Elbow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_R_Elbow_MetaData), NewProp_R_Elbow_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_L_Wrist = { "L_Wrist", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, L_Wrist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_L_Wrist_MetaData), NewProp_L_Wrist_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_R_Wrist = { "R_Wrist", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, R_Wrist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_R_Wrist_MetaData), NewProp_R_Wrist_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_L_Hand = { "L_Hand", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, L_Hand), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_L_Hand_MetaData), NewProp_L_Hand_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_R_Hand = { "R_Hand", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapAnimateRemapData, R_Hand), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_R_Hand_MetaData), NewProp_R_Hand_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeocapAnimateRemapData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_RetargetMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_RetargetMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_RetargetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_Pelvis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_L_Hip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_R_Hip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_Spine1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_L_Knee,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_R_Knee,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_Spine2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_L_Ankle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_R_Ankle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_Spine3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_L_Foot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_R_Foot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_Neck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_L_Collar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_R_Collar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_Head,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_L_Shoulder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_R_Shoulder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_L_Elbow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_R_Elbow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_L_Wrist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_R_Wrist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_L_Hand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapAnimateRemapData_Statics::NewProp_R_Hand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapAnimateRemapData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeocapAnimateRemapData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkRemapAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_MeocapLiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapAnimateRemapData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeocapAnimateRemapData_Statics::ClassParams = {
	&UMeocapAnimateRemapData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMeocapAnimateRemapData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapAnimateRemapData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapAnimateRemapData_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeocapAnimateRemapData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeocapAnimateRemapData()
{
	if (!Z_Registration_Info_UClass_UMeocapAnimateRemapData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeocapAnimateRemapData.OuterSingleton, Z_Construct_UClass_UMeocapAnimateRemapData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeocapAnimateRemapData.OuterSingleton;
}
template<> MEOCAPLIVELINK_API UClass* StaticClass<UMeocapAnimateRemapData>()
{
	return UMeocapAnimateRemapData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeocapAnimateRemapData);
UMeocapAnimateRemapData::~UMeocapAnimateRemapData() {}
// End Class UMeocapAnimateRemapData

// Begin Registration
struct Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapAnimateRemap_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeocapAnimateRemapData, UMeocapAnimateRemapData::StaticClass, TEXT("UMeocapAnimateRemapData"), &Z_Registration_Info_UClass_UMeocapAnimateRemapData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeocapAnimateRemapData), 1580540111U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapAnimateRemap_h_1278528149(TEXT("/Script/MeocapLiveLink"),
	Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapAnimateRemap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapAnimateRemap_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
