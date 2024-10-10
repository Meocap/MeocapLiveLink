// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeocapLiveLinkEditor/Public/MeocapPoseProviderNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeocapPoseProviderNode() {}
// Cross Module References
	MEOCAPLIVELINKEDITOR_API UClass* Z_Construct_UClass_UMeocapPoseProviderNode_NoRegister();
	MEOCAPLIVELINKEDITOR_API UClass* Z_Construct_UClass_UMeocapPoseProviderNode();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_MeocapLiveLinkEditor();
	MEOCAPLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FMeocapPoseProvider();
// End Cross Module References
	void UMeocapPoseProviderNode::StaticRegisterNativesUMeocapPoseProviderNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeocapPoseProviderNode);
	UClass* Z_Construct_UClass_UMeocapPoseProviderNode_NoRegister()
	{
		return UMeocapPoseProviderNode::StaticClass();
	}
	struct Z_Construct_UClass_UMeocapPoseProviderNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mProvider_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_mProvider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeocapPoseProviderNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MeocapLiveLinkEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeocapPoseProviderNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeocapPoseProviderNode.h" },
		{ "Keywords", "Meocap Pose Provider" },
		{ "ModuleRelativePath", "Public/MeocapPoseProviderNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeocapPoseProviderNode_Statics::NewProp_mProvider_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MeocapPoseProviderNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeocapPoseProviderNode_Statics::NewProp_mProvider = { "mProvider", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeocapPoseProviderNode, mProvider), Z_Construct_UScriptStruct_FMeocapPoseProvider, METADATA_PARAMS(Z_Construct_UClass_UMeocapPoseProviderNode_Statics::NewProp_mProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapPoseProviderNode_Statics::NewProp_mProvider_MetaData)) }; // 485951123
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeocapPoseProviderNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapPoseProviderNode_Statics::NewProp_mProvider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeocapPoseProviderNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeocapPoseProviderNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeocapPoseProviderNode_Statics::ClassParams = {
		&UMeocapPoseProviderNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeocapPoseProviderNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapPoseProviderNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeocapPoseProviderNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapPoseProviderNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeocapPoseProviderNode()
	{
		if (!Z_Registration_Info_UClass_UMeocapPoseProviderNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeocapPoseProviderNode.OuterSingleton, Z_Construct_UClass_UMeocapPoseProviderNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeocapPoseProviderNode.OuterSingleton;
	}
	template<> MEOCAPLIVELINKEDITOR_API UClass* StaticClass<UMeocapPoseProviderNode>()
	{
		return UMeocapPoseProviderNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeocapPoseProviderNode);
	struct Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLinkEditor_Public_MeocapPoseProviderNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLinkEditor_Public_MeocapPoseProviderNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeocapPoseProviderNode, UMeocapPoseProviderNode::StaticClass, TEXT("UMeocapPoseProviderNode"), &Z_Registration_Info_UClass_UMeocapPoseProviderNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeocapPoseProviderNode), 981753776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLinkEditor_Public_MeocapPoseProviderNode_h_3316573786(TEXT("/Script/MeocapLiveLinkEditor"),
		Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLinkEditor_Public_MeocapPoseProviderNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestUE50_Plugins_MeocapLiveLink_Source_MeocapLiveLinkEditor_Public_MeocapPoseProviderNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
