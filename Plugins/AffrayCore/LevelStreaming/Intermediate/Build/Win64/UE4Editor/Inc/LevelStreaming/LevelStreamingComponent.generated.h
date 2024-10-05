// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevel;
class UWorld;
class AActor;
#ifdef LEVELSTREAMING_LevelStreamingComponent_generated_h
#error "LevelStreamingComponent.generated.h already included, missing '#pragma once' in LevelStreamingComponent.h"
#endif
#define LEVELSTREAMING_LevelStreamingComponent_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_LevelStreamingComponent_h_16_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_LevelStreamingComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallLevelLoaded); \
	DECLARE_FUNCTION(execCallLevelUnloaded); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execIsLevelLoaded); \
	DECLARE_FUNCTION(execIsLevelVisible); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execRecalculateLevels);


#define SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_LevelStreamingComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallLevelLoaded); \
	DECLARE_FUNCTION(execCallLevelUnloaded); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execIsLevelLoaded); \
	DECLARE_FUNCTION(execIsLevelVisible); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execRecalculateLevels);


#define SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_LevelStreamingComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelStreamingComponent(); \
	friend struct Z_Construct_UClass_ULevelStreamingComponent_Statics; \
public: \
	DECLARE_CLASS(ULevelStreamingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelStreaming"), NO_API) \
	DECLARE_SERIALIZER(ULevelStreamingComponent)


#define SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_LevelStreamingComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesULevelStreamingComponent(); \
	friend struct Z_Construct_UClass_ULevelStreamingComponent_Statics; \
public: \
	DECLARE_CLASS(ULevelStreamingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelStreaming"), NO_API) \
	DECLARE_SERIALIZER(ULevelStreamingComponent)


#define SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_LevelStreamingComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelStreamingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreamingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelStreamingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreamingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelStreamingComponent(ULevelStreamingComponent&&); \
	NO_API ULevelStreamingComponent(const ULevelStreamingComponent&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_LevelStreamingComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelStreamingComponent(ULevelStreamingComponent&&); \
	NO_API ULevelStreamingComponent(const ULevelStreamingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelStreamingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreamingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreamingComponent)


#define SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_LevelStreamingComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentStreamingInfo() { return STRUCT_OFFSET(ULevelStreamingComponent, CurrentStreamingInfo); } \
	FORCEINLINE static uint32 __PPO__DefaultLoadedState() { return STRUCT_OFFSET(ULevelStreamingComponent, DefaultLoadedState); } \
	FORCEINLINE static uint32 __PPO__bTryInitializeEveryFrame() { return STRUCT_OFFSET(ULevelStreamingComponent, bTryInitializeEveryFrame); } \
	FORCEINLINE static uint32 __PPO__bIsMasterStreamingComponent() { return STRUCT_OFFSET(ULevelStreamingComponent, bIsMasterStreamingComponent); } \
	FORCEINLINE static uint32 __PPO__ChildComponents() { return STRUCT_OFFSET(ULevelStreamingComponent, ChildComponents); }


#define SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_LevelStreamingComponent_h_14_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_LevelStreamingComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_LevelStreamingComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_LevelStreamingComponent_h_16_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_LevelStreamingComponent_h_16_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_LevelStreamingComponent_h_16_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_LevelStreamingComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_LevelStreamingComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_LevelStreamingComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_LevelStreamingComponent_h_16_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_LevelStreamingComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_LevelStreamingComponent_h_16_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_LevelStreamingComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSTREAMING_API UClass* StaticClass<class ULevelStreamingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_LevelStreaming_Source_LevelStreaming_Public_LevelStreamingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
