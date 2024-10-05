// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameLobbyJoinRequested;
#ifdef STEAMCORE_OnGameLobbyJoinRequestedDelegate_generated_h
#error "OnGameLobbyJoinRequestedDelegate.generated.h already included, missing '#pragma once' in OnGameLobbyJoinRequestedDelegate.h"
#endif
#define STEAMCORE_OnGameLobbyJoinRequestedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGameLobbyJoinRequestedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGameLobbyJoinRequested_Parms \
{ \
	FGameLobbyJoinRequested Data; \
}; \
static inline void FOnGameLobbyJoinRequested_DelegateWrapper(const FMulticastScriptDelegate& OnGameLobbyJoinRequested, FGameLobbyJoinRequested const& Data) \
{ \
	_Script_SteamCore_eventOnGameLobbyJoinRequested_Parms Parms; \
	Parms.Data=Data; \
	OnGameLobbyJoinRequested.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGameLobbyJoinRequestedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
