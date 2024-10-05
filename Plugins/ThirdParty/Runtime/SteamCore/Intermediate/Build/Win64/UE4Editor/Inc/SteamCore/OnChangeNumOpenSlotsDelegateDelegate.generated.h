// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FChangeNumOpenSlotsData;
#ifdef STEAMCORE_OnChangeNumOpenSlotsDelegateDelegate_generated_h
#error "OnChangeNumOpenSlotsDelegateDelegate.generated.h already included, missing '#pragma once' in OnChangeNumOpenSlotsDelegateDelegate.h"
#endif
#define STEAMCORE_OnChangeNumOpenSlotsDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnChangeNumOpenSlotsDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnChangeNumOpenSlotsDelegate_Parms \
{ \
	FChangeNumOpenSlotsData Data; \
}; \
static inline void FOnChangeNumOpenSlotsDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnChangeNumOpenSlotsDelegate, FChangeNumOpenSlotsData const& Data) \
{ \
	_Script_SteamCore_eventOnChangeNumOpenSlotsDelegate_Parms Parms; \
	Parms.Data=Data; \
	OnChangeNumOpenSlotsDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnChangeNumOpenSlotsDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
