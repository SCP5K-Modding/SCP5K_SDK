// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamServerConnectFailure;
#ifdef STEAMCORE_OnSteamServerConnectFailureDelegate_generated_h
#error "OnSteamServerConnectFailureDelegate.generated.h already included, missing '#pragma once' in OnSteamServerConnectFailureDelegate.h"
#endif
#define STEAMCORE_OnSteamServerConnectFailureDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamServerConnectFailureDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSteamServerConnectFailure_Parms \
{ \
	FSteamServerConnectFailure Data; \
}; \
static inline void FOnSteamServerConnectFailure_DelegateWrapper(const FMulticastScriptDelegate& OnSteamServerConnectFailure, FSteamServerConnectFailure const& Data) \
{ \
	_Script_SteamCore_eventOnSteamServerConnectFailure_Parms Parms; \
	Parms.Data=Data; \
	OnSteamServerConnectFailure.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamServerConnectFailureDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
