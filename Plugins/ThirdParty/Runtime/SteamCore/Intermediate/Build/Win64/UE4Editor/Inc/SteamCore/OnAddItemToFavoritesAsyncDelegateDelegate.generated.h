// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUserFavoriteItemsListChanged;
#ifdef STEAMCORE_OnAddItemToFavoritesAsyncDelegateDelegate_generated_h
#error "OnAddItemToFavoritesAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnAddItemToFavoritesAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnAddItemToFavoritesAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnAddItemToFavoritesAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnAddItemToFavoritesAsyncDelegate_Parms \
{ \
	FUserFavoriteItemsListChanged Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnAddItemToFavoritesAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAddItemToFavoritesAsyncDelegate, FUserFavoriteItemsListChanged const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnAddItemToFavoritesAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnAddItemToFavoritesAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnAddItemToFavoritesAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
