// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGamepadTextInputDismissed;
#ifdef STEAMCORE_OnGamepadTextInputDismissedDelegate_generated_h
#error "OnGamepadTextInputDismissedDelegate.generated.h already included, missing '#pragma once' in OnGamepadTextInputDismissedDelegate.h"
#endif
#define STEAMCORE_OnGamepadTextInputDismissedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGamepadTextInputDismissedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGamepadTextInputDismissed_Parms \
{ \
	FGamepadTextInputDismissed Data; \
}; \
static inline void FOnGamepadTextInputDismissed_DelegateWrapper(const FMulticastScriptDelegate& OnGamepadTextInputDismissed, FGamepadTextInputDismissed const& Data) \
{ \
	_Script_SteamCore_eventOnGamepadTextInputDismissed_Parms Parms; \
	Parms.Data=Data; \
	OnGamepadTextInputDismissed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGamepadTextInputDismissedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
