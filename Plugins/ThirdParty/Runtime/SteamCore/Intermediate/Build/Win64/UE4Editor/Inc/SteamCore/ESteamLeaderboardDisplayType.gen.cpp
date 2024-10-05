// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamLeaderboardDisplayType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamLeaderboardDisplayType() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamLeaderboardDisplayType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLeaderboardDisplayType"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamLeaderboardDisplayType>()
	{
		return ESteamLeaderboardDisplayType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamLeaderboardDisplayType(ESteamLeaderboardDisplayType_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamLeaderboardDisplayType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType_Hash() { return 2504779821U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamLeaderboardDisplayType"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamLeaderboardDisplayType::None", (int64)ESteamLeaderboardDisplayType::None },
				{ "ESteamLeaderboardDisplayType::Numeric", (int64)ESteamLeaderboardDisplayType::Numeric },
				{ "ESteamLeaderboardDisplayType::TimeSeconds", (int64)ESteamLeaderboardDisplayType::TimeSeconds },
				{ "ESteamLeaderboardDisplayType::TimeMilliSeconds", (int64)ESteamLeaderboardDisplayType::TimeMilliSeconds },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESteamLeaderboardDisplayType.h" },
				{ "None.Name", "ESteamLeaderboardDisplayType::None" },
				{ "Numeric.Name", "ESteamLeaderboardDisplayType::Numeric" },
				{ "TimeMilliSeconds.Name", "ESteamLeaderboardDisplayType::TimeMilliSeconds" },
				{ "TimeSeconds.Name", "ESteamLeaderboardDisplayType::TimeSeconds" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamLeaderboardDisplayType",
				"ESteamLeaderboardDisplayType",
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
