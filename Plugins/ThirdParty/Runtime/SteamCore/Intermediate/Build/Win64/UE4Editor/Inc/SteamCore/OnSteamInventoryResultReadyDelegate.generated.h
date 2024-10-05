// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamInventoryResultReady;
#ifdef STEAMCORE_OnSteamInventoryResultReadyDelegate_generated_h
#error "OnSteamInventoryResultReadyDelegate.generated.h already included, missing '#pragma once' in OnSteamInventoryResultReadyDelegate.h"
#endif
#define STEAMCORE_OnSteamInventoryResultReadyDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamInventoryResultReadyDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSteamInventoryResultReady_Parms \
{ \
	FSteamInventoryResultReady Data; \
}; \
static inline void FOnSteamInventoryResultReady_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryResultReady, FSteamInventoryResultReady const& Data) \
{ \
	_Script_SteamCore_eventOnSteamInventoryResultReady_Parms Parms; \
	Parms.Data=Data; \
	OnSteamInventoryResultReady.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamInventoryResultReadyDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
