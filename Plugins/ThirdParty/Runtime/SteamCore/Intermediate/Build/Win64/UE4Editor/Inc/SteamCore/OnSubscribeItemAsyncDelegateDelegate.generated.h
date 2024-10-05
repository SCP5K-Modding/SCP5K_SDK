// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRemoteStorageSubscribePublishedFileResult;
#ifdef STEAMCORE_OnSubscribeItemAsyncDelegateDelegate_generated_h
#error "OnSubscribeItemAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnSubscribeItemAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnSubscribeItemAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSubscribeItemAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSubscribeItemAsyncDelegate_Parms \
{ \
	FRemoteStorageSubscribePublishedFileResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnSubscribeItemAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSubscribeItemAsyncDelegate, FRemoteStorageSubscribePublishedFileResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnSubscribeItemAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnSubscribeItemAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSubscribeItemAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
