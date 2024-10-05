// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
#ifdef AISENTIENCE_ChangedSquadMCDelegateDelegate_generated_h
#error "ChangedSquadMCDelegateDelegate.generated.h already included, missing '#pragma once' in ChangedSquadMCDelegateDelegate.h"
#endif
#define AISENTIENCE_ChangedSquadMCDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_ChangedSquadMCDelegateDelegate_h_6_DELEGATE \
struct _Script_AISentience_eventChangedSquadMCDelegate_Parms \
{ \
	FGuid PreviousSquadID; \
	FGuid NewSquadID; \
}; \
static inline void FChangedSquadMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& ChangedSquadMCDelegate, FGuid PreviousSquadID, FGuid NewSquadID) \
{ \
	_Script_AISentience_eventChangedSquadMCDelegate_Parms Parms; \
	Parms.PreviousSquadID=PreviousSquadID; \
	Parms.NewSquadID=NewSquadID; \
	ChangedSquadMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_ChangedSquadMCDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
