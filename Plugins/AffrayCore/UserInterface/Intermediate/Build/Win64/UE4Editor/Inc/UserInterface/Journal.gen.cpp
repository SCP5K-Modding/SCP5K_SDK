// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/Journal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJournal() {}
// Cross Module References
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FJournal();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_EJournalEntryCategory();
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_ESharingType();
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_EJournalPersistenceType();
	USERINTERFACE_API UClass* Z_Construct_UClass_UJournalEntry_NoRegister();
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FJournalEntryGeneral();
// End Cross Module References
class UScriptStruct* FJournal::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern USERINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FJournal_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJournal, Z_Construct_UPackage__Script_UserInterface(), TEXT("Journal"), sizeof(FJournal), Get_Z_Construct_UScriptStruct_FJournal_Hash());
	}
	return Singleton;
}
template<> USERINTERFACE_API UScriptStruct* StaticStruct<FJournal>()
{
	return FJournal::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJournal(FJournal::StaticStruct, TEXT("/Script/UserInterface"), TEXT("Journal"), false, nullptr, nullptr);
static struct FScriptStruct_UserInterface_StaticRegisterNativesFJournal
{
	FScriptStruct_UserInterface_StaticRegisterNativesFJournal()
	{
		UScriptStruct::DeferCppStructOps<FJournal>(FName(TEXT("Journal")));
	}
} ScriptStruct_UserInterface_StaticRegisterNativesFJournal;
	struct Z_Construct_UScriptStruct_FJournal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Sharable_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sharable_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Sharable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Persistence_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Persistence_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Persistence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JournalDataID_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_JournalDataID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_General_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_General;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJournal_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Journal.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJournal_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJournal>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJournal_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJournal_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Journal" },
		{ "ModuleRelativePath", "Public/Journal.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJournal_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJournal, Category), Z_Construct_UEnum_UserInterface_EJournalEntryCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FJournal_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJournal_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJournal_Statics::NewProp_Sharable_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJournal_Statics::NewProp_Sharable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Journal" },
		{ "ModuleRelativePath", "Public/Journal.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJournal_Statics::NewProp_Sharable = { "Sharable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJournal, Sharable), Z_Construct_UEnum_UserInterface_ESharingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FJournal_Statics::NewProp_Sharable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJournal_Statics::NewProp_Sharable_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJournal_Statics::NewProp_Persistence_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJournal_Statics::NewProp_Persistence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Journal" },
		{ "ModuleRelativePath", "Public/Journal.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJournal_Statics::NewProp_Persistence = { "Persistence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJournal, Persistence), Z_Construct_UEnum_UserInterface_EJournalPersistenceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FJournal_Statics::NewProp_Persistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJournal_Statics::NewProp_Persistence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJournal_Statics::NewProp_JournalDataID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Journal" },
		{ "ModuleRelativePath", "Public/Journal.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FJournal_Statics::NewProp_JournalDataID = { "JournalDataID", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJournal, JournalDataID), Z_Construct_UClass_UJournalEntry_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FJournal_Statics::NewProp_JournalDataID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJournal_Statics::NewProp_JournalDataID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJournal_Statics::NewProp_General_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Journal" },
		{ "ModuleRelativePath", "Public/Journal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJournal_Statics::NewProp_General = { "General", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJournal, General), Z_Construct_UScriptStruct_FJournalEntryGeneral, METADATA_PARAMS(Z_Construct_UScriptStruct_FJournal_Statics::NewProp_General_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJournal_Statics::NewProp_General_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJournal_Statics::NewProp_CustomData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Journal" },
		{ "ModuleRelativePath", "Public/Journal.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJournal_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJournal, CustomData), METADATA_PARAMS(Z_Construct_UScriptStruct_FJournal_Statics::NewProp_CustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJournal_Statics::NewProp_CustomData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJournal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJournal_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJournal_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJournal_Statics::NewProp_Sharable_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJournal_Statics::NewProp_Sharable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJournal_Statics::NewProp_Persistence_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJournal_Statics::NewProp_Persistence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJournal_Statics::NewProp_JournalDataID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJournal_Statics::NewProp_General,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJournal_Statics::NewProp_CustomData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJournal_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
		nullptr,
		&NewStructOps,
		"Journal",
		sizeof(FJournal),
		alignof(FJournal),
		Z_Construct_UScriptStruct_FJournal_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJournal_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJournal_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJournal_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJournal()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJournal_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Journal"), sizeof(FJournal), Get_Z_Construct_UScriptStruct_FJournal_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJournal_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJournal_Hash() { return 3603196672U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
