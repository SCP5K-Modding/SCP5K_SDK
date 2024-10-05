// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameUtilities/Public/EGameplaySetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGameplaySetting() {}
// Cross Module References
	GAMEUTILITIES_API UEnum* Z_Construct_UEnum_GameUtilities_EGameplaySetting();
	UPackage* Z_Construct_UPackage__Script_GameUtilities();
// End Cross Module References
	static UEnum* EGameplaySetting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameUtilities_EGameplaySetting, Z_Construct_UPackage__Script_GameUtilities(), TEXT("EGameplaySetting"));
		}
		return Singleton;
	}
	template<> GAMEUTILITIES_API UEnum* StaticEnum<EGameplaySetting>()
	{
		return EGameplaySetting_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplaySetting(EGameplaySetting_StaticEnum, TEXT("/Script/GameUtilities"), TEXT("EGameplaySetting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameUtilities_EGameplaySetting_Hash() { return 2144094687U; }
	UEnum* Z_Construct_UEnum_GameUtilities_EGameplaySetting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplaySetting"), 0, Get_Z_Construct_UEnum_GameUtilities_EGameplaySetting_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplaySetting::ToggleCrouch", (int64)EGameplaySetting::ToggleCrouch },
				{ "EGameplaySetting::ToggleSprint", (int64)EGameplaySetting::ToggleSprint },
				{ "EGameplaySetting::ToggleAim", (int64)EGameplaySetting::ToggleAim },
				{ "EGameplaySetting::ToggleLean", (int64)EGameplaySetting::ToggleLean },
				{ "EGameplaySetting::ToggleLowReady", (int64)EGameplaySetting::ToggleLowReady },
				{ "EGameplaySetting::TogglePointShooting", (int64)EGameplaySetting::TogglePointShooting },
				{ "EGameplaySetting::CenterViewOnADS", (int64)EGameplaySetting::CenterViewOnADS },
				{ "EGameplaySetting::InvertHorizontalInput", (int64)EGameplaySetting::InvertHorizontalInput },
				{ "EGameplaySetting::InvertVerticalInput", (int64)EGameplaySetting::InvertVerticalInput },
				{ "EGameplaySetting::InputSensitivity", (int64)EGameplaySetting::InputSensitivity },
				{ "EGameplaySetting::AimingSensitivity", (int64)EGameplaySetting::AimingSensitivity },
				{ "EGameplaySetting::DeadzoneSensitivity", (int64)EGameplaySetting::DeadzoneSensitivity },
				{ "EGameplaySetting::HeadBobIntensity", (int64)EGameplaySetting::HeadBobIntensity },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AimingSensitivity.Name", "EGameplaySetting::AimingSensitivity" },
				{ "BlueprintType", "true" },
				{ "CenterViewOnADS.Name", "EGameplaySetting::CenterViewOnADS" },
				{ "DeadzoneSensitivity.Name", "EGameplaySetting::DeadzoneSensitivity" },
				{ "HeadBobIntensity.Name", "EGameplaySetting::HeadBobIntensity" },
				{ "InputSensitivity.Name", "EGameplaySetting::InputSensitivity" },
				{ "InvertHorizontalInput.Name", "EGameplaySetting::InvertHorizontalInput" },
				{ "InvertVerticalInput.Name", "EGameplaySetting::InvertVerticalInput" },
				{ "ModuleRelativePath", "Public/EGameplaySetting.h" },
				{ "ToggleAim.Name", "EGameplaySetting::ToggleAim" },
				{ "ToggleCrouch.Name", "EGameplaySetting::ToggleCrouch" },
				{ "ToggleLean.Name", "EGameplaySetting::ToggleLean" },
				{ "ToggleLowReady.Name", "EGameplaySetting::ToggleLowReady" },
				{ "TogglePointShooting.Name", "EGameplaySetting::TogglePointShooting" },
				{ "ToggleSprint.Name", "EGameplaySetting::ToggleSprint" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameUtilities,
				nullptr,
				"EGameplaySetting",
				"EGameplaySetting",
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
