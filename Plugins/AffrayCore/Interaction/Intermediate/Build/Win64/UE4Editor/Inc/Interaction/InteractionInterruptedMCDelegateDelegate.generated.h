// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInteractionComponent;
class UInteractableComponent;
class AActor;
#ifdef INTERACTION_InteractionInterruptedMCDelegateDelegate_generated_h
#error "InteractionInterruptedMCDelegateDelegate.generated.h already included, missing '#pragma once' in InteractionInterruptedMCDelegateDelegate.h"
#endif
#define INTERACTION_InteractionInterruptedMCDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionInterruptedMCDelegateDelegate_h_9_DELEGATE \
struct _Script_Interaction_eventInteractionInterruptedMCDelegate_Parms \
{ \
	UInteractionComponent* InteractionComponent; \
	UInteractableComponent* Interactable; \
	AActor* EventInstigator; \
}; \
static inline void FInteractionInterruptedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& InteractionInterruptedMCDelegate, UInteractionComponent* InteractionComponent, UInteractableComponent* Interactable, AActor* EventInstigator) \
{ \
	_Script_Interaction_eventInteractionInterruptedMCDelegate_Parms Parms; \
	Parms.InteractionComponent=InteractionComponent; \
	Parms.Interactable=Interactable; \
	Parms.EventInstigator=EventInstigator; \
	InteractionInterruptedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionInterruptedMCDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
