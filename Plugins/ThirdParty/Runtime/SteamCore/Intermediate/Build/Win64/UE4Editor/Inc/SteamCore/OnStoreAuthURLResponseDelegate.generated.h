// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStoreAuthURLResponse;
#ifdef STEAMCORE_OnStoreAuthURLResponseDelegate_generated_h
#error "OnStoreAuthURLResponseDelegate.generated.h already included, missing '#pragma once' in OnStoreAuthURLResponseDelegate.h"
#endif
#define STEAMCORE_OnStoreAuthURLResponseDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnStoreAuthURLResponseDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnStoreAuthURLResponse_Parms \
{ \
	FStoreAuthURLResponse Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnStoreAuthURLResponse_DelegateWrapper(const FScriptDelegate& OnStoreAuthURLResponse, FStoreAuthURLResponse const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnStoreAuthURLResponse_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnStoreAuthURLResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnStoreAuthURLResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
