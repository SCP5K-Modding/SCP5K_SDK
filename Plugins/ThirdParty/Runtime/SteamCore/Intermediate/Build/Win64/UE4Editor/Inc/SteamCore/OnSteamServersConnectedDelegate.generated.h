// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamServersConnected;
#ifdef STEAMCORE_OnSteamServersConnectedDelegate_generated_h
#error "OnSteamServersConnectedDelegate.generated.h already included, missing '#pragma once' in OnSteamServersConnectedDelegate.h"
#endif
#define STEAMCORE_OnSteamServersConnectedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamServersConnectedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSteamServersConnected_Parms \
{ \
	FSteamServersConnected Data; \
}; \
static inline void FOnSteamServersConnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamServersConnected, FSteamServersConnected const& Data) \
{ \
	_Script_SteamCore_eventOnSteamServersConnected_Parms Parms; \
	Parms.Data=Data; \
	OnSteamServersConnected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamServersConnectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
