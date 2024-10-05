// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRemoteStorageSubscribePublishedFileResult;
#ifdef STEAMCORE_OnRemoteStorageSubscribePublishedFileResultDelegate_generated_h
#error "OnRemoteStorageSubscribePublishedFileResultDelegate.generated.h already included, missing '#pragma once' in OnRemoteStorageSubscribePublishedFileResultDelegate.h"
#endif
#define STEAMCORE_OnRemoteStorageSubscribePublishedFileResultDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRemoteStorageSubscribePublishedFileResultDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRemoteStorageSubscribePublishedFileResult_Parms \
{ \
	FRemoteStorageSubscribePublishedFileResult Data; \
}; \
static inline void FOnRemoteStorageSubscribePublishedFileResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageSubscribePublishedFileResult, FRemoteStorageSubscribePublishedFileResult const& Data) \
{ \
	_Script_SteamCore_eventOnRemoteStorageSubscribePublishedFileResult_Parms Parms; \
	Parms.Data=Data; \
	OnRemoteStorageSubscribePublishedFileResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRemoteStorageSubscribePublishedFileResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
