// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FChangeNumOpenSlotsData;
#ifdef STEAMCORE_OnChangeNumOpenSlotsCallbackDelegate_generated_h
#error "OnChangeNumOpenSlotsCallbackDelegate.generated.h already included, missing '#pragma once' in OnChangeNumOpenSlotsCallbackDelegate.h"
#endif
#define STEAMCORE_OnChangeNumOpenSlotsCallbackDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnChangeNumOpenSlotsCallbackDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnChangeNumOpenSlotsCallback_Parms \
{ \
	FChangeNumOpenSlotsData Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnChangeNumOpenSlotsCallback_DelegateWrapper(const FMulticastScriptDelegate& OnChangeNumOpenSlotsCallback, FChangeNumOpenSlotsData const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnChangeNumOpenSlotsCallback_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnChangeNumOpenSlotsCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnChangeNumOpenSlotsCallbackDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
