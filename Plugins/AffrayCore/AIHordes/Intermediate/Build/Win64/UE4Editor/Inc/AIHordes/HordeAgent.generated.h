// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EHordeAgentMovementMode : uint8;
class AHorde;
class AHordeAgentController;
class AParty;
#ifdef AIHORDES_HordeAgent_generated_h
#error "HordeAgent.generated.h already included, missing '#pragma once' in HordeAgent.h"
#endif
#define AIHORDES_HordeAgent_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_RPC_WRAPPERS \
	virtual void SetMovementMode_Implementation(EHordeAgentMovementMode MovementMode); \
 \
	DECLARE_FUNCTION(execGetCrawlingSpeed); \
	DECLARE_FUNCTION(execGetCurrentMovementMode); \
	DECLARE_FUNCTION(execGetHorde); \
	DECLARE_FUNCTION(execGetHordeAgentController); \
	DECLARE_FUNCTION(execGetParty); \
	DECLARE_FUNCTION(execGetRunningSpeed); \
	DECLARE_FUNCTION(execGetTickInterval); \
	DECLARE_FUNCTION(execGetWalkingSpeed); \
	DECLARE_FUNCTION(execGetWanderingSpeed); \
	DECLARE_FUNCTION(execSetHorde); \
	DECLARE_FUNCTION(execSetMovementMode); \
	DECLARE_FUNCTION(execSetParty); \
	DECLARE_FUNCTION(execSetTickInterval);


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetMovementMode_Implementation(EHordeAgentMovementMode MovementMode); \
 \
	DECLARE_FUNCTION(execGetCrawlingSpeed); \
	DECLARE_FUNCTION(execGetCurrentMovementMode); \
	DECLARE_FUNCTION(execGetHorde); \
	DECLARE_FUNCTION(execGetHordeAgentController); \
	DECLARE_FUNCTION(execGetParty); \
	DECLARE_FUNCTION(execGetRunningSpeed); \
	DECLARE_FUNCTION(execGetTickInterval); \
	DECLARE_FUNCTION(execGetWalkingSpeed); \
	DECLARE_FUNCTION(execGetWanderingSpeed); \
	DECLARE_FUNCTION(execSetHorde); \
	DECLARE_FUNCTION(execSetMovementMode); \
	DECLARE_FUNCTION(execSetParty); \
	DECLARE_FUNCTION(execSetTickInterval);


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_EVENT_PARMS \
	struct HordeAgent_eventSetMovementMode_Parms \
	{ \
		EHordeAgentMovementMode MovementMode; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHordeAgent(); \
	friend struct Z_Construct_UClass_AHordeAgent_Statics; \
public: \
	DECLARE_CLASS(AHordeAgent, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIHordes"), NO_API) \
	DECLARE_SERIALIZER(AHordeAgent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHorde=NETFIELD_REP_START, \
		CurrentParty, \
		NETFIELD_REP_END=CurrentParty	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAHordeAgent(); \
	friend struct Z_Construct_UClass_AHordeAgent_Statics; \
public: \
	DECLARE_CLASS(AHordeAgent, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIHordes"), NO_API) \
	DECLARE_SERIALIZER(AHordeAgent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHorde=NETFIELD_REP_START, \
		CurrentParty, \
		NETFIELD_REP_END=CurrentParty	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHordeAgent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHordeAgent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHordeAgent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHordeAgent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHordeAgent(AHordeAgent&&); \
	NO_API AHordeAgent(const AHordeAgent&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHordeAgent(AHordeAgent&&); \
	NO_API AHordeAgent(const AHordeAgent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHordeAgent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHordeAgent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHordeAgent)


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentHorde() { return STRUCT_OFFSET(AHordeAgent, CurrentHorde); } \
	FORCEINLINE static uint32 __PPO__CurrentParty() { return STRUCT_OFFSET(AHordeAgent, CurrentParty); } \
	FORCEINLINE static uint32 __PPO__TickInterval() { return STRUCT_OFFSET(AHordeAgent, TickInterval); } \
	FORCEINLINE static uint32 __PPO__SpeedVariation() { return STRUCT_OFFSET(AHordeAgent, SpeedVariation); } \
	FORCEINLINE static uint32 __PPO__WanderingSpeed() { return STRUCT_OFFSET(AHordeAgent, WanderingSpeed); } \
	FORCEINLINE static uint32 __PPO__WalkingSpeed() { return STRUCT_OFFSET(AHordeAgent, WalkingSpeed); } \
	FORCEINLINE static uint32 __PPO__CrawlingSpeed() { return STRUCT_OFFSET(AHordeAgent, CrawlingSpeed); } \
	FORCEINLINE static uint32 __PPO__RunningSpeed() { return STRUCT_OFFSET(AHordeAgent, RunningSpeed); } \
	FORCEINLINE static uint32 __PPO__CurrentMovementMode() { return STRUCT_OFFSET(AHordeAgent, CurrentMovementMode); }


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_11_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIHORDES_API UClass* StaticClass<class AHordeAgent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
