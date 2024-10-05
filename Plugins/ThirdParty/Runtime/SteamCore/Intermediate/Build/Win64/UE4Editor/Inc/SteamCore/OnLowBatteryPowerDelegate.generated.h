// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLowBatteryPower;
#ifdef STEAMCORE_OnLowBatteryPowerDelegate_generated_h
#error "OnLowBatteryPowerDelegate.generated.h already included, missing '#pragma once' in OnLowBatteryPowerDelegate.h"
#endif
#define STEAMCORE_OnLowBatteryPowerDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnLowBatteryPowerDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnLowBatteryPower_Parms \
{ \
	FLowBatteryPower Data; \
}; \
static inline void FOnLowBatteryPower_DelegateWrapper(const FMulticastScriptDelegate& OnLowBatteryPower, FLowBatteryPower const& Data) \
{ \
	_Script_SteamCore_eventOnLowBatteryPower_Parms Parms; \
	Parms.Data=Data; \
	OnLowBatteryPower.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnLowBatteryPowerDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
