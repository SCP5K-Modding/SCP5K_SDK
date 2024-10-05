// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLobbyChatUpdate;
#ifdef STEAMCORE_OnLobbyChatUpdateDelegate_generated_h
#error "OnLobbyChatUpdateDelegate.generated.h already included, missing '#pragma once' in OnLobbyChatUpdateDelegate.h"
#endif
#define STEAMCORE_OnLobbyChatUpdateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnLobbyChatUpdateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnLobbyChatUpdate_Parms \
{ \
	FLobbyChatUpdate Data; \
}; \
static inline void FOnLobbyChatUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyChatUpdate, FLobbyChatUpdate const& Data) \
{ \
	_Script_SteamCore_eventOnLobbyChatUpdate_Parms Parms; \
	Parms.Data=Data; \
	OnLobbyChatUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnLobbyChatUpdateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
