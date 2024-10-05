// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamInventoryFullUpdate;
#ifdef STEAMCORE_OnSteamInventoryFullUpdateDelegate_generated_h
#error "OnSteamInventoryFullUpdateDelegate.generated.h already included, missing '#pragma once' in OnSteamInventoryFullUpdateDelegate.h"
#endif
#define STEAMCORE_OnSteamInventoryFullUpdateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamInventoryFullUpdateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSteamInventoryFullUpdate_Parms \
{ \
	FSteamInventoryFullUpdate Data; \
}; \
static inline void FOnSteamInventoryFullUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryFullUpdate, FSteamInventoryFullUpdate const& Data) \
{ \
	_Script_SteamCore_eventOnSteamInventoryFullUpdate_Parms Parms; \
	Parms.Data=Data; \
	OnSteamInventoryFullUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamInventoryFullUpdateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
