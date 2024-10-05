// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameUtilities/Public/EVideoSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEVideoSetting() {}
// Cross Module References
	GAMEUTILITIES_API UEnum* Z_Construct_UEnum_GameUtilities_EVideoSetting();
	UPackage* Z_Construct_UPackage__Script_GameUtilities();
// End Cross Module References
	static UEnum* EVideoSetting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameUtilities_EVideoSetting, Z_Construct_UPackage__Script_GameUtilities(), TEXT("EVideoSetting"));
		}
		return Singleton;
	}
	template<> GAMEUTILITIES_API UEnum* StaticEnum<EVideoSetting>()
	{
		return EVideoSetting_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVideoSetting(EVideoSetting_StaticEnum, TEXT("/Script/GameUtilities"), TEXT("EVideoSetting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameUtilities_EVideoSetting_Hash() { return 2473771377U; }
	UEnum* Z_Construct_UEnum_GameUtilities_EVideoSetting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVideoSetting"), 0, Get_Z_Construct_UEnum_GameUtilities_EVideoSetting_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVideoSetting::ReflexMode", (int64)EVideoSetting::ReflexMode },
				{ "EVideoSetting::UpscalerMode", (int64)EVideoSetting::UpscalerMode },
				{ "EVideoSetting::UpscalerQuality", (int64)EVideoSetting::UpscalerQuality },
				{ "EVideoSetting::EnableDepthOfField", (int64)EVideoSetting::EnableDepthOfField },
				{ "EVideoSetting::EnableMotionBlur", (int64)EVideoSetting::EnableMotionBlur },
				{ "EVideoSetting::EnablePaniniProjection", (int64)EVideoSetting::EnablePaniniProjection },
				{ "EVideoSetting::PaniniProjectionAmount", (int64)EVideoSetting::PaniniProjectionAmount },
				{ "EVideoSetting::Brightness", (int64)EVideoSetting::Brightness },
				{ "EVideoSetting::FieldOfView", (int64)EVideoSetting::FieldOfView },
				{ "EVideoSetting::ScalabilitySettings", (int64)EVideoSetting::ScalabilitySettings },
				{ "EVideoSetting::ResolutionScale", (int64)EVideoSetting::ResolutionScale },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Brightness.Name", "EVideoSetting::Brightness" },
				{ "EnableDepthOfField.Name", "EVideoSetting::EnableDepthOfField" },
				{ "EnableMotionBlur.Name", "EVideoSetting::EnableMotionBlur" },
				{ "EnablePaniniProjection.Name", "EVideoSetting::EnablePaniniProjection" },
				{ "FieldOfView.Name", "EVideoSetting::FieldOfView" },
				{ "ModuleRelativePath", "Public/EVideoSetting.h" },
				{ "PaniniProjectionAmount.Name", "EVideoSetting::PaniniProjectionAmount" },
				{ "ReflexMode.Name", "EVideoSetting::ReflexMode" },
				{ "ResolutionScale.Name", "EVideoSetting::ResolutionScale" },
				{ "ScalabilitySettings.Name", "EVideoSetting::ScalabilitySettings" },
				{ "UpscalerMode.Name", "EVideoSetting::UpscalerMode" },
				{ "UpscalerQuality.Name", "EVideoSetting::UpscalerQuality" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameUtilities,
				nullptr,
				"EVideoSetting",
				"EVideoSetting",
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
