// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RANDOMSCENARIOS_RandomScenarioManager_generated_h
#error "RandomScenarioManager.generated.h already included, missing '#pragma once' in RandomScenarioManager.h"
#endif
#define RANDOMSCENARIOS_RandomScenarioManager_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_RandomScenarioManager_h_10_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_RandomScenarioManager_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSelectNextScenario); \
	DECLARE_FUNCTION(execSelectRandomScenario);


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_RandomScenarioManager_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSelectNextScenario); \
	DECLARE_FUNCTION(execSelectRandomScenario);


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_RandomScenarioManager_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARandomScenarioManager(); \
	friend struct Z_Construct_UClass_ARandomScenarioManager_Statics; \
public: \
	DECLARE_CLASS(ARandomScenarioManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RandomScenarios"), NO_API) \
	DECLARE_SERIALIZER(ARandomScenarioManager)


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_RandomScenarioManager_h_10_INCLASS \
private: \
	static void StaticRegisterNativesARandomScenarioManager(); \
	friend struct Z_Construct_UClass_ARandomScenarioManager_Statics; \
public: \
	DECLARE_CLASS(ARandomScenarioManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RandomScenarios"), NO_API) \
	DECLARE_SERIALIZER(ARandomScenarioManager)


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_RandomScenarioManager_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARandomScenarioManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARandomScenarioManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARandomScenarioManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARandomScenarioManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARandomScenarioManager(ARandomScenarioManager&&); \
	NO_API ARandomScenarioManager(const ARandomScenarioManager&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_RandomScenarioManager_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARandomScenarioManager(ARandomScenarioManager&&); \
	NO_API ARandomScenarioManager(const ARandomScenarioManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARandomScenarioManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARandomScenarioManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARandomScenarioManager)


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_RandomScenarioManager_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ScenarioManagerComponent() { return STRUCT_OFFSET(ARandomScenarioManager, ScenarioManagerComponent); }


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_RandomScenarioManager_h_8_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_RandomScenarioManager_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_RandomScenarioManager_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_RandomScenarioManager_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_RandomScenarioManager_h_10_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_RandomScenarioManager_h_10_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_RandomScenarioManager_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_RandomScenarioManager_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_RandomScenarioManager_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_RandomScenarioManager_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_RandomScenarioManager_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_RandomScenarioManager_h_10_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_RandomScenarioManager_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RANDOMSCENARIOS_API UClass* StaticClass<class ARandomScenarioManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_RandomScenarioManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
