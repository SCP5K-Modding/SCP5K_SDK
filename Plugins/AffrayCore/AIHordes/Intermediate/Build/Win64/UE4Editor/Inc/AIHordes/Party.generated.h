// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AHordeAgent;
class AActor;
class AParty;
class AHorde;
class APartyController;
#ifdef AIHORDES_Party_generated_h
#error "Party.generated.h already included, missing '#pragma once' in Party.h"
#endif
#define AIHORDES_Party_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_RPC_WRAPPERS \
	virtual void MergeToParty_Implementation(AParty* Party); \
	virtual void SetHorde_Implementation(AHorde* NewHorde); \
	virtual void UpdateBounds_Implementation(); \
 \
	DECLARE_FUNCTION(execAddAgent); \
	DECLARE_FUNCTION(execCalculatePartyLOD); \
	DECLARE_FUNCTION(execCompareDistance); \
	DECLARE_FUNCTION(execGetAgents); \
	DECLARE_FUNCTION(execGetCurrentHorde); \
	DECLARE_FUNCTION(execGetMaxAgents); \
	DECLARE_FUNCTION(execGetMaxPlayerLODDistance); \
	DECLARE_FUNCTION(execGetMaxRadius); \
	DECLARE_FUNCTION(execGetMaxTickInterval); \
	DECLARE_FUNCTION(execGetMinPlayerLODDistance); \
	DECLARE_FUNCTION(execGetMinTickInterval); \
	DECLARE_FUNCTION(execGetPartyController); \
	DECLARE_FUNCTION(execGetRadius); \
	DECLARE_FUNCTION(execMergeToParty); \
	DECLARE_FUNCTION(execRemoveAgent); \
	DECLARE_FUNCTION(execRemoveParty); \
	DECLARE_FUNCTION(execSetHorde); \
	DECLARE_FUNCTION(execUpdateBounds);


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MergeToParty_Implementation(AParty* Party); \
	virtual void SetHorde_Implementation(AHorde* NewHorde); \
	virtual void UpdateBounds_Implementation(); \
 \
	DECLARE_FUNCTION(execAddAgent); \
	DECLARE_FUNCTION(execCalculatePartyLOD); \
	DECLARE_FUNCTION(execCompareDistance); \
	DECLARE_FUNCTION(execGetAgents); \
	DECLARE_FUNCTION(execGetCurrentHorde); \
	DECLARE_FUNCTION(execGetMaxAgents); \
	DECLARE_FUNCTION(execGetMaxPlayerLODDistance); \
	DECLARE_FUNCTION(execGetMaxRadius); \
	DECLARE_FUNCTION(execGetMaxTickInterval); \
	DECLARE_FUNCTION(execGetMinPlayerLODDistance); \
	DECLARE_FUNCTION(execGetMinTickInterval); \
	DECLARE_FUNCTION(execGetPartyController); \
	DECLARE_FUNCTION(execGetRadius); \
	DECLARE_FUNCTION(execMergeToParty); \
	DECLARE_FUNCTION(execRemoveAgent); \
	DECLARE_FUNCTION(execRemoveParty); \
	DECLARE_FUNCTION(execSetHorde); \
	DECLARE_FUNCTION(execUpdateBounds);


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_EVENT_PARMS \
	struct Party_eventMergeToParty_Parms \
	{ \
		AParty* Party; \
	}; \
	struct Party_eventSetHorde_Parms \
	{ \
		AHorde* NewHorde; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParty(); \
	friend struct Z_Construct_UClass_AParty_Statics; \
public: \
	DECLARE_CLASS(AParty, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIHordes"), NO_API) \
	DECLARE_SERIALIZER(AParty) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHorde=NETFIELD_REP_START, \
		Agents, \
		Radius, \
		NETFIELD_REP_END=Radius	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAParty(); \
	friend struct Z_Construct_UClass_AParty_Statics; \
public: \
	DECLARE_CLASS(AParty, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIHordes"), NO_API) \
	DECLARE_SERIALIZER(AParty) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHorde=NETFIELD_REP_START, \
		Agents, \
		Radius, \
		NETFIELD_REP_END=Radius	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParty(AParty&&); \
	NO_API AParty(const AParty&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParty(AParty&&); \
	NO_API AParty(const AParty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParty)


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentHorde() { return STRUCT_OFFSET(AParty, CurrentHorde); } \
	FORCEINLINE static uint32 __PPO__Agents() { return STRUCT_OFFSET(AParty, Agents); } \
	FORCEINLINE static uint32 __PPO__MinPlayerLODDistance() { return STRUCT_OFFSET(AParty, MinPlayerLODDistance); } \
	FORCEINLINE static uint32 __PPO__MaxPlayerLODDistance() { return STRUCT_OFFSET(AParty, MaxPlayerLODDistance); } \
	FORCEINLINE static uint32 __PPO__MinTickInterval() { return STRUCT_OFFSET(AParty, MinTickInterval); } \
	FORCEINLINE static uint32 __PPO__MaxTickInterval() { return STRUCT_OFFSET(AParty, MaxTickInterval); } \
	FORCEINLINE static uint32 __PPO__Radius() { return STRUCT_OFFSET(AParty, Radius); } \
	FORCEINLINE static uint32 __PPO__MaxRadius() { return STRUCT_OFFSET(AParty, MaxRadius); } \
	FORCEINLINE static uint32 __PPO__MinRadius() { return STRUCT_OFFSET(AParty, MinRadius); } \
	FORCEINLINE static uint32 __PPO__MaxAgents() { return STRUCT_OFFSET(AParty, MaxAgents); }


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_12_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIHORDES_API UClass* StaticClass<class AParty>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_Party_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
