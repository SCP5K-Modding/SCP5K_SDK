// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRemoteStorageDownloadUGCResult;
#ifdef STEAMCORE_OnUGCDownloadAsyncDelegate_generated_h
#error "OnUGCDownloadAsyncDelegate.generated.h already included, missing '#pragma once' in OnUGCDownloadAsyncDelegate.h"
#endif
#define STEAMCORE_OnUGCDownloadAsyncDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnUGCDownloadAsyncDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnUGCDownloadAsync_Parms \
{ \
	FRemoteStorageDownloadUGCResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnUGCDownloadAsync_DelegateWrapper(const FScriptDelegate& OnUGCDownloadAsync, FRemoteStorageDownloadUGCResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnUGCDownloadAsync_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnUGCDownloadAsync.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnUGCDownloadAsyncDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
