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
#ifdef INTERACTION_InteractableFocusedMCDelegateDelegate_generated_h
#error "InteractableFocusedMCDelegateDelegate.generated.h already included, missing '#pragma once' in InteractableFocusedMCDelegateDelegate.h"
#endif
#define INTERACTION_InteractableFocusedMCDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableFocusedMCDelegateDelegate_h_8_DELEGATE \
struct _Script_Interaction_eventInteractableFocusedMCDelegate_Parms \
{ \
	UInteractionComponent* InteractionComponent; \
	UInteractableComponent* OldInteractable; \
	UInteractableComponent* NewInteractable; \
}; \
static inline void FInteractableFocusedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& InteractableFocusedMCDelegate, UInteractionComponent* InteractionComponent, UInteractableComponent* OldInteractable, UInteractableComponent* NewInteractable) \
{ \
	_Script_Interaction_eventInteractableFocusedMCDelegate_Parms Parms; \
	Parms.InteractionComponent=InteractionComponent; \
	Parms.OldInteractable=OldInteractable; \
	Parms.NewInteractable=NewInteractable; \
	InteractableFocusedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InteractableFocusedMCDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
