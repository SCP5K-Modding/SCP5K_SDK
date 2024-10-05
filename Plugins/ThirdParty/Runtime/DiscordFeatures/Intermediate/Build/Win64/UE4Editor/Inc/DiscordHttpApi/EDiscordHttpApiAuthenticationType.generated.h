// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDHTTPAPI_EDiscordHttpApiAuthenticationType_generated_h
#error "EDiscordHttpApiAuthenticationType.generated.h already included, missing '#pragma once' in EDiscordHttpApiAuthenticationType.h"
#endif
#define DISCORDHTTPAPI_EDiscordHttpApiAuthenticationType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordHttpApi_Public_EDiscordHttpApiAuthenticationType_h


#define FOREACH_ENUM_EDISCORDHTTPAPIAUTHENTICATIONTYPE(op) \
	op(EDiscordHttpApiAuthenticationType::None) \
	op(EDiscordHttpApiAuthenticationType::Bot) \
	op(EDiscordHttpApiAuthenticationType::Bearer) 

enum class EDiscordHttpApiAuthenticationType : uint8;
template<> DISCORDHTTPAPI_API UEnum* StaticEnum<EDiscordHttpApiAuthenticationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
