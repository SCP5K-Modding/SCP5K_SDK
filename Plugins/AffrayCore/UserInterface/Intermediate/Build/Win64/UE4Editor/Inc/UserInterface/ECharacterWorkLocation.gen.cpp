// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/ECharacterWorkLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECharacterWorkLocation() {}
// Cross Module References
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_ECharacterWorkLocation();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
// End Cross Module References
	static UEnum* ECharacterWorkLocation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UserInterface_ECharacterWorkLocation, Z_Construct_UPackage__Script_UserInterface(), TEXT("ECharacterWorkLocation"));
		}
		return Singleton;
	}
	template<> USERINTERFACE_API UEnum* StaticEnum<ECharacterWorkLocation>()
	{
		return ECharacterWorkLocation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECharacterWorkLocation(ECharacterWorkLocation_StaticEnum, TEXT("/Script/UserInterface"), TEXT("ECharacterWorkLocation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UserInterface_ECharacterWorkLocation_Hash() { return 370942113U; }
	UEnum* Z_Construct_UEnum_UserInterface_ECharacterWorkLocation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECharacterWorkLocation"), 0, Get_Z_Construct_UEnum_UserInterface_ECharacterWorkLocation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECharacterWorkLocation::None", (int64)ECharacterWorkLocation::None },
				{ "ECharacterWorkLocation::HumanoidAndEsotericResearch", (int64)ECharacterWorkLocation::HumanoidAndEsotericResearch },
				{ "ECharacterWorkLocation::ParabiologyAndRhizospherics", (int64)ECharacterWorkLocation::ParabiologyAndRhizospherics },
				{ "ECharacterWorkLocation::Admin", (int64)ECharacterWorkLocation::Admin },
				{ "ECharacterWorkLocation::HumanResources", (int64)ECharacterWorkLocation::HumanResources },
				{ "ECharacterWorkLocation::MaintenanceAndJanitorial", (int64)ECharacterWorkLocation::MaintenanceAndJanitorial },
				{ "ECharacterWorkLocation::Logistics", (int64)ECharacterWorkLocation::Logistics },
				{ "ECharacterWorkLocation::Containment", (int64)ECharacterWorkLocation::Containment },
				{ "ECharacterWorkLocation::RemedialAndRadiology", (int64)ECharacterWorkLocation::RemedialAndRadiology },
				{ "ECharacterWorkLocation::InternalSecurity", (int64)ECharacterWorkLocation::InternalSecurity },
				{ "ECharacterWorkLocation::EthicsCommittee", (int64)ECharacterWorkLocation::EthicsCommittee },
				{ "ECharacterWorkLocation::RadioQuietZone", (int64)ECharacterWorkLocation::RadioQuietZone },
				{ "ECharacterWorkLocation::Parazoology", (int64)ECharacterWorkLocation::Parazoology },
				{ "ECharacterWorkLocation::ParapathologyAndBiohazardRAndD", (int64)ECharacterWorkLocation::ParapathologyAndBiohazardRAndD },
				{ "ECharacterWorkLocation::EsotericReduction", (int64)ECharacterWorkLocation::EsotericReduction },
				{ "ECharacterWorkLocation::ElectrotechnicalEngineering", (int64)ECharacterWorkLocation::ElectrotechnicalEngineering },
				{ "ECharacterWorkLocation::InformationTechnology", (int64)ECharacterWorkLocation::InformationTechnology },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Admin.Name", "ECharacterWorkLocation::Admin" },
				{ "BlueprintType", "true" },
				{ "Containment.Name", "ECharacterWorkLocation::Containment" },
				{ "ElectrotechnicalEngineering.Name", "ECharacterWorkLocation::ElectrotechnicalEngineering" },
				{ "EsotericReduction.Name", "ECharacterWorkLocation::EsotericReduction" },
				{ "EthicsCommittee.Name", "ECharacterWorkLocation::EthicsCommittee" },
				{ "HumanoidAndEsotericResearch.Name", "ECharacterWorkLocation::HumanoidAndEsotericResearch" },
				{ "HumanResources.Name", "ECharacterWorkLocation::HumanResources" },
				{ "InformationTechnology.Name", "ECharacterWorkLocation::InformationTechnology" },
				{ "InternalSecurity.Name", "ECharacterWorkLocation::InternalSecurity" },
				{ "Logistics.Name", "ECharacterWorkLocation::Logistics" },
				{ "MaintenanceAndJanitorial.Name", "ECharacterWorkLocation::MaintenanceAndJanitorial" },
				{ "ModuleRelativePath", "Public/ECharacterWorkLocation.h" },
				{ "None.Name", "ECharacterWorkLocation::None" },
				{ "ParabiologyAndRhizospherics.Name", "ECharacterWorkLocation::ParabiologyAndRhizospherics" },
				{ "ParapathologyAndBiohazardRAndD.Name", "ECharacterWorkLocation::ParapathologyAndBiohazardRAndD" },
				{ "Parazoology.Name", "ECharacterWorkLocation::Parazoology" },
				{ "RadioQuietZone.Name", "ECharacterWorkLocation::RadioQuietZone" },
				{ "RemedialAndRadiology.Name", "ECharacterWorkLocation::RemedialAndRadiology" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UserInterface,
				nullptr,
				"ECharacterWorkLocation",
				"ECharacterWorkLocation",
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
