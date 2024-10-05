// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDiscordResult : uint8;
struct FDiscordLobby;
#ifdef DISCORDLOBBY_LobbyEventDelegate_generated_h
#error "LobbyEventDelegate.generated.h already included, missing '#pragma once' in LobbyEventDelegate.h"
#endif
#define DISCORDLOBBY_LobbyEventDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_LobbyEventDelegate_h_7_DELEGATE \
struct _Script_DiscordLobby_eventLobbyEvent_Parms \
{ \
	EDiscordResult Result; \
	FDiscordLobby Lobby; \
}; \
static inline void FLobbyEvent_DelegateWrapper(const FMulticastScriptDelegate& LobbyEvent, EDiscordResult Result, FDiscordLobby const& Lobby) \
{ \
	_Script_DiscordLobby_eventLobbyEvent_Parms Parms; \
	Parms.Result=Result; \
	Parms.Lobby=Lobby; \
	LobbyEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_LobbyEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
