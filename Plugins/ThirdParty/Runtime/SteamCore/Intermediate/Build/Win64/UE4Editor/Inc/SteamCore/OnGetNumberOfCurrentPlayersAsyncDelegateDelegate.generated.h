// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNumberOfCurrentPlayers;
#ifdef STEAMCORE_OnGetNumberOfCurrentPlayersAsyncDelegateDelegate_generated_h
#error "OnGetNumberOfCurrentPlayersAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnGetNumberOfCurrentPlayersAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnGetNumberOfCurrentPlayersAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGetNumberOfCurrentPlayersAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGetNumberOfCurrentPlayersAsyncDelegate_Parms \
{ \
	FNumberOfCurrentPlayers Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnGetNumberOfCurrentPlayersAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetNumberOfCurrentPlayersAsyncDelegate, FNumberOfCurrentPlayers const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnGetNumberOfCurrentPlayersAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnGetNumberOfCurrentPlayersAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGetNumberOfCurrentPlayersAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
