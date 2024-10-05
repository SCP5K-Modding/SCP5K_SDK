// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRemoteStorageFileReadAsyncComplete;
#ifdef STEAMCORE_OnFileReadAsyncDelegate_generated_h
#error "OnFileReadAsyncDelegate.generated.h already included, missing '#pragma once' in OnFileReadAsyncDelegate.h"
#endif
#define STEAMCORE_OnFileReadAsyncDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFileReadAsyncDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnFileReadAsync_Parms \
{ \
	FRemoteStorageFileReadAsyncComplete Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnFileReadAsync_DelegateWrapper(const FScriptDelegate& OnFileReadAsync, FRemoteStorageFileReadAsyncComplete const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnFileReadAsync_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnFileReadAsync.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFileReadAsyncDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
