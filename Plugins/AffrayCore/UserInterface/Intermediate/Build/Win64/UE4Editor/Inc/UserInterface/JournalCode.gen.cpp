// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/JournalCode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJournalCode() {}
// Cross Module References
	USERINTERFACE_API UClass* Z_Construct_UClass_UJournalCode_NoRegister();
	USERINTERFACE_API UClass* Z_Construct_UClass_UJournalCode();
	USERINTERFACE_API UClass* Z_Construct_UClass_UJournalEntry();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
// End Cross Module References
	void UJournalCode::StaticRegisterNativesUJournalCode()
	{
	}
	UClass* Z_Construct_UClass_UJournalCode_NoRegister()
	{
		return UJournalCode::StaticClass();
	}
	struct Z_Construct_UClass_UJournalCode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Code;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJournalCode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UJournalEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalCode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "JournalCode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/JournalCode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalCode_Statics::NewProp_Code_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalCode" },
		{ "ModuleRelativePath", "Public/JournalCode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UJournalCode_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalCode, Code), METADATA_PARAMS(Z_Construct_UClass_UJournalCode_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalCode_Statics::NewProp_Code_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJournalCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalCode_Statics::NewProp_Code,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJournalCode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJournalCode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJournalCode_Statics::ClassParams = {
		&UJournalCode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UJournalCode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UJournalCode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJournalCode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalCode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJournalCode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJournalCode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJournalCode, 2087898336);
	template<> USERINTERFACE_API UClass* StaticClass<UJournalCode>()
	{
		return UJournalCode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJournalCode(Z_Construct_UClass_UJournalCode, &UJournalCode::StaticClass, TEXT("/Script/UserInterface"), TEXT("UJournalCode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJournalCode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
