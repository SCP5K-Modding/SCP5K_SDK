// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FClientGameServerDeny;
#ifdef STEAMCORE_OnClientGameServerDenyDelegate_generated_h
#error "OnClientGameServerDenyDelegate.generated.h already included, missing '#pragma once' in OnClientGameServerDenyDelegate.h"
#endif
#define STEAMCORE_OnClientGameServerDenyDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnClientGameServerDenyDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnClientGameServerDeny_Parms \
{ \
	FClientGameServerDeny Data; \
}; \
static inline void FOnClientGameServerDeny_DelegateWrapper(const FMulticastScriptDelegate& OnClientGameServerDeny, FClientGameServerDeny const& Data) \
{ \
	_Script_SteamCore_eventOnClientGameServerDeny_Parms Parms; \
	Parms.Data=Data; \
	OnClientGameServerDeny.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnClientGameServerDenyDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
