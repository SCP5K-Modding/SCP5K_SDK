// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/EMeleeFlags.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMeleeFlags() {}
// Cross Module References
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EMeleeFlags();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
	static UEnum* EMeleeFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FPSController_EMeleeFlags, Z_Construct_UPackage__Script_FPSController(), TEXT("EMeleeFlags"));
		}
		return Singleton;
	}
	template<> FPSCONTROLLER_API UEnum* StaticEnum<EMeleeFlags>()
	{
		return EMeleeFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeleeFlags(EMeleeFlags_StaticEnum, TEXT("/Script/FPSController"), TEXT("EMeleeFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FPSController_EMeleeFlags_Hash() { return 3006037896U; }
	UEnum* Z_Construct_UEnum_FPSController_EMeleeFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeleeFlags"), 0, Get_Z_Construct_UEnum_FPSController_EMeleeFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "M_None", (int64)M_None },
				{ "M_UsingMelee", (int64)M_UsingMelee },
				{ "M_Hit", (int64)M_Hit },
				{ "M_Kicking", (int64)M_Kicking },
				{ "M_Canceled", (int64)M_Canceled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "M_Canceled.Name", "M_Canceled" },
				{ "M_Hit.Name", "M_Hit" },
				{ "M_Kicking.Name", "M_Kicking" },
				{ "M_None.Name", "M_None" },
				{ "M_UsingMelee.Name", "M_UsingMelee" },
				{ "ModuleRelativePath", "Public/EMeleeFlags.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FPSController,
				nullptr,
				"EMeleeFlags",
				"EMeleeFlags",
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
