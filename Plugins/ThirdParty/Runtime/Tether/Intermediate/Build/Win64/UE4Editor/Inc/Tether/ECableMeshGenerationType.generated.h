// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TETHER_ECableMeshGenerationType_generated_h
#error "ECableMeshGenerationType.generated.h already included, missing '#pragma once' in ECableMeshGenerationType.h"
#endif
#define TETHER_ECableMeshGenerationType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_Tether_Source_Tether_Public_ECableMeshGenerationType_h


#define FOREACH_ENUM_ECABLEMESHGENERATIONTYPE(op) \
	op(ECableMeshGenerationType::Basic) \
	op(ECableMeshGenerationType::CustomMesh) 

enum class ECableMeshGenerationType : uint8;
template<> TETHER_API UEnum* StaticEnum<ECableMeshGenerationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
