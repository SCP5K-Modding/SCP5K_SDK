// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBlueprintSessionResult;
#ifdef STEAMCORE_OnFindSessionsDelegate_generated_h
#error "OnFindSessionsDelegate.generated.h already included, missing '#pragma once' in OnFindSessionsDelegate.h"
#endif
#define STEAMCORE_OnFindSessionsDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFindSessionsDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnFindSessions_Parms \
{ \
	TArray<FBlueprintSessionResult> Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnFindSessions_DelegateWrapper(const FScriptDelegate& OnFindSessions, TArray<FBlueprintSessionResult> const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnFindSessions_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnFindSessions.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFindSessionsDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
