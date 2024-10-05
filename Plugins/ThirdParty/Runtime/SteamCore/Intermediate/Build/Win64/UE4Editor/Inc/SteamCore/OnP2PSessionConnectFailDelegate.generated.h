// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FP2PSessionConnectFail;
#ifdef STEAMCORE_OnP2PSessionConnectFailDelegate_generated_h
#error "OnP2PSessionConnectFailDelegate.generated.h already included, missing '#pragma once' in OnP2PSessionConnectFailDelegate.h"
#endif
#define STEAMCORE_OnP2PSessionConnectFailDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnP2PSessionConnectFailDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnP2PSessionConnectFail_Parms \
{ \
	FP2PSessionConnectFail Data; \
}; \
static inline void FOnP2PSessionConnectFail_DelegateWrapper(const FMulticastScriptDelegate& OnP2PSessionConnectFail, FP2PSessionConnectFail const& Data) \
{ \
	_Script_SteamCore_eventOnP2PSessionConnectFail_Parms Parms; \
	Parms.Data=Data; \
	OnP2PSessionConnectFail.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnP2PSessionConnectFailDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
