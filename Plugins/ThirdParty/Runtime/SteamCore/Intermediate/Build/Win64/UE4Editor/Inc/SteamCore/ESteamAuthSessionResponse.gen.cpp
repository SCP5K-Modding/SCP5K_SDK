// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamAuthSessionResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamAuthSessionResponse() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamAuthSessionResponse_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamAuthSessionResponse"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamAuthSessionResponse>()
	{
		return ESteamAuthSessionResponse_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamAuthSessionResponse(ESteamAuthSessionResponse_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamAuthSessionResponse"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse_Hash() { return 3124053886U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamAuthSessionResponse"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamAuthSessionResponse::OK", (int64)ESteamAuthSessionResponse::OK },
				{ "ESteamAuthSessionResponse::UserNotConnectedToSteam", (int64)ESteamAuthSessionResponse::UserNotConnectedToSteam },
				{ "ESteamAuthSessionResponse::NoLicenseOrExpired", (int64)ESteamAuthSessionResponse::NoLicenseOrExpired },
				{ "ESteamAuthSessionResponse::VACBanned", (int64)ESteamAuthSessionResponse::VACBanned },
				{ "ESteamAuthSessionResponse::LoggedInElseWhere", (int64)ESteamAuthSessionResponse::LoggedInElseWhere },
				{ "ESteamAuthSessionResponse::VACCheckTimedOut", (int64)ESteamAuthSessionResponse::VACCheckTimedOut },
				{ "ESteamAuthSessionResponse::AuthTicketCanceled", (int64)ESteamAuthSessionResponse::AuthTicketCanceled },
				{ "ESteamAuthSessionResponse::AuthTicketInvalidAlreadyUsed", (int64)ESteamAuthSessionResponse::AuthTicketInvalidAlreadyUsed },
				{ "ESteamAuthSessionResponse::AuthTicketInvalid", (int64)ESteamAuthSessionResponse::AuthTicketInvalid },
				{ "ESteamAuthSessionResponse::PublisherIssuedBan", (int64)ESteamAuthSessionResponse::PublisherIssuedBan },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AuthTicketCanceled.Name", "ESteamAuthSessionResponse::AuthTicketCanceled" },
				{ "AuthTicketInvalid.Name", "ESteamAuthSessionResponse::AuthTicketInvalid" },
				{ "AuthTicketInvalidAlreadyUsed.Name", "ESteamAuthSessionResponse::AuthTicketInvalidAlreadyUsed" },
				{ "BlueprintType", "true" },
				{ "LoggedInElseWhere.Name", "ESteamAuthSessionResponse::LoggedInElseWhere" },
				{ "ModuleRelativePath", "Public/ESteamAuthSessionResponse.h" },
				{ "NoLicenseOrExpired.Name", "ESteamAuthSessionResponse::NoLicenseOrExpired" },
				{ "OK.Name", "ESteamAuthSessionResponse::OK" },
				{ "PublisherIssuedBan.Name", "ESteamAuthSessionResponse::PublisherIssuedBan" },
				{ "UserNotConnectedToSteam.Name", "ESteamAuthSessionResponse::UserNotConnectedToSteam" },
				{ "VACBanned.Name", "ESteamAuthSessionResponse::VACBanned" },
				{ "VACCheckTimedOut.Name", "ESteamAuthSessionResponse::VACCheckTimedOut" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamAuthSessionResponse",
				"ESteamAuthSessionResponse",
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
