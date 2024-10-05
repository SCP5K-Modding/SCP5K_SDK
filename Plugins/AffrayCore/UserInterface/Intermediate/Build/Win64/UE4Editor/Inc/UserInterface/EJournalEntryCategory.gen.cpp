// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/EJournalEntryCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEJournalEntryCategory() {}
// Cross Module References
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_EJournalEntryCategory();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
// End Cross Module References
	static UEnum* EJournalEntryCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UserInterface_EJournalEntryCategory, Z_Construct_UPackage__Script_UserInterface(), TEXT("EJournalEntryCategory"));
		}
		return Singleton;
	}
	template<> USERINTERFACE_API UEnum* StaticEnum<EJournalEntryCategory>()
	{
		return EJournalEntryCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJournalEntryCategory(EJournalEntryCategory_StaticEnum, TEXT("/Script/UserInterface"), TEXT("EJournalEntryCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UserInterface_EJournalEntryCategory_Hash() { return 422952479U; }
	UEnum* Z_Construct_UEnum_UserInterface_EJournalEntryCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJournalEntryCategory"), 0, Get_Z_Construct_UEnum_UserInterface_EJournalEntryCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EJournalEntryCategory::Predefined", (int64)EJournalEntryCategory::Predefined },
				{ "EJournalEntryCategory::Custom", (int64)EJournalEntryCategory::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Custom.Name", "EJournalEntryCategory::Custom" },
				{ "ModuleRelativePath", "Public/EJournalEntryCategory.h" },
				{ "Predefined.Name", "EJournalEntryCategory::Predefined" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UserInterface,
				nullptr,
				"EJournalEntryCategory",
				"EJournalEntryCategory",
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
