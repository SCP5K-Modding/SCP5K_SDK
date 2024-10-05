// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAddAppDependencyResult;
#ifdef STEAMCORE_OnAddAppDependencyResultDelegate_generated_h
#error "OnAddAppDependencyResultDelegate.generated.h already included, missing '#pragma once' in OnAddAppDependencyResultDelegate.h"
#endif
#define STEAMCORE_OnAddAppDependencyResultDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnAddAppDependencyResultDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnAddAppDependencyResult_Parms \
{ \
	FAddAppDependencyResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnAddAppDependencyResult_DelegateWrapper(const FScriptDelegate& OnAddAppDependencyResult, FAddAppDependencyResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnAddAppDependencyResult_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnAddAppDependencyResult.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnAddAppDependencyResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
