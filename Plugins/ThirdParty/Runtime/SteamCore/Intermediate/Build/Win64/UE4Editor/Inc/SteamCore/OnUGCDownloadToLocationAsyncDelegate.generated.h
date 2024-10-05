// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRemoteStorageDownloadUGCResult;
#ifdef STEAMCORE_OnUGCDownloadToLocationAsyncDelegate_generated_h
#error "OnUGCDownloadToLocationAsyncDelegate.generated.h already included, missing '#pragma once' in OnUGCDownloadToLocationAsyncDelegate.h"
#endif
#define STEAMCORE_OnUGCDownloadToLocationAsyncDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnUGCDownloadToLocationAsyncDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnUGCDownloadToLocationAsync_Parms \
{ \
	FRemoteStorageDownloadUGCResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnUGCDownloadToLocationAsync_DelegateWrapper(const FScriptDelegate& OnUGCDownloadToLocationAsync, FRemoteStorageDownloadUGCResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnUGCDownloadToLocationAsync_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnUGCDownloadToLocationAsync.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnUGCDownloadToLocationAsyncDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
