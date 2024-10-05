// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/ESAISquad_Types.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESAISquad_Types() {}
// Cross Module References
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_ESAISquad_Types();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	static UEnum* ESAISquad_Types_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AISentience_ESAISquad_Types, Z_Construct_UPackage__Script_AISentience(), TEXT("ESAISquad_Types"));
		}
		return Singleton;
	}
	template<> AISENTIENCE_API UEnum* StaticEnum<ESAISquad_Types::Type>()
	{
		return ESAISquad_Types_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESAISquad_Types(ESAISquad_Types_StaticEnum, TEXT("/Script/AISentience"), TEXT("ESAISquad_Types"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AISentience_ESAISquad_Types_Hash() { return 3103453474U; }
	UEnum* Z_Construct_UEnum_AISentience_ESAISquad_Types()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESAISquad_Types"), 0, Get_Z_Construct_UEnum_AISentience_ESAISquad_Types_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESAISquad_Types::SQ_Default", (int64)ESAISquad_Types::SQ_Default },
				{ "ESAISquad_Types::SQ_Observant", (int64)ESAISquad_Types::SQ_Observant },
				{ "ESAISquad_Types::SQ_Distant", (int64)ESAISquad_Types::SQ_Distant },
				{ "ESAISquad_Types::CH_Max", (int64)ESAISquad_Types::CH_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CH_Max.Hidden", "" },
				{ "CH_Max.Name", "ESAISquad_Types::CH_Max" },
				{ "ModuleRelativePath", "Public/ESAISquad_Types.h" },
				{ "SQ_Default.Name", "ESAISquad_Types::SQ_Default" },
				{ "SQ_Distant.Name", "ESAISquad_Types::SQ_Distant" },
				{ "SQ_Observant.Name", "ESAISquad_Types::SQ_Observant" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AISentience,
				nullptr,
				"ESAISquad_Types",
				"ESAISquad_Types::Type",
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
