// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDownloadClanActivityCountsResult;
#ifdef STEAMCORE_OnDownloadClanActivityCountsAsyncDelegateDelegate_generated_h
#error "OnDownloadClanActivityCountsAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnDownloadClanActivityCountsAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnDownloadClanActivityCountsAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnDownloadClanActivityCountsAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnDownloadClanActivityCountsAsyncDelegate_Parms \
{ \
	FDownloadClanActivityCountsResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnDownloadClanActivityCountsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadClanActivityCountsAsyncDelegate, FDownloadClanActivityCountsResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnDownloadClanActivityCountsAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnDownloadClanActivityCountsAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnDownloadClanActivityCountsAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
