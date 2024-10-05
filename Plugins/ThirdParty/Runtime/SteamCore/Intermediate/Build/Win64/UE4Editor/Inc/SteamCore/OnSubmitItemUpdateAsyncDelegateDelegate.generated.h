// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSubmitItemUpdateResult;
#ifdef STEAMCORE_OnSubmitItemUpdateAsyncDelegateDelegate_generated_h
#error "OnSubmitItemUpdateAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnSubmitItemUpdateAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnSubmitItemUpdateAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSubmitItemUpdateAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSubmitItemUpdateAsyncDelegate_Parms \
{ \
	FSubmitItemUpdateResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnSubmitItemUpdateAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSubmitItemUpdateAsyncDelegate, FSubmitItemUpdateResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnSubmitItemUpdateAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnSubmitItemUpdateAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSubmitItemUpdateAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
