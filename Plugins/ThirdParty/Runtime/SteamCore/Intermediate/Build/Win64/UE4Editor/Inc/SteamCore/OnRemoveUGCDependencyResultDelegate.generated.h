// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRemoveUGCDependencyResult;
#ifdef STEAMCORE_OnRemoveUGCDependencyResultDelegate_generated_h
#error "OnRemoveUGCDependencyResultDelegate.generated.h already included, missing '#pragma once' in OnRemoveUGCDependencyResultDelegate.h"
#endif
#define STEAMCORE_OnRemoveUGCDependencyResultDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRemoveUGCDependencyResultDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRemoveUGCDependencyResult_Parms \
{ \
	FRemoveUGCDependencyResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRemoveUGCDependencyResult_DelegateWrapper(const FScriptDelegate& OnRemoveUGCDependencyResult, FRemoveUGCDependencyResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRemoveUGCDependencyResult_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRemoveUGCDependencyResult.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRemoveUGCDependencyResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
