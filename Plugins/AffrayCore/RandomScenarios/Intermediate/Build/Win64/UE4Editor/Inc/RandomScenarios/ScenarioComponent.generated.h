// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RANDOMSCENARIOS_ScenarioComponent_generated_h
#error "ScenarioComponent.generated.h already included, missing '#pragma once' in ScenarioComponent.h"
#endif
#define RANDOMSCENARIOS_ScenarioComponent_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioComponent_h_11_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEnabled); \
	DECLARE_FUNCTION(execOnRep_Enabled); \
	DECLARE_FUNCTION(execSetScenarioEnabled);


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEnabled); \
	DECLARE_FUNCTION(execOnRep_Enabled); \
	DECLARE_FUNCTION(execSetScenarioEnabled);


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScenarioComponent(); \
	friend struct Z_Construct_UClass_UScenarioComponent_Statics; \
public: \
	DECLARE_CLASS(UScenarioComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RandomScenarios"), NO_API) \
	DECLARE_SERIALIZER(UScenarioComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUScenarioComponent(); \
	friend struct Z_Construct_UClass_UScenarioComponent_Statics; \
public: \
	DECLARE_CLASS(UScenarioComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RandomScenarios"), NO_API) \
	DECLARE_SERIALIZER(UScenarioComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScenarioComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScenarioComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScenarioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScenarioComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScenarioComponent(UScenarioComponent&&); \
	NO_API UScenarioComponent(const UScenarioComponent&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScenarioComponent(UScenarioComponent&&); \
	NO_API UScenarioComponent(const UScenarioComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScenarioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScenarioComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScenarioComponent)


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Actors() { return STRUCT_OFFSET(UScenarioComponent, Actors); } \
	FORCEINLINE static uint32 __PPO__bEnabled() { return STRUCT_OFFSET(UScenarioComponent, bEnabled); } \
	FORCEINLINE static uint32 __PPO__bIsManaged() { return STRUCT_OFFSET(UScenarioComponent, bIsManaged); } \
	FORCEINLINE static uint32 __PPO__bForceObjectsStationary() { return STRUCT_OFFSET(UScenarioComponent, bForceObjectsStationary); } \
	FORCEINLINE static uint32 __PPO__ActivatingManagers() { return STRUCT_OFFSET(UScenarioComponent, ActivatingManagers); }


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioComponent_h_9_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioComponent_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioComponent_h_11_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioComponent_h_11_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioComponent_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioComponent_h_11_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RANDOMSCENARIOS_API UClass* StaticClass<class UScenarioComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
