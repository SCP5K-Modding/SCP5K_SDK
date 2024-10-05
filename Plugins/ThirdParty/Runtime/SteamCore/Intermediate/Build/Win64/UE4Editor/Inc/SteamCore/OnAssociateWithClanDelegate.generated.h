// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAssociateWithClanResult;
#ifdef STEAMCORE_OnAssociateWithClanDelegate_generated_h
#error "OnAssociateWithClanDelegate.generated.h already included, missing '#pragma once' in OnAssociateWithClanDelegate.h"
#endif
#define STEAMCORE_OnAssociateWithClanDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnAssociateWithClanDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnAssociateWithClan_Parms \
{ \
	FAssociateWithClanResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnAssociateWithClan_DelegateWrapper(const FScriptDelegate& OnAssociateWithClan, FAssociateWithClanResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnAssociateWithClan_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnAssociateWithClan.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnAssociateWithClanDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
