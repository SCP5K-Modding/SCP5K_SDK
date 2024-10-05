// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDiscordResult : uint8;
#ifdef DISCORDSTORAGE_OnReadAsyncEventDelegate_generated_h
#error "OnReadAsyncEventDelegate.generated.h already included, missing '#pragma once' in OnReadAsyncEventDelegate.h"
#endif
#define DISCORDSTORAGE_OnReadAsyncEventDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_OnReadAsyncEventDelegate_h_6_DELEGATE \
struct _Script_DiscordStorage_eventOnReadAsyncEvent_Parms \
{ \
	EDiscordResult Result; \
	TArray<uint8> Data; \
}; \
static inline void FOnReadAsyncEvent_DelegateWrapper(const FMulticastScriptDelegate& OnReadAsyncEvent, const EDiscordResult Result, TArray<uint8> const& Data) \
{ \
	_Script_DiscordStorage_eventOnReadAsyncEvent_Parms Parms; \
	Parms.Result=Result; \
	Parms.Data=Data; \
	OnReadAsyncEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_OnReadAsyncEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
