// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAttachLeaderboardUGCData;
#ifdef STEAMCORE_OnAttachLeaderboardUGCAsyncDelegateDelegate_generated_h
#error "OnAttachLeaderboardUGCAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnAttachLeaderboardUGCAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnAttachLeaderboardUGCAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnAttachLeaderboardUGCAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnAttachLeaderboardUGCAsyncDelegate_Parms \
{ \
	FAttachLeaderboardUGCData Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnAttachLeaderboardUGCAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAttachLeaderboardUGCAsyncDelegate, FAttachLeaderboardUGCData const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnAttachLeaderboardUGCAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnAttachLeaderboardUGCAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnAttachLeaderboardUGCAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
