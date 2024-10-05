// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDiscordResult : uint8;
#ifdef DISCORDSTORAGE_OnWriteAsyncEventDelegate_generated_h
#error "OnWriteAsyncEventDelegate.generated.h already included, missing '#pragma once' in OnWriteAsyncEventDelegate.h"
#endif
#define DISCORDSTORAGE_OnWriteAsyncEventDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_OnWriteAsyncEventDelegate_h_6_DELEGATE \
struct _Script_DiscordStorage_eventOnWriteAsyncEvent_Parms \
{ \
	EDiscordResult Result; \
}; \
static inline void FOnWriteAsyncEvent_DelegateWrapper(const FMulticastScriptDelegate& OnWriteAsyncEvent, const EDiscordResult Result) \
{ \
	_Script_DiscordStorage_eventOnWriteAsyncEvent_Parms Parms; \
	Parms.Result=Result; \
	OnWriteAsyncEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_OnWriteAsyncEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
