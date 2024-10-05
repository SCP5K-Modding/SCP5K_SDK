// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRemoteStorageSubscribePublishedFileResult;
#ifdef STEAMCORE_OnSubscribeItemDelegate_generated_h
#error "OnSubscribeItemDelegate.generated.h already included, missing '#pragma once' in OnSubscribeItemDelegate.h"
#endif
#define STEAMCORE_OnSubscribeItemDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSubscribeItemDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSubscribeItem_Parms \
{ \
	FRemoteStorageSubscribePublishedFileResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnSubscribeItem_DelegateWrapper(const FScriptDelegate& OnSubscribeItem, FRemoteStorageSubscribePublishedFileResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnSubscribeItem_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnSubscribeItem.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSubscribeItemDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
