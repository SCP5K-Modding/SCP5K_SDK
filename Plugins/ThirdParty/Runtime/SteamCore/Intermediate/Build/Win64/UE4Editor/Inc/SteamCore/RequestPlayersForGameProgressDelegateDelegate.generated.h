// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRequestPlayersForGameProgressCallback;
#ifdef STEAMCORE_RequestPlayersForGameProgressDelegateDelegate_generated_h
#error "RequestPlayersForGameProgressDelegateDelegate.generated.h already included, missing '#pragma once' in RequestPlayersForGameProgressDelegateDelegate.h"
#endif
#define STEAMCORE_RequestPlayersForGameProgressDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RequestPlayersForGameProgressDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventRequestPlayersForGameProgressDelegate_Parms \
{ \
	FRequestPlayersForGameProgressCallback Data; \
}; \
static inline void FRequestPlayersForGameProgressDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestPlayersForGameProgressDelegate, FRequestPlayersForGameProgressCallback const& Data) \
{ \
	_Script_SteamCore_eventRequestPlayersForGameProgressDelegate_Parms Parms; \
	Parms.Data=Data; \
	RequestPlayersForGameProgressDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RequestPlayersForGameProgressDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
