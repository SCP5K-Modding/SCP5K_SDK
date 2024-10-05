// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObjective;
#ifdef GAMEPLAYOBJECTIVES_ObjectiveAsyncOutputPinDelegate_generated_h
#error "ObjectiveAsyncOutputPinDelegate.generated.h already included, missing '#pragma once' in ObjectiveAsyncOutputPinDelegate.h"
#endif
#define GAMEPLAYOBJECTIVES_ObjectiveAsyncOutputPinDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveAsyncOutputPinDelegate_h_7_DELEGATE \
struct _Script_GameplayObjectives_eventObjectiveAsyncOutputPin_Parms \
{ \
	UObjective* Objective; \
}; \
static inline void FObjectiveAsyncOutputPin_DelegateWrapper(const FMulticastScriptDelegate& ObjectiveAsyncOutputPin, UObjective* Objective) \
{ \
	_Script_GameplayObjectives_eventObjectiveAsyncOutputPin_Parms Parms; \
	Parms.Objective=Objective; \
	ObjectiveAsyncOutputPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ObjectiveAsyncOutputPinDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
