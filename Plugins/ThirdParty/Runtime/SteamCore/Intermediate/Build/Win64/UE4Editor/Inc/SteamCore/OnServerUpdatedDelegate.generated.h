// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameServerItem;
#ifdef STEAMCORE_OnServerUpdatedDelegate_generated_h
#error "OnServerUpdatedDelegate.generated.h already included, missing '#pragma once' in OnServerUpdatedDelegate.h"
#endif
#define STEAMCORE_OnServerUpdatedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnServerUpdatedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnServerUpdated_Parms \
{ \
	FGameServerItem Data; \
}; \
static inline void FOnServerUpdated_DelegateWrapper(const FScriptDelegate& OnServerUpdated, FGameServerItem const& Data) \
{ \
	_Script_SteamCore_eventOnServerUpdated_Parms Parms; \
	Parms.Data=Data; \
	OnServerUpdated.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnServerUpdatedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
