// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordCore/Public/DiscordActivityAssets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordActivityAssets() {}
// Cross Module References
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordActivityAssets();
	UPackage* Z_Construct_UPackage__Script_DiscordCore();
// End Cross Module References
class UScriptStruct* FDiscordActivityAssets::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDCORE_API uint32 Get_Z_Construct_UScriptStruct_FDiscordActivityAssets_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordActivityAssets, Z_Construct_UPackage__Script_DiscordCore(), TEXT("DiscordActivityAssets"), sizeof(FDiscordActivityAssets), Get_Z_Construct_UScriptStruct_FDiscordActivityAssets_Hash());
	}
	return Singleton;
}
template<> DISCORDCORE_API UScriptStruct* StaticStruct<FDiscordActivityAssets>()
{
	return FDiscordActivityAssets::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordActivityAssets(FDiscordActivityAssets::StaticStruct, TEXT("/Script/DiscordCore"), TEXT("DiscordActivityAssets"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordCore_StaticRegisterNativesFDiscordActivityAssets
{
	FScriptStruct_DiscordCore_StaticRegisterNativesFDiscordActivityAssets()
	{
		UScriptStruct::DeferCppStructOps<FDiscordActivityAssets>(FName(TEXT("DiscordActivityAssets")));
	}
} ScriptStruct_DiscordCore_StaticRegisterNativesFDiscordActivityAssets;
	struct Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LargeImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LargeImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LargeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LargeText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SmallImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SmallText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordActivityAssets.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordActivityAssets>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::NewProp_LargeImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivityAssets" },
		{ "ModuleRelativePath", "Public/DiscordActivityAssets.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::NewProp_LargeImage = { "LargeImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordActivityAssets, LargeImage), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::NewProp_LargeImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::NewProp_LargeImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::NewProp_LargeText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivityAssets" },
		{ "ModuleRelativePath", "Public/DiscordActivityAssets.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::NewProp_LargeText = { "LargeText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordActivityAssets, LargeText), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::NewProp_LargeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::NewProp_LargeText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::NewProp_SmallImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivityAssets" },
		{ "ModuleRelativePath", "Public/DiscordActivityAssets.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::NewProp_SmallImage = { "SmallImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordActivityAssets, SmallImage), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::NewProp_SmallImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::NewProp_SmallImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::NewProp_SmallText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivityAssets" },
		{ "ModuleRelativePath", "Public/DiscordActivityAssets.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::NewProp_SmallText = { "SmallText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordActivityAssets, SmallText), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::NewProp_SmallText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::NewProp_SmallText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::NewProp_LargeImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::NewProp_LargeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::NewProp_SmallImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::NewProp_SmallText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordCore,
		nullptr,
		&NewStructOps,
		"DiscordActivityAssets",
		sizeof(FDiscordActivityAssets),
		alignof(FDiscordActivityAssets),
		Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordActivityAssets()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordActivityAssets_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordActivityAssets"), sizeof(FDiscordActivityAssets), Get_Z_Construct_UScriptStruct_FDiscordActivityAssets_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordActivityAssets_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordActivityAssets_Hash() { return 4022021113U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
