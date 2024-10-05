// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameServerItem;
#ifdef STEAMCORE_OnPingServerAsyncDelegateDelegate_generated_h
#error "OnPingServerAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnPingServerAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnPingServerAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnPingServerAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnPingServerAsyncDelegate_Parms \
{ \
	FGameServerItem Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnPingServerAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPingServerAsyncDelegate, FGameServerItem const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnPingServerAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnPingServerAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnPingServerAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
