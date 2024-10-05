// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRemoteStorageFileWriteAsyncComplete;
#ifdef STEAMCORE_OnFileWriteAsyncDelegate_generated_h
#error "OnFileWriteAsyncDelegate.generated.h already included, missing '#pragma once' in OnFileWriteAsyncDelegate.h"
#endif
#define STEAMCORE_OnFileWriteAsyncDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFileWriteAsyncDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnFileWriteAsync_Parms \
{ \
	FRemoteStorageFileWriteAsyncComplete Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnFileWriteAsync_DelegateWrapper(const FScriptDelegate& OnFileWriteAsync, FRemoteStorageFileWriteAsyncComplete const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnFileWriteAsync_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnFileWriteAsync.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFileWriteAsyncDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
