// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRemoteStorageSubscribePublishedFileResult;
#ifdef STEAMCORE_OnUnsubscribeItemDelegate_generated_h
#error "OnUnsubscribeItemDelegate.generated.h already included, missing '#pragma once' in OnUnsubscribeItemDelegate.h"
#endif
#define STEAMCORE_OnUnsubscribeItemDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnUnsubscribeItemDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnUnsubscribeItem_Parms \
{ \
	FRemoteStorageSubscribePublishedFileResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnUnsubscribeItem_DelegateWrapper(const FScriptDelegate& OnUnsubscribeItem, FRemoteStorageSubscribePublishedFileResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnUnsubscribeItem_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnUnsubscribeItem.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnUnsubscribeItemDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
