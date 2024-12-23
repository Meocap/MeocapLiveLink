// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeocapLiveLink/Public/MeocapBPLibrary.h"
#include "Runtime/LiveLinkInterface/Public/ILiveLinkSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeocapBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceHandle();
MEOCAPLIVELINK_API UClass* Z_Construct_UClass_UMeocapBPLibrary();
MEOCAPLIVELINK_API UClass* Z_Construct_UClass_UMeocapBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeocapLiveLink();
// End Cross Module References

// Begin Class UMeocapBPLibrary Function CreateMeocapSource
struct Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics
{
	struct MeocapBPLibrary_eventCreateMeocapSource_Parms
	{
		FLiveLinkSourceHandle handle;
		int32 inputPort;
		FString subjectName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeocapLiveLink" },
		{ "CPP_Default_inputPort", "14999" },
		{ "CPP_Default_subjectName", "MeoLink" },
		{ "Keywords", "livelink" },
		{ "ModuleRelativePath", "Public/MeocapBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_inputPort_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_subjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_inputPort;
	static const UECodeGen_Private::FStrPropertyParams NewProp_subjectName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeocapBPLibrary_eventCreateMeocapSource_Parms, handle), Z_Construct_UScriptStruct_FLiveLinkSourceHandle, METADATA_PARAMS(0, nullptr) }; // 3639505588
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_inputPort = { "inputPort", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeocapBPLibrary_eventCreateMeocapSource_Parms, inputPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_inputPort_MetaData), NewProp_inputPort_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_subjectName = { "subjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeocapBPLibrary_eventCreateMeocapSource_Parms, subjectName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_subjectName_MetaData), NewProp_subjectName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_inputPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_subjectName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeocapBPLibrary, nullptr, "CreateMeocapSource", nullptr, nullptr, Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::MeocapBPLibrary_eventCreateMeocapSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::MeocapBPLibrary_eventCreateMeocapSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeocapBPLibrary::execCreateMeocapSource)
{
	P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_handle);
	P_GET_PROPERTY(FIntProperty,Z_Param_inputPort);
	P_GET_PROPERTY(FStrProperty,Z_Param_subjectName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMeocapBPLibrary::CreateMeocapSource(Z_Param_Out_handle,Z_Param_inputPort,Z_Param_subjectName);
	P_NATIVE_END;
}
// End Class UMeocapBPLibrary Function CreateMeocapSource

// Begin Class UMeocapBPLibrary
void UMeocapBPLibrary::StaticRegisterNativesUMeocapBPLibrary()
{
	UClass* Class = UMeocapBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateMeocapSource", &UMeocapBPLibrary::execCreateMeocapSource },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeocapBPLibrary);
UClass* Z_Construct_UClass_UMeocapBPLibrary_NoRegister()
{
	return UMeocapBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UMeocapBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeocapBPLibrary.h" },
		{ "ModuleRelativePath", "Public/MeocapBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource, "CreateMeocapSource" }, // 3756039705
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeocapBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeocapBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MeocapLiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeocapBPLibrary_Statics::ClassParams = {
	&UMeocapBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeocapBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeocapBPLibrary()
{
	if (!Z_Registration_Info_UClass_UMeocapBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeocapBPLibrary.OuterSingleton, Z_Construct_UClass_UMeocapBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeocapBPLibrary.OuterSingleton;
}
template<> MEOCAPLIVELINK_API UClass* StaticClass<UMeocapBPLibrary>()
{
	return UMeocapBPLibrary::StaticClass();
}
UMeocapBPLibrary::UMeocapBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeocapBPLibrary);
UMeocapBPLibrary::~UMeocapBPLibrary() {}
// End Class UMeocapBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeocapBPLibrary, UMeocapBPLibrary::StaticClass, TEXT("UMeocapBPLibrary"), &Z_Registration_Info_UClass_UMeocapBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeocapBPLibrary), 4045997116U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapBPLibrary_h_1623671848(TEXT("/Script/MeocapLiveLink"),
	Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
