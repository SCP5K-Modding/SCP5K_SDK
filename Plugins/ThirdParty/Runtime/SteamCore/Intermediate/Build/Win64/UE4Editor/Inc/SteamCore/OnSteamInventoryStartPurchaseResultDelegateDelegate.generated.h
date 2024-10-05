// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamInventoryStartPurchaseResult;
#ifdef STEAMCORE_OnSteamInventoryStartPurchaseResultDelegateDelegate_generated_h
#error "OnSteamInventoryStartPurchaseResultDelegateDelegate.generated.h already included, missing '#pragma once' in OnSteamInventoryStartPurchaseResultDelegateDelegate.h"
#endif
#define STEAMCORE_OnSteamInventoryStartPurchaseResultDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamInventoryStartPurchaseResultDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSteamInventoryStartPurchaseResultDelegate_Parms \
{ \
	FSteamInventoryStartPurchaseResult Data; \
}; \
static inline void FOnSteamInventoryStartPurchaseResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryStartPurchaseResultDelegate, FSteamInventoryStartPurchaseResult const& Data) \
{ \
	_Script_SteamCore_eventOnSteamInventoryStartPurchaseResultDelegate_Parms Parms; \
	Parms.Data=Data; \
	OnSteamInventoryStartPurchaseResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamInventoryStartPurchaseResultDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
