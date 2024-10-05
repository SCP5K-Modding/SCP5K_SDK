// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLeaderboardFindResult;
#ifdef STEAMCORE_OnFindLeaderboardAsyncDelegateDelegate_generated_h
#error "OnFindLeaderboardAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnFindLeaderboardAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnFindLeaderboardAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFindLeaderboardAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnFindLeaderboardAsyncDelegate_Parms \
{ \
	FLeaderboardFindResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnFindLeaderboardAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFindLeaderboardAsyncDelegate, FLeaderboardFindResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnFindLeaderboardAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnFindLeaderboardAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFindLeaderboardAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
