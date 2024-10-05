// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FP2PSessionRequest;
#ifdef STEAMCORE_OnP2PSessionRequestDelegate_generated_h
#error "OnP2PSessionRequestDelegate.generated.h already included, missing '#pragma once' in OnP2PSessionRequestDelegate.h"
#endif
#define STEAMCORE_OnP2PSessionRequestDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnP2PSessionRequestDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnP2PSessionRequest_Parms \
{ \
	FP2PSessionRequest Data; \
}; \
static inline void FOnP2PSessionRequest_DelegateWrapper(const FMulticastScriptDelegate& OnP2PSessionRequest, FP2PSessionRequest const& Data) \
{ \
	_Script_SteamCore_eventOnP2PSessionRequest_Parms Parms; \
	Parms.Data=Data; \
	OnP2PSessionRequest.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnP2PSessionRequestDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
