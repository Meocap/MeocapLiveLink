// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeocapLiveLink/Public/MeocapLiveLinkSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeocapLiveLinkSourceFactory() {}
// Cross Module References
	MEOCAPLIVELINK_API UClass* Z_Construct_UClass_UMeocapLiveLinkSourceFactory_NoRegister();
	MEOCAPLIVELINK_API UClass* Z_Construct_UClass_UMeocapLiveLinkSourceFactory();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	UPackage* Z_Construct_UPackage__Script_MeocapLiveLink();
// End Cross Module References
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
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeocapLiveLinkSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MeocapLiveLink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeocapLiveLinkSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeocapLiveLinkSourceFactory.h" },
		{ "ModuleRelativePath", "Public/MeocapLiveLinkSourceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeocapLiveLinkSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeocapLiveLinkSourceFactory>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UMeocapLiveLinkSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapLiveLinkSourceFactory_Statics::Class_MetaDataParams))
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeocapLiveLinkSourceFactory);
	struct Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapLiveLinkSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapLiveLinkSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeocapLiveLinkSourceFactory, UMeocapLiveLinkSourceFactory::StaticClass, TEXT("UMeocapLiveLinkSourceFactory"), &Z_Registration_Info_UClass_UMeocapLiveLinkSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeocapLiveLinkSourceFactory), 2537167820U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapLiveLinkSourceFactory_h_339049028(TEXT("/Script/MeocapLiveLink"),
		Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapLiveLinkSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapLiveLinkSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
