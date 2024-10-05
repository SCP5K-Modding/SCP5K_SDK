// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLeaderboardFindResult;
#ifdef STEAMCORE_OnFindLeaderboardDelegate_generated_h
#error "OnFindLeaderboardDelegate.generated.h already included, missing '#pragma once' in OnFindLeaderboardDelegate.h"
#endif
#define STEAMCORE_OnFindLeaderboardDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFindLeaderboardDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnFindLeaderboard_Parms \
{ \
	FLeaderboardFindResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnFindLeaderboard_DelegateWrapper(const FScriptDelegate& OnFindLeaderboard, FLeaderboardFindResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnFindLeaderboard_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnFindLeaderboard.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFindLeaderboardDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
