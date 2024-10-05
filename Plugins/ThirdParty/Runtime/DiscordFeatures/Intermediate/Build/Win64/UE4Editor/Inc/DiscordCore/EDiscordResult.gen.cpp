// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordCore/Public/EDiscordResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDiscordResult() {}
// Cross Module References
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordResult();
	UPackage* Z_Construct_UPackage__Script_DiscordCore();
// End Cross Module References
	static UEnum* EDiscordResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordCore_EDiscordResult, Z_Construct_UPackage__Script_DiscordCore(), TEXT("EDiscordResult"));
		}
		return Singleton;
	}
	template<> DISCORDCORE_API UEnum* StaticEnum<EDiscordResult>()
	{
		return EDiscordResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordResult(EDiscordResult_StaticEnum, TEXT("/Script/DiscordCore"), TEXT("EDiscordResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordCore_EDiscordResult_Hash() { return 3606450662U; }
	UEnum* Z_Construct_UEnum_DiscordCore_EDiscordResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordResult"), 0, Get_Z_Construct_UEnum_DiscordCore_EDiscordResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordResult::Ok", (int64)EDiscordResult::Ok },
				{ "EDiscordResult::ServiceUnavailable", (int64)EDiscordResult::ServiceUnavailable },
				{ "EDiscordResult::InvalidVersion", (int64)EDiscordResult::InvalidVersion },
				{ "EDiscordResult::LockFailed", (int64)EDiscordResult::LockFailed },
				{ "EDiscordResult::InternalError", (int64)EDiscordResult::InternalError },
				{ "EDiscordResult::InvalidPayload", (int64)EDiscordResult::InvalidPayload },
				{ "EDiscordResult::InvalidCommand", (int64)EDiscordResult::InvalidCommand },
				{ "EDiscordResult::InvalidPermissions", (int64)EDiscordResult::InvalidPermissions },
				{ "EDiscordResult::NotFetched", (int64)EDiscordResult::NotFetched },
				{ "EDiscordResult::NotFound", (int64)EDiscordResult::NotFound },
				{ "EDiscordResult::Conflict", (int64)EDiscordResult::Conflict },
				{ "EDiscordResult::InvalidSecret", (int64)EDiscordResult::InvalidSecret },
				{ "EDiscordResult::InvalidJoinSecret", (int64)EDiscordResult::InvalidJoinSecret },
				{ "EDiscordResult::NoEligibleActivity", (int64)EDiscordResult::NoEligibleActivity },
				{ "EDiscordResult::InvalidInvite", (int64)EDiscordResult::InvalidInvite },
				{ "EDiscordResult::NotAuthenticated", (int64)EDiscordResult::NotAuthenticated },
				{ "EDiscordResult::InvalidAccessToken", (int64)EDiscordResult::InvalidAccessToken },
				{ "EDiscordResult::ApplicationMismatch", (int64)EDiscordResult::ApplicationMismatch },
				{ "EDiscordResult::InvalidDataUrl", (int64)EDiscordResult::InvalidDataUrl },
				{ "EDiscordResult::InvalidBase64", (int64)EDiscordResult::InvalidBase64 },
				{ "EDiscordResult::NotFiltered", (int64)EDiscordResult::NotFiltered },
				{ "EDiscordResult::LobbyFull", (int64)EDiscordResult::LobbyFull },
				{ "EDiscordResult::InvalidLobbySecret", (int64)EDiscordResult::InvalidLobbySecret },
				{ "EDiscordResult::InvalidFilename", (int64)EDiscordResult::InvalidFilename },
				{ "EDiscordResult::InvalidFileSize", (int64)EDiscordResult::InvalidFileSize },
				{ "EDiscordResult::InvalidEntitlement", (int64)EDiscordResult::InvalidEntitlement },
				{ "EDiscordResult::NotInstalled", (int64)EDiscordResult::NotInstalled },
				{ "EDiscordResult::NotRunning", (int64)EDiscordResult::NotRunning },
				{ "EDiscordResult::InsufficientBuffer", (int64)EDiscordResult::InsufficientBuffer },
				{ "EDiscordResult::PurchaseCanceled", (int64)EDiscordResult::PurchaseCanceled },
				{ "EDiscordResult::InvalidGuild", (int64)EDiscordResult::InvalidGuild },
				{ "EDiscordResult::InvalidEvent", (int64)EDiscordResult::InvalidEvent },
				{ "EDiscordResult::InvalidChannel", (int64)EDiscordResult::InvalidChannel },
				{ "EDiscordResult::InvalidOrigin", (int64)EDiscordResult::InvalidOrigin },
				{ "EDiscordResult::RateLimited", (int64)EDiscordResult::RateLimited },
				{ "EDiscordResult::OAuth2Error", (int64)EDiscordResult::OAuth2Error },
				{ "EDiscordResult::SelectChannelTimeout", (int64)EDiscordResult::SelectChannelTimeout },
				{ "EDiscordResult::GetGuildTimeout", (int64)EDiscordResult::GetGuildTimeout },
				{ "EDiscordResult::SelectVoiceForceRequired", (int64)EDiscordResult::SelectVoiceForceRequired },
				{ "EDiscordResult::CaptureShortcutAlreadyListening", (int64)EDiscordResult::CaptureShortcutAlreadyListening },
				{ "EDiscordResult::UnauthorizedForAchievement", (int64)EDiscordResult::UnauthorizedForAchievement },
				{ "EDiscordResult::InvalidGiftCode", (int64)EDiscordResult::InvalidGiftCode },
				{ "EDiscordResult::PurchaseError", (int64)EDiscordResult::PurchaseError },
				{ "EDiscordResult::TransactionAborted", (int64)EDiscordResult::TransactionAborted },
				{ "EDiscordResult::DrawingInitFailed", (int64)EDiscordResult::DrawingInitFailed },
				{ "EDiscordResult::InvalidManager", (int64)EDiscordResult::InvalidManager },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ApplicationMismatch.Name", "EDiscordResult::ApplicationMismatch" },
				{ "BlueprintType", "true" },
				{ "CaptureShortcutAlreadyListening.Name", "EDiscordResult::CaptureShortcutAlreadyListening" },
				{ "Conflict.Name", "EDiscordResult::Conflict" },
				{ "DrawingInitFailed.Name", "EDiscordResult::DrawingInitFailed" },
				{ "GetGuildTimeout.Name", "EDiscordResult::GetGuildTimeout" },
				{ "InsufficientBuffer.Name", "EDiscordResult::InsufficientBuffer" },
				{ "InternalError.Name", "EDiscordResult::InternalError" },
				{ "InvalidAccessToken.Name", "EDiscordResult::InvalidAccessToken" },
				{ "InvalidBase64.Name", "EDiscordResult::InvalidBase64" },
				{ "InvalidChannel.Name", "EDiscordResult::InvalidChannel" },
				{ "InvalidCommand.Name", "EDiscordResult::InvalidCommand" },
				{ "InvalidDataUrl.Name", "EDiscordResult::InvalidDataUrl" },
				{ "InvalidEntitlement.Name", "EDiscordResult::InvalidEntitlement" },
				{ "InvalidEvent.Name", "EDiscordResult::InvalidEvent" },
				{ "InvalidFilename.Name", "EDiscordResult::InvalidFilename" },
				{ "InvalidFileSize.Name", "EDiscordResult::InvalidFileSize" },
				{ "InvalidGiftCode.Name", "EDiscordResult::InvalidGiftCode" },
				{ "InvalidGuild.Name", "EDiscordResult::InvalidGuild" },
				{ "InvalidInvite.Name", "EDiscordResult::InvalidInvite" },
				{ "InvalidJoinSecret.Name", "EDiscordResult::InvalidJoinSecret" },
				{ "InvalidLobbySecret.Name", "EDiscordResult::InvalidLobbySecret" },
				{ "InvalidManager.Name", "EDiscordResult::InvalidManager" },
				{ "InvalidOrigin.Name", "EDiscordResult::InvalidOrigin" },
				{ "InvalidPayload.Name", "EDiscordResult::InvalidPayload" },
				{ "InvalidPermissions.Name", "EDiscordResult::InvalidPermissions" },
				{ "InvalidSecret.Name", "EDiscordResult::InvalidSecret" },
				{ "InvalidVersion.Name", "EDiscordResult::InvalidVersion" },
				{ "LobbyFull.Name", "EDiscordResult::LobbyFull" },
				{ "LockFailed.Name", "EDiscordResult::LockFailed" },
				{ "ModuleRelativePath", "Public/EDiscordResult.h" },
				{ "NoEligibleActivity.Name", "EDiscordResult::NoEligibleActivity" },
				{ "NotAuthenticated.Name", "EDiscordResult::NotAuthenticated" },
				{ "NotFetched.Name", "EDiscordResult::NotFetched" },
				{ "NotFiltered.Name", "EDiscordResult::NotFiltered" },
				{ "NotFound.Name", "EDiscordResult::NotFound" },
				{ "NotInstalled.Name", "EDiscordResult::NotInstalled" },
				{ "NotRunning.Name", "EDiscordResult::NotRunning" },
				{ "OAuth2Error.Name", "EDiscordResult::OAuth2Error" },
				{ "Ok.Name", "EDiscordResult::Ok" },
				{ "PurchaseCanceled.Name", "EDiscordResult::PurchaseCanceled" },
				{ "PurchaseError.Name", "EDiscordResult::PurchaseError" },
				{ "RateLimited.Name", "EDiscordResult::RateLimited" },
				{ "SelectChannelTimeout.Name", "EDiscordResult::SelectChannelTimeout" },
				{ "SelectVoiceForceRequired.Name", "EDiscordResult::SelectVoiceForceRequired" },
				{ "ServiceUnavailable.Name", "EDiscordResult::ServiceUnavailable" },
				{ "TransactionAborted.Name", "EDiscordResult::TransactionAborted" },
				{ "UnauthorizedForAchievement.Name", "EDiscordResult::UnauthorizedForAchievement" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordCore,
				nullptr,
				"EDiscordResult",
				"EDiscordResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
