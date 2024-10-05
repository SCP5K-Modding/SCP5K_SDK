// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/EPatrolType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPatrolType() {}
// Cross Module References
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_EPatrolType();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	static UEnum* EPatrolType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AISentience_EPatrolType, Z_Construct_UPackage__Script_AISentience(), TEXT("EPatrolType"));
		}
		return Singleton;
	}
	template<> AISENTIENCE_API UEnum* StaticEnum<EPatrolType::Type>()
	{
		return EPatrolType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPatrolType(EPatrolType_StaticEnum, TEXT("/Script/AISentience"), TEXT("EPatrolType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AISentience_EPatrolType_Hash() { return 3309413264U; }
	UEnum* Z_Construct_UEnum_AISentience_EPatrolType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPatrolType"), 0, Get_Z_Construct_UEnum_AISentience_EPatrolType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPatrolType::PT_Casual", (int64)EPatrolType::PT_Casual },
				{ "EPatrolType::PT_Guard", (int64)EPatrolType::PT_Guard },
				{ "EPatrolType::PT_Jog", (int64)EPatrolType::PT_Jog },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EPatrolType.h" },
				{ "PT_Casual.Name", "EPatrolType::PT_Casual" },
				{ "PT_Guard.Name", "EPatrolType::PT_Guard" },
				{ "PT_Jog.Name", "EPatrolType::PT_Jog" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AISentience,
				nullptr,
				"EPatrolType",
				"EPatrolType::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
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
