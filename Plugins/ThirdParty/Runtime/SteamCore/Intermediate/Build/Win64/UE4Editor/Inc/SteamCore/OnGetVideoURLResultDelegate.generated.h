// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGetVideoURLResult;
#ifdef STEAMCORE_OnGetVideoURLResultDelegate_generated_h
#error "OnGetVideoURLResultDelegate.generated.h already included, missing '#pragma once' in OnGetVideoURLResultDelegate.h"
#endif
#define STEAMCORE_OnGetVideoURLResultDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGetVideoURLResultDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGetVideoURLResult_Parms \
{ \
	FGetVideoURLResult Data; \
}; \
static inline void FOnGetVideoURLResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetVideoURLResult, FGetVideoURLResult const& Data) \
{ \
	_Script_SteamCore_eventOnGetVideoURLResult_Parms Parms; \
	Parms.Data=Data; \
	OnGetVideoURLResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGetVideoURLResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
