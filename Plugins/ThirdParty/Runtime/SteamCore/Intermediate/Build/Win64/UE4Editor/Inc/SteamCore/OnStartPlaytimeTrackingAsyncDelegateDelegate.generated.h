// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStartPlaytimeTrackingResult;
#ifdef STEAMCORE_OnStartPlaytimeTrackingAsyncDelegateDelegate_generated_h
#error "OnStartPlaytimeTrackingAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnStartPlaytimeTrackingAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnStartPlaytimeTrackingAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnStartPlaytimeTrackingAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnStartPlaytimeTrackingAsyncDelegate_Parms \
{ \
	FStartPlaytimeTrackingResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnStartPlaytimeTrackingAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStartPlaytimeTrackingAsyncDelegate, FStartPlaytimeTrackingResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnStartPlaytimeTrackingAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnStartPlaytimeTrackingAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnStartPlaytimeTrackingAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
