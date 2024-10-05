// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef MODULARASSETS_ModularSplineAsset_generated_h
#error "ModularSplineAsset.generated.h already included, missing '#pragma once' in ModularSplineAsset.h"
#endif
#define MODULARASSETS_ModularSplineAsset_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_RPC_WRAPPERS \
	virtual void EditorTick_Implementation(const float DeltaTime); \
 \
	DECLARE_FUNCTION(execEditorTick); \
	DECLARE_FUNCTION(execGetDistanceToEndOfMesh); \
	DECLARE_FUNCTION(execRefreshAsset); \
	DECLARE_FUNCTION(execSetSplinePoint);


#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EditorTick_Implementation(const float DeltaTime); \
 \
	DECLARE_FUNCTION(execEditorTick); \
	DECLARE_FUNCTION(execGetDistanceToEndOfMesh); \
	DECLARE_FUNCTION(execRefreshAsset); \
	DECLARE_FUNCTION(execSetSplinePoint);


#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_EVENT_PARMS \
	struct ModularSplineAsset_eventEditorTick_Parms \
	{ \
		float DeltaTime; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAModularSplineAsset(); \
	friend struct Z_Construct_UClass_AModularSplineAsset_Statics; \
public: \
	DECLARE_CLASS(AModularSplineAsset, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularAssets"), NO_API) \
	DECLARE_SERIALIZER(AModularSplineAsset)


#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAModularSplineAsset(); \
	friend struct Z_Construct_UClass_AModularSplineAsset_Statics; \
public: \
	DECLARE_CLASS(AModularSplineAsset, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularAssets"), NO_API) \
	DECLARE_SERIALIZER(AModularSplineAsset)


#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AModularSplineAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AModularSplineAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModularSplineAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModularSplineAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AModularSplineAsset(AModularSplineAsset&&); \
	NO_API AModularSplineAsset(const AModularSplineAsset&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AModularSplineAsset(AModularSplineAsset&&); \
	NO_API AModularSplineAsset(const AModularSplineAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModularSplineAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModularSplineAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AModularSplineAsset)


#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_17_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARASSETS_API UClass* StaticClass<class AModularSplineAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularSplineAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
