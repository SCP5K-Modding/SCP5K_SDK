// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRemoteStoragePublishedFileUnsubscribed;
#ifdef STEAMCORE_OnRemoteStoragePublishedFileUnsubscribedDelegate_generated_h
#error "OnRemoteStoragePublishedFileUnsubscribedDelegate.generated.h already included, missing '#pragma once' in OnRemoteStoragePublishedFileUnsubscribedDelegate.h"
#endif
#define STEAMCORE_OnRemoteStoragePublishedFileUnsubscribedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRemoteStoragePublishedFileUnsubscribedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRemoteStoragePublishedFileUnsubscribed_Parms \
{ \
	FRemoteStoragePublishedFileUnsubscribed Data; \
}; \
static inline void FOnRemoteStoragePublishedFileUnsubscribed_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStoragePublishedFileUnsubscribed, FRemoteStoragePublishedFileUnsubscribed const& Data) \
{ \
	_Script_SteamCore_eventOnRemoteStoragePublishedFileUnsubscribed_Parms Parms; \
	Parms.Data=Data; \
	OnRemoteStoragePublishedFileUnsubscribed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRemoteStoragePublishedFileUnsubscribedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
