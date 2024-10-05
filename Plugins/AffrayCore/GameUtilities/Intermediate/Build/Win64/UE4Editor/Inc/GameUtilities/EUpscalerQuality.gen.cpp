// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameUtilities/Public/EUpscalerQuality.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEUpscalerQuality() {}
// Cross Module References
	GAMEUTILITIES_API UEnum* Z_Construct_UEnum_GameUtilities_EUpscalerQuality();
	UPackage* Z_Construct_UPackage__Script_GameUtilities();
// End Cross Module References
	static UEnum* EUpscalerQuality_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameUtilities_EUpscalerQuality, Z_Construct_UPackage__Script_GameUtilities(), TEXT("EUpscalerQuality"));
		}
		return Singleton;
	}
	template<> GAMEUTILITIES_API UEnum* StaticEnum<EUpscalerQuality>()
	{
		return EUpscalerQuality_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUpscalerQuality(EUpscalerQuality_StaticEnum, TEXT("/Script/GameUtilities"), TEXT("EUpscalerQuality"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameUtilities_EUpscalerQuality_Hash() { return 472370770U; }
	UEnum* Z_Construct_UEnum_GameUtilities_EUpscalerQuality()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUpscalerQuality"), 0, Get_Z_Construct_UEnum_GameUtilities_EUpscalerQuality_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUpscalerQuality::UltraQuality", (int64)EUpscalerQuality::UltraQuality },
				{ "EUpscalerQuality::Quality", (int64)EUpscalerQuality::Quality },
				{ "EUpscalerQuality::Balanced", (int64)EUpscalerQuality::Balanced },
				{ "EUpscalerQuality::Performance", (int64)EUpscalerQuality::Performance },
				{ "EUpscalerQuality::UltraPerformance", (int64)EUpscalerQuality::UltraPerformance },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Balanced.Name", "EUpscalerQuality::Balanced" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EUpscalerQuality.h" },
				{ "Performance.Name", "EUpscalerQuality::Performance" },
				{ "Quality.Name", "EUpscalerQuality::Quality" },
				{ "UltraPerformance.Name", "EUpscalerQuality::UltraPerformance" },
				{ "UltraQuality.Name", "EUpscalerQuality::UltraQuality" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameUtilities,
				nullptr,
				"EUpscalerQuality",
				"EUpscalerQuality",
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
