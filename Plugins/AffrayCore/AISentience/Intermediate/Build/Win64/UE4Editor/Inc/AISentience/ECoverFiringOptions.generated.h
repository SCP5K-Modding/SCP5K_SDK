// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AISENTIENCE_ECoverFiringOptions_generated_h
#error "ECoverFiringOptions.generated.h already included, missing '#pragma once' in ECoverFiringOptions.h"
#endif
#define AISENTIENCE_ECoverFiringOptions_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_ECoverFiringOptions_h


#define FOREACH_ENUM_ECOVERFIRINGOPTIONS(op) \
	op(ECoverFiringOptions::None) \
	op(ECoverFiringOptions::Over) \
	op(ECoverFiringOptions::Left) \
	op(ECoverFiringOptions::Right) 

enum class ECoverFiringOptions : uint8;
template<> AISENTIENCE_API UEnum* StaticEnum<ECoverFiringOptions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
