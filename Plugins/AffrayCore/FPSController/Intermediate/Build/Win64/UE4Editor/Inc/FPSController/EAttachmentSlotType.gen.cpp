// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/EAttachmentSlotType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAttachmentSlotType() {}
// Cross Module References
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EAttachmentSlotType();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
	static UEnum* EAttachmentSlotType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FPSController_EAttachmentSlotType, Z_Construct_UPackage__Script_FPSController(), TEXT("EAttachmentSlotType"));
		}
		return Singleton;
	}
	template<> FPSCONTROLLER_API UEnum* StaticEnum<EAttachmentSlotType>()
	{
		return EAttachmentSlotType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttachmentSlotType(EAttachmentSlotType_StaticEnum, TEXT("/Script/FPSController"), TEXT("EAttachmentSlotType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FPSController_EAttachmentSlotType_Hash() { return 2224872751U; }
	UEnum* Z_Construct_UEnum_FPSController_EAttachmentSlotType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttachmentSlotType"), 0, Get_Z_Construct_UEnum_FPSController_EAttachmentSlotType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttachmentSlotType::ST_Generic", (int64)EAttachmentSlotType::ST_Generic },
				{ "EAttachmentSlotType::ST_Sight", (int64)EAttachmentSlotType::ST_Sight },
				{ "EAttachmentSlotType::ST_Barrel", (int64)EAttachmentSlotType::ST_Barrel },
				{ "EAttachmentSlotType::ST_Grip", (int64)EAttachmentSlotType::ST_Grip },
				{ "EAttachmentSlotType::ST_Special", (int64)EAttachmentSlotType::ST_Special },
				{ "EAttachmentSlotType::ST_CantedSight", (int64)EAttachmentSlotType::ST_CantedSight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EAttachmentSlotType.h" },
				{ "ST_Barrel.Name", "EAttachmentSlotType::ST_Barrel" },
				{ "ST_CantedSight.Name", "EAttachmentSlotType::ST_CantedSight" },
				{ "ST_Generic.Name", "EAttachmentSlotType::ST_Generic" },
				{ "ST_Grip.Name", "EAttachmentSlotType::ST_Grip" },
				{ "ST_Sight.Name", "EAttachmentSlotType::ST_Sight" },
				{ "ST_Special.Name", "EAttachmentSlotType::ST_Special" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FPSController,
				nullptr,
				"EAttachmentSlotType",
				"EAttachmentSlotType",
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
