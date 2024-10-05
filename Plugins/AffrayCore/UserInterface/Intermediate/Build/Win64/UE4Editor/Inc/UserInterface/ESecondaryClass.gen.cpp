// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/ESecondaryClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESecondaryClass() {}
// Cross Module References
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_ESecondaryClass();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
// End Cross Module References
	static UEnum* ESecondaryClass_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UserInterface_ESecondaryClass, Z_Construct_UPackage__Script_UserInterface(), TEXT("ESecondaryClass"));
		}
		return Singleton;
	}
	template<> USERINTERFACE_API UEnum* StaticEnum<ESecondaryClass>()
	{
		return ESecondaryClass_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESecondaryClass(ESecondaryClass_StaticEnum, TEXT("/Script/UserInterface"), TEXT("ESecondaryClass"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UserInterface_ESecondaryClass_Hash() { return 2818116182U; }
	UEnum* Z_Construct_UEnum_UserInterface_ESecondaryClass()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESecondaryClass"), 0, Get_Z_Construct_UEnum_UserInterface_ESecondaryClass_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESecondaryClass::None", (int64)ESecondaryClass::None },
				{ "ESecondaryClass::Apollyon", (int64)ESecondaryClass::Apollyon },
				{ "ESecondaryClass::Archon", (int64)ESecondaryClass::Archon },
				{ "ESecondaryClass::Cernunnos", (int64)ESecondaryClass::Cernunnos },
				{ "ESecondaryClass::Decommissioned", (int64)ESecondaryClass::Decommissioned },
				{ "ESecondaryClass::Hiemal", (int64)ESecondaryClass::Hiemal },
				{ "ESecondaryClass::Tiamat", (int64)ESecondaryClass::Tiamat },
				{ "ESecondaryClass::Ticonderoga", (int64)ESecondaryClass::Ticonderoga },
				{ "ESecondaryClass::Thaumiel", (int64)ESecondaryClass::Thaumiel },
				{ "ESecondaryClass::Uncontained", (int64)ESecondaryClass::Uncontained },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Apollyon.Name", "ESecondaryClass::Apollyon" },
				{ "Archon.Name", "ESecondaryClass::Archon" },
				{ "BlueprintType", "true" },
				{ "Cernunnos.Name", "ESecondaryClass::Cernunnos" },
				{ "Decommissioned.Name", "ESecondaryClass::Decommissioned" },
				{ "Hiemal.Name", "ESecondaryClass::Hiemal" },
				{ "ModuleRelativePath", "Public/ESecondaryClass.h" },
				{ "None.Name", "ESecondaryClass::None" },
				{ "Thaumiel.Name", "ESecondaryClass::Thaumiel" },
				{ "Tiamat.Name", "ESecondaryClass::Tiamat" },
				{ "Ticonderoga.Name", "ESecondaryClass::Ticonderoga" },
				{ "Uncontained.Name", "ESecondaryClass::Uncontained" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UserInterface,
				nullptr,
				"ESecondaryClass",
				"ESecondaryClass",
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
