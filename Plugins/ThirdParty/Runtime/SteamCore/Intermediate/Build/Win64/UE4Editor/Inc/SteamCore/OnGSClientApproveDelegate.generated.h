// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGSClientApprove;
#ifdef STEAMCORE_OnGSClientApproveDelegate_generated_h
#error "OnGSClientApproveDelegate.generated.h already included, missing '#pragma once' in OnGSClientApproveDelegate.h"
#endif
#define STEAMCORE_OnGSClientApproveDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGSClientApproveDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGSClientApprove_Parms \
{ \
	FGSClientApprove Data; \
}; \
static inline void FOnGSClientApprove_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientApprove, FGSClientApprove const& Data) \
{ \
	_Script_SteamCore_eventOnGSClientApprove_Parms Parms; \
	Parms.Data=Data; \
	OnGSClientApprove.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGSClientApproveDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
