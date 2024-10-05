// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamRemotePlaySessionDisconnected;
#ifdef STEAMCORE_OnSteamRemotePlaySessionDisconnectedDelegate_generated_h
#error "OnSteamRemotePlaySessionDisconnectedDelegate.generated.h already included, missing '#pragma once' in OnSteamRemotePlaySessionDisconnectedDelegate.h"
#endif
#define STEAMCORE_OnSteamRemotePlaySessionDisconnectedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamRemotePlaySessionDisconnectedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSteamRemotePlaySessionDisconnected_Parms \
{ \
	FSteamRemotePlaySessionDisconnected Data; \
}; \
static inline void FOnSteamRemotePlaySessionDisconnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionDisconnected, FSteamRemotePlaySessionDisconnected const& Data) \
{ \
	_Script_SteamCore_eventOnSteamRemotePlaySessionDisconnected_Parms Parms; \
	Parms.Data=Data; \
	OnSteamRemotePlaySessionDisconnected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamRemotePlaySessionDisconnectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
