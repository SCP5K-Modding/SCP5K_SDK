// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLeaderboardScoresDownloadedForUsers;
#ifdef STEAMCORE_OnDownloadLeaderboardEntriesForUsersAsyncDelegateDelegate_generated_h
#error "OnDownloadLeaderboardEntriesForUsersAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnDownloadLeaderboardEntriesForUsersAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnDownloadLeaderboardEntriesForUsersAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnDownloadLeaderboardEntriesForUsersAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsersAsyncDelegate_Parms \
{ \
	FLeaderboardScoresDownloadedForUsers Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnDownloadLeaderboardEntriesForUsersAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadLeaderboardEntriesForUsersAsyncDelegate, FLeaderboardScoresDownloadedForUsers const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsersAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnDownloadLeaderboardEntriesForUsersAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnDownloadLeaderboardEntriesForUsersAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
