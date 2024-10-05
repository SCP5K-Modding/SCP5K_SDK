// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularAssets/Public/EAssetType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAssetType() {}
// Cross Module References
	MODULARASSETS_API UEnum* Z_Construct_UEnum_ModularAssets_EAssetType();
	UPackage* Z_Construct_UPackage__Script_ModularAssets();
// End Cross Module References
	static UEnum* EAssetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ModularAssets_EAssetType, Z_Construct_UPackage__Script_ModularAssets(), TEXT("EAssetType"));
		}
		return Singleton;
	}
	template<> MODULARASSETS_API UEnum* StaticEnum<EAssetType>()
	{
		return EAssetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAssetType(EAssetType_StaticEnum, TEXT("/Script/ModularAssets"), TEXT("EAssetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ModularAssets_EAssetType_Hash() { return 2126239380U; }
	UEnum* Z_Construct_UEnum_ModularAssets_EAssetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ModularAssets();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAssetType"), 0, Get_Z_Construct_UEnum_ModularAssets_EAssetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Door", (int64)Door },
				{ "OuterCurve", (int64)OuterCurve },
				{ "InnerCurve", (int64)InnerCurve },
				{ "Grate", (int64)Grate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Door.Name", "Door" },
				{ "Grate.Name", "Grate" },
				{ "InnerCurve.Name", "InnerCurve" },
				{ "ModuleRelativePath", "Public/EAssetType.h" },
				{ "OuterCurve.Name", "OuterCurve" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ModularAssets,
				nullptr,
				"EAssetType",
				"EAssetType",
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
