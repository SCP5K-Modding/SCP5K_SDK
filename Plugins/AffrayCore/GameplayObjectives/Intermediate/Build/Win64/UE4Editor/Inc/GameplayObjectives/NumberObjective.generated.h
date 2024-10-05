// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UNumberObjective;
#ifdef GAMEPLAYOBJECTIVES_NumberObjective_generated_h
#error "NumberObjective.generated.h already included, missing '#pragma once' in NumberObjective.h"
#endif
#define GAMEPLAYOBJECTIVES_NumberObjective_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_NumberObjective_h_11_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_NumberObjective_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddAmount); \
	DECLARE_FUNCTION(execCreateNumberObjective); \
	DECLARE_FUNCTION(execGetCurrentValue); \
	DECLARE_FUNCTION(execGetMaxValue); \
	DECLARE_FUNCTION(execSetAmount); \
	DECLARE_FUNCTION(execSetMaxAmount);


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_NumberObjective_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddAmount); \
	DECLARE_FUNCTION(execCreateNumberObjective); \
	DECLARE_FUNCTION(execGetCurrentValue); \
	DECLARE_FUNCTION(execGetMaxValue); \
	DECLARE_FUNCTION(execSetAmount); \
	DECLARE_FUNCTION(execSetMaxAmount);


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_NumberObjective_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNumberObjective(); \
	friend struct Z_Construct_UClass_UNumberObjective_Statics; \
public: \
	DECLARE_CLASS(UNumberObjective, UObjective, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayObjectives"), NO_API) \
	DECLARE_SERIALIZER(UNumberObjective) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MaxValue=NETFIELD_REP_START, \
		CurrentValue, \
		NETFIELD_REP_END=CurrentValue	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_NumberObjective_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUNumberObjective(); \
	friend struct Z_Construct_UClass_UNumberObjective_Statics; \
public: \
	DECLARE_CLASS(UNumberObjective, UObjective, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayObjectives"), NO_API) \
	DECLARE_SERIALIZER(UNumberObjective) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MaxValue=NETFIELD_REP_START, \
		CurrentValue, \
		NETFIELD_REP_END=CurrentValue	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_NumberObjective_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNumberObjective(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNumberObjective) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNumberObjective); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNumberObjective); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNumberObjective(UNumberObjective&&); \
	NO_API UNumberObjective(const UNumberObjective&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_NumberObjective_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNumberObjective(UNumberObjective&&); \
	NO_API UNumberObjective(const UNumberObjective&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNumberObjective); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNumberObjective); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNumberObjective)


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_NumberObjective_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxValue() { return STRUCT_OFFSET(UNumberObjective, MaxValue); } \
	FORCEINLINE static uint32 __PPO__CurrentValue() { return STRUCT_OFFSET(UNumberObjective, CurrentValue); }


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_NumberObjective_h_9_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_NumberObjective_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_NumberObjective_h_11_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_NumberObjective_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_NumberObjective_h_11_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_NumberObjective_h_11_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_NumberObjective_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_NumberObjective_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_NumberObjective_h_11_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_NumberObjective_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_NumberObjective_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_NumberObjective_h_11_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_NumberObjective_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYOBJECTIVES_API UClass* StaticClass<class UNumberObjective>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_NumberObjective_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
