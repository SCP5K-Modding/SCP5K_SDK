// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDCORE_EDiscordResult_generated_h
#error "EDiscordResult.generated.h already included, missing '#pragma once' in EDiscordResult.h"
#endif
#define DISCORDCORE_EDiscordResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_EDiscordResult_h


#define FOREACH_ENUM_EDISCORDRESULT(op) \
	op(EDiscordResult::Ok) \
	op(EDiscordResult::ServiceUnavailable) \
	op(EDiscordResult::InvalidVersion) \
	op(EDiscordResult::LockFailed) \
	op(EDiscordResult::InternalError) \
	op(EDiscordResult::InvalidPayload) \
	op(EDiscordResult::InvalidCommand) \
	op(EDiscordResult::InvalidPermissions) \
	op(EDiscordResult::NotFetched) \
	op(EDiscordResult::NotFound) \
	op(EDiscordResult::Conflict) \
	op(EDiscordResult::InvalidSecret) \
	op(EDiscordResult::InvalidJoinSecret) \
	op(EDiscordResult::NoEligibleActivity) \
	op(EDiscordResult::InvalidInvite) \
	op(EDiscordResult::NotAuthenticated) \
	op(EDiscordResult::InvalidAccessToken) \
	op(EDiscordResult::ApplicationMismatch) \
	op(EDiscordResult::InvalidDataUrl) \
	op(EDiscordResult::InvalidBase64) \
	op(EDiscordResult::NotFiltered) \
	op(EDiscordResult::LobbyFull) \
	op(EDiscordResult::InvalidLobbySecret) \
	op(EDiscordResult::InvalidFilename) \
	op(EDiscordResult::InvalidFileSize) \
	op(EDiscordResult::InvalidEntitlement) \
	op(EDiscordResult::NotInstalled) \
	op(EDiscordResult::NotRunning) \
	op(EDiscordResult::InsufficientBuffer) \
	op(EDiscordResult::PurchaseCanceled) \
	op(EDiscordResult::InvalidGuild) \
	op(EDiscordResult::InvalidEvent) \
	op(EDiscordResult::InvalidChannel) \
	op(EDiscordResult::InvalidOrigin) \
	op(EDiscordResult::RateLimited) \
	op(EDiscordResult::OAuth2Error) \
	op(EDiscordResult::SelectChannelTimeout) \
	op(EDiscordResult::GetGuildTimeout) \
	op(EDiscordResult::SelectVoiceForceRequired) \
	op(EDiscordResult::CaptureShortcutAlreadyListening) \
	op(EDiscordResult::UnauthorizedForAchievement) \
	op(EDiscordResult::InvalidGiftCode) \
	op(EDiscordResult::PurchaseError) \
	op(EDiscordResult::TransactionAborted) \
	op(EDiscordResult::DrawingInitFailed) \
	op(EDiscordResult::InvalidManager) 

enum class EDiscordResult : uint8;
template<> DISCORDCORE_API UEnum* StaticEnum<EDiscordResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
