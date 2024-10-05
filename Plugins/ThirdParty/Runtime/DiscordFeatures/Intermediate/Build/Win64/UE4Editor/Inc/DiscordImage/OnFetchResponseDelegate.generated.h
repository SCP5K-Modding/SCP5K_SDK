// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDiscordResult : uint8;
struct FDiscordImageHandle;
#ifdef DISCORDIMAGE_OnFetchResponseDelegate_generated_h
#error "OnFetchResponseDelegate.generated.h already included, missing '#pragma once' in OnFetchResponseDelegate.h"
#endif
#define DISCORDIMAGE_OnFetchResponseDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_OnFetchResponseDelegate_h_7_DELEGATE \
struct _Script_DiscordImage_eventOnFetchResponse_Parms \
{ \
	EDiscordResult Result; \
	FDiscordImageHandle Handle; \
}; \
static inline void FOnFetchResponse_DelegateWrapper(const FMulticastScriptDelegate& OnFetchResponse, const EDiscordResult Result, FDiscordImageHandle const& Handle) \
{ \
	_Script_DiscordImage_eventOnFetchResponse_Parms Parms; \
	Parms.Result=Result; \
	Parms.Handle=Handle; \
	OnFetchResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_OnFetchResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
