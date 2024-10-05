// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamLobbyType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamLobbyType() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyType();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamLobbyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLobbyType, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLobbyType"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamLobbyType>()
	{
		return ESteamLobbyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamLobbyType(ESteamLobbyType_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamLobbyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamLobbyType_Hash() { return 3551705005U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamLobbyType"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamLobbyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamLobbyType::Private", (int64)ESteamLobbyType::Private },
				{ "ESteamLobbyType::FriendsOnly", (int64)ESteamLobbyType::FriendsOnly },
				{ "ESteamLobbyType::Public", (int64)ESteamLobbyType::Public },
				{ "ESteamLobbyType::Invisible", (int64)ESteamLobbyType::Invisible },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FriendsOnly.Name", "ESteamLobbyType::FriendsOnly" },
				{ "Invisible.Name", "ESteamLobbyType::Invisible" },
				{ "ModuleRelativePath", "Public/ESteamLobbyType.h" },
				{ "Private.Name", "ESteamLobbyType::Private" },
				{ "Public.Name", "ESteamLobbyType::Public" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamLobbyType",
				"ESteamLobbyType",
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
