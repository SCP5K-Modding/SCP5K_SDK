// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamChatRoomEnterResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamChatRoomEnterResponse() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamChatRoomEnterResponse_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamChatRoomEnterResponse"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamChatRoomEnterResponse>()
	{
		return ESteamChatRoomEnterResponse_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamChatRoomEnterResponse(ESteamChatRoomEnterResponse_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamChatRoomEnterResponse"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse_Hash() { return 3509913037U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamChatRoomEnterResponse"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamChatRoomEnterResponse::None", (int64)ESteamChatRoomEnterResponse::None },
				{ "ESteamChatRoomEnterResponse::Success", (int64)ESteamChatRoomEnterResponse::Success },
				{ "ESteamChatRoomEnterResponse::DoesntExist", (int64)ESteamChatRoomEnterResponse::DoesntExist },
				{ "ESteamChatRoomEnterResponse::NotAllowed", (int64)ESteamChatRoomEnterResponse::NotAllowed },
				{ "ESteamChatRoomEnterResponse::Full", (int64)ESteamChatRoomEnterResponse::Full },
				{ "ESteamChatRoomEnterResponse::Error", (int64)ESteamChatRoomEnterResponse::Error },
				{ "ESteamChatRoomEnterResponse::Banned", (int64)ESteamChatRoomEnterResponse::Banned },
				{ "ESteamChatRoomEnterResponse::Limited", (int64)ESteamChatRoomEnterResponse::Limited },
				{ "ESteamChatRoomEnterResponse::ClanDisabled", (int64)ESteamChatRoomEnterResponse::ClanDisabled },
				{ "ESteamChatRoomEnterResponse::CommunityBan", (int64)ESteamChatRoomEnterResponse::CommunityBan },
				{ "ESteamChatRoomEnterResponse::MemberBlockedYou", (int64)ESteamChatRoomEnterResponse::MemberBlockedYou },
				{ "ESteamChatRoomEnterResponse::YouBlockedMember", (int64)ESteamChatRoomEnterResponse::YouBlockedMember },
				{ "ESteamChatRoomEnterResponse::RatelimitExceeded", (int64)ESteamChatRoomEnterResponse::RatelimitExceeded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Banned.Name", "ESteamChatRoomEnterResponse::Banned" },
				{ "BlueprintType", "true" },
				{ "ClanDisabled.Name", "ESteamChatRoomEnterResponse::ClanDisabled" },
				{ "CommunityBan.Name", "ESteamChatRoomEnterResponse::CommunityBan" },
				{ "DoesntExist.Name", "ESteamChatRoomEnterResponse::DoesntExist" },
				{ "Error.Name", "ESteamChatRoomEnterResponse::Error" },
				{ "Full.Name", "ESteamChatRoomEnterResponse::Full" },
				{ "Limited.Name", "ESteamChatRoomEnterResponse::Limited" },
				{ "MemberBlockedYou.Name", "ESteamChatRoomEnterResponse::MemberBlockedYou" },
				{ "ModuleRelativePath", "Public/ESteamChatRoomEnterResponse.h" },
				{ "None.Name", "ESteamChatRoomEnterResponse::None" },
				{ "NotAllowed.Name", "ESteamChatRoomEnterResponse::NotAllowed" },
				{ "RatelimitExceeded.Name", "ESteamChatRoomEnterResponse::RatelimitExceeded" },
				{ "Success.Name", "ESteamChatRoomEnterResponse::Success" },
				{ "YouBlockedMember.Name", "ESteamChatRoomEnterResponse::YouBlockedMember" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamChatRoomEnterResponse",
				"ESteamChatRoomEnterResponse",
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
