// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeocapLiveLink/Public/MeocapRemapAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeocapRemapAsset() {}
// Cross Module References
	MEOCAPLIVELINK_API UClass* Z_Construct_UClass_UMeocapRemapAsset_NoRegister();
	MEOCAPLIVELINK_API UClass* Z_Construct_UClass_UMeocapRemapAsset();
	LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRemapAsset();
	UPackage* Z_Construct_UPackage__Script_MeocapLiveLink();
// End Cross Module References
	void UMeocapRemapAsset::StaticRegisterNativesUMeocapRemapAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeocapRemapAsset);
	UClass* Z_Construct_UClass_UMeocapRemapAsset_NoRegister()
	{
		return UMeocapRemapAsset::StaticClass();
	}
	struct Z_Construct_UClass_UMeocapRemapAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeletonHipBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetSkeletonHipBoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeocapRemapAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkRemapAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_MeocapLiveLink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeocapRemapAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeocapRemapAsset.h" },
		{ "ModuleRelativePath", "Public/MeocapRemapAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeocapRemapAsset_Statics::NewProp_TargetSkeletonHipBoneName_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/MeocapRemapAsset.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapRemapAsset_Statics::NewProp_TargetSkeletonHipBoneName = { "TargetSkeletonHipBoneName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeocapRemapAsset, TargetSkeletonHipBoneName), METADATA_PARAMS(Z_Construct_UClass_UMeocapRemapAsset_Statics::NewProp_TargetSkeletonHipBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapRemapAsset_Statics::NewProp_TargetSkeletonHipBoneName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeocapRemapAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapRemapAsset_Statics::NewProp_TargetSkeletonHipBoneName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeocapRemapAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeocapRemapAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeocapRemapAsset_Statics::ClassParams = {
		&UMeocapRemapAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeocapRemapAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapRemapAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeocapRemapAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapRemapAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeocapRemapAsset()
	{
		if (!Z_Registration_Info_UClass_UMeocapRemapAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeocapRemapAsset.OuterSingleton, Z_Construct_UClass_UMeocapRemapAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeocapRemapAsset.OuterSingleton;
	}
	template<> MEOCAPLIVELINK_API UClass* StaticClass<UMeocapRemapAsset>()
	{
		return UMeocapRemapAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeocapRemapAsset);
	struct Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapRemapAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapRemapAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeocapRemapAsset, UMeocapRemapAsset::StaticClass, TEXT("UMeocapRemapAsset"), &Z_Registration_Info_UClass_UMeocapRemapAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeocapRemapAsset), 3139065517U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapRemapAsset_h_4202556949(TEXT("/Script/MeocapLiveLink"),
		Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapRemapAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapRemapAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
