// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameServerChangeRequested;
#ifdef STEAMCORE_OnGameServerChangeRequestedDelegate_generated_h
#error "OnGameServerChangeRequestedDelegate.generated.h already included, missing '#pragma once' in OnGameServerChangeRequestedDelegate.h"
#endif
#define STEAMCORE_OnGameServerChangeRequestedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGameServerChangeRequestedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGameServerChangeRequested_Parms \
{ \
	FGameServerChangeRequested Data; \
}; \
static inline void FOnGameServerChangeRequested_DelegateWrapper(const FMulticastScriptDelegate& OnGameServerChangeRequested, FGameServerChangeRequested const& Data) \
{ \
	_Script_SteamCore_eventOnGameServerChangeRequested_Parms Parms; \
	Parms.Data=Data; \
	OnGameServerChangeRequested.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGameServerChangeRequestedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
