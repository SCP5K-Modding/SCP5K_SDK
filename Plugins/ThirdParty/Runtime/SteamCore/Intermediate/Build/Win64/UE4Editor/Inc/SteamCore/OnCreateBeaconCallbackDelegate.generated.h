// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCreateBeaconData;
#ifdef STEAMCORE_OnCreateBeaconCallbackDelegate_generated_h
#error "OnCreateBeaconCallbackDelegate.generated.h already included, missing '#pragma once' in OnCreateBeaconCallbackDelegate.h"
#endif
#define STEAMCORE_OnCreateBeaconCallbackDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnCreateBeaconCallbackDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnCreateBeaconCallback_Parms \
{ \
	FCreateBeaconData Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnCreateBeaconCallback_DelegateWrapper(const FMulticastScriptDelegate& OnCreateBeaconCallback, FCreateBeaconData const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnCreateBeaconCallback_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnCreateBeaconCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnCreateBeaconCallbackDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
