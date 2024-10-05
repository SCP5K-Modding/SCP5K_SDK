// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef LIGHTSENSING_LightHandleUpdatedDelegateDelegate_generated_h
#error "LightHandleUpdatedDelegateDelegate.generated.h already included, missing '#pragma once' in LightHandleUpdatedDelegateDelegate.h"
#endif
#define LIGHTSENSING_LightHandleUpdatedDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightHandleUpdatedDelegateDelegate_h_7_DELEGATE \
struct _Script_LightSensing_eventLightHandleUpdatedDelegate_Parms \
{ \
	AActor* Subject; \
	float Intensity; \
}; \
static inline void FLightHandleUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& LightHandleUpdatedDelegate, AActor* Subject, float Intensity) \
{ \
	_Script_LightSensing_eventLightHandleUpdatedDelegate_Parms Parms; \
	Parms.Subject=Subject; \
	Parms.Intensity=Intensity; \
	LightHandleUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightHandleUpdatedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
