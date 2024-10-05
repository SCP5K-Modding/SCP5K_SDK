// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDialogueComponent;
struct FDialogue;
class UDataTable;
#ifdef AISENTIENCE_DialogueComponent_generated_h
#error "DialogueComponent.generated.h already included, missing '#pragma once' in DialogueComponent.h"
#endif
#define AISENTIENCE_DialogueComponent_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_16_DELEGATE \
struct DialogueComponent_eventDialogueMCDelegate_Parms \
{ \
	UDialogueComponent* Component; \
	FName DialogueID; \
}; \
static inline void FDialogueMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& DialogueMCDelegate, UDialogueComponent* Component, FName DialogueID) \
{ \
	DialogueComponent_eventDialogueMCDelegate_Parms Parms; \
	Parms.Component=Component; \
	Parms.DialogueID=DialogueID; \
	DialogueMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_RPC_WRAPPERS \
	virtual TArray<FName> GetPossibleResponses_Implementation(FName DialogueID) const; \
	virtual void OnDialogueBroadcasted_Implementation(UDialogueComponent* BroadcastingComponent, FName DialogueID, float AudibleDistance); \
	virtual void OnFinishSpeaking_Implementation(); \
	virtual void OnInterruptAttempt_Implementation(UDialogueComponent* InterruptingComponent, float InterruptDistance, bool bWasInterrupted); \
	virtual void OnResponseAcknowledged_Implementation(bool bCanRespond); \
	virtual bool ShouldBeInterrupted_Implementation(UDialogueComponent* InterruptingComponent, float InterruptDistance) const; \
 \
	DECLARE_FUNCTION(execBroadcastDialogue); \
	DECLARE_FUNCTION(execBroadcastInterrupt); \
	DECLARE_FUNCTION(execCancelResponse); \
	DECLARE_FUNCTION(execChangeResponse); \
	DECLARE_FUNCTION(execGetCurrentDialogue); \
	DECLARE_FUNCTION(execGetCurrentDialogueID); \
	DECLARE_FUNCTION(execGetCurrentResponseID); \
	DECLARE_FUNCTION(execGetPossibleResponses); \
	DECLARE_FUNCTION(execGetSpeakerName); \
	DECLARE_FUNCTION(execInterrupt); \
	DECLARE_FUNCTION(execIsAttemptingToRespond); \
	DECLARE_FUNCTION(execIsAwaitingFinish); \
	DECLARE_FUNCTION(execIsSpeaking); \
	DECLARE_FUNCTION(execOnDialogueBroadcasted); \
	DECLARE_FUNCTION(execOnFinishSpeaking); \
	DECLARE_FUNCTION(execOnInterruptAttempt); \
	DECLARE_FUNCTION(execOnRep_CurrentDialogue); \
	DECLARE_FUNCTION(execOnRep_NextOverlayedDialogueID); \
	DECLARE_FUNCTION(execOnResponseAcknowledged); \
	DECLARE_FUNCTION(execQueueResponse); \
	DECLARE_FUNCTION(execSetDialogueTable); \
	DECLARE_FUNCTION(execShouldBeInterrupted);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TArray<FName> GetPossibleResponses_Implementation(FName DialogueID) const; \
	virtual void OnDialogueBroadcasted_Implementation(UDialogueComponent* BroadcastingComponent, FName DialogueID, float AudibleDistance); \
	virtual void OnFinishSpeaking_Implementation(); \
	virtual void OnInterruptAttempt_Implementation(UDialogueComponent* InterruptingComponent, float InterruptDistance, bool bWasInterrupted); \
	virtual void OnResponseAcknowledged_Implementation(bool bCanRespond); \
	virtual bool ShouldBeInterrupted_Implementation(UDialogueComponent* InterruptingComponent, float InterruptDistance) const; \
 \
	DECLARE_FUNCTION(execBroadcastDialogue); \
	DECLARE_FUNCTION(execBroadcastInterrupt); \
	DECLARE_FUNCTION(execCancelResponse); \
	DECLARE_FUNCTION(execChangeResponse); \
	DECLARE_FUNCTION(execGetCurrentDialogue); \
	DECLARE_FUNCTION(execGetCurrentDialogueID); \
	DECLARE_FUNCTION(execGetCurrentResponseID); \
	DECLARE_FUNCTION(execGetPossibleResponses); \
	DECLARE_FUNCTION(execGetSpeakerName); \
	DECLARE_FUNCTION(execInterrupt); \
	DECLARE_FUNCTION(execIsAttemptingToRespond); \
	DECLARE_FUNCTION(execIsAwaitingFinish); \
	DECLARE_FUNCTION(execIsSpeaking); \
	DECLARE_FUNCTION(execOnDialogueBroadcasted); \
	DECLARE_FUNCTION(execOnFinishSpeaking); \
	DECLARE_FUNCTION(execOnInterruptAttempt); \
	DECLARE_FUNCTION(execOnRep_CurrentDialogue); \
	DECLARE_FUNCTION(execOnRep_NextOverlayedDialogueID); \
	DECLARE_FUNCTION(execOnResponseAcknowledged); \
	DECLARE_FUNCTION(execQueueResponse); \
	DECLARE_FUNCTION(execSetDialogueTable); \
	DECLARE_FUNCTION(execShouldBeInterrupted);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_EVENT_PARMS \
	struct DialogueComponent_eventGetPossibleResponses_Parms \
	{ \
		FName DialogueID; \
		TArray<FName> ReturnValue; \
	}; \
	struct DialogueComponent_eventOnDialogueBroadcasted_Parms \
	{ \
		UDialogueComponent* BroadcastingComponent; \
		FName DialogueID; \
		float AudibleDistance; \
	}; \
	struct DialogueComponent_eventOnInterruptAttempt_Parms \
	{ \
		UDialogueComponent* InterruptingComponent; \
		float InterruptDistance; \
		bool bWasInterrupted; \
	}; \
	struct DialogueComponent_eventOnResponseAcknowledged_Parms \
	{ \
		bool bCanRespond; \
	}; \
	struct DialogueComponent_eventShouldBeInterrupted_Parms \
	{ \
		UDialogueComponent* InterruptingComponent; \
		float InterruptDistance; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DialogueComponent_eventShouldBeInterrupted_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueComponent(); \
	friend struct Z_Construct_UClass_UDialogueComponent_Statics; \
public: \
	DECLARE_CLASS(UDialogueComponent, UFMODAudioComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(UDialogueComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DialogueTable=NETFIELD_REP_START, \
		CurrentDialogue, \
		NextOverlayedDialogueID, \
		NETFIELD_REP_END=NextOverlayedDialogueID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueComponent(); \
	friend struct Z_Construct_UClass_UDialogueComponent_Statics; \
public: \
	DECLARE_CLASS(UDialogueComponent, UFMODAudioComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(UDialogueComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DialogueTable=NETFIELD_REP_START, \
		CurrentDialogue, \
		NextOverlayedDialogueID, \
		NETFIELD_REP_END=NextOverlayedDialogueID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueComponent(UDialogueComponent&&); \
	NO_API UDialogueComponent(const UDialogueComponent&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueComponent(UDialogueComponent&&); \
	NO_API UDialogueComponent(const UDialogueComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueComponent)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwnerName() { return STRUCT_OFFSET(UDialogueComponent, OwnerName); } \
	FORCEINLINE static uint32 __PPO__DialoguePrefix() { return STRUCT_OFFSET(UDialogueComponent, DialoguePrefix); } \
	FORCEINLINE static uint32 __PPO__OwnerDisplayName() { return STRUCT_OFFSET(UDialogueComponent, OwnerDisplayName); } \
	FORCEINLINE static uint32 __PPO__Color() { return STRUCT_OFFSET(UDialogueComponent, Color); } \
	FORCEINLINE static uint32 __PPO__DialogueTable() { return STRUCT_OFFSET(UDialogueComponent, DialogueTable); } \
	FORCEINLINE static uint32 __PPO__DefaultAudibleDistance() { return STRUCT_OFFSET(UDialogueComponent, DefaultAudibleDistance); } \
	FORCEINLINE static uint32 __PPO__MaxPreferredDistance() { return STRUCT_OFFSET(UDialogueComponent, MaxPreferredDistance); } \
	FORCEINLINE static uint32 __PPO__CurrentDialogue() { return STRUCT_OFFSET(UDialogueComponent, CurrentDialogue); } \
	FORCEINLINE static uint32 __PPO__NextOverlayedDialogueID() { return STRUCT_OFFSET(UDialogueComponent, NextOverlayedDialogueID); }


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_12_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AISENTIENCE_API UClass* StaticClass<class UDialogueComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
