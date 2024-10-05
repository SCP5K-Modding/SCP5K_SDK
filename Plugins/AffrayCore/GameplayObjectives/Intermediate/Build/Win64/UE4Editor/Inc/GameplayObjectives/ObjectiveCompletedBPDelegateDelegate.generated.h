// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObjective;
#ifdef GAMEPLAYOBJECTIVES_ObjectiveCompletedBPDelegateDelegate_generated_h
#error "ObjectiveCompletedBPDelegateDelegate.generated.h already included, missing '#pragma once' in ObjectiveCompletedBPDelegateDelegate.h"
#endif
#define GAMEPLAYOBJECTIVES_ObjectiveCompletedBPDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveCompletedBPDelegateDelegate_h_7_DELEGATE \
struct _Script_GameplayObjectives_eventObjectiveCompletedBPDelegate_Parms \
{ \
	UObjective* Objective; \
	bool bSucceeded; \
}; \
static inline void FObjectiveCompletedBPDelegate_DelegateWrapper(const FScriptDelegate& ObjectiveCompletedBPDelegate, UObjective* Objective, bool bSucceeded) \
{ \
	_Script_GameplayObjectives_eventObjectiveCompletedBPDelegate_Parms Parms; \
	Parms.Objective=Objective; \
	Parms.bSucceeded=bSucceeded ? true : false; \
	ObjectiveCompletedBPDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveCompletedBPDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
