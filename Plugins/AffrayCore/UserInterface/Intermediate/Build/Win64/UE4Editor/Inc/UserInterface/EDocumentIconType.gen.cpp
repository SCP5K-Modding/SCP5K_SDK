// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/EDocumentIconType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDocumentIconType() {}
// Cross Module References
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_EDocumentIconType();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
// End Cross Module References
	static UEnum* EDocumentIconType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UserInterface_EDocumentIconType, Z_Construct_UPackage__Script_UserInterface(), TEXT("EDocumentIconType"));
		}
		return Singleton;
	}
	template<> USERINTERFACE_API UEnum* StaticEnum<EDocumentIconType>()
	{
		return EDocumentIconType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDocumentIconType(EDocumentIconType_StaticEnum, TEXT("/Script/UserInterface"), TEXT("EDocumentIconType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UserInterface_EDocumentIconType_Hash() { return 4039488929U; }
	UEnum* Z_Construct_UEnum_UserInterface_EDocumentIconType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDocumentIconType"), 0, Get_Z_Construct_UEnum_UserInterface_EDocumentIconType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDocumentIconType::DIT_Containment", (int64)EDocumentIconType::DIT_Containment },
				{ "EDocumentIconType::DIT_Disruption", (int64)EDocumentIconType::DIT_Disruption },
				{ "EDocumentIconType::DIT_Risk", (int64)EDocumentIconType::DIT_Risk },
				{ "EDocumentIconType::DIT_Clearance", (int64)EDocumentIconType::DIT_Clearance },
				{ "EDocumentIconType::DIT_SecondaryClass", (int64)EDocumentIconType::DIT_SecondaryClass },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DIT_Clearance.Name", "EDocumentIconType::DIT_Clearance" },
				{ "DIT_Containment.Name", "EDocumentIconType::DIT_Containment" },
				{ "DIT_Disruption.Name", "EDocumentIconType::DIT_Disruption" },
				{ "DIT_Risk.Name", "EDocumentIconType::DIT_Risk" },
				{ "DIT_SecondaryClass.Name", "EDocumentIconType::DIT_SecondaryClass" },
				{ "ModuleRelativePath", "Public/EDocumentIconType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UserInterface,
				nullptr,
				"EDocumentIconType",
				"EDocumentIconType",
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
