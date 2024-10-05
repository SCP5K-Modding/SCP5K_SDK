// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSubmitPlayerResultResultCallback;
#ifdef STEAMCORE_SubmitPlayerResultResultDelegateDelegate_generated_h
#error "SubmitPlayerResultResultDelegateDelegate.generated.h already included, missing '#pragma once' in SubmitPlayerResultResultDelegateDelegate.h"
#endif
#define STEAMCORE_SubmitPlayerResultResultDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SubmitPlayerResultResultDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventSubmitPlayerResultResultDelegate_Parms \
{ \
	FSubmitPlayerResultResultCallback Data; \
}; \
static inline void FSubmitPlayerResultResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& SubmitPlayerResultResultDelegate, FSubmitPlayerResultResultCallback const& Data) \
{ \
	_Script_SteamCore_eventSubmitPlayerResultResultDelegate_Parms Parms; \
	Parms.Data=Data; \
	SubmitPlayerResultResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SubmitPlayerResultResultDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
