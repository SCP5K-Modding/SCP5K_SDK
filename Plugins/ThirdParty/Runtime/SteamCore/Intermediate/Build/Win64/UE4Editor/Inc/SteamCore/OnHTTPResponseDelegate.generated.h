// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_OnHTTPResponseDelegate_generated_h
#error "OnHTTPResponseDelegate.generated.h already included, missing '#pragma once' in OnHTTPResponseDelegate.h"
#endif
#define STEAMCORE_OnHTTPResponseDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnHTTPResponseDelegate_h_5_DELEGATE \
struct _Script_SteamCore_eventOnHTTPResponse_Parms \
{ \
	FString Response; \
}; \
static inline void FOnHTTPResponse_DelegateWrapper(const FScriptDelegate& OnHTTPResponse, const FString& Response) \
{ \
	_Script_SteamCore_eventOnHTTPResponse_Parms Parms; \
	Parms.Response=Response; \
	OnHTTPResponse.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnHTTPResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
