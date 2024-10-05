// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSubmitItemUpdateResult;
#ifdef STEAMCORE_OnSubmitItemUpdateDelegate_generated_h
#error "OnSubmitItemUpdateDelegate.generated.h already included, missing '#pragma once' in OnSubmitItemUpdateDelegate.h"
#endif
#define STEAMCORE_OnSubmitItemUpdateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSubmitItemUpdateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSubmitItemUpdate_Parms \
{ \
	FSubmitItemUpdateResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnSubmitItemUpdate_DelegateWrapper(const FScriptDelegate& OnSubmitItemUpdate, FSubmitItemUpdateResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnSubmitItemUpdate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnSubmitItemUpdate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSubmitItemUpdateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
