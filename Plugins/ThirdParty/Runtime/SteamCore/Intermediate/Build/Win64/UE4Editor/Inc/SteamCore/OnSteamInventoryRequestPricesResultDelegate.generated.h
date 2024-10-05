// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamInventoryRequestPricesResult;
#ifdef STEAMCORE_OnSteamInventoryRequestPricesResultDelegate_generated_h
#error "OnSteamInventoryRequestPricesResultDelegate.generated.h already included, missing '#pragma once' in OnSteamInventoryRequestPricesResultDelegate.h"
#endif
#define STEAMCORE_OnSteamInventoryRequestPricesResultDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamInventoryRequestPricesResultDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSteamInventoryRequestPricesResult_Parms \
{ \
	FSteamInventoryRequestPricesResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnSteamInventoryRequestPricesResult_DelegateWrapper(const FScriptDelegate& OnSteamInventoryRequestPricesResult, FSteamInventoryRequestPricesResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnSteamInventoryRequestPricesResult_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnSteamInventoryRequestPricesResult.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamInventoryRequestPricesResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
