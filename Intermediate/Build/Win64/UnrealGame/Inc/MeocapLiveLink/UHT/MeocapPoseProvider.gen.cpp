// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeocapLiveLink/Public/MeocapPoseProvider.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeocapPoseProvider() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRemapAsset_NoRegister();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
MEOCAPLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FMeocapPoseProvider();
UPackage* Z_Construct_UPackage__Script_MeocapLiveLink();
// End Cross Module References

// Begin ScriptStruct FMeocapPoseProvider
static_assert(std::is_polymorphic<FMeocapPoseProvider>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FMeocapPoseProvider cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeocapPoseProvider;
class UScriptStruct* FMeocapPoseProvider::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeocapPoseProvider.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeocapPoseProvider.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeocapPoseProvider, (UObject*)Z_Construct_UPackage__Script_MeocapLiveLink(), TEXT("MeocapPoseProvider"));
	}
	return Z_Registration_Info_UScriptStruct_MeocapPoseProvider.OuterSingleton;
}
template<> MEOCAPLIVELINK_API UScriptStruct* StaticStruct<FMeocapPoseProvider>()
{
	return FMeocapPoseProvider::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeocapPoseProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mCurrentRemapAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeocapPoseProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mRetargetAsset_MetaData[] = {
		{ "Category", "Retarget" },
		{ "ModuleRelativePath", "Public/MeocapPoseProvider.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mLiveLinkSubjectName_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/MeocapPoseProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mBoneRefs_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeocapPoseProvider.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mCurrentRemapAsset;
	static const UECodeGen_Private::FClassPropertyParams NewProp_mRetargetAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_mLiveLinkSubjectName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_mBoneRefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_mBoneRefs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeocapPoseProvider>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mCurrentRemapAsset = { "mCurrentRemapAsset", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeocapPoseProvider, mCurrentRemapAsset), Z_Construct_UClass_ULiveLinkRemapAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mCurrentRemapAsset_MetaData), NewProp_mCurrentRemapAsset_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mRetargetAsset = { "mRetargetAsset", nullptr, (EPropertyFlags)0x0014000002000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeocapPoseProvider, mRetargetAsset), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRemapAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mRetargetAsset_MetaData), NewProp_mRetargetAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mLiveLinkSubjectName = { "mLiveLinkSubjectName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeocapPoseProvider, mLiveLinkSubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mLiveLinkSubjectName_MetaData), NewProp_mLiveLinkSubjectName_MetaData) }; // 463217522
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mBoneRefs_Inner = { "mBoneRefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(0, nullptr) }; // 4218265988
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mBoneRefs = { "mBoneRefs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeocapPoseProvider, mBoneRefs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mBoneRefs_MetaData), NewProp_mBoneRefs_MetaData) }; // 4218265988
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mCurrentRemapAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mRetargetAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mLiveLinkSubjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mBoneRefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mBoneRefs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MeocapLiveLink,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"MeocapPoseProvider",
	Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::PropPointers),
	sizeof(FMeocapPoseProvider),
	alignof(FMeocapPoseProvider),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeocapPoseProvider()
{
	if (!Z_Registration_Info_UScriptStruct_MeocapPoseProvider.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeocapPoseProvider.InnerSingleton, Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeocapPoseProvider.InnerSingleton;
}
// End ScriptStruct FMeocapPoseProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapPoseProvider_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMeocapPoseProvider::StaticStruct, Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewStructOps, TEXT("MeocapPoseProvider"), &Z_Registration_Info_UScriptStruct_MeocapPoseProvider, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeocapPoseProvider), 4313006U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapPoseProvider_h_1024940697(TEXT("/Script/MeocapLiveLink"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapPoseProvider_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapPoseProvider_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
