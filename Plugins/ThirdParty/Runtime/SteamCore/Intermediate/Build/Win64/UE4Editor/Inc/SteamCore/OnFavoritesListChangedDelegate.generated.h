// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFavoritesListChanged;
#ifdef STEAMCORE_OnFavoritesListChangedDelegate_generated_h
#error "OnFavoritesListChangedDelegate.generated.h already included, missing '#pragma once' in OnFavoritesListChangedDelegate.h"
#endif
#define STEAMCORE_OnFavoritesListChangedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFavoritesListChangedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnFavoritesListChanged_Parms \
{ \
	FFavoritesListChanged Data; \
}; \
static inline void FOnFavoritesListChanged_DelegateWrapper(const FMulticastScriptDelegate& OnFavoritesListChanged, FFavoritesListChanged const& Data) \
{ \
	_Script_SteamCore_eventOnFavoritesListChanged_Parms Parms; \
	Parms.Data=Data; \
	OnFavoritesListChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFavoritesListChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
