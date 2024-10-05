// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStoreAuthURLResponse;
#ifdef STEAMCORE_RequestStoreAuthURLDelegateDelegate_generated_h
#error "RequestStoreAuthURLDelegateDelegate.generated.h already included, missing '#pragma once' in RequestStoreAuthURLDelegateDelegate.h"
#endif
#define STEAMCORE_RequestStoreAuthURLDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RequestStoreAuthURLDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventRequestStoreAuthURLDelegate_Parms \
{ \
	FStoreAuthURLResponse Data; \
	bool bWasSuccessful; \
}; \
static inline void FRequestStoreAuthURLDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestStoreAuthURLDelegate, FStoreAuthURLResponse const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventRequestStoreAuthURLDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	RequestStoreAuthURLDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RequestStoreAuthURLDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
