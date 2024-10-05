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
#ifdef INTERACTION_InteractableDeregisteredMCDelegateDelegate_generated_h
#error "InteractableDeregisteredMCDelegateDelegate.generated.h already included, missing '#pragma once' in InteractableDeregisteredMCDelegateDelegate.h"
#endif
#define INTERACTION_InteractableDeregisteredMCDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableDeregisteredMCDelegateDelegate_h_8_DELEGATE \
struct _Script_Interaction_eventInteractableDeregisteredMCDelegate_Parms \
{ \
	UInteractionComponent* InteractionComponent; \
	UInteractableComponent* DeregisteredInteractable; \
}; \
static inline void FInteractableDeregisteredMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& InteractableDeregisteredMCDelegate, UInteractionComponent* InteractionComponent, UInteractableComponent* DeregisteredInteractable) \
{ \
	_Script_Interaction_eventInteractableDeregisteredMCDelegate_Parms Parms; \
	Parms.InteractionComponent=InteractionComponent; \
	Parms.DeregisteredInteractable=DeregisteredInteractable; \
	InteractableDeregisteredMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableDeregisteredMCDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
