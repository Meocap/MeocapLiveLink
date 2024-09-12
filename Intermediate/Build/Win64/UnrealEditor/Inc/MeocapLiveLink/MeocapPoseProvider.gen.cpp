// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeocapLiveLink/Public/MeocapPoseProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeocapPoseProvider() {}
// Cross Module References
	MEOCAPLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FMeocapPoseProvider();
	UPackage* Z_Construct_UPackage__Script_MeocapLiveLink();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRemapAsset_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References

static_assert(std::is_polymorphic<FMeocapPoseProvider>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FMeocapPoseProvider cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeocapPoseProvider;
class UScriptStruct* FMeocapPoseProvider::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeocapPoseProvider.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeocapPoseProvider.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeocapPoseProvider, Z_Construct_UPackage__Script_MeocapLiveLink(), TEXT("MeocapPoseProvider"));
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mCurrentRemapAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mCurrentRemapAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mRetargetAsset_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_mRetargetAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mLiveLinkSubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_mLiveLinkSubjectName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_mBoneRefs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mBoneRefs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_mBoneRefs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeocapPoseProvider.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeocapPoseProvider>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mCurrentRemapAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeocapPoseProvider.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mCurrentRemapAsset = { "mCurrentRemapAsset", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeocapPoseProvider, mCurrentRemapAsset), Z_Construct_UClass_ULiveLinkRemapAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mCurrentRemapAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mCurrentRemapAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mRetargetAsset_MetaData[] = {
		{ "Category", "Retarget" },
		{ "ModuleRelativePath", "Public/MeocapPoseProvider.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mRetargetAsset = { "mRetargetAsset", nullptr, (EPropertyFlags)0x0014000002000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeocapPoseProvider, mRetargetAsset), Z_Construct_UClass_ULiveLinkRemapAsset_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mRetargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mRetargetAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mLiveLinkSubjectName_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/MeocapPoseProvider.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mLiveLinkSubjectName = { "mLiveLinkSubjectName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeocapPoseProvider, mLiveLinkSubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mLiveLinkSubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mLiveLinkSubjectName_MetaData)) }; // 1633295967
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mBoneRefs_Inner = { "mBoneRefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mBoneRefs_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeocapPoseProvider.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mBoneRefs = { "mBoneRefs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeocapPoseProvider, mBoneRefs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mBoneRefs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mBoneRefs_MetaData)) }; // 831728502
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mCurrentRemapAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mRetargetAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mLiveLinkSubjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mBoneRefs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewProp_mBoneRefs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeocapLiveLink,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"MeocapPoseProvider",
		sizeof(FMeocapPoseProvider),
		alignof(FMeocapPoseProvider),
		Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeocapPoseProvider()
	{
		if (!Z_Registration_Info_UScriptStruct_MeocapPoseProvider.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeocapPoseProvider.InnerSingleton, Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeocapPoseProvider.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapPoseProvider_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapPoseProvider_h_Statics::ScriptStructInfo[] = {
		{ FMeocapPoseProvider::StaticStruct, Z_Construct_UScriptStruct_FMeocapPoseProvider_Statics::NewStructOps, TEXT("MeocapPoseProvider"), &Z_Registration_Info_UScriptStruct_MeocapPoseProvider, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeocapPoseProvider), 485951123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapPoseProvider_h_1559280534(TEXT("/Script/MeocapLiveLink"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapPoseProvider_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapPoseProvider_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
