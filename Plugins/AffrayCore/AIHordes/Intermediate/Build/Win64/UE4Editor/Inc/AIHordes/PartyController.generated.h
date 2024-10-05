// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
enum class EHordeAgentMovementMode : uint8;
class APawn;
class AParty;
class AActor;
struct FAIStimulus;
#ifdef AIHORDES_PartyController_generated_h
#error "PartyController.generated.h already included, missing '#pragma once' in PartyController.h"
#endif
#define AIHORDES_PartyController_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_RPC_WRAPPERS \
	virtual void Alert_Implementation(); \
	virtual FVector Investigate_Implementation(FVector position); \
	virtual void OnEndSeePawn_Implementation(APawn* SeenPawn); \
	virtual void OnSeePawn_Implementation(APawn* SeenPawn); \
	virtual void StopInvestigating_Implementation(); \
 \
	DECLARE_FUNCTION(execAlert); \
	DECLARE_FUNCTION(execGeneratePath); \
	DECLARE_FUNCTION(execGetAlertThreshold); \
	DECLARE_FUNCTION(execGetClosest); \
	DECLARE_FUNCTION(execGetCooldownSpeed); \
	DECLARE_FUNCTION(execGetCurrentTarget); \
	DECLARE_FUNCTION(execGetDetectionLevel); \
	DECLARE_FUNCTION(execGetInvestigateThreshold); \
	DECLARE_FUNCTION(execGetInvestigatingPosition); \
	DECLARE_FUNCTION(execGetMaxDetectionLevel); \
	DECLARE_FUNCTION(execGetParty); \
	DECLARE_FUNCTION(execGetSeenTargets); \
	DECLARE_FUNCTION(execInvestigate); \
	DECLARE_FUNCTION(execOnEndSeePawn); \
	DECLARE_FUNCTION(execOnPerceptionUpdated); \
	DECLARE_FUNCTION(execOnSeePawn); \
	DECLARE_FUNCTION(execSetDetectionLevel); \
	DECLARE_FUNCTION(execStartInvestigating); \
	DECLARE_FUNCTION(execStopInvestigating); \
	DECLARE_FUNCTION(execStopMoving);


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Alert_Implementation(); \
	virtual FVector Investigate_Implementation(FVector position); \
	virtual void OnEndSeePawn_Implementation(APawn* SeenPawn); \
	virtual void OnSeePawn_Implementation(APawn* SeenPawn); \
	virtual void StopInvestigating_Implementation(); \
 \
	DECLARE_FUNCTION(execAlert); \
	DECLARE_FUNCTION(execGeneratePath); \
	DECLARE_FUNCTION(execGetAlertThreshold); \
	DECLARE_FUNCTION(execGetClosest); \
	DECLARE_FUNCTION(execGetCooldownSpeed); \
	DECLARE_FUNCTION(execGetCurrentTarget); \
	DECLARE_FUNCTION(execGetDetectionLevel); \
	DECLARE_FUNCTION(execGetInvestigateThreshold); \
	DECLARE_FUNCTION(execGetInvestigatingPosition); \
	DECLARE_FUNCTION(execGetMaxDetectionLevel); \
	DECLARE_FUNCTION(execGetParty); \
	DECLARE_FUNCTION(execGetSeenTargets); \
	DECLARE_FUNCTION(execInvestigate); \
	DECLARE_FUNCTION(execOnEndSeePawn); \
	DECLARE_FUNCTION(execOnPerceptionUpdated); \
	DECLARE_FUNCTION(execOnSeePawn); \
	DECLARE_FUNCTION(execSetDetectionLevel); \
	DECLARE_FUNCTION(execStartInvestigating); \
	DECLARE_FUNCTION(execStopInvestigating); \
	DECLARE_FUNCTION(execStopMoving);


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_EVENT_PARMS \
	struct PartyController_eventInvestigate_Parms \
	{ \
		FVector position; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PartyController_eventInvestigate_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct PartyController_eventOnEndSeePawn_Parms \
	{ \
		APawn* SeenPawn; \
	}; \
	struct PartyController_eventOnSeePawn_Parms \
	{ \
		APawn* SeenPawn; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPartyController(); \
	friend struct Z_Construct_UClass_APartyController_Statics; \
public: \
	DECLARE_CLASS(APartyController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIHordes"), NO_API) \
	DECLARE_SERIALIZER(APartyController)


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPartyController(); \
	friend struct Z_Construct_UClass_APartyController_Statics; \
public: \
	DECLARE_CLASS(APartyController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIHordes"), NO_API) \
	DECLARE_SERIALIZER(APartyController)


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APartyController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APartyController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APartyController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APartyController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APartyController(APartyController&&); \
	NO_API APartyController(const APartyController&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APartyController(APartyController&&); \
	NO_API APartyController(const APartyController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APartyController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APartyController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APartyController)


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SeenTargets() { return STRUCT_OFFSET(APartyController, SeenTargets); } \
	FORCEINLINE static uint32 __PPO__CurrentTarget() { return STRUCT_OFFSET(APartyController, CurrentTarget); } \
	FORCEINLINE static uint32 __PPO__AlertThreshold() { return STRUCT_OFFSET(APartyController, AlertThreshold); } \
	FORCEINLINE static uint32 __PPO__InvestigateThreshold() { return STRUCT_OFFSET(APartyController, InvestigateThreshold); } \
	FORCEINLINE static uint32 __PPO__MaxDetectionLevel() { return STRUCT_OFFSET(APartyController, MaxDetectionLevel); } \
	FORCEINLINE static uint32 __PPO__DetectionCooldownSpeed() { return STRUCT_OFFSET(APartyController, DetectionCooldownSpeed); } \
	FORCEINLINE static uint32 __PPO__InvestigateLoudnessThreshold() { return STRUCT_OFFSET(APartyController, InvestigateLoudnessThreshold); } \
	FORCEINLINE static uint32 __PPO__bInvestigating() { return STRUCT_OFFSET(APartyController, bInvestigating); } \
	FORCEINLINE static uint32 __PPO__InvestigatingPosition() { return STRUCT_OFFSET(APartyController, InvestigatingPosition); } \
	FORCEINLINE static uint32 __PPO__DetectionLevel() { return STRUCT_OFFSET(APartyController, DetectionLevel); }


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_13_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIHORDES_API UClass* StaticClass<class APartyController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_PartyController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
