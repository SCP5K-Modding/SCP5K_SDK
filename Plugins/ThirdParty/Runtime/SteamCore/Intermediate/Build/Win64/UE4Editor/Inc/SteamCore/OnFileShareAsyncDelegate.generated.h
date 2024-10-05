// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRemoteStorageFileShareResult;
#ifdef STEAMCORE_OnFileShareAsyncDelegate_generated_h
#error "OnFileShareAsyncDelegate.generated.h already included, missing '#pragma once' in OnFileShareAsyncDelegate.h"
#endif
#define STEAMCORE_OnFileShareAsyncDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFileShareAsyncDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnFileShareAsync_Parms \
{ \
	FRemoteStorageFileShareResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnFileShareAsync_DelegateWrapper(const FScriptDelegate& OnFileShareAsync, FRemoteStorageFileShareResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnFileShareAsync_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnFileShareAsync.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFileShareAsyncDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
