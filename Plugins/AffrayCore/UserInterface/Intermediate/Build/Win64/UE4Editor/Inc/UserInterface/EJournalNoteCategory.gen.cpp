// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/EJournalNoteCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEJournalNoteCategory() {}
// Cross Module References
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_EJournalNoteCategory();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
// End Cross Module References
	static UEnum* EJournalNoteCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UserInterface_EJournalNoteCategory, Z_Construct_UPackage__Script_UserInterface(), TEXT("EJournalNoteCategory"));
		}
		return Singleton;
	}
	template<> USERINTERFACE_API UEnum* StaticEnum<EJournalNoteCategory>()
	{
		return EJournalNoteCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJournalNoteCategory(EJournalNoteCategory_StaticEnum, TEXT("/Script/UserInterface"), TEXT("EJournalNoteCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UserInterface_EJournalNoteCategory_Hash() { return 535010950U; }
	UEnum* Z_Construct_UEnum_UserInterface_EJournalNoteCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJournalNoteCategory"), 0, Get_Z_Construct_UEnum_UserInterface_EJournalNoteCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EJournalNoteCategory::None", (int64)EJournalNoteCategory::None },
				{ "EJournalNoteCategory::Cure", (int64)EJournalNoteCategory::Cure },
				{ "EJournalNoteCategory::Omnicide", (int64)EJournalNoteCategory::Omnicide },
				{ "EJournalNoteCategory::Atmospheric", (int64)EJournalNoteCategory::Atmospheric },
				{ "EJournalNoteCategory::Character", (int64)EJournalNoteCategory::Character },
				{ "EJournalNoteCategory::Explanatory", (int64)EJournalNoteCategory::Explanatory },
				{ "EJournalNoteCategory::Humour", (int64)EJournalNoteCategory::Humour },
				{ "EJournalNoteCategory::Email", (int64)EJournalNoteCategory::Email },
				{ "EJournalNoteCategory::Plot", (int64)EJournalNoteCategory::Plot },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Atmospheric.Name", "EJournalNoteCategory::Atmospheric" },
				{ "BlueprintType", "true" },
				{ "Character.Name", "EJournalNoteCategory::Character" },
				{ "Cure.Name", "EJournalNoteCategory::Cure" },
				{ "Email.Name", "EJournalNoteCategory::Email" },
				{ "Explanatory.Name", "EJournalNoteCategory::Explanatory" },
				{ "Humour.Name", "EJournalNoteCategory::Humour" },
				{ "ModuleRelativePath", "Public/EJournalNoteCategory.h" },
				{ "None.Name", "EJournalNoteCategory::None" },
				{ "Omnicide.Name", "EJournalNoteCategory::Omnicide" },
				{ "Plot.Name", "EJournalNoteCategory::Plot" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UserInterface,
				nullptr,
				"EJournalNoteCategory",
				"EJournalNoteCategory",
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
