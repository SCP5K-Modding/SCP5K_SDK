// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/EMoraleLevelType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMoraleLevelType() {}
// Cross Module References
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_EMoraleLevelType();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	static UEnum* EMoraleLevelType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AISentience_EMoraleLevelType, Z_Construct_UPackage__Script_AISentience(), TEXT("EMoraleLevelType"));
		}
		return Singleton;
	}
	template<> AISENTIENCE_API UEnum* StaticEnum<EMoraleLevelType>()
	{
		return EMoraleLevelType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMoraleLevelType(EMoraleLevelType_StaticEnum, TEXT("/Script/AISentience"), TEXT("EMoraleLevelType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AISentience_EMoraleLevelType_Hash() { return 3119797423U; }
	UEnum* Z_Construct_UEnum_AISentience_EMoraleLevelType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMoraleLevelType"), 0, Get_Z_Construct_UEnum_AISentience_EMoraleLevelType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMoraleLevelType::MLT_None", (int64)EMoraleLevelType::MLT_None },
				{ "EMoraleLevelType::MLT_Low", (int64)EMoraleLevelType::MLT_Low },
				{ "EMoraleLevelType::MLT_High", (int64)EMoraleLevelType::MLT_High },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MLT_High.Name", "EMoraleLevelType::MLT_High" },
				{ "MLT_Low.Name", "EMoraleLevelType::MLT_Low" },
				{ "MLT_None.Name", "EMoraleLevelType::MLT_None" },
				{ "ModuleRelativePath", "Public/EMoraleLevelType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AISentience,
				nullptr,
				"EMoraleLevelType",
				"EMoraleLevelType",
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
