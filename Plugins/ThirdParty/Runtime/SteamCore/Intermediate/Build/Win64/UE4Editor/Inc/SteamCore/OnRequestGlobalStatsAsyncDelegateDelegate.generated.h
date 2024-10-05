// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGlobalStatsReceived;
#ifdef STEAMCORE_OnRequestGlobalStatsAsyncDelegateDelegate_generated_h
#error "OnRequestGlobalStatsAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnRequestGlobalStatsAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnRequestGlobalStatsAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRequestGlobalStatsAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRequestGlobalStatsAsyncDelegate_Parms \
{ \
	FGlobalStatsReceived Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRequestGlobalStatsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestGlobalStatsAsyncDelegate, FGlobalStatsReceived const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRequestGlobalStatsAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRequestGlobalStatsAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRequestGlobalStatsAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
