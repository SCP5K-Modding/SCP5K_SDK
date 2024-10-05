// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/EFPSCharacterAbilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFPSCharacterAbilities() {}
// Cross Module References
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EFPSCharacterAbilities();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
	static UEnum* EFPSCharacterAbilities_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FPSController_EFPSCharacterAbilities, Z_Construct_UPackage__Script_FPSController(), TEXT("EFPSCharacterAbilities"));
		}
		return Singleton;
	}
	template<> FPSCONTROLLER_API UEnum* StaticEnum<EFPSCharacterAbilities::Type>()
	{
		return EFPSCharacterAbilities_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFPSCharacterAbilities(EFPSCharacterAbilities_StaticEnum, TEXT("/Script/FPSController"), TEXT("EFPSCharacterAbilities"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FPSController_EFPSCharacterAbilities_Hash() { return 904685992U; }
	UEnum* Z_Construct_UEnum_FPSController_EFPSCharacterAbilities()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFPSCharacterAbilities"), 0, Get_Z_Construct_UEnum_FPSController_EFPSCharacterAbilities_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFPSCharacterAbilities::CanCrouch", (int64)EFPSCharacterAbilities::CanCrouch },
				{ "EFPSCharacterAbilities::CanSprint", (int64)EFPSCharacterAbilities::CanSprint },
				{ "EFPSCharacterAbilities::CanProne", (int64)EFPSCharacterAbilities::CanProne },
				{ "EFPSCharacterAbilities::CanLowReady", (int64)EFPSCharacterAbilities::CanLowReady },
				{ "EFPSCharacterAbilities::CanLean", (int64)EFPSCharacterAbilities::CanLean },
				{ "EFPSCharacterAbilities::CanMount", (int64)EFPSCharacterAbilities::CanMount },
				{ "EFPSCharacterAbilities::CanUseNightVision", (int64)EFPSCharacterAbilities::CanUseNightVision },
				{ "EFPSCharacterAbilities::CanAim", (int64)EFPSCharacterAbilities::CanAim },
				{ "EFPSCharacterAbilities::CanBracedAim", (int64)EFPSCharacterAbilities::CanBracedAim },
				{ "EFPSCharacterAbilities::CanReload", (int64)EFPSCharacterAbilities::CanReload },
				{ "EFPSCharacterAbilities::CanInspect", (int64)EFPSCharacterAbilities::CanInspect },
				{ "EFPSCharacterAbilities::CanCheckAmmo", (int64)EFPSCharacterAbilities::CanCheckAmmo },
				{ "EFPSCharacterAbilities::CanClimb", (int64)EFPSCharacterAbilities::CanClimb },
				{ "EFPSCharacterAbilities::CanUseMelee", (int64)EFPSCharacterAbilities::CanUseMelee },
				{ "EFPSCharacterAbilities::CanKick", (int64)EFPSCharacterAbilities::CanKick },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CanAim.Name", "EFPSCharacterAbilities::CanAim" },
				{ "CanBracedAim.Name", "EFPSCharacterAbilities::CanBracedAim" },
				{ "CanCheckAmmo.Name", "EFPSCharacterAbilities::CanCheckAmmo" },
				{ "CanClimb.Name", "EFPSCharacterAbilities::CanClimb" },
				{ "CanCrouch.Name", "EFPSCharacterAbilities::CanCrouch" },
				{ "CanInspect.Name", "EFPSCharacterAbilities::CanInspect" },
				{ "CanKick.Name", "EFPSCharacterAbilities::CanKick" },
				{ "CanLean.Name", "EFPSCharacterAbilities::CanLean" },
				{ "CanLowReady.Name", "EFPSCharacterAbilities::CanLowReady" },
				{ "CanMount.Name", "EFPSCharacterAbilities::CanMount" },
				{ "CanProne.Name", "EFPSCharacterAbilities::CanProne" },
				{ "CanReload.Name", "EFPSCharacterAbilities::CanReload" },
				{ "CanSprint.Name", "EFPSCharacterAbilities::CanSprint" },
				{ "CanUseMelee.Name", "EFPSCharacterAbilities::CanUseMelee" },
				{ "CanUseNightVision.Name", "EFPSCharacterAbilities::CanUseNightVision" },
				{ "ModuleRelativePath", "Public/EFPSCharacterAbilities.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FPSController,
				nullptr,
				"EFPSCharacterAbilities",
				"EFPSCharacterAbilities::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
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
