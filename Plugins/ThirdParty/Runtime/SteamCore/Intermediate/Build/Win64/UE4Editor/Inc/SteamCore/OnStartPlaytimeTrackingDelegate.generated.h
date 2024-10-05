// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStartPlaytimeTrackingResult;
#ifdef STEAMCORE_OnStartPlaytimeTrackingDelegate_generated_h
#error "OnStartPlaytimeTrackingDelegate.generated.h already included, missing '#pragma once' in OnStartPlaytimeTrackingDelegate.h"
#endif
#define STEAMCORE_OnStartPlaytimeTrackingDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnStartPlaytimeTrackingDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnStartPlaytimeTracking_Parms \
{ \
	FStartPlaytimeTrackingResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnStartPlaytimeTracking_DelegateWrapper(const FScriptDelegate& OnStartPlaytimeTracking, FStartPlaytimeTrackingResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnStartPlaytimeTracking_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnStartPlaytimeTracking.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnStartPlaytimeTrackingDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
