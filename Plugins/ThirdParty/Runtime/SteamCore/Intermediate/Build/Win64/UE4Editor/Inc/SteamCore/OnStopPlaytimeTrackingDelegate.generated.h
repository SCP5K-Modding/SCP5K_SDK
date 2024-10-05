// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStopPlaytimeTrackingResult;
#ifdef STEAMCORE_OnStopPlaytimeTrackingDelegate_generated_h
#error "OnStopPlaytimeTrackingDelegate.generated.h already included, missing '#pragma once' in OnStopPlaytimeTrackingDelegate.h"
#endif
#define STEAMCORE_OnStopPlaytimeTrackingDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnStopPlaytimeTrackingDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnStopPlaytimeTracking_Parms \
{ \
	FStopPlaytimeTrackingResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnStopPlaytimeTracking_DelegateWrapper(const FScriptDelegate& OnStopPlaytimeTracking, FStopPlaytimeTrackingResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnStopPlaytimeTracking_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnStopPlaytimeTracking.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnStopPlaytimeTrackingDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
