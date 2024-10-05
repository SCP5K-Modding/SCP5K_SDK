// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/JournalEntryGeneral.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJournalEntryGeneral() {}
// Cross Module References
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FJournalEntryGeneral();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_EJournalCategory();
// End Cross Module References
class UScriptStruct* FJournalEntryGeneral::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern USERINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FJournalEntryGeneral_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJournalEntryGeneral, Z_Construct_UPackage__Script_UserInterface(), TEXT("JournalEntryGeneral"), sizeof(FJournalEntryGeneral), Get_Z_Construct_UScriptStruct_FJournalEntryGeneral_Hash());
	}
	return Singleton;
}
template<> USERINTERFACE_API UScriptStruct* StaticStruct<FJournalEntryGeneral>()
{
	return FJournalEntryGeneral::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJournalEntryGeneral(FJournalEntryGeneral::StaticStruct, TEXT("/Script/UserInterface"), TEXT("JournalEntryGeneral"), false, nullptr, nullptr);
static struct FScriptStruct_UserInterface_StaticRegisterNativesFJournalEntryGeneral
{
	FScriptStruct_UserInterface_StaticRegisterNativesFJournalEntryGeneral()
	{
		UScriptStruct::DeferCppStructOps<FJournalEntryGeneral>(FName(TEXT("JournalEntryGeneral")));
	}
} ScriptStruct_UserInterface_StaticRegisterNativesFJournalEntryGeneral;
	struct Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JournalEntryGeneral.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJournalEntryGeneral>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewProp_CustomID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalEntryGeneral" },
		{ "ModuleRelativePath", "Public/JournalEntryGeneral.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewProp_CustomID = { "CustomID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJournalEntryGeneral, CustomID), METADATA_PARAMS(Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewProp_CustomID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewProp_CustomID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalEntryGeneral" },
		{ "ModuleRelativePath", "Public/JournalEntryGeneral.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJournalEntryGeneral, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalEntryGeneral" },
		{ "ModuleRelativePath", "Public/JournalEntryGeneral.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJournalEntryGeneral, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalEntryGeneral" },
		{ "ModuleRelativePath", "Public/JournalEntryGeneral.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJournalEntryGeneral, Category), Z_Construct_UEnum_UserInterface_EJournalCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewProp_CustomID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::NewProp_Category,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
		nullptr,
		&NewStructOps,
		"JournalEntryGeneral",
		sizeof(FJournalEntryGeneral),
		alignof(FJournalEntryGeneral),
		Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJournalEntryGeneral()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJournalEntryGeneral_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JournalEntryGeneral"), sizeof(FJournalEntryGeneral), Get_Z_Construct_UScriptStruct_FJournalEntryGeneral_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJournalEntryGeneral_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJournalEntryGeneral_Hash() { return 3551490194U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
