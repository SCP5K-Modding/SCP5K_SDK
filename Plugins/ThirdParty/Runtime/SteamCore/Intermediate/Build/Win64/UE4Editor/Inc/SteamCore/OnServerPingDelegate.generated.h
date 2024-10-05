// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameServerItem;
#ifdef STEAMCORE_OnServerPingDelegate_generated_h
#error "OnServerPingDelegate.generated.h already included, missing '#pragma once' in OnServerPingDelegate.h"
#endif
#define STEAMCORE_OnServerPingDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnServerPingDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnServerPing_Parms \
{ \
	FGameServerItem Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnServerPing_DelegateWrapper(const FScriptDelegate& OnServerPing, FGameServerItem const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnServerPing_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnServerPing.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnServerPingDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
