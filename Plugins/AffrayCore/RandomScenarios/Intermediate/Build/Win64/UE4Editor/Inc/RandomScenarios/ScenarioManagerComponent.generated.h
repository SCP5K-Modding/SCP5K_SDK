// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RANDOMSCENARIOS_ScenarioManagerComponent_generated_h
#error "ScenarioManagerComponent.generated.h already included, missing '#pragma once' in ScenarioManagerComponent.h"
#endif
#define RANDOMSCENARIOS_ScenarioManagerComponent_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioManagerComponent_h_10_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioManagerComponent_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSelectNextScenario); \
	DECLARE_FUNCTION(execSelectRandomScenario); \
	DECLARE_FUNCTION(execSetCurrentScenario); \
	DECLARE_FUNCTION(execSetCurrentScenarios);


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioManagerComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSelectNextScenario); \
	DECLARE_FUNCTION(execSelectRandomScenario); \
	DECLARE_FUNCTION(execSetCurrentScenario); \
	DECLARE_FUNCTION(execSetCurrentScenarios);


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioManagerComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScenarioManagerComponent(); \
	friend struct Z_Construct_UClass_UScenarioManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UScenarioManagerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RandomScenarios"), NO_API) \
	DECLARE_SERIALIZER(UScenarioManagerComponent)


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioManagerComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUScenarioManagerComponent(); \
	friend struct Z_Construct_UClass_UScenarioManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UScenarioManagerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RandomScenarios"), NO_API) \
	DECLARE_SERIALIZER(UScenarioManagerComponent)


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioManagerComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScenarioManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScenarioManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScenarioManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScenarioManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScenarioManagerComponent(UScenarioManagerComponent&&); \
	NO_API UScenarioManagerComponent(const UScenarioManagerComponent&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioManagerComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScenarioManagerComponent(UScenarioManagerComponent&&); \
	NO_API UScenarioManagerComponent(const UScenarioManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScenarioManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScenarioManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScenarioManagerComponent)


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioManagerComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentScenarios() { return STRUCT_OFFSET(UScenarioManagerComponent, CurrentScenarios); } \
	FORCEINLINE static uint32 __PPO__NumberOfScenariosToSelect() { return STRUCT_OFFSET(UScenarioManagerComponent, NumberOfScenariosToSelect); } \
	FORCEINLINE static uint32 __PPO__Scenarios() { return STRUCT_OFFSET(UScenarioManagerComponent, Scenarios); } \
	FORCEINLINE static uint32 __PPO__bSelectRandomScenario() { return STRUCT_OFFSET(UScenarioManagerComponent, bSelectRandomScenario); }


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioManagerComponent_h_8_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioManagerComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioManagerComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioManagerComponent_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioManagerComponent_h_10_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioManagerComponent_h_10_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioManagerComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioManagerComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioManagerComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioManagerComponent_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioManagerComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioManagerComponent_h_10_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioManagerComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RANDOMSCENARIOS_API UClass* StaticClass<class UScenarioManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
