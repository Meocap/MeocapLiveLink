// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeocapBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLiveLinkSourceHandle;
#ifdef MEOCAPLIVELINK_MeocapBPLibrary_generated_h
#error "MeocapBPLibrary.generated.h already included, missing '#pragma once' in MeocapBPLibrary.h"
#endif
#define MEOCAPLIVELINK_MeocapBPLibrary_generated_h

#define FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapBPLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateMeocapSource);


#define FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapBPLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeocapBPLibrary(); \
	friend struct Z_Construct_UClass_UMeocapBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UMeocapBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeocapLiveLink"), NO_API) \
	DECLARE_SERIALIZER(UMeocapBPLibrary)


#define FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapBPLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeocapBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeocapBPLibrary(UMeocapBPLibrary&&); \
	UMeocapBPLibrary(const UMeocapBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeocapBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeocapBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeocapBPLibrary) \
	NO_API virtual ~UMeocapBPLibrary();


#define FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapBPLibrary_h_9_PROLOG
#define FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapBPLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapBPLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapBPLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapBPLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEOCAPLIVELINK_API UClass* StaticClass<class UMeocapBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MeocapLiveDemo_Plugins_MeocapLiveLink_Source_MeocapLiveLink_Public_MeocapBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
