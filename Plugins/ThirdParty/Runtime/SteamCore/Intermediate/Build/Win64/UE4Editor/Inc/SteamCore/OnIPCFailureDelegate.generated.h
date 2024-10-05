// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIPCFailure;
#ifdef STEAMCORE_OnIPCFailureDelegate_generated_h
#error "OnIPCFailureDelegate.generated.h already included, missing '#pragma once' in OnIPCFailureDelegate.h"
#endif
#define STEAMCORE_OnIPCFailureDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnIPCFailureDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnIPCFailure_Parms \
{ \
	FIPCFailure Data; \
}; \
static inline void FOnIPCFailure_DelegateWrapper(const FMulticastScriptDelegate& OnIPCFailure, FIPCFailure const& Data) \
{ \
	_Script_SteamCore_eventOnIPCFailure_Parms Parms; \
	Parms.Data=Data; \
	OnIPCFailure.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnIPCFailureDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
