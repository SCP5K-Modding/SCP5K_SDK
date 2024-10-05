// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLeaderboardScoresDownloadedForUsers;
#ifdef STEAMCORE_OnDownloadLeaderboardEntriesForUsersDelegate_generated_h
#error "OnDownloadLeaderboardEntriesForUsersDelegate.generated.h already included, missing '#pragma once' in OnDownloadLeaderboardEntriesForUsersDelegate.h"
#endif
#define STEAMCORE_OnDownloadLeaderboardEntriesForUsersDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnDownloadLeaderboardEntriesForUsersDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsers_Parms \
{ \
	FLeaderboardScoresDownloadedForUsers Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnDownloadLeaderboardEntriesForUsers_DelegateWrapper(const FScriptDelegate& OnDownloadLeaderboardEntriesForUsers, FLeaderboardScoresDownloadedForUsers const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsers_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnDownloadLeaderboardEntriesForUsers.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnDownloadLeaderboardEntriesForUsersDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
