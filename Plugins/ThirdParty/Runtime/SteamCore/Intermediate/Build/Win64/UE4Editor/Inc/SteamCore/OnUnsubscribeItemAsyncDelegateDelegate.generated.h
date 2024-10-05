// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRemoteStorageSubscribePublishedFileResult;
#ifdef STEAMCORE_OnUnsubscribeItemAsyncDelegateDelegate_generated_h
#error "OnUnsubscribeItemAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnUnsubscribeItemAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnUnsubscribeItemAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnUnsubscribeItemAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnUnsubscribeItemAsyncDelegate_Parms \
{ \
	FRemoteStorageSubscribePublishedFileResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnUnsubscribeItemAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnUnsubscribeItemAsyncDelegate, FRemoteStorageSubscribePublishedFileResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnUnsubscribeItemAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnUnsubscribeItemAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnUnsubscribeItemAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
