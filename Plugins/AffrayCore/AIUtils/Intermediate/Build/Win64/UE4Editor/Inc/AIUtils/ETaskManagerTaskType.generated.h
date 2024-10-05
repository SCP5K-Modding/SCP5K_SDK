// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIUTILS_ETaskManagerTaskType_generated_h
#error "ETaskManagerTaskType.generated.h already included, missing '#pragma once' in ETaskManagerTaskType.h"
#endif
#define AIUTILS_ETaskManagerTaskType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AIUtils_Source_AIUtils_Public_ETaskManagerTaskType_h


#define FOREACH_ENUM_ETASKMANAGERTASKTYPE(op) \
	op(ETaskManagerTaskType::ETMTT_HighPriority) \
	op(ETaskManagerTaskType::ETMTT_General) \
	op(ETaskManagerTaskType::ETMTT_Auto) 

enum class ETaskManagerTaskType : uint8;
template<> AIUTILS_API UEnum* StaticEnum<ETaskManagerTaskType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
