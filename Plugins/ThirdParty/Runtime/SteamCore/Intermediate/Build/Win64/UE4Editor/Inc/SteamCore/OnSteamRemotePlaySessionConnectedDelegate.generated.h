// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamRemotePlaySessionConnected;
#ifdef STEAMCORE_OnSteamRemotePlaySessionConnectedDelegate_generated_h
#error "OnSteamRemotePlaySessionConnectedDelegate.generated.h already included, missing '#pragma once' in OnSteamRemotePlaySessionConnectedDelegate.h"
#endif
#define STEAMCORE_OnSteamRemotePlaySessionConnectedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamRemotePlaySessionConnectedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSteamRemotePlaySessionConnected_Parms \
{ \
	FSteamRemotePlaySessionConnected Data; \
}; \
static inline void FOnSteamRemotePlaySessionConnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionConnected, FSteamRemotePlaySessionConnected const& Data) \
{ \
	_Script_SteamCore_eventOnSteamRemotePlaySessionConnected_Parms Parms; \
	Parms.Data=Data; \
	OnSteamRemotePlaySessionConnected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamRemotePlaySessionConnectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
