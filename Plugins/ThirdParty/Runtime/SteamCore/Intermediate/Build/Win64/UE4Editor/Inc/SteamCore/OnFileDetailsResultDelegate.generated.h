// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFileDetailsResult;
#ifdef STEAMCORE_OnFileDetailsResultDelegate_generated_h
#error "OnFileDetailsResultDelegate.generated.h already included, missing '#pragma once' in OnFileDetailsResultDelegate.h"
#endif
#define STEAMCORE_OnFileDetailsResultDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFileDetailsResultDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnFileDetailsResult_Parms \
{ \
	FFileDetailsResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnFileDetailsResult_DelegateWrapper(const FScriptDelegate& OnFileDetailsResult, FFileDetailsResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnFileDetailsResult_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnFileDetailsResult.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFileDetailsResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
