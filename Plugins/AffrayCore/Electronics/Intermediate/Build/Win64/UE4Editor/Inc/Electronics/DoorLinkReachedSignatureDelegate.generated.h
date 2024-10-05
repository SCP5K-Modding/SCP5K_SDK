// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
#ifdef ELECTRONICS_DoorLinkReachedSignatureDelegate_generated_h
#error "DoorLinkReachedSignatureDelegate.generated.h already included, missing '#pragma once' in DoorLinkReachedSignatureDelegate.h"
#endif
#define ELECTRONICS_DoorLinkReachedSignatureDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorLinkReachedSignatureDelegate_h_8_DELEGATE \
struct _Script_Electronics_eventDoorLinkReachedSignature_Parms \
{ \
	AActor* MovingActor; \
	FVector DestinationPoint; \
}; \
static inline void FDoorLinkReachedSignature_DelegateWrapper(const FMulticastScriptDelegate& DoorLinkReachedSignature, AActor* MovingActor, FVector const& DestinationPoint) \
{ \
	_Script_Electronics_eventDoorLinkReachedSignature_Parms Parms; \
	Parms.MovingActor=MovingActor; \
	Parms.DestinationPoint=DestinationPoint; \
	DoorLinkReachedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorLinkReachedSignatureDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
