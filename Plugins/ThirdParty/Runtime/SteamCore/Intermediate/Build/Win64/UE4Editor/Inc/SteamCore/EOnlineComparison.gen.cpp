// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/EOnlineComparison.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOnlineComparison() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_EOnlineComparison();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* EOnlineComparison_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_EOnlineComparison, Z_Construct_UPackage__Script_SteamCore(), TEXT("EOnlineComparison"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<EOnlineComparison>()
	{
		return EOnlineComparison_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOnlineComparison(EOnlineComparison_StaticEnum, TEXT("/Script/SteamCore"), TEXT("EOnlineComparison"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_EOnlineComparison_Hash() { return 2200289565U; }
	UEnum* Z_Construct_UEnum_SteamCore_EOnlineComparison()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOnlineComparison"), 0, Get_Z_Construct_UEnum_SteamCore_EOnlineComparison_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOnlineComparison::Equals", (int64)EOnlineComparison::Equals },
				{ "EOnlineComparison::NotEquals", (int64)EOnlineComparison::NotEquals },
				{ "EOnlineComparison::GreaterThan", (int64)EOnlineComparison::GreaterThan },
				{ "EOnlineComparison::GreaterThanEquals", (int64)EOnlineComparison::GreaterThanEquals },
				{ "EOnlineComparison::LessThan", (int64)EOnlineComparison::LessThan },
				{ "EOnlineComparison::LessThanEquals", (int64)EOnlineComparison::LessThanEquals },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Equals.Name", "EOnlineComparison::Equals" },
				{ "GreaterThan.Name", "EOnlineComparison::GreaterThan" },
				{ "GreaterThanEquals.Name", "EOnlineComparison::GreaterThanEquals" },
				{ "LessThan.Name", "EOnlineComparison::LessThan" },
				{ "LessThanEquals.Name", "EOnlineComparison::LessThanEquals" },
				{ "ModuleRelativePath", "Public/EOnlineComparison.h" },
				{ "NotEquals.Name", "EOnlineComparison::NotEquals" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"EOnlineComparison",
				"EOnlineComparison",
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
