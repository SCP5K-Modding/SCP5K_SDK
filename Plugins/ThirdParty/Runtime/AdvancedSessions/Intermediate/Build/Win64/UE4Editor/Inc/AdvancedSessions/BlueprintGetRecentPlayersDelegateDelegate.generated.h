// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPOnlineRecentPlayer;
#ifdef ADVANCEDSESSIONS_BlueprintGetRecentPlayersDelegateDelegate_generated_h
#error "BlueprintGetRecentPlayersDelegateDelegate.generated.h already included, missing '#pragma once' in BlueprintGetRecentPlayersDelegateDelegate.h"
#endif
#define ADVANCEDSESSIONS_BlueprintGetRecentPlayersDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_BlueprintGetRecentPlayersDelegateDelegate_h_6_DELEGATE \
struct _Script_AdvancedSessions_eventBlueprintGetRecentPlayersDelegate_Parms \
{ \
	TArray<FBPOnlineRecentPlayer> Results; \
}; \
static inline void FBlueprintGetRecentPlayersDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintGetRecentPlayersDelegate, TArray<FBPOnlineRecentPlayer> const& Results) \
{ \
	_Script_AdvancedSessions_eventBlueprintGetRecentPlayersDelegate_Parms Parms; \
	Parms.Results=Results; \
	BlueprintGetRecentPlayersDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_BlueprintGetRecentPlayersDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
