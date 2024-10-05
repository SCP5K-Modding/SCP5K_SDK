// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/Document.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDocument() {}
// Cross Module References
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FDocument();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FDocumentData();
// End Cross Module References

static_assert(std::is_polymorphic<FDocument>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDocument cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FDocument::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern USERINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FDocument_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDocument, Z_Construct_UPackage__Script_UserInterface(), TEXT("Document"), sizeof(FDocument), Get_Z_Construct_UScriptStruct_FDocument_Hash());
	}
	return Singleton;
}
template<> USERINTERFACE_API UScriptStruct* StaticStruct<FDocument>()
{
	return FDocument::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDocument(FDocument::StaticStruct, TEXT("/Script/UserInterface"), TEXT("Document"), false, nullptr, nullptr);
static struct FScriptStruct_UserInterface_StaticRegisterNativesFDocument
{
	FScriptStruct_UserInterface_StaticRegisterNativesFDocument()
	{
		UScriptStruct::DeferCppStructOps<FDocument>(FName(TEXT("Document")));
	}
} ScriptStruct_UserInterface_StaticRegisterNativesFDocument;
	struct Z_Construct_UScriptStruct_FDocument_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocument_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Document.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDocument_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDocument>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocument_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Document" },
		{ "ModuleRelativePath", "Public/Document.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDocument_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDocument, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDocument_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocument_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocument_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Document" },
		{ "ModuleRelativePath", "Public/Document.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDocument_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDocument, Data), Z_Construct_UScriptStruct_FDocumentData, METADATA_PARAMS(Z_Construct_UScriptStruct_FDocument_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocument_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocument_Statics::NewProp_Text_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Document" },
		{ "ModuleRelativePath", "Public/Document.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDocument_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDocument, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FDocument_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocument_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDocument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocument_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocument_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocument_Statics::NewProp_Text,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDocument_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Document",
		sizeof(FDocument),
		alignof(FDocument),
		Z_Construct_UScriptStruct_FDocument_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocument_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDocument_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocument_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDocument()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDocument_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Document"), sizeof(FDocument), Get_Z_Construct_UScriptStruct_FDocument_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDocument_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDocument_Hash() { return 3918237957U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
