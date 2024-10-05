// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStopPlaytimeTrackingResult;
#ifdef STEAMCORE_OnStopPlaytimeTrackingAsyncDelegateDelegate_generated_h
#error "OnStopPlaytimeTrackingAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnStopPlaytimeTrackingAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnStopPlaytimeTrackingAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnStopPlaytimeTrackingAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnStopPlaytimeTrackingAsyncDelegate_Parms \
{ \
	FStopPlaytimeTrackingResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnStopPlaytimeTrackingAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStopPlaytimeTrackingAsyncDelegate, FStopPlaytimeTrackingResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnStopPlaytimeTrackingAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnStopPlaytimeTrackingAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnStopPlaytimeTrackingAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
