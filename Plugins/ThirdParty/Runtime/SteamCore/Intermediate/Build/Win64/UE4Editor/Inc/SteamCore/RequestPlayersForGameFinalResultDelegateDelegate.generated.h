// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRequestPlayersForGameFinalResultCallback;
#ifdef STEAMCORE_RequestPlayersForGameFinalResultDelegateDelegate_generated_h
#error "RequestPlayersForGameFinalResultDelegateDelegate.generated.h already included, missing '#pragma once' in RequestPlayersForGameFinalResultDelegateDelegate.h"
#endif
#define STEAMCORE_RequestPlayersForGameFinalResultDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RequestPlayersForGameFinalResultDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventRequestPlayersForGameFinalResultDelegate_Parms \
{ \
	FRequestPlayersForGameFinalResultCallback Data; \
}; \
static inline void FRequestPlayersForGameFinalResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestPlayersForGameFinalResultDelegate, FRequestPlayersForGameFinalResultCallback const& Data) \
{ \
	_Script_SteamCore_eventRequestPlayersForGameFinalResultDelegate_Parms Parms; \
	Parms.Data=Data; \
	RequestPlayersForGameFinalResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RequestPlayersForGameFinalResultDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
