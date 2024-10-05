// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UScenarioComponent;
#ifdef RANDOMSCENARIOS_Scenario_generated_h
#error "Scenario.generated.h already included, missing '#pragma once' in Scenario.h"
#endif
#define RANDOMSCENARIOS_Scenario_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_Scenario_h_10_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_Scenario_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetScenarioComponent);


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_Scenario_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetScenarioComponent);


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_Scenario_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScenario(); \
	friend struct Z_Construct_UClass_AScenario_Statics; \
public: \
	DECLARE_CLASS(AScenario, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RandomScenarios"), NO_API) \
	DECLARE_SERIALIZER(AScenario)


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_Scenario_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAScenario(); \
	friend struct Z_Construct_UClass_AScenario_Statics; \
public: \
	DECLARE_CLASS(AScenario, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RandomScenarios"), NO_API) \
	DECLARE_SERIALIZER(AScenario)


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_Scenario_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AScenario(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScenario) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScenario); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScenario); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScenario(AScenario&&); \
	NO_API AScenario(const AScenario&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_Scenario_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScenario(AScenario&&); \
	NO_API AScenario(const AScenario&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScenario); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScenario); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScenario)


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_Scenario_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ScenarioComponent() { return STRUCT_OFFSET(AScenario, ScenarioComponent); }


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_Scenario_h_8_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_Scenario_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_Scenario_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_Scenario_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_Scenario_h_10_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_Scenario_h_10_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_Scenario_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_Scenario_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_Scenario_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_Scenario_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_Scenario_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_Scenario_h_10_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_Scenario_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RANDOMSCENARIOS_API UClass* StaticClass<class AScenario>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_Scenario_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
