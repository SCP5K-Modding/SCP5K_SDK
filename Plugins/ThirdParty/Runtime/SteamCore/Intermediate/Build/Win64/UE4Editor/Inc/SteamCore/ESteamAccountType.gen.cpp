// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamAccountType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamAccountType() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamAccountType();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamAccountType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamAccountType, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamAccountType"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamAccountType>()
	{
		return ESteamAccountType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamAccountType(ESteamAccountType_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamAccountType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamAccountType_Hash() { return 569185369U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamAccountType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamAccountType"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamAccountType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamAccountType::Invalid", (int64)ESteamAccountType::Invalid },
				{ "ESteamAccountType::Individual", (int64)ESteamAccountType::Individual },
				{ "ESteamAccountType::Multiseat", (int64)ESteamAccountType::Multiseat },
				{ "ESteamAccountType::GameServer", (int64)ESteamAccountType::GameServer },
				{ "ESteamAccountType::AnonGameServer", (int64)ESteamAccountType::AnonGameServer },
				{ "ESteamAccountType::Pending", (int64)ESteamAccountType::Pending },
				{ "ESteamAccountType::ContentServer", (int64)ESteamAccountType::ContentServer },
				{ "ESteamAccountType::Clan", (int64)ESteamAccountType::Clan },
				{ "ESteamAccountType::Chat", (int64)ESteamAccountType::Chat },
				{ "ESteamAccountType::ConsoleUser", (int64)ESteamAccountType::ConsoleUser },
				{ "ESteamAccountType::AnonUser", (int64)ESteamAccountType::AnonUser },
				{ "ESteamAccountType::Max", (int64)ESteamAccountType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnonGameServer.Name", "ESteamAccountType::AnonGameServer" },
				{ "AnonUser.Name", "ESteamAccountType::AnonUser" },
				{ "BlueprintType", "true" },
				{ "Chat.Name", "ESteamAccountType::Chat" },
				{ "Clan.Name", "ESteamAccountType::Clan" },
				{ "ConsoleUser.Name", "ESteamAccountType::ConsoleUser" },
				{ "ContentServer.Name", "ESteamAccountType::ContentServer" },
				{ "GameServer.Name", "ESteamAccountType::GameServer" },
				{ "Individual.Name", "ESteamAccountType::Individual" },
				{ "Invalid.Name", "ESteamAccountType::Invalid" },
				{ "Max.Name", "ESteamAccountType::Max" },
				{ "ModuleRelativePath", "Public/ESteamAccountType.h" },
				{ "Multiseat.Name", "ESteamAccountType::Multiseat" },
				{ "Pending.Name", "ESteamAccountType::Pending" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamAccountType",
				"ESteamAccountType",
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
