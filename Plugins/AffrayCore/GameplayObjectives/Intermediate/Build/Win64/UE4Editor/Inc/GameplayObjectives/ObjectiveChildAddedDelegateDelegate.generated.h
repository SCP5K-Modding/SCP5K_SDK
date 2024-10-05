// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObjective;
#ifdef GAMEPLAYOBJECTIVES_ObjectiveChildAddedDelegateDelegate_generated_h
#error "ObjectiveChildAddedDelegateDelegate.generated.h already included, missing '#pragma once' in ObjectiveChildAddedDelegateDelegate.h"
#endif
#define GAMEPLAYOBJECTIVES_ObjectiveChildAddedDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveChildAddedDelegateDelegate_h_7_DELEGATE \
struct _Script_GameplayObjectives_eventObjectiveChildAddedDelegate_Parms \
{ \
	UObjective* Objective; \
	UObjective* Child; \
}; \
static inline void FObjectiveChildAddedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ObjectiveChildAddedDelegate, UObjective* Objective, UObjective* Child) \
{ \
	_Script_GameplayObjectives_eventObjectiveChildAddedDelegate_Parms Parms; \
	Parms.Objective=Objective; \
	Parms.Child=Child; \
	ObjectiveChildAddedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveChildAddedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
