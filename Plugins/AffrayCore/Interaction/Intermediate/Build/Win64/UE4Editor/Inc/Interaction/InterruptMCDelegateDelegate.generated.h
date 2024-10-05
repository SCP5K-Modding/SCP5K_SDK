// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef INTERACTION_InterruptMCDelegateDelegate_generated_h
#error "InterruptMCDelegateDelegate.generated.h already included, missing '#pragma once' in InterruptMCDelegateDelegate.h"
#endif
#define INTERACTION_InterruptMCDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InterruptMCDelegateDelegate_h_7_DELEGATE \
struct _Script_Interaction_eventInterruptMCDelegate_Parms \
{ \
	AActor* EventInstigator; \
}; \
static inline void FInterruptMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& InterruptMCDelegate, AActor* EventInstigator) \
{ \
	_Script_Interaction_eventInterruptMCDelegate_Parms Parms; \
	Parms.EventInstigator=EventInstigator; \
	InterruptMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Interaction_Source_Interaction_Public_InterruptMCDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
