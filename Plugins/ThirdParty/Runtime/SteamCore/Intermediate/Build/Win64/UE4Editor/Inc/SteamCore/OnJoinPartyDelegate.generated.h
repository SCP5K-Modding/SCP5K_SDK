// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJoinPartyData;
#ifdef STEAMCORE_OnJoinPartyDelegate_generated_h
#error "OnJoinPartyDelegate.generated.h already included, missing '#pragma once' in OnJoinPartyDelegate.h"
#endif
#define STEAMCORE_OnJoinPartyDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnJoinPartyDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnJoinParty_Parms \
{ \
	FJoinPartyData Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnJoinParty_DelegateWrapper(const FScriptDelegate& OnJoinParty, FJoinPartyData const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnJoinParty_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnJoinParty.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnJoinPartyDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
