// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamLobbyComparison.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamLobbyComparison() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyComparison();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamLobbyComparison_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLobbyComparison, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLobbyComparison"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamLobbyComparison>()
	{
		return ESteamLobbyComparison_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamLobbyComparison(ESteamLobbyComparison_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamLobbyComparison"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamLobbyComparison_Hash() { return 2661710999U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyComparison()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamLobbyComparison"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamLobbyComparison_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamLobbyComparison::EqualToOrLessThan", (int64)ESteamLobbyComparison::EqualToOrLessThan },
				{ "ESteamLobbyComparison::LessThan", (int64)ESteamLobbyComparison::LessThan },
				{ "ESteamLobbyComparison::Equal", (int64)ESteamLobbyComparison::Equal },
				{ "ESteamLobbyComparison::GreaterThan", (int64)ESteamLobbyComparison::GreaterThan },
				{ "ESteamLobbyComparison::EqualToOrGreaterThan", (int64)ESteamLobbyComparison::EqualToOrGreaterThan },
				{ "ESteamLobbyComparison::NotEqual", (int64)ESteamLobbyComparison::NotEqual },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Equal.Name", "ESteamLobbyComparison::Equal" },
				{ "EqualToOrGreaterThan.Name", "ESteamLobbyComparison::EqualToOrGreaterThan" },
				{ "EqualToOrLessThan.Name", "ESteamLobbyComparison::EqualToOrLessThan" },
				{ "GreaterThan.Name", "ESteamLobbyComparison::GreaterThan" },
				{ "LessThan.Name", "ESteamLobbyComparison::LessThan" },
				{ "ModuleRelativePath", "Public/ESteamLobbyComparison.h" },
				{ "NotEqual.Name", "ESteamLobbyComparison::NotEqual" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamLobbyComparison",
				"ESteamLobbyComparison",
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
