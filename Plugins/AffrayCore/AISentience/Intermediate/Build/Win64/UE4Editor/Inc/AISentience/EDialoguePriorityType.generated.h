// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AISENTIENCE_EDialoguePriorityType_generated_h
#error "EDialoguePriorityType.generated.h already included, missing '#pragma once' in EDialoguePriorityType.h"
#endif
#define AISENTIENCE_EDialoguePriorityType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_EDialoguePriorityType_h


#define FOREACH_ENUM_EDIALOGUEPRIORITYTYPE(op) \
	op(EDialoguePriorityType::DPT_Wait) \
	op(EDialoguePriorityType::DPT_Interrupt) \
	op(EDialoguePriorityType::DPT_Ignore) \
	op(EDialoguePriorityType::DPT_Overlap) 

enum class EDialoguePriorityType : uint8;
template<> AISENTIENCE_API UEnum* StaticEnum<EDialoguePriorityType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
