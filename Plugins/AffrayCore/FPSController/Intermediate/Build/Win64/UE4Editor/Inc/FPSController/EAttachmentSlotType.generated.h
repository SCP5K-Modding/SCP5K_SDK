// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSCONTROLLER_EAttachmentSlotType_generated_h
#error "EAttachmentSlotType.generated.h already included, missing '#pragma once' in EAttachmentSlotType.h"
#endif
#define FPSCONTROLLER_EAttachmentSlotType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_EAttachmentSlotType_h


#define FOREACH_ENUM_EATTACHMENTSLOTTYPE(op) \
	op(EAttachmentSlotType::ST_Generic) \
	op(EAttachmentSlotType::ST_Sight) \
	op(EAttachmentSlotType::ST_Barrel) \
	op(EAttachmentSlotType::ST_Grip) \
	op(EAttachmentSlotType::ST_Special) \
	op(EAttachmentSlotType::ST_CantedSight) 

enum class EAttachmentSlotType : uint8;
template<> FPSCONTROLLER_API UEnum* StaticEnum<EAttachmentSlotType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
