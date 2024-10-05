// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/EPrimaryMeleeType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPrimaryMeleeType() {}
// Cross Module References
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EPrimaryMeleeType();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
	static UEnum* EPrimaryMeleeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FPSController_EPrimaryMeleeType, Z_Construct_UPackage__Script_FPSController(), TEXT("EPrimaryMeleeType"));
		}
		return Singleton;
	}
	template<> FPSCONTROLLER_API UEnum* StaticEnum<EPrimaryMeleeType>()
	{
		return EPrimaryMeleeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPrimaryMeleeType(EPrimaryMeleeType_StaticEnum, TEXT("/Script/FPSController"), TEXT("EPrimaryMeleeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FPSController_EPrimaryMeleeType_Hash() { return 1732548560U; }
	UEnum* Z_Construct_UEnum_FPSController_EPrimaryMeleeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPrimaryMeleeType"), 0, Get_Z_Construct_UEnum_FPSController_EPrimaryMeleeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPrimaryMeleeType::Blunt", (int64)EPrimaryMeleeType::Blunt },
				{ "EPrimaryMeleeType::Sharp", (int64)EPrimaryMeleeType::Sharp },
				{ "EPrimaryMeleeType::Special", (int64)EPrimaryMeleeType::Special },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Blunt.Name", "EPrimaryMeleeType::Blunt" },
				{ "ModuleRelativePath", "Public/EPrimaryMeleeType.h" },
				{ "Sharp.Name", "EPrimaryMeleeType::Sharp" },
				{ "Special.Name", "EPrimaryMeleeType::Special" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FPSController,
				nullptr,
				"EPrimaryMeleeType",
				"EPrimaryMeleeType",
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
