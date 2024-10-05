// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/JournalNote.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJournalNote() {}
// Cross Module References
	USERINTERFACE_API UClass* Z_Construct_UClass_UJournalNote_NoRegister();
	USERINTERFACE_API UClass* Z_Construct_UClass_UJournalNote();
	USERINTERFACE_API UClass* Z_Construct_UClass_UJournalEntry();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UJournalNote::StaticRegisterNativesUJournalNote()
	{
	}
	UClass* Z_Construct_UClass_UJournalNote_NoRegister()
	{
		return UJournalNote::StaticClass();
	}
	struct Z_Construct_UClass_UJournalNote_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MapName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Authors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Authors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Authors;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Recipients_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Recipients_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Recipients;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoteText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NoteText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoteImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_NoteImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJournalNote_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UJournalEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalNote_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "JournalNote.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/JournalNote.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalNote_Statics::NewProp_MapName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalNote" },
		{ "ModuleRelativePath", "Public/JournalNote.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UJournalNote_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalNote, MapName), METADATA_PARAMS(Z_Construct_UClass_UJournalNote_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalNote_Statics::NewProp_MapName_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UJournalNote_Statics::NewProp_Authors_Inner = { "Authors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalNote_Statics::NewProp_Authors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalNote" },
		{ "ModuleRelativePath", "Public/JournalNote.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UJournalNote_Statics::NewProp_Authors = { "Authors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalNote, Authors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UJournalNote_Statics::NewProp_Authors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalNote_Statics::NewProp_Authors_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UJournalNote_Statics::NewProp_Recipients_Inner = { "Recipients", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalNote_Statics::NewProp_Recipients_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalNote" },
		{ "ModuleRelativePath", "Public/JournalNote.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UJournalNote_Statics::NewProp_Recipients = { "Recipients", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalNote, Recipients), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UJournalNote_Statics::NewProp_Recipients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalNote_Statics::NewProp_Recipients_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalNote_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalNote" },
		{ "ModuleRelativePath", "Public/JournalNote.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UJournalNote_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalNote, Category), METADATA_PARAMS(Z_Construct_UClass_UJournalNote_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalNote_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalNote_Statics::NewProp_NoteText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalNote" },
		{ "ModuleRelativePath", "Public/JournalNote.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UJournalNote_Statics::NewProp_NoteText = { "NoteText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalNote, NoteText), METADATA_PARAMS(Z_Construct_UClass_UJournalNote_Statics::NewProp_NoteText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalNote_Statics::NewProp_NoteText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalNote_Statics::NewProp_NoteImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalNote" },
		{ "ModuleRelativePath", "Public/JournalNote.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UJournalNote_Statics::NewProp_NoteImage = { "NoteImage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalNote, NoteImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UJournalNote_Statics::NewProp_NoteImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalNote_Statics::NewProp_NoteImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJournalNote_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalNote_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalNote_Statics::NewProp_Authors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalNote_Statics::NewProp_Authors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalNote_Statics::NewProp_Recipients_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalNote_Statics::NewProp_Recipients,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalNote_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalNote_Statics::NewProp_NoteText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalNote_Statics::NewProp_NoteImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJournalNote_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJournalNote>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJournalNote_Statics::ClassParams = {
		&UJournalNote::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UJournalNote_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UJournalNote_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJournalNote_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalNote_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJournalNote()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJournalNote_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJournalNote, 520589845);
	template<> USERINTERFACE_API UClass* StaticClass<UJournalNote>()
	{
		return UJournalNote::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJournalNote(Z_Construct_UClass_UJournalNote, &UJournalNote::StaticClass, TEXT("/Script/UserInterface"), TEXT("UJournalNote"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJournalNote);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
