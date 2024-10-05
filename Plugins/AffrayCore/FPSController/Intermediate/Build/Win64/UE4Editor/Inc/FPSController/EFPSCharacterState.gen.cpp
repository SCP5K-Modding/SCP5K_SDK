// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/EFPSCharacterState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFPSCharacterState() {}
// Cross Module References
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EFPSCharacterState();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
	static UEnum* EFPSCharacterState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FPSController_EFPSCharacterState, Z_Construct_UPackage__Script_FPSController(), TEXT("EFPSCharacterState"));
		}
		return Singleton;
	}
	template<> FPSCONTROLLER_API UEnum* StaticEnum<EFPSCharacterState>()
	{
		return EFPSCharacterState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFPSCharacterState(EFPSCharacterState_StaticEnum, TEXT("/Script/FPSController"), TEXT("EFPSCharacterState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FPSController_EFPSCharacterState_Hash() { return 464764793U; }
	UEnum* Z_Construct_UEnum_FPSController_EFPSCharacterState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFPSCharacterState"), 0, Get_Z_Construct_UEnum_FPSController_EFPSCharacterState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "WantsCrouching", (int64)WantsCrouching },
				{ "Crouching", (int64)Crouching },
				{ "WantsSprinting", (int64)WantsSprinting },
				{ "Sprinting", (int64)Sprinting },
				{ "WantsProne", (int64)WantsProne },
				{ "Prone", (int64)Prone },
				{ "LowReady", (int64)LowReady },
				{ "WantsLeaningLeft", (int64)WantsLeaningLeft },
				{ "LeaningLeft", (int64)LeaningLeft },
				{ "WantsLeaningRight", (int64)WantsLeaningRight },
				{ "LeaningRight", (int64)LeaningRight },
				{ "Mounted", (int64)Mounted },
				{ "NightVision", (int64)NightVision },
				{ "WantsAiming", (int64)WantsAiming },
				{ "Aiming", (int64)Aiming },
				{ "WantsBracedAiming", (int64)WantsBracedAiming },
				{ "BracedAiming", (int64)BracedAiming },
				{ "Firing", (int64)Firing },
				{ "Dead", (int64)Dead },
				{ "Reloading", (int64)Reloading },
				{ "CancelledReload", (int64)CancelledReload },
				{ "EmptyReload", (int64)EmptyReload },
				{ "Inspecting", (int64)Inspecting },
				{ "CheckingAmmo", (int64)CheckingAmmo },
				{ "WantsClimbing", (int64)WantsClimbing },
				{ "Climbing", (int64)Climbing },
				{ "MeleeBasePoseLeft", (int64)MeleeBasePoseLeft },
				{ "MeleeReadyLeft", (int64)MeleeReadyLeft },
				{ "MeleeReadyRight", (int64)MeleeReadyRight },
				{ "UsingMelee", (int64)UsingMelee },
				{ "Kicking", (int64)Kicking },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aiming.Name", "Aiming" },
				{ "BlueprintType", "true" },
				{ "BracedAiming.Name", "BracedAiming" },
				{ "CancelledReload.Name", "CancelledReload" },
				{ "CheckingAmmo.Name", "CheckingAmmo" },
				{ "Climbing.Name", "Climbing" },
				{ "Crouching.Name", "Crouching" },
				{ "Dead.Name", "Dead" },
				{ "EmptyReload.Name", "EmptyReload" },
				{ "Firing.Name", "Firing" },
				{ "Inspecting.Name", "Inspecting" },
				{ "Kicking.Name", "Kicking" },
				{ "LeaningLeft.Name", "LeaningLeft" },
				{ "LeaningRight.Name", "LeaningRight" },
				{ "LowReady.Name", "LowReady" },
				{ "MeleeBasePoseLeft.Name", "MeleeBasePoseLeft" },
				{ "MeleeReadyLeft.Name", "MeleeReadyLeft" },
				{ "MeleeReadyRight.Name", "MeleeReadyRight" },
				{ "ModuleRelativePath", "Public/EFPSCharacterState.h" },
				{ "Mounted.Name", "Mounted" },
				{ "NightVision.Name", "NightVision" },
				{ "Prone.Name", "Prone" },
				{ "Reloading.Name", "Reloading" },
				{ "Sprinting.Name", "Sprinting" },
				{ "UsingMelee.Name", "UsingMelee" },
				{ "WantsAiming.Name", "WantsAiming" },
				{ "WantsBracedAiming.Name", "WantsBracedAiming" },
				{ "WantsClimbing.Name", "WantsClimbing" },
				{ "WantsCrouching.Name", "WantsCrouching" },
				{ "WantsLeaningLeft.Name", "WantsLeaningLeft" },
				{ "WantsLeaningRight.Name", "WantsLeaningRight" },
				{ "WantsProne.Name", "WantsProne" },
				{ "WantsSprinting.Name", "WantsSprinting" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FPSController,
				nullptr,
				"EFPSCharacterState",
				"EFPSCharacterState",
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
