// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/EItemType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEItemType() {}
// Cross Module References
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EItemType();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
	static UEnum* EItemType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FPSController_EItemType, Z_Construct_UPackage__Script_FPSController(), TEXT("EItemType"));
		}
		return Singleton;
	}
	template<> FPSCONTROLLER_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemType(EItemType_StaticEnum, TEXT("/Script/FPSController"), TEXT("EItemType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FPSController_EItemType_Hash() { return 366641405U; }
	UEnum* Z_Construct_UEnum_FPSController_EItemType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemType"), 0, Get_Z_Construct_UEnum_FPSController_EItemType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EItemType::Generic", (int64)EItemType::Generic },
				{ "EItemType::Consumable", (int64)EItemType::Consumable },
				{ "EItemType::Throwable", (int64)EItemType::Throwable },
				{ "EItemType::Grenade", (int64)EItemType::Grenade },
				{ "EItemType::Rifle", (int64)EItemType::Rifle },
				{ "EItemType::Pistol", (int64)EItemType::Pistol },
				{ "EItemType::SMG", (int64)EItemType::SMG },
				{ "EItemType::LMG", (int64)EItemType::LMG },
				{ "EItemType::AntiMateriel", (int64)EItemType::AntiMateriel },
				{ "EItemType::DMR", (int64)EItemType::DMR },
				{ "EItemType::Shotgun", (int64)EItemType::Shotgun },
				{ "EItemType::Sniper", (int64)EItemType::Sniper },
				{ "EItemType::Launcher", (int64)EItemType::Launcher },
				{ "EItemType::Special", (int64)EItemType::Special },
				{ "EItemType::Melee", (int64)EItemType::Melee },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AntiMateriel.Name", "EItemType::AntiMateriel" },
				{ "Consumable.Name", "EItemType::Consumable" },
				{ "DMR.Name", "EItemType::DMR" },
				{ "Generic.Name", "EItemType::Generic" },
				{ "Grenade.Name", "EItemType::Grenade" },
				{ "Launcher.Name", "EItemType::Launcher" },
				{ "LMG.Name", "EItemType::LMG" },
				{ "Melee.Name", "EItemType::Melee" },
				{ "ModuleRelativePath", "Public/EItemType.h" },
				{ "Pistol.Name", "EItemType::Pistol" },
				{ "Rifle.Name", "EItemType::Rifle" },
				{ "Shotgun.Name", "EItemType::Shotgun" },
				{ "SMG.Name", "EItemType::SMG" },
				{ "Sniper.Name", "EItemType::Sniper" },
				{ "Special.Name", "EItemType::Special" },
				{ "Throwable.Name", "EItemType::Throwable" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FPSController,
				nullptr,
				"EItemType",
				"EItemType",
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
