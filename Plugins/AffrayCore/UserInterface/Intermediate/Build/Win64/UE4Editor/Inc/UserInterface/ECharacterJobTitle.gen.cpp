// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/ECharacterJobTitle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECharacterJobTitle() {}
// Cross Module References
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_ECharacterJobTitle();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
// End Cross Module References
	static UEnum* ECharacterJobTitle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UserInterface_ECharacterJobTitle, Z_Construct_UPackage__Script_UserInterface(), TEXT("ECharacterJobTitle"));
		}
		return Singleton;
	}
	template<> USERINTERFACE_API UEnum* StaticEnum<ECharacterJobTitle>()
	{
		return ECharacterJobTitle_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECharacterJobTitle(ECharacterJobTitle_StaticEnum, TEXT("/Script/UserInterface"), TEXT("ECharacterJobTitle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UserInterface_ECharacterJobTitle_Hash() { return 2199485667U; }
	UEnum* Z_Construct_UEnum_UserInterface_ECharacterJobTitle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECharacterJobTitle"), 0, Get_Z_Construct_UEnum_UserInterface_ECharacterJobTitle_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECharacterJobTitle::None", (int64)ECharacterJobTitle::None },
				{ "ECharacterJobTitle::EsotericPolymath", (int64)ECharacterJobTitle::EsotericPolymath },
				{ "ECharacterJobTitle::HeadResearcher", (int64)ECharacterJobTitle::HeadResearcher },
				{ "ECharacterJobTitle::AreaDirector", (int64)ECharacterJobTitle::AreaDirector },
				{ "ECharacterJobTitle::AnomalousCommunicationsExpert", (int64)ECharacterJobTitle::AnomalousCommunicationsExpert },
				{ "ECharacterJobTitle::HumanResourcesDelegate", (int64)ECharacterJobTitle::HumanResourcesDelegate },
				{ "ECharacterJobTitle::FacilitiesSuperintendant", (int64)ECharacterJobTitle::FacilitiesSuperintendant },
				{ "ECharacterJobTitle::ProcurementAndLogisticsDirector", (int64)ECharacterJobTitle::ProcurementAndLogisticsDirector },
				{ "ECharacterJobTitle::ContainmentSpecialist", (int64)ECharacterJobTitle::ContainmentSpecialist },
				{ "ECharacterJobTitle::MedicalDirector", (int64)ECharacterJobTitle::MedicalDirector },
				{ "ECharacterJobTitle::ChiefOfSecurityAndInquiry", (int64)ECharacterJobTitle::ChiefOfSecurityAndInquiry },
				{ "ECharacterJobTitle::EthicsCommitteeLiason", (int64)ECharacterJobTitle::EthicsCommitteeLiason },
				{ "ECharacterJobTitle::Psychologist", (int64)ECharacterJobTitle::Psychologist },
				{ "ECharacterJobTitle::Commander", (int64)ECharacterJobTitle::Commander },
				{ "ECharacterJobTitle::HeadParazoologist", (int64)ECharacterJobTitle::HeadParazoologist },
				{ "ECharacterJobTitle::HeadParapathologist", (int64)ECharacterJobTitle::HeadParapathologist },
				{ "ECharacterJobTitle::HeadOfEsotericReduction", (int64)ECharacterJobTitle::HeadOfEsotericReduction },
				{ "ECharacterJobTitle::LeadElectrotechnicalEngineer", (int64)ECharacterJobTitle::LeadElectrotechnicalEngineer },
				{ "ECharacterJobTitle::EsotericReductionSpecialist", (int64)ECharacterJobTitle::EsotericReductionSpecialist },
				{ "ECharacterJobTitle::MaterialsHandler", (int64)ECharacterJobTitle::MaterialsHandler },
				{ "ECharacterJobTitle::Radiologist", (int64)ECharacterJobTitle::Radiologist },
				{ "ECharacterJobTitle::InformationTechnologyChief", (int64)ECharacterJobTitle::InformationTechnologyChief },
				{ "ECharacterJobTitle::TraumaSurgeon", (int64)ECharacterJobTitle::TraumaSurgeon },
				{ "ECharacterJobTitle::Physiotherapist", (int64)ECharacterJobTitle::Physiotherapist },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnomalousCommunicationsExpert.Name", "ECharacterJobTitle::AnomalousCommunicationsExpert" },
				{ "AreaDirector.Name", "ECharacterJobTitle::AreaDirector" },
				{ "BlueprintType", "true" },
				{ "ChiefOfSecurityAndInquiry.Name", "ECharacterJobTitle::ChiefOfSecurityAndInquiry" },
				{ "Commander.Name", "ECharacterJobTitle::Commander" },
				{ "ContainmentSpecialist.Name", "ECharacterJobTitle::ContainmentSpecialist" },
				{ "EsotericPolymath.Name", "ECharacterJobTitle::EsotericPolymath" },
				{ "EsotericReductionSpecialist.Name", "ECharacterJobTitle::EsotericReductionSpecialist" },
				{ "EthicsCommitteeLiason.Name", "ECharacterJobTitle::EthicsCommitteeLiason" },
				{ "FacilitiesSuperintendant.Name", "ECharacterJobTitle::FacilitiesSuperintendant" },
				{ "HeadOfEsotericReduction.Name", "ECharacterJobTitle::HeadOfEsotericReduction" },
				{ "HeadParapathologist.Name", "ECharacterJobTitle::HeadParapathologist" },
				{ "HeadParazoologist.Name", "ECharacterJobTitle::HeadParazoologist" },
				{ "HeadResearcher.Name", "ECharacterJobTitle::HeadResearcher" },
				{ "HumanResourcesDelegate.Name", "ECharacterJobTitle::HumanResourcesDelegate" },
				{ "InformationTechnologyChief.Name", "ECharacterJobTitle::InformationTechnologyChief" },
				{ "LeadElectrotechnicalEngineer.Name", "ECharacterJobTitle::LeadElectrotechnicalEngineer" },
				{ "MaterialsHandler.Name", "ECharacterJobTitle::MaterialsHandler" },
				{ "MedicalDirector.Name", "ECharacterJobTitle::MedicalDirector" },
				{ "ModuleRelativePath", "Public/ECharacterJobTitle.h" },
				{ "None.Name", "ECharacterJobTitle::None" },
				{ "Physiotherapist.Name", "ECharacterJobTitle::Physiotherapist" },
				{ "ProcurementAndLogisticsDirector.Name", "ECharacterJobTitle::ProcurementAndLogisticsDirector" },
				{ "Psychologist.Name", "ECharacterJobTitle::Psychologist" },
				{ "Radiologist.Name", "ECharacterJobTitle::Radiologist" },
				{ "TraumaSurgeon.Name", "ECharacterJobTitle::TraumaSurgeon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UserInterface,
				nullptr,
				"ECharacterJobTitle",
				"ECharacterJobTitle",
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
