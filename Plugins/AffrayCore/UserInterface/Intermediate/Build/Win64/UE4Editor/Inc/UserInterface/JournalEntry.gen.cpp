// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/JournalEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJournalEntry() {}
// Cross Module References
	USERINTERFACE_API UClass* Z_Construct_UClass_UJournalEntry_NoRegister();
	USERINTERFACE_API UClass* Z_Construct_UClass_UJournalEntry();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FJournalEntryGeneral();
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FTracking();
// End Cross Module References
	void UJournalEntry::StaticRegisterNativesUJournalEntry()
	{
	}
	UClass* Z_Construct_UClass_UJournalEntry_NoRegister()
	{
		return UJournalEntry::StaticClass();
	}
	struct Z_Construct_UClass_UJournalEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_General_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_General;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tracking_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tracking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJournalEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalEntry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "JournalEntry.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/JournalEntry.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalEntry_Statics::NewProp_General_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalEntry" },
		{ "ModuleRelativePath", "Public/JournalEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJournalEntry_Statics::NewProp_General = { "General", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalEntry, General), Z_Construct_UScriptStruct_FJournalEntryGeneral, METADATA_PARAMS(Z_Construct_UClass_UJournalEntry_Statics::NewProp_General_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalEntry_Statics::NewProp_General_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalEntry_Statics::NewProp_Tracking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalEntry" },
		{ "ModuleRelativePath", "Public/JournalEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJournalEntry_Statics::NewProp_Tracking = { "Tracking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalEntry, Tracking), Z_Construct_UScriptStruct_FTracking, METADATA_PARAMS(Z_Construct_UClass_UJournalEntry_Statics::NewProp_Tracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalEntry_Statics::NewProp_Tracking_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJournalEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalEntry_Statics::NewProp_General,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalEntry_Statics::NewProp_Tracking,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJournalEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJournalEntry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJournalEntry_Statics::ClassParams = {
		&UJournalEntry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UJournalEntry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UJournalEntry_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJournalEntry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJournalEntry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJournalEntry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJournalEntry, 3568025781);
	template<> USERINTERFACE_API UClass* StaticClass<UJournalEntry>()
	{
		return UJournalEntry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJournalEntry(Z_Construct_UClass_UJournalEntry, &UJournalEntry::StaticClass, TEXT("/Script/UserInterface"), TEXT("UJournalEntry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJournalEntry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
