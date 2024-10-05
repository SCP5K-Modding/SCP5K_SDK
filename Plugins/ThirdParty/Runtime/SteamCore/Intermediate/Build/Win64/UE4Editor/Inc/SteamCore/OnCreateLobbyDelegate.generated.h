// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCreateLobbyData;
#ifdef STEAMCORE_OnCreateLobbyDelegate_generated_h
#error "OnCreateLobbyDelegate.generated.h already included, missing '#pragma once' in OnCreateLobbyDelegate.h"
#endif
#define STEAMCORE_OnCreateLobbyDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnCreateLobbyDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnCreateLobby_Parms \
{ \
	FCreateLobbyData Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnCreateLobby_DelegateWrapper(const FScriptDelegate& OnCreateLobby, FCreateLobbyData const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnCreateLobby_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnCreateLobby.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnCreateLobbyDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
