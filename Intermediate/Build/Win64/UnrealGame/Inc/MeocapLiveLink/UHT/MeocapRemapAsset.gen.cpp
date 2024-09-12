// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeocapLiveLink/Public/MeocapRemapAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeocapRemapAsset() {}

// Begin Cross Module References
LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRemapAsset();
MEOCAPLIVELINK_API UClass* Z_Construct_UClass_UMeocapRemapAsset();
MEOCAPLIVELINK_API UClass* Z_Construct_UClass_UMeocapRemapAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeocapLiveLink();
// End Cross Module References

// Begin Class UMeocapRemapAsset
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeocapRemapAsset.h" },
		{ "ModuleRelativePath", "Public/MeocapRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeletonHipBoneName_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/MeocapRemapAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetSkeletonHipBoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeocapRemapAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeocapRemapAsset_Statics::NewProp_TargetSkeletonHipBoneName = { "TargetSkeletonHipBoneName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapRemapAsset, TargetSkeletonHipBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSkeletonHipBoneName_MetaData), NewProp_TargetSkeletonHipBoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeocapRemapAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapRemapAsset_Statics::NewProp_TargetSkeletonHipBoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapRemapAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeocapRemapAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkRemapAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_MeocapLiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapRemapAsset_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapRemapAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeocapRemapAsset_Statics::Class_MetaDataParams)
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
UMeocapRemapAsset::UMeocapRemapAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeocapRemapAsset);
UMeocapRemapAsset::~UMeocapRemapAsset() {}
// End Class UMeocapRemapAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapRemapAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeocapRemapAsset, UMeocapRemapAsset::StaticClass, TEXT("UMeocapRemapAsset"), &Z_Registration_Info_UClass_UMeocapRemapAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeocapRemapAsset), 1106394286U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapRemapAsset_h_1399112782(TEXT("/Script/MeocapLiveLink"),
	Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapRemapAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapRemapAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
