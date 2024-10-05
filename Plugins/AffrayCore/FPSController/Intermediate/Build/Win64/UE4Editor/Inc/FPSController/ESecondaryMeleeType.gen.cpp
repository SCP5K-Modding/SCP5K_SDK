// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/ESecondaryMeleeType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESecondaryMeleeType() {}
// Cross Module References
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_ESecondaryMeleeType();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
	static UEnum* ESecondaryMeleeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FPSController_ESecondaryMeleeType, Z_Construct_UPackage__Script_FPSController(), TEXT("ESecondaryMeleeType"));
		}
		return Singleton;
	}
	template<> FPSCONTROLLER_API UEnum* StaticEnum<ESecondaryMeleeType>()
	{
		return ESecondaryMeleeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESecondaryMeleeType(ESecondaryMeleeType_StaticEnum, TEXT("/Script/FPSController"), TEXT("ESecondaryMeleeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FPSController_ESecondaryMeleeType_Hash() { return 2640362639U; }
	UEnum* Z_Construct_UEnum_FPSController_ESecondaryMeleeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESecondaryMeleeType"), 0, Get_Z_Construct_UEnum_FPSController_ESecondaryMeleeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESecondaryMeleeType::Long", (int64)ESecondaryMeleeType::Long },
				{ "ESecondaryMeleeType::Short", (int64)ESecondaryMeleeType::Short },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Long.Name", "ESecondaryMeleeType::Long" },
				{ "ModuleRelativePath", "Public/ESecondaryMeleeType.h" },
				{ "Short.Name", "ESecondaryMeleeType::Short" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FPSController,
				nullptr,
				"ESecondaryMeleeType",
				"ESecondaryMeleeType",
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
