// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISMEMBERMENT_OnDismemberDelegateDelegate_generated_h
#error "OnDismemberDelegateDelegate.generated.h already included, missing '#pragma once' in OnDismemberDelegateDelegate.h"
#endif
#define DISMEMBERMENT_OnDismemberDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_OnDismemberDelegateDelegate_h_6_DELEGATE \
struct _Script_Dismemberment_eventOnDismemberDelegate_Parms \
{ \
	FName DismemberableName; \
	TEnumAsByte<EDismembermentType> DismembermentType; \
}; \
static inline void FOnDismemberDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDismemberDelegate, FName DismemberableName, EDismembermentType DismembermentType) \
{ \
	_Script_Dismemberment_eventOnDismemberDelegate_Parms Parms; \
	Parms.DismemberableName=DismemberableName; \
	Parms.DismembermentType=DismembermentType; \
	OnDismemberDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_OnDismemberDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
