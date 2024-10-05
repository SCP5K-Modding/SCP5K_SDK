// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObjective;
#ifdef GAMEPLAYOBJECTIVES_ObjectiveStartedDelegateDelegate_generated_h
#error "ObjectiveStartedDelegateDelegate.generated.h already included, missing '#pragma once' in ObjectiveStartedDelegateDelegate.h"
#endif
#define GAMEPLAYOBJECTIVES_ObjectiveStartedDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveStartedDelegateDelegate_h_7_DELEGATE \
struct _Script_GameplayObjectives_eventObjectiveStartedDelegate_Parms \
{ \
	UObjective* Objective; \
	bool bWasStarted; \
}; \
static inline void FObjectiveStartedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ObjectiveStartedDelegate, UObjective* Objective, bool bWasStarted) \
{ \
	_Script_GameplayObjectives_eventObjectiveStartedDelegate_Parms Parms; \
	Parms.Objective=Objective; \
	Parms.bWasStarted=bWasStarted ? true : false; \
	ObjectiveStartedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveStartedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
