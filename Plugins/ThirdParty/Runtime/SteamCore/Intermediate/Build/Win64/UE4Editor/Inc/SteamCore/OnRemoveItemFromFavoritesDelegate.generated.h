// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUserFavoriteItemsListChanged;
#ifdef STEAMCORE_OnRemoveItemFromFavoritesDelegate_generated_h
#error "OnRemoveItemFromFavoritesDelegate.generated.h already included, missing '#pragma once' in OnRemoveItemFromFavoritesDelegate.h"
#endif
#define STEAMCORE_OnRemoveItemFromFavoritesDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRemoveItemFromFavoritesDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRemoveItemFromFavorites_Parms \
{ \
	FUserFavoriteItemsListChanged Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRemoveItemFromFavorites_DelegateWrapper(const FScriptDelegate& OnRemoveItemFromFavorites, FUserFavoriteItemsListChanged const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRemoveItemFromFavorites_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRemoveItemFromFavorites.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRemoveItemFromFavoritesDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
