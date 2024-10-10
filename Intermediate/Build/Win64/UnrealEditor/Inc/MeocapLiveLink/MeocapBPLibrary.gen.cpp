// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeocapLiveLink/Public/MeocapBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeocapBPLibrary() {}
// Cross Module References
	MEOCAPLIVELINK_API UClass* Z_Construct_UClass_UMeocapBPLibrary_NoRegister();
	MEOCAPLIVELINK_API UClass* Z_Construct_UClass_UMeocapBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MeocapLiveLink();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceHandle();
// End Cross Module References
	DEFINE_FUNCTION(UMeocapBPLibrary::execCreateMeocapSource)
	{
		P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_inputPort);
		P_GET_PROPERTY(FIntProperty,Z_Param_commandPort);
		P_GET_PROPERTY(FStrProperty,Z_Param_subjectName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMeocapBPLibrary::CreateMeocapSource(Z_Param_Out_handle,Z_Param_inputPort,Z_Param_commandPort,Z_Param_subjectName);
		P_NATIVE_END;
	}
	void UMeocapBPLibrary::StaticRegisterNativesUMeocapBPLibrary()
	{
		UClass* Class = UMeocapBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMeocapSource", &UMeocapBPLibrary::execCreateMeocapSource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics
	{
		struct MeocapBPLibrary_eventCreateMeocapSource_Parms
		{
			FLiveLinkSourceHandle handle;
			int32 inputPort;
			int32 commandPort;
			FString subjectName;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inputPort_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_inputPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_commandPort_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_commandPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_subjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_subjectName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeocapBPLibrary_eventCreateMeocapSource_Parms, handle), Z_Construct_UScriptStruct_FLiveLinkSourceHandle, METADATA_PARAMS(nullptr, 0) }; // 3793506686
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_inputPort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_inputPort = { "inputPort", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeocapBPLibrary_eventCreateMeocapSource_Parms, inputPort), METADATA_PARAMS(Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_inputPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_inputPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_commandPort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_commandPort = { "commandPort", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeocapBPLibrary_eventCreateMeocapSource_Parms, commandPort), METADATA_PARAMS(Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_commandPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_commandPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_subjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_subjectName = { "subjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeocapBPLibrary_eventCreateMeocapSource_Parms, subjectName), METADATA_PARAMS(Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_subjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_subjectName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_inputPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_commandPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::NewProp_subjectName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "MeocapLiveLink" },
		{ "CPP_Default_commandPort", "15999" },
		{ "CPP_Default_inputPort", "14999" },
		{ "CPP_Default_subjectName", "MeoLink" },
		{ "Keywords", "livelink" },
		{ "ModuleRelativePath", "Public/MeocapBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeocapBPLibrary, nullptr, "CreateMeocapSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::MeocapBPLibrary_eventCreateMeocapSource_Parms), Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeocapBPLibrary);
	UClass* Z_Construct_UClass_UMeocapBPLibrary_NoRegister()
	{
		return UMeocapBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMeocapBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeocapBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MeocapLiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeocapBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeocapBPLibrary_CreateMeocapSource, "CreateMeocapSource" }, // 283198682
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeocapBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeocapBPLibrary.h" },
		{ "ModuleRelativePath", "Public/MeocapBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeocapBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeocapBPLibrary>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UMeocapBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapBPLibrary_Statics::Class_MetaDataParams))
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeocapBPLibrary);
	struct Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeocapBPLibrary, UMeocapBPLibrary::StaticClass, TEXT("UMeocapBPLibrary"), &Z_Registration_Info_UClass_UMeocapBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeocapBPLibrary), 2691164894U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapBPLibrary_h_3082469860(TEXT("/Script/MeocapLiveLink"),
		Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
