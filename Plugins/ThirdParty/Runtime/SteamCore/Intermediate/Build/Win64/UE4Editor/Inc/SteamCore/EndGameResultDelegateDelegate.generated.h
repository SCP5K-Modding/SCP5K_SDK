// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEndGameResultCallback;
#ifdef STEAMCORE_EndGameResultDelegateDelegate_generated_h
#error "EndGameResultDelegateDelegate.generated.h already included, missing '#pragma once' in EndGameResultDelegateDelegate.h"
#endif
#define STEAMCORE_EndGameResultDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_EndGameResultDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventEndGameResultDelegate_Parms \
{ \
	FEndGameResultCallback Data; \
}; \
static inline void FEndGameResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& EndGameResultDelegate, FEndGameResultCallback const& Data) \
{ \
	_Script_SteamCore_eventEndGameResultDelegate_Parms Parms; \
	Parms.Data=Data; \
	EndGameResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_EndGameResultDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
