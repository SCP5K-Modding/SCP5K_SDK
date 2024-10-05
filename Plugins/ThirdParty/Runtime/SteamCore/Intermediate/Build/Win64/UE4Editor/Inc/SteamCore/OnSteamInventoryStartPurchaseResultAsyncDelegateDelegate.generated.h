// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamInventoryStartPurchaseResult;
#ifdef STEAMCORE_OnSteamInventoryStartPurchaseResultAsyncDelegateDelegate_generated_h
#error "OnSteamInventoryStartPurchaseResultAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnSteamInventoryStartPurchaseResultAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnSteamInventoryStartPurchaseResultAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamInventoryStartPurchaseResultAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms \
{ \
	FSteamInventoryStartPurchaseResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnSteamInventoryStartPurchaseResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryStartPurchaseResultAsyncDelegate, FSteamInventoryStartPurchaseResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnSteamInventoryStartPurchaseResultAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnSteamInventoryStartPurchaseResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamInventoryStartPurchaseResultAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
