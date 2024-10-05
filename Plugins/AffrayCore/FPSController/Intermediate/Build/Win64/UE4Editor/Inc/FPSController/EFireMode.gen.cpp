// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/EFireMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFireMode() {}
// Cross Module References
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EFireMode();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
	static UEnum* EFireMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FPSController_EFireMode, Z_Construct_UPackage__Script_FPSController(), TEXT("EFireMode"));
		}
		return Singleton;
	}
	template<> FPSCONTROLLER_API UEnum* StaticEnum<EFireMode>()
	{
		return EFireMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFireMode(EFireMode_StaticEnum, TEXT("/Script/FPSController"), TEXT("EFireMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FPSController_EFireMode_Hash() { return 2567345853U; }
	UEnum* Z_Construct_UEnum_FPSController_EFireMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFireMode"), 0, Get_Z_Construct_UEnum_FPSController_EFireMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFireMode::FM_Automatic", (int64)EFireMode::FM_Automatic },
				{ "EFireMode::FM_Burst", (int64)EFireMode::FM_Burst },
				{ "EFireMode::FM_SemiAutomatic", (int64)EFireMode::FM_SemiAutomatic },
				{ "EFireMode::FM_SingleAction", (int64)EFireMode::FM_SingleAction },
				{ "EFireMode::FM_DoubleAction", (int64)EFireMode::FM_DoubleAction },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FM_Automatic.Name", "EFireMode::FM_Automatic" },
				{ "FM_Burst.Name", "EFireMode::FM_Burst" },
				{ "FM_DoubleAction.Name", "EFireMode::FM_DoubleAction" },
				{ "FM_SemiAutomatic.Name", "EFireMode::FM_SemiAutomatic" },
				{ "FM_SingleAction.Name", "EFireMode::FM_SingleAction" },
				{ "ModuleRelativePath", "Public/EFireMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FPSController,
				nullptr,
				"EFireMode",
				"EFireMode",
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
