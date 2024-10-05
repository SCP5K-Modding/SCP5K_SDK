// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameServerItem;
#ifdef STEAMCORE_OnServerUpdatedAsyncDelegateDelegate_generated_h
#error "OnServerUpdatedAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnServerUpdatedAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnServerUpdatedAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnServerUpdatedAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnServerUpdatedAsyncDelegate_Parms \
{ \
	FGameServerItem Data; \
}; \
static inline void FOnServerUpdatedAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnServerUpdatedAsyncDelegate, FGameServerItem const& Data) \
{ \
	_Script_SteamCore_eventOnServerUpdatedAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	OnServerUpdatedAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnServerUpdatedAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
