// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamLobbyDistanceFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamLobbyDistanceFilter() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamLobbyDistanceFilter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLobbyDistanceFilter"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamLobbyDistanceFilter>()
	{
		return ESteamLobbyDistanceFilter_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamLobbyDistanceFilter(ESteamLobbyDistanceFilter_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamLobbyDistanceFilter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter_Hash() { return 2893166245U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamLobbyDistanceFilter"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamLobbyDistanceFilter::Close", (int64)ESteamLobbyDistanceFilter::Close },
				{ "ESteamLobbyDistanceFilter::Default", (int64)ESteamLobbyDistanceFilter::Default },
				{ "ESteamLobbyDistanceFilter::Far", (int64)ESteamLobbyDistanceFilter::Far },
				{ "ESteamLobbyDistanceFilter::Worldwide", (int64)ESteamLobbyDistanceFilter::Worldwide },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Close.Name", "ESteamLobbyDistanceFilter::Close" },
				{ "Default.Name", "ESteamLobbyDistanceFilter::Default" },
				{ "Far.Name", "ESteamLobbyDistanceFilter::Far" },
				{ "ModuleRelativePath", "Public/ESteamLobbyDistanceFilter.h" },
				{ "Worldwide.Name", "ESteamLobbyDistanceFilter::Worldwide" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamLobbyDistanceFilter",
				"ESteamLobbyDistanceFilter",
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
