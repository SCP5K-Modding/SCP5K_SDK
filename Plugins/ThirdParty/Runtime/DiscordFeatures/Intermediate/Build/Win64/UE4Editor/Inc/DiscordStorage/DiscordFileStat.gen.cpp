// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordStorage/Public/DiscordFileStat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordFileStat() {}
// Cross Module References
	DISCORDSTORAGE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordFileStat();
	UPackage* Z_Construct_UPackage__Script_DiscordStorage();
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUint64();
// End Cross Module References
class UScriptStruct* FDiscordFileStat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDSTORAGE_API uint32 Get_Z_Construct_UScriptStruct_FDiscordFileStat_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordFileStat, Z_Construct_UPackage__Script_DiscordStorage(), TEXT("DiscordFileStat"), sizeof(FDiscordFileStat), Get_Z_Construct_UScriptStruct_FDiscordFileStat_Hash());
	}
	return Singleton;
}
template<> DISCORDSTORAGE_API UScriptStruct* StaticStruct<FDiscordFileStat>()
{
	return FDiscordFileStat::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordFileStat(FDiscordFileStat::StaticStruct, TEXT("/Script/DiscordStorage"), TEXT("DiscordFileStat"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordStorage_StaticRegisterNativesFDiscordFileStat
{
	FScriptStruct_DiscordStorage_StaticRegisterNativesFDiscordFileStat()
	{
		UScriptStruct::DeferCppStructOps<FDiscordFileStat>(FName(TEXT("DiscordFileStat")));
	}
} ScriptStruct_DiscordStorage_StaticRegisterNativesFDiscordFileStat;
	struct Z_Construct_UScriptStruct_FDiscordFileStat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastModified_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastModified;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordFileStat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordFileStat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordFileStat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordFileStat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordFileStat_Statics::NewProp_Filename_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordFileStat" },
		{ "ModuleRelativePath", "Public/DiscordFileStat.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordFileStat_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordFileStat, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordFileStat_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordFileStat_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordFileStat_Statics::NewProp_Size_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordFileStat" },
		{ "ModuleRelativePath", "Public/DiscordFileStat.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordFileStat_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordFileStat, Size), Z_Construct_UScriptStruct_FUint64, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordFileStat_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordFileStat_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordFileStat_Statics::NewProp_LastModified_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordFileStat" },
		{ "ModuleRelativePath", "Public/DiscordFileStat.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordFileStat_Statics::NewProp_LastModified = { "LastModified", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordFileStat, LastModified), Z_Construct_UScriptStruct_FUint64, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordFileStat_Statics::NewProp_LastModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordFileStat_Statics::NewProp_LastModified_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordFileStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordFileStat_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordFileStat_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordFileStat_Statics::NewProp_LastModified,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordFileStat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordStorage,
		nullptr,
		&NewStructOps,
		"DiscordFileStat",
		sizeof(FDiscordFileStat),
		alignof(FDiscordFileStat),
		Z_Construct_UScriptStruct_FDiscordFileStat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordFileStat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordFileStat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordFileStat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordFileStat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordFileStat_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordStorage();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordFileStat"), sizeof(FDiscordFileStat), Get_Z_Construct_UScriptStruct_FDiscordFileStat_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordFileStat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordFileStat_Hash() { return 3812238739U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
