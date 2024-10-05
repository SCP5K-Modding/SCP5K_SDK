// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDiscordResult : uint8;
#ifdef DISCORDLOBBY_DiscordLobbyResultEventDelegate_generated_h
#error "DiscordLobbyResultEventDelegate.generated.h already included, missing '#pragma once' in DiscordLobbyResultEventDelegate.h"
#endif
#define DISCORDLOBBY_DiscordLobbyResultEventDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyResultEventDelegate_h_6_DELEGATE \
struct _Script_DiscordLobby_eventDiscordLobbyResultEvent_Parms \
{ \
	EDiscordResult Result; \
}; \
static inline void FDiscordLobbyResultEvent_DelegateWrapper(const FMulticastScriptDelegate& DiscordLobbyResultEvent, EDiscordResult Result) \
{ \
	_Script_DiscordLobby_eventDiscordLobbyResultEvent_Parms Parms; \
	Parms.Result=Result; \
	DiscordLobbyResultEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyResultEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
