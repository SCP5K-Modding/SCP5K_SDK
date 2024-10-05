// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLeaderboardScoresDownloaded;
#ifdef STEAMCORE_OnDownloadLeaderboardEntriesDelegate_generated_h
#error "OnDownloadLeaderboardEntriesDelegate.generated.h already included, missing '#pragma once' in OnDownloadLeaderboardEntriesDelegate.h"
#endif
#define STEAMCORE_OnDownloadLeaderboardEntriesDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnDownloadLeaderboardEntriesDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnDownloadLeaderboardEntries_Parms \
{ \
	FLeaderboardScoresDownloaded Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnDownloadLeaderboardEntries_DelegateWrapper(const FScriptDelegate& OnDownloadLeaderboardEntries, FLeaderboardScoresDownloaded const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnDownloadLeaderboardEntries_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnDownloadLeaderboardEntries.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnDownloadLeaderboardEntriesDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
