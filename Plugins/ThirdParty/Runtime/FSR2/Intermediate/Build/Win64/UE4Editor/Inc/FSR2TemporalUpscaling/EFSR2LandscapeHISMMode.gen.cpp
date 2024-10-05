// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSR2TemporalUpscaling/Public/EFSR2LandscapeHISMMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFSR2LandscapeHISMMode() {}
// Cross Module References
	FSR2TEMPORALUPSCALING_API UEnum* Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2LandscapeHISMMode();
	UPackage* Z_Construct_UPackage__Script_FSR2TemporalUpscaling();
// End Cross Module References
	static UEnum* EFSR2LandscapeHISMMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2LandscapeHISMMode, Z_Construct_UPackage__Script_FSR2TemporalUpscaling(), TEXT("EFSR2LandscapeHISMMode"));
		}
		return Singleton;
	}
	template<> FSR2TEMPORALUPSCALING_API UEnum* StaticEnum<EFSR2LandscapeHISMMode>()
	{
		return EFSR2LandscapeHISMMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFSR2LandscapeHISMMode(EFSR2LandscapeHISMMode_StaticEnum, TEXT("/Script/FSR2TemporalUpscaling"), TEXT("EFSR2LandscapeHISMMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2LandscapeHISMMode_Hash() { return 1830434791U; }
	UEnum* Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2LandscapeHISMMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FSR2TemporalUpscaling();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFSR2LandscapeHISMMode"), 0, Get_Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2LandscapeHISMMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFSR2LandscapeHISMMode::Off", (int64)EFSR2LandscapeHISMMode::Off },
				{ "EFSR2LandscapeHISMMode::AllStatic", (int64)EFSR2LandscapeHISMMode::AllStatic },
				{ "EFSR2LandscapeHISMMode::StaticWPO", (int64)EFSR2LandscapeHISMMode::StaticWPO },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllStatic.Name", "EFSR2LandscapeHISMMode::AllStatic" },
				{ "ModuleRelativePath", "Public/EFSR2LandscapeHISMMode.h" },
				{ "Off.Name", "EFSR2LandscapeHISMMode::Off" },
				{ "StaticWPO.Name", "EFSR2LandscapeHISMMode::StaticWPO" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FSR2TemporalUpscaling,
				nullptr,
				"EFSR2LandscapeHISMMode",
				"EFSR2LandscapeHISMMode",
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
