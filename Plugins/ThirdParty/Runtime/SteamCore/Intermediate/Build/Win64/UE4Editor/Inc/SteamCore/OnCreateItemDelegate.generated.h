// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCreateItemResult;
#ifdef STEAMCORE_OnCreateItemDelegate_generated_h
#error "OnCreateItemDelegate.generated.h already included, missing '#pragma once' in OnCreateItemDelegate.h"
#endif
#define STEAMCORE_OnCreateItemDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnCreateItemDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnCreateItem_Parms \
{ \
	FCreateItemResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnCreateItem_DelegateWrapper(const FScriptDelegate& OnCreateItem, FCreateItemResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnCreateItem_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnCreateItem.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnCreateItemDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
