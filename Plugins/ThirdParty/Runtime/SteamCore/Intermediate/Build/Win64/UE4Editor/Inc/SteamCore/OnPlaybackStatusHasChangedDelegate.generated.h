// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlaybackStatusHasChanged;
#ifdef STEAMCORE_OnPlaybackStatusHasChangedDelegate_generated_h
#error "OnPlaybackStatusHasChangedDelegate.generated.h already included, missing '#pragma once' in OnPlaybackStatusHasChangedDelegate.h"
#endif
#define STEAMCORE_OnPlaybackStatusHasChangedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnPlaybackStatusHasChangedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnPlaybackStatusHasChanged_Parms \
{ \
	FPlaybackStatusHasChanged Data; \
}; \
static inline void FOnPlaybackStatusHasChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackStatusHasChanged, FPlaybackStatusHasChanged const& Data) \
{ \
	_Script_SteamCore_eventOnPlaybackStatusHasChanged_Parms Parms; \
	Parms.Data=Data; \
	OnPlaybackStatusHasChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnPlaybackStatusHasChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
