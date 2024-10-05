// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamInventoryRequestPricesResult;
#ifdef STEAMCORE_OnSteamInventoryRequestPricesResultDelegateDelegate_generated_h
#error "OnSteamInventoryRequestPricesResultDelegateDelegate.generated.h already included, missing '#pragma once' in OnSteamInventoryRequestPricesResultDelegateDelegate.h"
#endif
#define STEAMCORE_OnSteamInventoryRequestPricesResultDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamInventoryRequestPricesResultDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSteamInventoryRequestPricesResultDelegate_Parms \
{ \
	FSteamInventoryRequestPricesResult Data; \
}; \
static inline void FOnSteamInventoryRequestPricesResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryRequestPricesResultDelegate, FSteamInventoryRequestPricesResult const& Data) \
{ \
	_Script_SteamCore_eventOnSteamInventoryRequestPricesResultDelegate_Parms Parms; \
	Parms.Data=Data; \
	OnSteamInventoryRequestPricesResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamInventoryRequestPricesResultDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
