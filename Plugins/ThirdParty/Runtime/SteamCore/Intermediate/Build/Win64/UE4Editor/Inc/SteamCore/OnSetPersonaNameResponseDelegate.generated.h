// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSetPersonaNameResponse;
#ifdef STEAMCORE_OnSetPersonaNameResponseDelegate_generated_h
#error "OnSetPersonaNameResponseDelegate.generated.h already included, missing '#pragma once' in OnSetPersonaNameResponseDelegate.h"
#endif
#define STEAMCORE_OnSetPersonaNameResponseDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSetPersonaNameResponseDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSetPersonaNameResponse_Parms \
{ \
	FSetPersonaNameResponse Data; \
}; \
static inline void FOnSetPersonaNameResponse_DelegateWrapper(const FMulticastScriptDelegate& OnSetPersonaNameResponse, FSetPersonaNameResponse const& Data) \
{ \
	_Script_SteamCore_eventOnSetPersonaNameResponse_Parms Parms; \
	Parms.Data=Data; \
	OnSetPersonaNameResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSetPersonaNameResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
