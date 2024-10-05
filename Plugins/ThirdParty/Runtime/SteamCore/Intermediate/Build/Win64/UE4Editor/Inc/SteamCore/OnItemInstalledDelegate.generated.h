// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FItemInstalled;
#ifdef STEAMCORE_OnItemInstalledDelegate_generated_h
#error "OnItemInstalledDelegate.generated.h already included, missing '#pragma once' in OnItemInstalledDelegate.h"
#endif
#define STEAMCORE_OnItemInstalledDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnItemInstalledDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnItemInstalled_Parms \
{ \
	FItemInstalled Data; \
}; \
static inline void FOnItemInstalled_DelegateWrapper(const FMulticastScriptDelegate& OnItemInstalled, FItemInstalled const& Data) \
{ \
	_Script_SteamCore_eventOnItemInstalled_Parms Parms; \
	Parms.Data=Data; \
	OnItemInstalled.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnItemInstalledDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
