// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/ESteamCoreWebLobbyType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamCoreWebLobbyType() {}
// Cross Module References
	STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	static UEnum* ESteamCoreWebLobbyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType, Z_Construct_UPackage__Script_SteamCoreWeb(), TEXT("ESteamCoreWebLobbyType"));
		}
		return Singleton;
	}
	template<> STEAMCOREWEB_API UEnum* StaticEnum<ESteamCoreWebLobbyType>()
	{
		return ESteamCoreWebLobbyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamCoreWebLobbyType(ESteamCoreWebLobbyType_StaticEnum, TEXT("/Script/SteamCoreWeb"), TEXT("ESteamCoreWebLobbyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType_Hash() { return 1887591515U; }
	UEnum* Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCoreWeb();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamCoreWebLobbyType"), 0, Get_Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamCoreWebLobbyType::Private", (int64)ESteamCoreWebLobbyType::Private },
				{ "ESteamCoreWebLobbyType::FriendsOnly", (int64)ESteamCoreWebLobbyType::FriendsOnly },
				{ "ESteamCoreWebLobbyType::TypePublic", (int64)ESteamCoreWebLobbyType::TypePublic },
				{ "ESteamCoreWebLobbyType::TypeInvisible", (int64)ESteamCoreWebLobbyType::TypeInvisible },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FriendsOnly.Name", "ESteamCoreWebLobbyType::FriendsOnly" },
				{ "ModuleRelativePath", "Public/ESteamCoreWebLobbyType.h" },
				{ "Private.Name", "ESteamCoreWebLobbyType::Private" },
				{ "TypeInvisible.Name", "ESteamCoreWebLobbyType::TypeInvisible" },
				{ "TypePublic.Name", "ESteamCoreWebLobbyType::TypePublic" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCoreWeb,
				nullptr,
				"ESteamCoreWebLobbyType",
				"ESteamCoreWebLobbyType",
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
