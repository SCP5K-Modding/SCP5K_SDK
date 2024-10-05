// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamInventoryEligiblePromoItemDefIDs;
#ifdef STEAMCORE_OnSteamInventoryEligiblePromoItemDefIDsDelegate_generated_h
#error "OnSteamInventoryEligiblePromoItemDefIDsDelegate.generated.h already included, missing '#pragma once' in OnSteamInventoryEligiblePromoItemDefIDsDelegate.h"
#endif
#define STEAMCORE_OnSteamInventoryEligiblePromoItemDefIDsDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamInventoryEligiblePromoItemDefIDsDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSteamInventoryEligiblePromoItemDefIDs_Parms \
{ \
	FSteamInventoryEligiblePromoItemDefIDs Data; \
}; \
static inline void FOnSteamInventoryEligiblePromoItemDefIDs_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryEligiblePromoItemDefIDs, FSteamInventoryEligiblePromoItemDefIDs const& Data) \
{ \
	_Script_SteamCore_eventOnSteamInventoryEligiblePromoItemDefIDs_Parms Parms; \
	Parms.Data=Data; \
	OnSteamInventoryEligiblePromoItemDefIDs.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamInventoryEligiblePromoItemDefIDsDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
