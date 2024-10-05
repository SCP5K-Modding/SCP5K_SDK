// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameRichPresenceJoinRequested;
#ifdef STEAMCORE_OnGameRichPresenceJoinRequestedDelegate_generated_h
#error "OnGameRichPresenceJoinRequestedDelegate.generated.h already included, missing '#pragma once' in OnGameRichPresenceJoinRequestedDelegate.h"
#endif
#define STEAMCORE_OnGameRichPresenceJoinRequestedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGameRichPresenceJoinRequestedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGameRichPresenceJoinRequested_Parms \
{ \
	FGameRichPresenceJoinRequested Data; \
}; \
static inline void FOnGameRichPresenceJoinRequested_DelegateWrapper(const FMulticastScriptDelegate& OnGameRichPresenceJoinRequested, FGameRichPresenceJoinRequested const& Data) \
{ \
	_Script_SteamCore_eventOnGameRichPresenceJoinRequested_Parms Parms; \
	Parms.Data=Data; \
	OnGameRichPresenceJoinRequested.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGameRichPresenceJoinRequestedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
