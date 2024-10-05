// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLobbyKickedData;
#ifdef STEAMCORE_OnLobbyKickedDelegate_generated_h
#error "OnLobbyKickedDelegate.generated.h already included, missing '#pragma once' in OnLobbyKickedDelegate.h"
#endif
#define STEAMCORE_OnLobbyKickedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnLobbyKickedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnLobbyKicked_Parms \
{ \
	FLobbyKickedData Data; \
}; \
static inline void FOnLobbyKicked_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyKicked, FLobbyKickedData const& Data) \
{ \
	_Script_SteamCore_eventOnLobbyKicked_Parms Parms; \
	Parms.Data=Data; \
	OnLobbyKicked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnLobbyKickedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
