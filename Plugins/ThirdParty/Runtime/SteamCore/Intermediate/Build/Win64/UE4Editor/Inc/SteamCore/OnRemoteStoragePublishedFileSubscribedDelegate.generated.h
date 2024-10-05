// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRemoteStoragePublishedFileSubscribed;
#ifdef STEAMCORE_OnRemoteStoragePublishedFileSubscribedDelegate_generated_h
#error "OnRemoteStoragePublishedFileSubscribedDelegate.generated.h already included, missing '#pragma once' in OnRemoteStoragePublishedFileSubscribedDelegate.h"
#endif
#define STEAMCORE_OnRemoteStoragePublishedFileSubscribedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRemoteStoragePublishedFileSubscribedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRemoteStoragePublishedFileSubscribed_Parms \
{ \
	FRemoteStoragePublishedFileSubscribed Data; \
}; \
static inline void FOnRemoteStoragePublishedFileSubscribed_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStoragePublishedFileSubscribed, FRemoteStoragePublishedFileSubscribed const& Data) \
{ \
	_Script_SteamCore_eventOnRemoteStoragePublishedFileSubscribed_Parms Parms; \
	Parms.Data=Data; \
	OnRemoteStoragePublishedFileSubscribed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRemoteStoragePublishedFileSubscribedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
