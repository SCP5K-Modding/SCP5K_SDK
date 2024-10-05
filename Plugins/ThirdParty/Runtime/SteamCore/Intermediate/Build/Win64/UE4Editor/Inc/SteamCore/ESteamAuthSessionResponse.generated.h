// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamAuthSessionResponse_generated_h
#error "ESteamAuthSessionResponse.generated.h already included, missing '#pragma once' in ESteamAuthSessionResponse.h"
#endif
#define STEAMCORE_ESteamAuthSessionResponse_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamAuthSessionResponse_h


#define FOREACH_ENUM_ESTEAMAUTHSESSIONRESPONSE(op) \
	op(ESteamAuthSessionResponse::OK) \
	op(ESteamAuthSessionResponse::UserNotConnectedToSteam) \
	op(ESteamAuthSessionResponse::NoLicenseOrExpired) \
	op(ESteamAuthSessionResponse::VACBanned) \
	op(ESteamAuthSessionResponse::LoggedInElseWhere) \
	op(ESteamAuthSessionResponse::VACCheckTimedOut) \
	op(ESteamAuthSessionResponse::AuthTicketCanceled) \
	op(ESteamAuthSessionResponse::AuthTicketInvalidAlreadyUsed) \
	op(ESteamAuthSessionResponse::AuthTicketInvalid) \
	op(ESteamAuthSessionResponse::PublisherIssuedBan) 

enum class ESteamAuthSessionResponse : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamAuthSessionResponse>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
