// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamLeaderboardSortMethod.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamLeaderboardSortMethod() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamLeaderboardSortMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLeaderboardSortMethod"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamLeaderboardSortMethod>()
	{
		return ESteamLeaderboardSortMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamLeaderboardSortMethod(ESteamLeaderboardSortMethod_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamLeaderboardSortMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod_Hash() { return 2739934540U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamLeaderboardSortMethod"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamLeaderboardSortMethod::None", (int64)ESteamLeaderboardSortMethod::None },
				{ "ESteamLeaderboardSortMethod::Ascending", (int64)ESteamLeaderboardSortMethod::Ascending },
				{ "ESteamLeaderboardSortMethod::Descending", (int64)ESteamLeaderboardSortMethod::Descending },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ascending.Name", "ESteamLeaderboardSortMethod::Ascending" },
				{ "BlueprintType", "true" },
				{ "Descending.Name", "ESteamLeaderboardSortMethod::Descending" },
				{ "ModuleRelativePath", "Public/ESteamLeaderboardSortMethod.h" },
				{ "None.Name", "ESteamLeaderboardSortMethod::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamLeaderboardSortMethod",
				"ESteamLeaderboardSortMethod",
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
