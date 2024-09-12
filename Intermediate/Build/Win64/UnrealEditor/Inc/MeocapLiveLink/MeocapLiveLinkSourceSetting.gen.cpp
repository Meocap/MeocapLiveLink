// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeocapLiveLink/Public/MeocapLiveLinkSourceSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeocapLiveLinkSourceSetting() {}
// Cross Module References
	MEOCAPLIVELINK_API UClass* Z_Construct_UClass_UMeocapLiveLinkSourceSettings_NoRegister();
	MEOCAPLIVELINK_API UClass* Z_Construct_UClass_UMeocapLiveLinkSourceSettings();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
	UPackage* Z_Construct_UPackage__Script_MeocapLiveLink();
// End Cross Module References
	void UMeocapLiveLinkSourceSettings::StaticRegisterNativesUMeocapLiveLinkSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeocapLiveLinkSourceSettings);
	UClass* Z_Construct_UClass_UMeocapLiveLinkSourceSettings_NoRegister()
	{
		return UMeocapLiveLinkSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMeocapLiveLinkSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSyncSkelToClient_MetaData[];
#endif
		static void NewProp_bSyncSkelToClient_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncSkelToClient;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeocapLiveLinkSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_MeocapLiveLink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeocapLiveLinkSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeocapLiveLinkSourceSetting.h" },
		{ "ModuleRelativePath", "Public/MeocapLiveLinkSourceSetting.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeocapLiveLinkSourceSettings_Statics::NewProp_bSyncSkelToClient_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Public/MeocapLiveLinkSourceSetting.h" },
	};
#endif
	void Z_Construct_UClass_UMeocapLiveLinkSourceSettings_Statics::NewProp_bSyncSkelToClient_SetBit(void* Obj)
	{
		((UMeocapLiveLinkSourceSettings*)Obj)->bSyncSkelToClient = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeocapLiveLinkSourceSettings_Statics::NewProp_bSyncSkelToClient = { "bSyncSkelToClient", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMeocapLiveLinkSourceSettings), &Z_Construct_UClass_UMeocapLiveLinkSourceSettings_Statics::NewProp_bSyncSkelToClient_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeocapLiveLinkSourceSettings_Statics::NewProp_bSyncSkelToClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapLiveLinkSourceSettings_Statics::NewProp_bSyncSkelToClient_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeocapLiveLinkSourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapLiveLinkSourceSettings_Statics::NewProp_bSyncSkelToClient,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeocapLiveLinkSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeocapLiveLinkSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeocapLiveLinkSourceSettings_Statics::ClassParams = {
		&UMeocapLiveLinkSourceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeocapLiveLinkSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapLiveLinkSourceSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeocapLiveLinkSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapLiveLinkSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeocapLiveLinkSourceSettings()
	{
		if (!Z_Registration_Info_UClass_UMeocapLiveLinkSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeocapLiveLinkSourceSettings.OuterSingleton, Z_Construct_UClass_UMeocapLiveLinkSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeocapLiveLinkSourceSettings.OuterSingleton;
	}
	template<> MEOCAPLIVELINK_API UClass* StaticClass<UMeocapLiveLinkSourceSettings>()
	{
		return UMeocapLiveLinkSourceSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeocapLiveLinkSourceSettings);
	struct Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapLiveLinkSourceSetting_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapLiveLinkSourceSetting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeocapLiveLinkSourceSettings, UMeocapLiveLinkSourceSettings::StaticClass, TEXT("UMeocapLiveLinkSourceSettings"), &Z_Registration_Info_UClass_UMeocapLiveLinkSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeocapLiveLinkSourceSettings), 2106897377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapLiveLinkSourceSetting_h_413609572(TEXT("/Script/MeocapLiveLink"),
		Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapLiveLinkSourceSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapLiveLinkSourceSetting_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
