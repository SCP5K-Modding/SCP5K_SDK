// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/EContainmentClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEContainmentClass() {}
// Cross Module References
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_EContainmentClass();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
// End Cross Module References
	static UEnum* EContainmentClass_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UserInterface_EContainmentClass, Z_Construct_UPackage__Script_UserInterface(), TEXT("EContainmentClass"));
		}
		return Singleton;
	}
	template<> USERINTERFACE_API UEnum* StaticEnum<EContainmentClass>()
	{
		return EContainmentClass_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EContainmentClass(EContainmentClass_StaticEnum, TEXT("/Script/UserInterface"), TEXT("EContainmentClass"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UserInterface_EContainmentClass_Hash() { return 3292965482U; }
	UEnum* Z_Construct_UEnum_UserInterface_EContainmentClass()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EContainmentClass"), 0, Get_Z_Construct_UEnum_UserInterface_EContainmentClass_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EContainmentClass::None", (int64)EContainmentClass::None },
				{ "EContainmentClass::Safe", (int64)EContainmentClass::Safe },
				{ "EContainmentClass::Euclid", (int64)EContainmentClass::Euclid },
				{ "EContainmentClass::Keter", (int64)EContainmentClass::Keter },
				{ "EContainmentClass::Neutralized", (int64)EContainmentClass::Neutralized },
				{ "EContainmentClass::Pending", (int64)EContainmentClass::Pending },
				{ "EContainmentClass::Explained", (int64)EContainmentClass::Explained },
				{ "EContainmentClass::Esoteric", (int64)EContainmentClass::Esoteric },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Esoteric.Name", "EContainmentClass::Esoteric" },
				{ "Euclid.Name", "EContainmentClass::Euclid" },
				{ "Explained.Name", "EContainmentClass::Explained" },
				{ "Keter.Name", "EContainmentClass::Keter" },
				{ "ModuleRelativePath", "Public/EContainmentClass.h" },
				{ "Neutralized.Name", "EContainmentClass::Neutralized" },
				{ "None.Name", "EContainmentClass::None" },
				{ "Pending.Name", "EContainmentClass::Pending" },
				{ "Safe.Name", "EContainmentClass::Safe" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UserInterface,
				nullptr,
				"EContainmentClass",
				"EContainmentClass",
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
