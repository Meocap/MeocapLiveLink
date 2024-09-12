// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeocapLiveLinkEditor/Public/MeocapPoseProviderNode.h"
#include "MeocapLiveLink/Public/MeocapPoseProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeocapPoseProviderNode() {}

// Begin Cross Module References
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
MEOCAPLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FMeocapPoseProvider();
MEOCAPLIVELINKEDITOR_API UClass* Z_Construct_UClass_UMeocapPoseProviderNode();
MEOCAPLIVELINKEDITOR_API UClass* Z_Construct_UClass_UMeocapPoseProviderNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeocapLiveLinkEditor();
// End Cross Module References

// Begin Class UMeocapPoseProviderNode
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeocapPoseProviderNode.h" },
		{ "Keywords", "Meocap Pose Provider" },
		{ "ModuleRelativePath", "Public/MeocapPoseProviderNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mProvider_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MeocapPoseProviderNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_mProvider;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeocapPoseProviderNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeocapPoseProviderNode_Statics::NewProp_mProvider = { "mProvider", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeocapPoseProviderNode, mProvider), Z_Construct_UScriptStruct_FMeocapPoseProvider, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mProvider_MetaData), NewProp_mProvider_MetaData) }; // 4313006
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeocapPoseProviderNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeocapPoseProviderNode_Statics::NewProp_mProvider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapPoseProviderNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeocapPoseProviderNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MeocapLiveLinkEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapPoseProviderNode_Statics::DependentSingletons) < 16);
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeocapPoseProviderNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeocapPoseProviderNode_Statics::Class_MetaDataParams)
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
UMeocapPoseProviderNode::UMeocapPoseProviderNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeocapPoseProviderNode);
UMeocapPoseProviderNode::~UMeocapPoseProviderNode() {}
// End Class UMeocapPoseProviderNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLinkEditor_Public_MeocapPoseProviderNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeocapPoseProviderNode, UMeocapPoseProviderNode::StaticClass, TEXT("UMeocapPoseProviderNode"), &Z_Registration_Info_UClass_UMeocapPoseProviderNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeocapPoseProviderNode), 3368506731U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLinkEditor_Public_MeocapPoseProviderNode_h_2420686571(TEXT("/Script/MeocapLiveLinkEditor"),
	Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLinkEditor_Public_MeocapPoseProviderNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLinkEditor_Public_MeocapPoseProviderNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
