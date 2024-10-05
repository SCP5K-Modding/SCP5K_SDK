// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamSessionResult;
#ifdef STEAMCORE_FindSteamSessionsResultDelegateDelegate_generated_h
#error "FindSteamSessionsResultDelegateDelegate.generated.h already included, missing '#pragma once' in FindSteamSessionsResultDelegateDelegate.h"
#endif
#define STEAMCORE_FindSteamSessionsResultDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_FindSteamSessionsResultDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventFindSteamSessionsResultDelegate_Parms \
{ \
	TArray<FSteamSessionResult> Results; \
}; \
static inline void FFindSteamSessionsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& FindSteamSessionsResultDelegate, TArray<FSteamSessionResult> const& Results) \
{ \
	_Script_SteamCore_eventFindSteamSessionsResultDelegate_Parms Parms; \
	Parms.Results=Results; \
	FindSteamSessionsResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_FindSteamSessionsResultDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
