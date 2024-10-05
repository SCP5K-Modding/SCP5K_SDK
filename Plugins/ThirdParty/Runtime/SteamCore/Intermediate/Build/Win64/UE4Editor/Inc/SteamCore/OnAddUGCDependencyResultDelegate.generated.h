// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAddUGCDependencyResult;
#ifdef STEAMCORE_OnAddUGCDependencyResultDelegate_generated_h
#error "OnAddUGCDependencyResultDelegate.generated.h already included, missing '#pragma once' in OnAddUGCDependencyResultDelegate.h"
#endif
#define STEAMCORE_OnAddUGCDependencyResultDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnAddUGCDependencyResultDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnAddUGCDependencyResult_Parms \
{ \
	FAddUGCDependencyResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnAddUGCDependencyResult_DelegateWrapper(const FScriptDelegate& OnAddUGCDependencyResult, FAddUGCDependencyResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnAddUGCDependencyResult_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnAddUGCDependencyResult.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnAddUGCDependencyResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
