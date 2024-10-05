// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FSAITarget;
enum class ESAIState : uint8;
struct FAIStimulus;
struct FVector;
struct FSAISound;
class UAIInfoSharingComponent;
#ifdef AISENTIENCE_SAIController_generated_h
#error "SAIController.generated.h already included, missing '#pragma once' in SAIController.h"
#endif
#define AISENTIENCE_SAIController_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_RPC_WRAPPERS \
	virtual void OnAISenseDamage_Implementation(AActor* Actor, FAIStimulus Stimulus); \
	virtual void OnAISenseHearing_Implementation(AActor* Actor, FAIStimulus Stimulus); \
	virtual void OnAISenseSight_Implementation(AActor* Actor, FAIStimulus Stimulus); \
	virtual void OnAISenseSuppression_Implementation(AActor* Actor, FVector Location, bool bSuperSonic); \
	virtual void StartInvestigating_Implementation(FSAISound& NewSound); \
	virtual void StopInvestigating_Implementation(); \
	virtual void UpdateBlackBoardParameters_Implementation(); \
	virtual void UpdateCurrentTarget_Implementation(AActor* NewTarget, bool bLockTarget); \
 \
	DECLARE_FUNCTION(execAddAlertness); \
	DECLARE_FUNCTION(execAddDetection); \
	DECLARE_FUNCTION(execAddTarget); \
	DECLARE_FUNCTION(execBlueprintGetTeamAttitudeTowards); \
	DECLARE_FUNCTION(execEndIdle); \
	DECLARE_FUNCTION(execGetCurrentTarget); \
	DECLARE_FUNCTION(execGetIgnoredTargets); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetTargetRef); \
	DECLARE_FUNCTION(execGetTargets); \
	DECLARE_FUNCTION(execGetTargetScore); \
	DECLARE_FUNCTION(execGetTargetStrength); \
	DECLARE_FUNCTION(execHasCurrentTarget); \
	DECLARE_FUNCTION(execIgnoreTarget); \
	DECLARE_FUNCTION(execIsAlert); \
	DECLARE_FUNCTION(execIsInvestigating); \
	DECLARE_FUNCTION(execIsTargetDead); \
	DECLARE_FUNCTION(execOnAISenseDamage); \
	DECLARE_FUNCTION(execOnAISenseHearing); \
	DECLARE_FUNCTION(execOnAISenseSight); \
	DECLARE_FUNCTION(execOnAISenseSuppression); \
	DECLARE_FUNCTION(execOnTargetPerceptionUpdated); \
	DECLARE_FUNCTION(execPickTarget); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execStartIdle); \
	DECLARE_FUNCTION(execStartInvestigating); \
	DECLARE_FUNCTION(execStopInvestigating); \
	DECLARE_FUNCTION(execTickTargets); \
	DECLARE_FUNCTION(execUnIgnoreTarget); \
	DECLARE_FUNCTION(execUpdateBlackBoardParameters); \
	DECLARE_FUNCTION(execUpdateCurrentTarget);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnAISenseDamage_Implementation(AActor* Actor, FAIStimulus Stimulus); \
	virtual void OnAISenseHearing_Implementation(AActor* Actor, FAIStimulus Stimulus); \
	virtual void OnAISenseSight_Implementation(AActor* Actor, FAIStimulus Stimulus); \
	virtual void OnAISenseSuppression_Implementation(AActor* Actor, FVector Location, bool bSuperSonic); \
	virtual void StartInvestigating_Implementation(FSAISound& NewSound); \
	virtual void StopInvestigating_Implementation(); \
	virtual void UpdateBlackBoardParameters_Implementation(); \
	virtual void UpdateCurrentTarget_Implementation(AActor* NewTarget, bool bLockTarget); \
 \
	DECLARE_FUNCTION(execAddAlertness); \
	DECLARE_FUNCTION(execAddDetection); \
	DECLARE_FUNCTION(execAddTarget); \
	DECLARE_FUNCTION(execBlueprintGetTeamAttitudeTowards); \
	DECLARE_FUNCTION(execEndIdle); \
	DECLARE_FUNCTION(execGetCurrentTarget); \
	DECLARE_FUNCTION(execGetIgnoredTargets); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetTargetRef); \
	DECLARE_FUNCTION(execGetTargets); \
	DECLARE_FUNCTION(execGetTargetScore); \
	DECLARE_FUNCTION(execGetTargetStrength); \
	DECLARE_FUNCTION(execHasCurrentTarget); \
	DECLARE_FUNCTION(execIgnoreTarget); \
	DECLARE_FUNCTION(execIsAlert); \
	DECLARE_FUNCTION(execIsInvestigating); \
	DECLARE_FUNCTION(execIsTargetDead); \
	DECLARE_FUNCTION(execOnAISenseDamage); \
	DECLARE_FUNCTION(execOnAISenseHearing); \
	DECLARE_FUNCTION(execOnAISenseSight); \
	DECLARE_FUNCTION(execOnAISenseSuppression); \
	DECLARE_FUNCTION(execOnTargetPerceptionUpdated); \
	DECLARE_FUNCTION(execPickTarget); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execStartIdle); \
	DECLARE_FUNCTION(execStartInvestigating); \
	DECLARE_FUNCTION(execStopInvestigating); \
	DECLARE_FUNCTION(execTickTargets); \
	DECLARE_FUNCTION(execUnIgnoreTarget); \
	DECLARE_FUNCTION(execUpdateBlackBoardParameters); \
	DECLARE_FUNCTION(execUpdateCurrentTarget);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_EVENT_PARMS \
	struct SAIController_eventInfoSharingComponentUpdated_Parms \
	{ \
		UAIInfoSharingComponent* UpdatedInfoSharingComponent; \
	}; \
	struct SAIController_eventOnAISenseDamage_Parms \
	{ \
		AActor* Actor; \
		FAIStimulus Stimulus; \
	}; \
	struct SAIController_eventOnAISenseHearing_Parms \
	{ \
		AActor* Actor; \
		FAIStimulus Stimulus; \
	}; \
	struct SAIController_eventOnAISenseSight_Parms \
	{ \
		AActor* Actor; \
		FAIStimulus Stimulus; \
	}; \
	struct SAIController_eventOnAISenseSuppression_Parms \
	{ \
		AActor* Actor; \
		FVector Location; \
		bool bSuperSonic; \
	}; \
	struct SAIController_eventStartInvestigating_Parms \
	{ \
		FSAISound NewSound; \
	}; \
	struct SAIController_eventUpdateCurrentTarget_Parms \
	{ \
		AActor* NewTarget; \
		bool bLockTarget; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASAIController(); \
	friend struct Z_Construct_UClass_ASAIController_Statics; \
public: \
	DECLARE_CLASS(ASAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(ASAIController) \
	virtual UObject* _getUObject() const override { return const_cast<ASAIController*>(this); }


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_INCLASS \
private: \
	static void StaticRegisterNativesASAIController(); \
	friend struct Z_Construct_UClass_ASAIController_Statics; \
public: \
	DECLARE_CLASS(ASAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(ASAIController) \
	virtual UObject* _getUObject() const override { return const_cast<ASAIController*>(this); }


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASAIController(ASAIController&&); \
	NO_API ASAIController(const ASAIController&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASAIController(ASAIController&&); \
	NO_API ASAIController(const ASAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAIController)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentTarget() { return STRUCT_OFFSET(ASAIController, CurrentTarget); } \
	FORCEINLINE static uint32 __PPO__Targets() { return STRUCT_OFFSET(ASAIController, Targets); } \
	FORCEINLINE static uint32 __PPO__IgnoredTargets() { return STRUCT_OFFSET(ASAIController, IgnoredTargets); }


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_21_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AISENTIENCE_API UClass* StaticClass<class ASAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
