// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamInventoryEligiblePromoItemDefIDs;
#ifdef STEAMCORE_OnRequestEligiblePromoItemDefinitionsIDsDelegate_generated_h
#error "OnRequestEligiblePromoItemDefinitionsIDsDelegate.generated.h already included, missing '#pragma once' in OnRequestEligiblePromoItemDefinitionsIDsDelegate.h"
#endif
#define STEAMCORE_OnRequestEligiblePromoItemDefinitionsIDsDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRequestEligiblePromoItemDefinitionsIDsDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms \
{ \
	FSteamInventoryEligiblePromoItemDefIDs Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRequestEligiblePromoItemDefinitionsIDs_DelegateWrapper(const FScriptDelegate& OnRequestEligiblePromoItemDefinitionsIDs, FSteamInventoryEligiblePromoItemDefIDs const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDs_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRequestEligiblePromoItemDefinitionsIDs.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRequestEligiblePromoItemDefinitionsIDsDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
