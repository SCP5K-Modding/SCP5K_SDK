// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJoinPartyData;
#ifdef STEAMCORE_OnJoinPartyDelegateDelegate_generated_h
#error "OnJoinPartyDelegateDelegate.generated.h already included, missing '#pragma once' in OnJoinPartyDelegateDelegate.h"
#endif
#define STEAMCORE_OnJoinPartyDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnJoinPartyDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnJoinPartyDelegate_Parms \
{ \
	FJoinPartyData Data; \
}; \
static inline void FOnJoinPartyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinPartyDelegate, FJoinPartyData const& Data) \
{ \
	_Script_SteamCore_eventOnJoinPartyDelegate_Parms Parms; \
	Parms.Data=Data; \
	OnJoinPartyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnJoinPartyDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
