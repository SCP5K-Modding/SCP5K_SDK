// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFindOrCreateLeaderboardData;
#ifdef STEAMCORE_OnFindOrCreateLeaderboardDelegate_generated_h
#error "OnFindOrCreateLeaderboardDelegate.generated.h already included, missing '#pragma once' in OnFindOrCreateLeaderboardDelegate.h"
#endif
#define STEAMCORE_OnFindOrCreateLeaderboardDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFindOrCreateLeaderboardDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnFindOrCreateLeaderboard_Parms \
{ \
	FFindOrCreateLeaderboardData Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnFindOrCreateLeaderboard_DelegateWrapper(const FScriptDelegate& OnFindOrCreateLeaderboard, FFindOrCreateLeaderboardData const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnFindOrCreateLeaderboard_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnFindOrCreateLeaderboard.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFindOrCreateLeaderboardDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
