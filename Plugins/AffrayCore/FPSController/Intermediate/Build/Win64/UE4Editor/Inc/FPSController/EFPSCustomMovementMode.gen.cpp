// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/EFPSCustomMovementMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFPSCustomMovementMode() {}
// Cross Module References
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EFPSCustomMovementMode();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
	static UEnum* EFPSCustomMovementMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FPSController_EFPSCustomMovementMode, Z_Construct_UPackage__Script_FPSController(), TEXT("EFPSCustomMovementMode"));
		}
		return Singleton;
	}
	template<> FPSCONTROLLER_API UEnum* StaticEnum<EFPSCustomMovementMode>()
	{
		return EFPSCustomMovementMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFPSCustomMovementMode(EFPSCustomMovementMode_StaticEnum, TEXT("/Script/FPSController"), TEXT("EFPSCustomMovementMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FPSController_EFPSCustomMovementMode_Hash() { return 2235752335U; }
	UEnum* Z_Construct_UEnum_FPSController_EFPSCustomMovementMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFPSCustomMovementMode"), 0, Get_Z_Construct_UEnum_FPSController_EFPSCustomMovementMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FPSMOVE_None", (int64)FPSMOVE_None },
				{ "FPSMOVE_Sliding", (int64)FPSMOVE_Sliding },
				{ "FPSMOVE_Prone", (int64)FPSMOVE_Prone },
				{ "FPSMOVE_Climbing", (int64)FPSMOVE_Climbing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FPSMOVE_Climbing.Name", "FPSMOVE_Climbing" },
				{ "FPSMOVE_None.Name", "FPSMOVE_None" },
				{ "FPSMOVE_Prone.Name", "FPSMOVE_Prone" },
				{ "FPSMOVE_Sliding.Name", "FPSMOVE_Sliding" },
				{ "ModuleRelativePath", "Public/EFPSCustomMovementMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FPSController,
				nullptr,
				"EFPSCustomMovementMode",
				"EFPSCustomMovementMode",
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
