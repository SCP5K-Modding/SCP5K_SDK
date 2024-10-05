// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUserStatsReceived;
#ifdef STEAMCORE_OnUserStatsReceivedDelegate_generated_h
#error "OnUserStatsReceivedDelegate.generated.h already included, missing '#pragma once' in OnUserStatsReceivedDelegate.h"
#endif
#define STEAMCORE_OnUserStatsReceivedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnUserStatsReceivedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnUserStatsReceived_Parms \
{ \
	FUserStatsReceived Data; \
}; \
static inline void FOnUserStatsReceived_DelegateWrapper(const FMulticastScriptDelegate& OnUserStatsReceived, FUserStatsReceived const& Data) \
{ \
	_Script_SteamCore_eventOnUserStatsReceived_Parms Parms; \
	Parms.Data=Data; \
	OnUserStatsReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnUserStatsReceivedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
