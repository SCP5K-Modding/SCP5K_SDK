// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamChatEntryType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamChatEntryType() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatEntryType();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamChatEntryType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamChatEntryType, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamChatEntryType"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamChatEntryType>()
	{
		return ESteamChatEntryType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamChatEntryType(ESteamChatEntryType_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamChatEntryType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamChatEntryType_Hash() { return 2832688002U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamChatEntryType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamChatEntryType"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamChatEntryType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamChatEntryType::Invalid", (int64)ESteamChatEntryType::Invalid },
				{ "ESteamChatEntryType::ChatMsg", (int64)ESteamChatEntryType::ChatMsg },
				{ "ESteamChatEntryType::Typing", (int64)ESteamChatEntryType::Typing },
				{ "ESteamChatEntryType::InviteGame", (int64)ESteamChatEntryType::InviteGame },
				{ "ESteamChatEntryType::Emote", (int64)ESteamChatEntryType::Emote },
				{ "ESteamChatEntryType::LeftConversation", (int64)ESteamChatEntryType::LeftConversation },
				{ "ESteamChatEntryType::Entered", (int64)ESteamChatEntryType::Entered },
				{ "ESteamChatEntryType::WasKicked", (int64)ESteamChatEntryType::WasKicked },
				{ "ESteamChatEntryType::WasBanned", (int64)ESteamChatEntryType::WasBanned },
				{ "ESteamChatEntryType::Disconnected", (int64)ESteamChatEntryType::Disconnected },
				{ "ESteamChatEntryType::HistoricalChat", (int64)ESteamChatEntryType::HistoricalChat },
				{ "ESteamChatEntryType::LinkBlocked", (int64)ESteamChatEntryType::LinkBlocked },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChatMsg.Name", "ESteamChatEntryType::ChatMsg" },
				{ "Disconnected.Name", "ESteamChatEntryType::Disconnected" },
				{ "Emote.Name", "ESteamChatEntryType::Emote" },
				{ "Entered.Name", "ESteamChatEntryType::Entered" },
				{ "HistoricalChat.Name", "ESteamChatEntryType::HistoricalChat" },
				{ "Invalid.Name", "ESteamChatEntryType::Invalid" },
				{ "InviteGame.Name", "ESteamChatEntryType::InviteGame" },
				{ "LeftConversation.Name", "ESteamChatEntryType::LeftConversation" },
				{ "LinkBlocked.Name", "ESteamChatEntryType::LinkBlocked" },
				{ "ModuleRelativePath", "Public/ESteamChatEntryType.h" },
				{ "Typing.Name", "ESteamChatEntryType::Typing" },
				{ "WasBanned.Name", "ESteamChatEntryType::WasBanned" },
				{ "WasKicked.Name", "ESteamChatEntryType::WasKicked" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamChatEntryType",
				"ESteamChatEntryType",
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
