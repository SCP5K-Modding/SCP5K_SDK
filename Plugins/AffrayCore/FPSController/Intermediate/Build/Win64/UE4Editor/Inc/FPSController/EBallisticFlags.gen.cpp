// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/EBallisticFlags.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBallisticFlags() {}
// Cross Module References
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EBallisticFlags();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
	static UEnum* EBallisticFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FPSController_EBallisticFlags, Z_Construct_UPackage__Script_FPSController(), TEXT("EBallisticFlags"));
		}
		return Singleton;
	}
	template<> FPSCONTROLLER_API UEnum* StaticEnum<EBallisticFlags>()
	{
		return EBallisticFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBallisticFlags(EBallisticFlags_StaticEnum, TEXT("/Script/FPSController"), TEXT("EBallisticFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FPSController_EBallisticFlags_Hash() { return 2466375130U; }
	UEnum* Z_Construct_UEnum_FPSController_EBallisticFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBallisticFlags"), 0, Get_Z_Construct_UEnum_FPSController_EBallisticFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "B_None", (int64)B_None },
				{ "B_Hit", (int64)B_Hit },
				{ "B_Damage", (int64)B_Damage },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "B_Damage.Name", "B_Damage" },
				{ "B_Hit.Name", "B_Hit" },
				{ "B_None.Name", "B_None" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EBallisticFlags.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FPSController,
				nullptr,
				"EBallisticFlags",
				"EBallisticFlags",
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
