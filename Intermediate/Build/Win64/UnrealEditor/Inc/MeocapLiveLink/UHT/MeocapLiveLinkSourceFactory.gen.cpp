// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeocapLiveLink/Public/MeocapLiveLinkSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeocapLiveLinkSourceFactory() {}

// Begin Cross Module References
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
MEOCAPLIVELINK_API UClass* Z_Construct_UClass_UMeocapLiveLinkSourceFactory();
MEOCAPLIVELINK_API UClass* Z_Construct_UClass_UMeocapLiveLinkSourceFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeocapLiveLink();
// End Cross Module References

// Begin Class UMeocapLiveLinkSourceFactory
void UMeocapLiveLinkSourceFactory::StaticRegisterNativesUMeocapLiveLinkSourceFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeocapLiveLinkSourceFactory);
UClass* Z_Construct_UClass_UMeocapLiveLinkSourceFactory_NoRegister()
{
	return UMeocapLiveLinkSourceFactory::StaticClass();
}
struct Z_Construct_UClass_UMeocapLiveLinkSourceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeocapLiveLinkSourceFactory.h" },
		{ "ModuleRelativePath", "Public/MeocapLiveLinkSourceFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeocapLiveLinkSourceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeocapLiveLinkSourceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_MeocapLiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapLiveLinkSourceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeocapLiveLinkSourceFactory_Statics::ClassParams = {
	&UMeocapLiveLinkSourceFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapLiveLinkSourceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeocapLiveLinkSourceFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeocapLiveLinkSourceFactory()
{
	if (!Z_Registration_Info_UClass_UMeocapLiveLinkSourceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeocapLiveLinkSourceFactory.OuterSingleton, Z_Construct_UClass_UMeocapLiveLinkSourceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeocapLiveLinkSourceFactory.OuterSingleton;
}
template<> MEOCAPLIVELINK_API UClass* StaticClass<UMeocapLiveLinkSourceFactory>()
{
	return UMeocapLiveLinkSourceFactory::StaticClass();
}
UMeocapLiveLinkSourceFactory::UMeocapLiveLinkSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeocapLiveLinkSourceFactory);
UMeocapLiveLinkSourceFactory::~UMeocapLiveLinkSourceFactory() {}
// End Class UMeocapLiveLinkSourceFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapLiveLinkSourceFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeocapLiveLinkSourceFactory, UMeocapLiveLinkSourceFactory::StaticClass, TEXT("UMeocapLiveLinkSourceFactory"), &Z_Registration_Info_UClass_UMeocapLiveLinkSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeocapLiveLinkSourceFactory), 1312390627U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapLiveLinkSourceFactory_h_3475508707(TEXT("/Script/MeocapLiveLink"),
	Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapLiveLinkSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapLiveLinkSourceFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
