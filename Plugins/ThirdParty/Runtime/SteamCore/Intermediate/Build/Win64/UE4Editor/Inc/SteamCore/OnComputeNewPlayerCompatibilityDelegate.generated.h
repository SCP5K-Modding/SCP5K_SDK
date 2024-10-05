// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FComputeNewPlayerCompatibilityResult;
#ifdef STEAMCORE_OnComputeNewPlayerCompatibilityDelegate_generated_h
#error "OnComputeNewPlayerCompatibilityDelegate.generated.h already included, missing '#pragma once' in OnComputeNewPlayerCompatibilityDelegate.h"
#endif
#define STEAMCORE_OnComputeNewPlayerCompatibilityDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnComputeNewPlayerCompatibilityDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnComputeNewPlayerCompatibility_Parms \
{ \
	FComputeNewPlayerCompatibilityResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnComputeNewPlayerCompatibility_DelegateWrapper(const FScriptDelegate& OnComputeNewPlayerCompatibility, FComputeNewPlayerCompatibilityResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnComputeNewPlayerCompatibility_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnComputeNewPlayerCompatibility.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnComputeNewPlayerCompatibilityDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
