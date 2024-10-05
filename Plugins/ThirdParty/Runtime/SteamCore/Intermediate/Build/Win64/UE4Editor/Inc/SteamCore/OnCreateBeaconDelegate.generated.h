// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCreateBeaconData;
#ifdef STEAMCORE_OnCreateBeaconDelegate_generated_h
#error "OnCreateBeaconDelegate.generated.h already included, missing '#pragma once' in OnCreateBeaconDelegate.h"
#endif
#define STEAMCORE_OnCreateBeaconDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnCreateBeaconDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnCreateBeacon_Parms \
{ \
	FCreateBeaconData Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnCreateBeacon_DelegateWrapper(const FScriptDelegate& OnCreateBeacon, FCreateBeaconData const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnCreateBeacon_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnCreateBeacon.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnCreateBeaconDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
