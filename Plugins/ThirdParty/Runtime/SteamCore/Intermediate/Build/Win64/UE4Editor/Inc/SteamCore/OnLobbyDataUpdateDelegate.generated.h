// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLobbyDataUpdate;
#ifdef STEAMCORE_OnLobbyDataUpdateDelegate_generated_h
#error "OnLobbyDataUpdateDelegate.generated.h already included, missing '#pragma once' in OnLobbyDataUpdateDelegate.h"
#endif
#define STEAMCORE_OnLobbyDataUpdateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnLobbyDataUpdateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnLobbyDataUpdate_Parms \
{ \
	FLobbyDataUpdate Data; \
}; \
static inline void FOnLobbyDataUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyDataUpdate, FLobbyDataUpdate Data) \
{ \
	_Script_SteamCore_eventOnLobbyDataUpdate_Parms Parms; \
	Parms.Data=Data; \
	OnLobbyDataUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnLobbyDataUpdateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
