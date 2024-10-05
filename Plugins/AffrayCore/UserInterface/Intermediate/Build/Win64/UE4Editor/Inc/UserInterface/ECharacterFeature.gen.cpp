// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/ECharacterFeature.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECharacterFeature() {}
// Cross Module References
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_ECharacterFeature();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
// End Cross Module References
	static UEnum* ECharacterFeature_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UserInterface_ECharacterFeature, Z_Construct_UPackage__Script_UserInterface(), TEXT("ECharacterFeature"));
		}
		return Singleton;
	}
	template<> USERINTERFACE_API UEnum* StaticEnum<ECharacterFeature>()
	{
		return ECharacterFeature_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECharacterFeature(ECharacterFeature_StaticEnum, TEXT("/Script/UserInterface"), TEXT("ECharacterFeature"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UserInterface_ECharacterFeature_Hash() { return 1004126101U; }
	UEnum* Z_Construct_UEnum_UserInterface_ECharacterFeature()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECharacterFeature"), 0, Get_Z_Construct_UEnum_UserInterface_ECharacterFeature_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECharacterFeature::None", (int64)ECharacterFeature::None },
				{ "ECharacterFeature::HairColor", (int64)ECharacterFeature::HairColor },
				{ "ECharacterFeature::EyeColor", (int64)ECharacterFeature::EyeColor },
				{ "ECharacterFeature::BodyBuild", (int64)ECharacterFeature::BodyBuild },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BodyBuild.Name", "ECharacterFeature::BodyBuild" },
				{ "EyeColor.Name", "ECharacterFeature::EyeColor" },
				{ "HairColor.Name", "ECharacterFeature::HairColor" },
				{ "ModuleRelativePath", "Public/ECharacterFeature.h" },
				{ "None.Name", "ECharacterFeature::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UserInterface,
				nullptr,
				"ECharacterFeature",
				"ECharacterFeature",
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
