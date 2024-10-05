// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLobbyGameCreated;
#ifdef STEAMCORE_OnLobbyGameCreatedDelegate_generated_h
#error "OnLobbyGameCreatedDelegate.generated.h already included, missing '#pragma once' in OnLobbyGameCreatedDelegate.h"
#endif
#define STEAMCORE_OnLobbyGameCreatedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnLobbyGameCreatedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnLobbyGameCreated_Parms \
{ \
	FLobbyGameCreated Data; \
}; \
static inline void FOnLobbyGameCreated_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyGameCreated, FLobbyGameCreated const& Data) \
{ \
	_Script_SteamCore_eventOnLobbyGameCreated_Parms Parms; \
	Parms.Data=Data; \
	OnLobbyGameCreated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnLobbyGameCreatedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
