// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCheckFileSignature;
#ifdef STEAMCORE_OnCheckFileSignatureDelegate_generated_h
#error "OnCheckFileSignatureDelegate.generated.h already included, missing '#pragma once' in OnCheckFileSignatureDelegate.h"
#endif
#define STEAMCORE_OnCheckFileSignatureDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnCheckFileSignatureDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnCheckFileSignature_Parms \
{ \
	FCheckFileSignature Data; \
}; \
static inline void FOnCheckFileSignature_DelegateWrapper(const FMulticastScriptDelegate& OnCheckFileSignature, FCheckFileSignature const& Data) \
{ \
	_Script_SteamCore_eventOnCheckFileSignature_Parms Parms; \
	Parms.Data=Data; \
	OnCheckFileSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnCheckFileSignatureDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
