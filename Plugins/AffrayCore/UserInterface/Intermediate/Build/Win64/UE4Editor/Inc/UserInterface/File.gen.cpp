// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/File.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFile() {}
// Cross Module References
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FFile();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_EAppCategory();
// End Cross Module References

static_assert(std::is_polymorphic<FFile>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFile cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FFile::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern USERINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FFile_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFile, Z_Construct_UPackage__Script_UserInterface(), TEXT("File"), sizeof(FFile), Get_Z_Construct_UScriptStruct_FFile_Hash());
	}
	return Singleton;
}
template<> USERINTERFACE_API UScriptStruct* StaticStruct<FFile>()
{
	return FFile::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFile(FFile::StaticStruct, TEXT("/Script/UserInterface"), TEXT("File"), false, nullptr, nullptr);
static struct FScriptStruct_UserInterface_StaticRegisterNativesFFile
{
	FScriptStruct_UserInterface_StaticRegisterNativesFFile()
	{
		UScriptStruct::DeferCppStructOps<FFile>(FName(TEXT("File")));
	}
} ScriptStruct_UserInterface_StaticRegisterNativesFFile;
	struct Z_Construct_UScriptStruct_FFile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FavouriteIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FavouriteIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Contents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Contents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowInQuickAccessMenu_MetaData[];
#endif
		static void NewProp_bShowInQuickAccessMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowInQuickAccessMenu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/File.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFile>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFile_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/File.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFile_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFile, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFile_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFile_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFile_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/File.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FFile_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFile, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFile_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFile_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFile_Statics::NewProp_FavouriteIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/File.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFile_Statics::NewProp_FavouriteIndex = { "FavouriteIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFile, FavouriteIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FFile_Statics::NewProp_FavouriteIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFile_Statics::NewProp_FavouriteIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFile_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFile_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/File.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFile_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFile, Category), Z_Construct_UEnum_UserInterface_EAppCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FFile_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFile_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFile_Statics::NewProp_FileID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/File.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFile_Statics::NewProp_FileID = { "FileID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFile, FileID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFile_Statics::NewProp_FileID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFile_Statics::NewProp_FileID_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFile_Statics::NewProp_Contents_Inner = { "Contents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFile_Statics::NewProp_Contents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/File.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFile_Statics::NewProp_Contents = { "Contents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFile, Contents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFile_Statics::NewProp_Contents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFile_Statics::NewProp_Contents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFile_Statics::NewProp_bShowInQuickAccessMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/File.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFile_Statics::NewProp_bShowInQuickAccessMenu_SetBit(void* Obj)
	{
		((FFile*)Obj)->bShowInQuickAccessMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFile_Statics::NewProp_bShowInQuickAccessMenu = { "bShowInQuickAccessMenu", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFile), &Z_Construct_UScriptStruct_FFile_Statics::NewProp_bShowInQuickAccessMenu_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFile_Statics::NewProp_bShowInQuickAccessMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFile_Statics::NewProp_bShowInQuickAccessMenu_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFile_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFile_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFile_Statics::NewProp_FavouriteIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFile_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFile_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFile_Statics::NewProp_FileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFile_Statics::NewProp_Contents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFile_Statics::NewProp_Contents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFile_Statics::NewProp_bShowInQuickAccessMenu,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"File",
		sizeof(FFile),
		alignof(FFile),
		Z_Construct_UScriptStruct_FFile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFile()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFile_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("File"), sizeof(FFile), Get_Z_Construct_UScriptStruct_FFile_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFile_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFile_Hash() { return 621833150U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
