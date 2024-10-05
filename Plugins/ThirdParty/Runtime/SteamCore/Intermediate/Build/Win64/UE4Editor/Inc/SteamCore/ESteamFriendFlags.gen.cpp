// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamFriendFlags.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamFriendFlags() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamFriendFlags();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamFriendFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamFriendFlags, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamFriendFlags"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamFriendFlags>()
	{
		return ESteamFriendFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamFriendFlags(ESteamFriendFlags_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamFriendFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamFriendFlags_Hash() { return 1466742120U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamFriendFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamFriendFlags"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamFriendFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamFriendFlags::None", (int64)ESteamFriendFlags::None },
				{ "ESteamFriendFlags::Blocked", (int64)ESteamFriendFlags::Blocked },
				{ "ESteamFriendFlags::FriendshipRequested", (int64)ESteamFriendFlags::FriendshipRequested },
				{ "ESteamFriendFlags::Immediate", (int64)ESteamFriendFlags::Immediate },
				{ "ESteamFriendFlags::ClanMember", (int64)ESteamFriendFlags::ClanMember },
				{ "ESteamFriendFlags::OnGameServer", (int64)ESteamFriendFlags::OnGameServer },
				{ "ESteamFriendFlags::RequestingFriendship", (int64)ESteamFriendFlags::RequestingFriendship },
				{ "ESteamFriendFlags::RequestingInfo", (int64)ESteamFriendFlags::RequestingInfo },
				{ "ESteamFriendFlags::Ignored", (int64)ESteamFriendFlags::Ignored },
				{ "ESteamFriendFlags::IgnoredFriend", (int64)ESteamFriendFlags::IgnoredFriend },
				{ "ESteamFriendFlags::ChatMember", (int64)ESteamFriendFlags::ChatMember },
				{ "ESteamFriendFlags::All", (int64)ESteamFriendFlags::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "ESteamFriendFlags::All" },
				{ "Blocked.Name", "ESteamFriendFlags::Blocked" },
				{ "BlueprintType", "true" },
				{ "ChatMember.Name", "ESteamFriendFlags::ChatMember" },
				{ "ClanMember.Name", "ESteamFriendFlags::ClanMember" },
				{ "FriendshipRequested.Name", "ESteamFriendFlags::FriendshipRequested" },
				{ "Ignored.Name", "ESteamFriendFlags::Ignored" },
				{ "IgnoredFriend.Name", "ESteamFriendFlags::IgnoredFriend" },
				{ "Immediate.Name", "ESteamFriendFlags::Immediate" },
				{ "ModuleRelativePath", "Public/ESteamFriendFlags.h" },
				{ "None.Name", "ESteamFriendFlags::None" },
				{ "OnGameServer.Name", "ESteamFriendFlags::OnGameServer" },
				{ "RequestingFriendship.Name", "ESteamFriendFlags::RequestingFriendship" },
				{ "RequestingInfo.Name", "ESteamFriendFlags::RequestingInfo" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamFriendFlags",
				"ESteamFriendFlags",
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
