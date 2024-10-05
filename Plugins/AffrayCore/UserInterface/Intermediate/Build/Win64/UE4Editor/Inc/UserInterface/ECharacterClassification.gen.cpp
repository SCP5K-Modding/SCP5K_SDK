// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/ECharacterClassification.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECharacterClassification() {}
// Cross Module References
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_ECharacterClassification();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
// End Cross Module References
	static UEnum* ECharacterClassification_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UserInterface_ECharacterClassification, Z_Construct_UPackage__Script_UserInterface(), TEXT("ECharacterClassification"));
		}
		return Singleton;
	}
	template<> USERINTERFACE_API UEnum* StaticEnum<ECharacterClassification>()
	{
		return ECharacterClassification_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECharacterClassification(ECharacterClassification_StaticEnum, TEXT("/Script/UserInterface"), TEXT("ECharacterClassification"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UserInterface_ECharacterClassification_Hash() { return 2053125003U; }
	UEnum* Z_Construct_UEnum_UserInterface_ECharacterClassification()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECharacterClassification"), 0, Get_Z_Construct_UEnum_UserInterface_ECharacterClassification_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECharacterClassification::None", (int64)ECharacterClassification::None },
				{ "ECharacterClassification::ClassA", (int64)ECharacterClassification::ClassA },
				{ "ECharacterClassification::ClassB", (int64)ECharacterClassification::ClassB },
				{ "ECharacterClassification::ClassC", (int64)ECharacterClassification::ClassC },
				{ "ECharacterClassification::ClassD", (int64)ECharacterClassification::ClassD },
				{ "ECharacterClassification::ClassE", (int64)ECharacterClassification::ClassE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClassA.Name", "ECharacterClassification::ClassA" },
				{ "ClassB.Name", "ECharacterClassification::ClassB" },
				{ "ClassC.Name", "ECharacterClassification::ClassC" },
				{ "ClassD.Name", "ECharacterClassification::ClassD" },
				{ "ClassE.Name", "ECharacterClassification::ClassE" },
				{ "ModuleRelativePath", "Public/ECharacterClassification.h" },
				{ "None.Name", "ECharacterClassification::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UserInterface,
				nullptr,
				"ECharacterClassification",
				"ECharacterClassification",
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
