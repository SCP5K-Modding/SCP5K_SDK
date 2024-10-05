// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPlayerObjective;
#ifdef GAMEPLAYOBJECTIVES_PlayerObjective_generated_h
#error "PlayerObjective.generated.h already included, missing '#pragma once' in PlayerObjective.h"
#endif
#define GAMEPLAYOBJECTIVES_PlayerObjective_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjective_h_11_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjective_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddPlayer); \
	DECLARE_FUNCTION(execCreatePlayerObjective); \
	DECLARE_FUNCTION(execGetCurrentAmountPlayers); \
	DECLARE_FUNCTION(execGetRequiredAmountPlayers); \
	DECLARE_FUNCTION(execOnRep_CurrentPlayers); \
	DECLARE_FUNCTION(execOnRep_RequiredPlayers); \
	DECLARE_FUNCTION(execRemovePlayer); \
	DECLARE_FUNCTION(execSetRequiredPlayers);


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjective_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddPlayer); \
	DECLARE_FUNCTION(execCreatePlayerObjective); \
	DECLARE_FUNCTION(execGetCurrentAmountPlayers); \
	DECLARE_FUNCTION(execGetRequiredAmountPlayers); \
	DECLARE_FUNCTION(execOnRep_CurrentPlayers); \
	DECLARE_FUNCTION(execOnRep_RequiredPlayers); \
	DECLARE_FUNCTION(execRemovePlayer); \
	DECLARE_FUNCTION(execSetRequiredPlayers);


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjective_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerObjective(); \
	friend struct Z_Construct_UClass_UPlayerObjective_Statics; \
public: \
	DECLARE_CLASS(UPlayerObjective, UObjective, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayObjectives"), NO_API) \
	DECLARE_SERIALIZER(UPlayerObjective) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RequiredPlayers=NETFIELD_REP_START, \
		CurrentPlayers, \
		bRequiresPlayersForTimer, \
		bStopUnderRequiredPlayers, \
		NETFIELD_REP_END=bStopUnderRequiredPlayers	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjective_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerObjective(); \
	friend struct Z_Construct_UClass_UPlayerObjective_Statics; \
public: \
	DECLARE_CLASS(UPlayerObjective, UObjective, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayObjectives"), NO_API) \
	DECLARE_SERIALIZER(UPlayerObjective) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RequiredPlayers=NETFIELD_REP_START, \
		CurrentPlayers, \
		bRequiresPlayersForTimer, \
		bStopUnderRequiredPlayers, \
		NETFIELD_REP_END=bStopUnderRequiredPlayers	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjective_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerObjective(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerObjective) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerObjective); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerObjective); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerObjective(UPlayerObjective&&); \
	NO_API UPlayerObjective(const UPlayerObjective&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjective_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerObjective(UPlayerObjective&&); \
	NO_API UPlayerObjective(const UPlayerObjective&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerObjective); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerObjective); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerObjective)


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjective_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RequiredPlayers() { return STRUCT_OFFSET(UPlayerObjective, RequiredPlayers); } \
	FORCEINLINE static uint32 __PPO__CurrentPlayers() { return STRUCT_OFFSET(UPlayerObjective, CurrentPlayers); } \
	FORCEINLINE static uint32 __PPO__bRequiresPlayersForTimer() { return STRUCT_OFFSET(UPlayerObjective, bRequiresPlayersForTimer); } \
	FORCEINLINE static uint32 __PPO__bStopUnderRequiredPlayers() { return STRUCT_OFFSET(UPlayerObjective, bStopUnderRequiredPlayers); }


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjective_h_9_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjective_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjective_h_11_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjective_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjective_h_11_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjective_h_11_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjective_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjective_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjective_h_11_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjective_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjective_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjective_h_11_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjective_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYOBJECTIVES_API UClass* StaticClass<class UPlayerObjective>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_PlayerObjective_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
