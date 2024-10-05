// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSearchForGameProgressCallback;
#ifdef STEAMCORE_SearchForGameProgressDelegateDelegate_generated_h
#error "SearchForGameProgressDelegateDelegate.generated.h already included, missing '#pragma once' in SearchForGameProgressDelegateDelegate.h"
#endif
#define STEAMCORE_SearchForGameProgressDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SearchForGameProgressDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventSearchForGameProgressDelegate_Parms \
{ \
	FSearchForGameProgressCallback Data; \
}; \
static inline void FSearchForGameProgressDelegate_DelegateWrapper(const FMulticastScriptDelegate& SearchForGameProgressDelegate, FSearchForGameProgressCallback const& Data) \
{ \
	_Script_SteamCore_eventSearchForGameProgressDelegate_Parms Parms; \
	Parms.Data=Data; \
	SearchForGameProgressDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SearchForGameProgressDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
