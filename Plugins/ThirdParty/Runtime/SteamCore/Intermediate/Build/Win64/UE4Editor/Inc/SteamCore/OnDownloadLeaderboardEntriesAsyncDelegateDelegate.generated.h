// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLeaderboardScoresDownloaded;
#ifdef STEAMCORE_OnDownloadLeaderboardEntriesAsyncDelegateDelegate_generated_h
#error "OnDownloadLeaderboardEntriesAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnDownloadLeaderboardEntriesAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnDownloadLeaderboardEntriesAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnDownloadLeaderboardEntriesAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnDownloadLeaderboardEntriesAsyncDelegate_Parms \
{ \
	FLeaderboardScoresDownloaded Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnDownloadLeaderboardEntriesAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadLeaderboardEntriesAsyncDelegate, FLeaderboardScoresDownloaded const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnDownloadLeaderboardEntriesAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnDownloadLeaderboardEntriesAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnDownloadLeaderboardEntriesAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
