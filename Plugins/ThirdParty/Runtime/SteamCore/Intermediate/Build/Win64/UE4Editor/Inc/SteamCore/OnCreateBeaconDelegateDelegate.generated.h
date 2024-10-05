// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCreateBeaconData;
#ifdef STEAMCORE_OnCreateBeaconDelegateDelegate_generated_h
#error "OnCreateBeaconDelegateDelegate.generated.h already included, missing '#pragma once' in OnCreateBeaconDelegateDelegate.h"
#endif
#define STEAMCORE_OnCreateBeaconDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnCreateBeaconDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnCreateBeaconDelegate_Parms \
{ \
	FCreateBeaconData Data; \
}; \
static inline void FOnCreateBeaconDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCreateBeaconDelegate, FCreateBeaconData const& Data) \
{ \
	_Script_SteamCore_eventOnCreateBeaconDelegate_Parms Parms; \
	Parms.Data=Data; \
	OnCreateBeaconDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnCreateBeaconDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
