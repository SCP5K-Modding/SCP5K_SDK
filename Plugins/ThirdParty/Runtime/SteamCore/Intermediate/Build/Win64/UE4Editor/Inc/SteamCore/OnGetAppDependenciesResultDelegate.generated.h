// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGetAppDependenciesResult;
#ifdef STEAMCORE_OnGetAppDependenciesResultDelegate_generated_h
#error "OnGetAppDependenciesResultDelegate.generated.h already included, missing '#pragma once' in OnGetAppDependenciesResultDelegate.h"
#endif
#define STEAMCORE_OnGetAppDependenciesResultDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGetAppDependenciesResultDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGetAppDependenciesResult_Parms \
{ \
	FGetAppDependenciesResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnGetAppDependenciesResult_DelegateWrapper(const FScriptDelegate& OnGetAppDependenciesResult, FGetAppDependenciesResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnGetAppDependenciesResult_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnGetAppDependenciesResult.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGetAppDependenciesResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
