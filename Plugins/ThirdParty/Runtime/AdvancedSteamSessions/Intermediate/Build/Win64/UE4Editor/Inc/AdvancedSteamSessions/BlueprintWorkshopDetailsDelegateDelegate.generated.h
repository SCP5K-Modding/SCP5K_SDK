// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPSteamWorkshopItemDetails;
#ifdef ADVANCEDSTEAMSESSIONS_BlueprintWorkshopDetailsDelegateDelegate_generated_h
#error "BlueprintWorkshopDetailsDelegateDelegate.generated.h already included, missing '#pragma once' in BlueprintWorkshopDetailsDelegateDelegate.h"
#endif
#define ADVANCEDSTEAMSESSIONS_BlueprintWorkshopDetailsDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_BlueprintWorkshopDetailsDelegateDelegate_h_6_DELEGATE \
struct _Script_AdvancedSteamSessions_eventBlueprintWorkshopDetailsDelegate_Parms \
{ \
	FBPSteamWorkshopItemDetails WorkShopDetails; \
}; \
static inline void FBlueprintWorkshopDetailsDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintWorkshopDetailsDelegate, FBPSteamWorkshopItemDetails const& WorkShopDetails) \
{ \
	_Script_AdvancedSteamSessions_eventBlueprintWorkshopDetailsDelegate_Parms Parms; \
	Parms.WorkShopDetails=WorkShopDetails; \
	BlueprintWorkshopDetailsDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_BlueprintWorkshopDetailsDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
