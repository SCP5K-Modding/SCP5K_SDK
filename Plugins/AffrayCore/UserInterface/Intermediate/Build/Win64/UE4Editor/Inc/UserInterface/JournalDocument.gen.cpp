// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/JournalDocument.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJournalDocument() {}
// Cross Module References
	USERINTERFACE_API UClass* Z_Construct_UClass_UJournalDocument_NoRegister();
	USERINTERFACE_API UClass* Z_Construct_UClass_UJournalDocument();
	USERINTERFACE_API UClass* Z_Construct_UClass_UJournalEntry();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_EContainmentClass();
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_EClearanceLevel();
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_EDisruptionClass();
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_ERiskClass();
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_ESecondaryClass();
// End Cross Module References
	void UJournalDocument::StaticRegisterNativesUJournalDocument()
	{
	}
	UClass* Z_Construct_UClass_UJournalDocument_NoRegister()
	{
		return UJournalDocument::StaticClass();
	}
	struct Z_Construct_UClass_UJournalDocument_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ContainmentClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContainmentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ContainmentClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClearanceLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearanceLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ClearanceLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DisruptionClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisruptionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DisruptionClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RiskClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiskClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RiskClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SecondaryClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SecondaryClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AdditionalData_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AdditionalData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJournalDocument_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UJournalEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalDocument_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "JournalDocument.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/JournalDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UJournalDocument_Statics::NewProp_ContainmentClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalDocument_Statics::NewProp_ContainmentClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalDocument" },
		{ "ModuleRelativePath", "Public/JournalDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UJournalDocument_Statics::NewProp_ContainmentClass = { "ContainmentClass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalDocument, ContainmentClass), Z_Construct_UEnum_UserInterface_EContainmentClass, METADATA_PARAMS(Z_Construct_UClass_UJournalDocument_Statics::NewProp_ContainmentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalDocument_Statics::NewProp_ContainmentClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UJournalDocument_Statics::NewProp_ClearanceLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalDocument_Statics::NewProp_ClearanceLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalDocument" },
		{ "ModuleRelativePath", "Public/JournalDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UJournalDocument_Statics::NewProp_ClearanceLevel = { "ClearanceLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalDocument, ClearanceLevel), Z_Construct_UEnum_UserInterface_EClearanceLevel, METADATA_PARAMS(Z_Construct_UClass_UJournalDocument_Statics::NewProp_ClearanceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalDocument_Statics::NewProp_ClearanceLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UJournalDocument_Statics::NewProp_DisruptionClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalDocument_Statics::NewProp_DisruptionClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalDocument" },
		{ "ModuleRelativePath", "Public/JournalDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UJournalDocument_Statics::NewProp_DisruptionClass = { "DisruptionClass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalDocument, DisruptionClass), Z_Construct_UEnum_UserInterface_EDisruptionClass, METADATA_PARAMS(Z_Construct_UClass_UJournalDocument_Statics::NewProp_DisruptionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalDocument_Statics::NewProp_DisruptionClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UJournalDocument_Statics::NewProp_RiskClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalDocument_Statics::NewProp_RiskClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalDocument" },
		{ "ModuleRelativePath", "Public/JournalDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UJournalDocument_Statics::NewProp_RiskClass = { "RiskClass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalDocument, RiskClass), Z_Construct_UEnum_UserInterface_ERiskClass, METADATA_PARAMS(Z_Construct_UClass_UJournalDocument_Statics::NewProp_RiskClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalDocument_Statics::NewProp_RiskClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UJournalDocument_Statics::NewProp_SecondaryClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalDocument_Statics::NewProp_SecondaryClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalDocument" },
		{ "ModuleRelativePath", "Public/JournalDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UJournalDocument_Statics::NewProp_SecondaryClass = { "SecondaryClass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalDocument, SecondaryClass), Z_Construct_UEnum_UserInterface_ESecondaryClass, METADATA_PARAMS(Z_Construct_UClass_UJournalDocument_Statics::NewProp_SecondaryClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalDocument_Statics::NewProp_SecondaryClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalDocument_Statics::NewProp_Text_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalDocument" },
		{ "ModuleRelativePath", "Public/JournalDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UJournalDocument_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalDocument, Text), METADATA_PARAMS(Z_Construct_UClass_UJournalDocument_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalDocument_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UJournalDocument_Statics::NewProp_AdditionalData_ValueProp = { "AdditionalData", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UJournalDocument_Statics::NewProp_AdditionalData_Key_KeyProp = { "AdditionalData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalDocument_Statics::NewProp_AdditionalData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalDocument" },
		{ "ModuleRelativePath", "Public/JournalDocument.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UJournalDocument_Statics::NewProp_AdditionalData = { "AdditionalData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalDocument, AdditionalData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UJournalDocument_Statics::NewProp_AdditionalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalDocument_Statics::NewProp_AdditionalData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJournalDocument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalDocument_Statics::NewProp_ContainmentClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalDocument_Statics::NewProp_ContainmentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalDocument_Statics::NewProp_ClearanceLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalDocument_Statics::NewProp_ClearanceLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalDocument_Statics::NewProp_DisruptionClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalDocument_Statics::NewProp_DisruptionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalDocument_Statics::NewProp_RiskClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalDocument_Statics::NewProp_RiskClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalDocument_Statics::NewProp_SecondaryClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalDocument_Statics::NewProp_SecondaryClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalDocument_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalDocument_Statics::NewProp_AdditionalData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalDocument_Statics::NewProp_AdditionalData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalDocument_Statics::NewProp_AdditionalData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJournalDocument_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJournalDocument>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJournalDocument_Statics::ClassParams = {
		&UJournalDocument::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UJournalDocument_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UJournalDocument_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJournalDocument_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalDocument_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJournalDocument()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJournalDocument_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJournalDocument, 4247718770);
	template<> USERINTERFACE_API UClass* StaticClass<UJournalDocument>()
	{
		return UJournalDocument::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJournalDocument(Z_Construct_UClass_UJournalDocument, &UJournalDocument::StaticClass, TEXT("/Script/UserInterface"), TEXT("UJournalDocument"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJournalDocument);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
