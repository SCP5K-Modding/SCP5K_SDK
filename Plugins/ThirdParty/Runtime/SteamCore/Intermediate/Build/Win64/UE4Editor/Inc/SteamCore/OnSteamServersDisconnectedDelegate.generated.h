// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamServersDisconnected;
#ifdef STEAMCORE_OnSteamServersDisconnectedDelegate_generated_h
#error "OnSteamServersDisconnectedDelegate.generated.h already included, missing '#pragma once' in OnSteamServersDisconnectedDelegate.h"
#endif
#define STEAMCORE_OnSteamServersDisconnectedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamServersDisconnectedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSteamServersDisconnected_Parms \
{ \
	FSteamServersDisconnected Data; \
}; \
static inline void FOnSteamServersDisconnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamServersDisconnected, FSteamServersDisconnected const& Data) \
{ \
	_Script_SteamCore_eventOnSteamServersDisconnected_Parms Parms; \
	Parms.Data=Data; \
	OnSteamServersDisconnected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamServersDisconnectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
