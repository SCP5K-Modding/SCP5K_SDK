// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameUtilities/Public/ETextSize.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETextSize() {}
// Cross Module References
	GAMEUTILITIES_API UEnum* Z_Construct_UEnum_GameUtilities_ETextSize();
	UPackage* Z_Construct_UPackage__Script_GameUtilities();
// End Cross Module References
	static UEnum* ETextSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameUtilities_ETextSize, Z_Construct_UPackage__Script_GameUtilities(), TEXT("ETextSize"));
		}
		return Singleton;
	}
	template<> GAMEUTILITIES_API UEnum* StaticEnum<ETextSize>()
	{
		return ETextSize_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextSize(ETextSize_StaticEnum, TEXT("/Script/GameUtilities"), TEXT("ETextSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameUtilities_ETextSize_Hash() { return 2234738196U; }
	UEnum* Z_Construct_UEnum_GameUtilities_ETextSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextSize"), 0, Get_Z_Construct_UEnum_GameUtilities_ETextSize_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETextSize::Small", (int64)ETextSize::Small },
				{ "ETextSize::Normal", (int64)ETextSize::Normal },
				{ "ETextSize::Large", (int64)ETextSize::Large },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Large.Name", "ETextSize::Large" },
				{ "ModuleRelativePath", "Public/ETextSize.h" },
				{ "Normal.Name", "ETextSize::Normal" },
				{ "Small.Name", "ETextSize::Small" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameUtilities,
				nullptr,
				"ETextSize",
				"ETextSize",
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
