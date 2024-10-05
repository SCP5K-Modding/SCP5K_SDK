// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFileDetailsResult;
#ifdef STEAMCORE_OnFileDetailsResultDelegateDelegate_generated_h
#error "OnFileDetailsResultDelegateDelegate.generated.h already included, missing '#pragma once' in OnFileDetailsResultDelegateDelegate.h"
#endif
#define STEAMCORE_OnFileDetailsResultDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFileDetailsResultDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnFileDetailsResultDelegate_Parms \
{ \
	FFileDetailsResult Data; \
}; \
static inline void FOnFileDetailsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFileDetailsResultDelegate, FFileDetailsResult const& Data) \
{ \
	_Script_SteamCore_eventOnFileDetailsResultDelegate_Parms Parms; \
	Parms.Data=Data; \
	OnFileDetailsResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFileDetailsResultDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
