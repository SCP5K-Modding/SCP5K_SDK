// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerAnalytics/Public/EPlayerAnalyticsEventType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPlayerAnalyticsEventType() {}
// Cross Module References
	PLAYERANALYTICS_API UEnum* Z_Construct_UEnum_PlayerAnalytics_EPlayerAnalyticsEventType();
	UPackage* Z_Construct_UPackage__Script_PlayerAnalytics();
// End Cross Module References
	static UEnum* EPlayerAnalyticsEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayerAnalytics_EPlayerAnalyticsEventType, Z_Construct_UPackage__Script_PlayerAnalytics(), TEXT("EPlayerAnalyticsEventType"));
		}
		return Singleton;
	}
	template<> PLAYERANALYTICS_API UEnum* StaticEnum<EPlayerAnalyticsEventType>()
	{
		return EPlayerAnalyticsEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayerAnalyticsEventType(EPlayerAnalyticsEventType_StaticEnum, TEXT("/Script/PlayerAnalytics"), TEXT("EPlayerAnalyticsEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayerAnalytics_EPlayerAnalyticsEventType_Hash() { return 617867347U; }
	UEnum* Z_Construct_UEnum_PlayerAnalytics_EPlayerAnalyticsEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayerAnalytics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayerAnalyticsEventType"), 0, Get_Z_Construct_UEnum_PlayerAnalytics_EPlayerAnalyticsEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayerAnalyticsEventType::None", (int64)EPlayerAnalyticsEventType::None },
				{ "EPlayerAnalyticsEventType::Location", (int64)EPlayerAnalyticsEventType::Location },
				{ "EPlayerAnalyticsEventType::Death", (int64)EPlayerAnalyticsEventType::Death },
				{ "EPlayerAnalyticsEventType::Spawn", (int64)EPlayerAnalyticsEventType::Spawn },
				{ "EPlayerAnalyticsEventType::EnemyKill", (int64)EPlayerAnalyticsEventType::EnemyKill },
				{ "EPlayerAnalyticsEventType::MissionItemPickup", (int64)EPlayerAnalyticsEventType::MissionItemPickup },
				{ "EPlayerAnalyticsEventType::ConsumablePickup", (int64)EPlayerAnalyticsEventType::ConsumablePickup },
				{ "EPlayerAnalyticsEventType::ItemPickup", (int64)EPlayerAnalyticsEventType::ItemPickup },
				{ "EPlayerAnalyticsEventType::CompleteObjective", (int64)EPlayerAnalyticsEventType::CompleteObjective },
				{ "EPlayerAnalyticsEventType::EnterArea", (int64)EPlayerAnalyticsEventType::EnterArea },
				{ "EPlayerAnalyticsEventType::Spectate", (int64)EPlayerAnalyticsEventType::Spectate },
				{ "EPlayerAnalyticsEventType::Custom", (int64)EPlayerAnalyticsEventType::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CompleteObjective.Name", "EPlayerAnalyticsEventType::CompleteObjective" },
				{ "ConsumablePickup.Name", "EPlayerAnalyticsEventType::ConsumablePickup" },
				{ "Custom.Name", "EPlayerAnalyticsEventType::Custom" },
				{ "Death.Name", "EPlayerAnalyticsEventType::Death" },
				{ "EnemyKill.Name", "EPlayerAnalyticsEventType::EnemyKill" },
				{ "EnterArea.Name", "EPlayerAnalyticsEventType::EnterArea" },
				{ "ItemPickup.Name", "EPlayerAnalyticsEventType::ItemPickup" },
				{ "Location.Name", "EPlayerAnalyticsEventType::Location" },
				{ "MissionItemPickup.Name", "EPlayerAnalyticsEventType::MissionItemPickup" },
				{ "ModuleRelativePath", "Public/EPlayerAnalyticsEventType.h" },
				{ "None.Name", "EPlayerAnalyticsEventType::None" },
				{ "Spawn.Name", "EPlayerAnalyticsEventType::Spawn" },
				{ "Spectate.Name", "EPlayerAnalyticsEventType::Spectate" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayerAnalytics,
				nullptr,
				"EPlayerAnalyticsEventType",
				"EPlayerAnalyticsEventType",
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
