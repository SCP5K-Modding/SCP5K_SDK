// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDiscordEntitlement;
#ifdef DISCORDSTORE_DiscordEntitlementEventDelegate_generated_h
#error "DiscordEntitlementEventDelegate.generated.h already included, missing '#pragma once' in DiscordEntitlementEventDelegate.h"
#endif
#define DISCORDSTORE_DiscordEntitlementEventDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStore_Public_DiscordEntitlementEventDelegate_h_6_DELEGATE \
struct _Script_DiscordStore_eventDiscordEntitlementEvent_Parms \
{ \
	FDiscordEntitlement Entitlement; \
}; \
static inline void FDiscordEntitlementEvent_DelegateWrapper(const FMulticastScriptDelegate& DiscordEntitlementEvent, FDiscordEntitlement const& Entitlement) \
{ \
	_Script_DiscordStore_eventDiscordEntitlementEvent_Parms Parms; \
	Parms.Entitlement=Entitlement; \
	DiscordEntitlementEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStore_Public_DiscordEntitlementEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
