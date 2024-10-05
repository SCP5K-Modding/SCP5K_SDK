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
#ifdef INTERACTION_InteractionStartedMCDelegateDelegate_generated_h
#error "InteractionStartedMCDelegateDelegate.generated.h already included, missing '#pragma once' in InteractionStartedMCDelegateDelegate.h"
#endif
#define INTERACTION_InteractionStartedMCDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionStartedMCDelegateDelegate_h_8_DELEGATE \
struct _Script_Interaction_eventInteractionStartedMCDelegate_Parms \
{ \
	UInteractionComponent* InteractionComponent; \
	UInteractableComponent* Interactable; \
}; \
static inline void FInteractionStartedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& InteractionStartedMCDelegate, UInteractionComponent* InteractionComponent, UInteractableComponent* Interactable) \
{ \
	_Script_Interaction_eventInteractionStartedMCDelegate_Parms Parms; \
	Parms.InteractionComponent=InteractionComponent; \
	Parms.Interactable=Interactable; \
	InteractionStartedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractionStartedMCDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
