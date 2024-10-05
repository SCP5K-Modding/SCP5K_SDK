// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUserStatsStored;
#ifdef STEAMCORE_OnUserStatsStoredDelegate_generated_h
#error "OnUserStatsStoredDelegate.generated.h already included, missing '#pragma once' in OnUserStatsStoredDelegate.h"
#endif
#define STEAMCORE_OnUserStatsStoredDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnUserStatsStoredDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnUserStatsStored_Parms \
{ \
	FUserStatsStored Data; \
}; \
static inline void FOnUserStatsStored_DelegateWrapper(const FMulticastScriptDelegate& OnUserStatsStored, FUserStatsStored const& Data) \
{ \
	_Script_SteamCore_eventOnUserStatsStored_Parms Parms; \
	Parms.Data=Data; \
	OnUserStatsStored.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnUserStatsStoredDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
