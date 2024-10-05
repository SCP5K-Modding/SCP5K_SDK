// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamInventoryStartPurchaseResult;
#ifdef STEAMCORE_OnSteamInventoryStartPurchaseResultDelegate_generated_h
#error "OnSteamInventoryStartPurchaseResultDelegate.generated.h already included, missing '#pragma once' in OnSteamInventoryStartPurchaseResultDelegate.h"
#endif
#define STEAMCORE_OnSteamInventoryStartPurchaseResultDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamInventoryStartPurchaseResultDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSteamInventoryStartPurchaseResult_Parms \
{ \
	FSteamInventoryStartPurchaseResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnSteamInventoryStartPurchaseResult_DelegateWrapper(const FScriptDelegate& OnSteamInventoryStartPurchaseResult, FSteamInventoryStartPurchaseResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnSteamInventoryStartPurchaseResult_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnSteamInventoryStartPurchaseResult.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamInventoryStartPurchaseResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
