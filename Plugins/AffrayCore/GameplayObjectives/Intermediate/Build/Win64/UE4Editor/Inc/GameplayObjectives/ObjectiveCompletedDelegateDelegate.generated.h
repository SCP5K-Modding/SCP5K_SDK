// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObjective;
#ifdef GAMEPLAYOBJECTIVES_ObjectiveCompletedDelegateDelegate_generated_h
#error "ObjectiveCompletedDelegateDelegate.generated.h already included, missing '#pragma once' in ObjectiveCompletedDelegateDelegate.h"
#endif
#define GAMEPLAYOBJECTIVES_ObjectiveCompletedDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveCompletedDelegateDelegate_h_7_DELEGATE \
struct _Script_GameplayObjectives_eventObjectiveCompletedDelegate_Parms \
{ \
	UObjective* Objective; \
	bool bSucceeded; \
}; \
static inline void FObjectiveCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ObjectiveCompletedDelegate, UObjective* Objective, bool bSucceeded) \
{ \
	_Script_GameplayObjectives_eventObjectiveCompletedDelegate_Parms Parms; \
	Parms.Objective=Objective; \
	Parms.bSucceeded=bSucceeded ? true : false; \
	ObjectiveCompletedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveCompletedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
