// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUserFavoriteItemsListChanged;
#ifdef STEAMCORE_OnRemoveItemFromFavoritesAsyncDelegateDelegate_generated_h
#error "OnRemoveItemFromFavoritesAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnRemoveItemFromFavoritesAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnRemoveItemFromFavoritesAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRemoveItemFromFavoritesAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRemoveItemFromFavoritesAsyncDelegate_Parms \
{ \
	FUserFavoriteItemsListChanged Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRemoveItemFromFavoritesAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoveItemFromFavoritesAsyncDelegate, FUserFavoriteItemsListChanged const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRemoveItemFromFavoritesAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRemoveItemFromFavoritesAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRemoveItemFromFavoritesAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
