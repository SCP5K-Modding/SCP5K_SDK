// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARASSETS_ModularAsset_generated_h
#error "ModularAsset.generated.h already included, missing '#pragma once' in ModularAsset.h"
#endif
#define MODULARASSETS_ModularAsset_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularAsset_h_17_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularAsset_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRefreshAsset); \
	DECLARE_FUNCTION(execRefreshComponents);


#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularAsset_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRefreshAsset); \
	DECLARE_FUNCTION(execRefreshComponents);


#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularAsset_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAModularAsset(); \
	friend struct Z_Construct_UClass_AModularAsset_Statics; \
public: \
	DECLARE_CLASS(AModularAsset, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularAssets"), NO_API) \
	DECLARE_SERIALIZER(AModularAsset) \
	virtual UObject* _getUObject() const override { return const_cast<AModularAsset*>(this); }


#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularAsset_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAModularAsset(); \
	friend struct Z_Construct_UClass_AModularAsset_Statics; \
public: \
	DECLARE_CLASS(AModularAsset, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularAssets"), NO_API) \
	DECLARE_SERIALIZER(AModularAsset) \
	virtual UObject* _getUObject() const override { return const_cast<AModularAsset*>(this); }


#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularAsset_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AModularAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AModularAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModularAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModularAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AModularAsset(AModularAsset&&); \
	NO_API AModularAsset(const AModularAsset&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularAsset_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AModularAsset(AModularAsset&&); \
	NO_API AModularAsset(const AModularAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModularAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModularAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AModularAsset)


#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularAsset_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SceneComponent() { return STRUCT_OFFSET(AModularAsset, SceneComponent); } \
	FORCEINLINE static uint32 __PPO__InstancedMeshes() { return STRUCT_OFFSET(AModularAsset, InstancedMeshes); } \
	FORCEINLINE static uint32 __PPO__Meshes() { return STRUCT_OFFSET(AModularAsset, Meshes); } \
	FORCEINLINE static uint32 __PPO__Materials() { return STRUCT_OFFSET(AModularAsset, Materials); } \
	FORCEINLINE static uint32 __PPO__AggregateCollision() { return STRUCT_OFFSET(AModularAsset, AggregateCollision); } \
	FORCEINLINE static uint32 __PPO__bUseLODs() { return STRUCT_OFFSET(AModularAsset, bUseLODs); } \
	FORCEINLINE static uint32 __PPO__bUseAsOccluder() { return STRUCT_OFFSET(AModularAsset, bUseAsOccluder); } \
	FORCEINLINE static uint32 __PPO__bCastShadows() { return STRUCT_OFFSET(AModularAsset, bCastShadows); } \
	FORCEINLINE static uint32 __PPO__bUseSubtractorCaching() { return STRUCT_OFFSET(AModularAsset, bUseSubtractorCaching); } \
	FORCEINLINE static uint32 __PPO__bEnableCollisionAggregation() { return STRUCT_OFFSET(AModularAsset, bEnableCollisionAggregation); } \
	FORCEINLINE static uint32 __PPO__bOverridePhysicalMaterial() { return STRUCT_OFFSET(AModularAsset, bOverridePhysicalMaterial); } \
	FORCEINLINE static uint32 __PPO__AggregatePhysicalMaterial() { return STRUCT_OFFSET(AModularAsset, AggregatePhysicalMaterial); }


#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularAsset_h_15_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularAsset_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularAsset_h_17_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularAsset_h_17_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularAsset_h_17_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularAsset_h_17_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularAsset_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularAsset_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularAsset_h_17_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularAsset_h_17_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularAsset_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularAsset_h_17_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularAsset_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARASSETS_API UClass* StaticClass<class AModularAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_ModularAssets_Source_ModularAssets_Public_ModularAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
