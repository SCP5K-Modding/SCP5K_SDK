// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFindOrCreateLeaderboardData;
#ifdef STEAMCORE_OnFindOrCreateLeaderboardAsyncDelegateDelegate_generated_h
#error "OnFindOrCreateLeaderboardAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnFindOrCreateLeaderboardAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnFindOrCreateLeaderboardAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFindOrCreateLeaderboardAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnFindOrCreateLeaderboardAsyncDelegate_Parms \
{ \
	FFindOrCreateLeaderboardData Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnFindOrCreateLeaderboardAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFindOrCreateLeaderboardAsyncDelegate, FFindOrCreateLeaderboardData const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnFindOrCreateLeaderboardAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnFindOrCreateLeaderboardAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFindOrCreateLeaderboardAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
