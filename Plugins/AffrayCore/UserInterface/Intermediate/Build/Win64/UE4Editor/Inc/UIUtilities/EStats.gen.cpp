// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIUtilities/Public/EStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStats() {}
// Cross Module References
	UIUTILITIES_API UEnum* Z_Construct_UEnum_UIUtilities_EStats();
	UPackage* Z_Construct_UPackage__Script_UIUtilities();
// End Cross Module References
	static UEnum* EStats_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UIUtilities_EStats, Z_Construct_UPackage__Script_UIUtilities(), TEXT("EStats"));
		}
		return Singleton;
	}
	template<> UIUTILITIES_API UEnum* StaticEnum<EStats>()
	{
		return EStats_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStats(EStats_StaticEnum, TEXT("/Script/UIUtilities"), TEXT("EStats"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UIUtilities_EStats_Hash() { return 2361064781U; }
	UEnum* Z_Construct_UEnum_UIUtilities_EStats()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UIUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStats"), 0, Get_Z_Construct_UEnum_UIUtilities_EStats_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "S_Level", (int64)S_Level },
				{ "S_Name", (int64)S_Name },
				{ "S_State", (int64)S_State },
				{ "S_PVPKills", (int64)S_PVPKills },
				{ "S_PVEKills", (int64)S_PVEKills },
				{ "S_Headshots", (int64)S_Headshots },
				{ "S_Deaths", (int64)S_Deaths },
				{ "S_KDRatio", (int64)S_KDRatio },
				{ "S_Score", (int64)S_Score },
				{ "S_Ping", (int64)S_Ping },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EStats.h" },
				{ "S_Deaths.Name", "S_Deaths" },
				{ "S_Headshots.Name", "S_Headshots" },
				{ "S_KDRatio.Name", "S_KDRatio" },
				{ "S_Level.Name", "S_Level" },
				{ "S_Name.Name", "S_Name" },
				{ "S_Ping.Name", "S_Ping" },
				{ "S_PVEKills.Name", "S_PVEKills" },
				{ "S_PVPKills.Name", "S_PVPKills" },
				{ "S_Score.Name", "S_Score" },
				{ "S_State.Name", "S_State" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UIUtilities,
				nullptr,
				"EStats",
				"EStats",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
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
