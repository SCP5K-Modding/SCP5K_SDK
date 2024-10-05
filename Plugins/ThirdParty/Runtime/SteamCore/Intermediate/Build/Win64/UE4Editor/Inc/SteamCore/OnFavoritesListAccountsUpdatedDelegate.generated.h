// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFavoritesListAccountsUpdated;
#ifdef STEAMCORE_OnFavoritesListAccountsUpdatedDelegate_generated_h
#error "OnFavoritesListAccountsUpdatedDelegate.generated.h already included, missing '#pragma once' in OnFavoritesListAccountsUpdatedDelegate.h"
#endif
#define STEAMCORE_OnFavoritesListAccountsUpdatedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFavoritesListAccountsUpdatedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnFavoritesListAccountsUpdated_Parms \
{ \
	FFavoritesListAccountsUpdated Data; \
}; \
static inline void FOnFavoritesListAccountsUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnFavoritesListAccountsUpdated, FFavoritesListAccountsUpdated const& Data) \
{ \
	_Script_SteamCore_eventOnFavoritesListAccountsUpdated_Parms Parms; \
	Parms.Data=Data; \
	OnFavoritesListAccountsUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFavoritesListAccountsUpdatedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
