// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/DiscordWebhookData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordWebhookData() {}
// Cross Module References
	DISCORDHTTPAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookData();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
	DISCORDHTTPAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookEmbed();
	DISCORDHTTPAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordAllowedMentions();
// End Cross Module References
class UScriptStruct* FDiscordWebhookData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDHTTPAPI_API uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhookData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordWebhookData, Z_Construct_UPackage__Script_DiscordHttpApi(), TEXT("DiscordWebhookData"), sizeof(FDiscordWebhookData), Get_Z_Construct_UScriptStruct_FDiscordWebhookData_Hash());
	}
	return Singleton;
}
template<> DISCORDHTTPAPI_API UScriptStruct* StaticStruct<FDiscordWebhookData>()
{
	return FDiscordWebhookData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordWebhookData(FDiscordWebhookData::StaticStruct, TEXT("/Script/DiscordHttpApi"), TEXT("DiscordWebhookData"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhookData
{
	FScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhookData()
	{
		UScriptStruct::DeferCppStructOps<FDiscordWebhookData>(FName(TEXT("DiscordWebhookData")));
	}
} ScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhookData;
	struct Z_Construct_UScriptStruct_FDiscordWebhookData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Avatar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Avatar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTts_MetaData[];
#endif
		static void NewProp_bTts_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Embeds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Embeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Embeds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedMentions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllowedMentions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordWebhookData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordWebhookData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_Content_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookData" },
		{ "ModuleRelativePath", "Public/DiscordWebhookData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookData, Content), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_Username_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookData" },
		{ "ModuleRelativePath", "Public/DiscordWebhookData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookData, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_Avatar_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookData" },
		{ "ModuleRelativePath", "Public/DiscordWebhookData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookData, Avatar), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_Avatar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_Avatar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_bTts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookData" },
		{ "ModuleRelativePath", "Public/DiscordWebhookData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_bTts_SetBit(void* Obj)
	{
		((FDiscordWebhookData*)Obj)->bTts = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_bTts = { "bTts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDiscordWebhookData), &Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_bTts_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_bTts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_bTts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_File_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookData" },
		{ "ModuleRelativePath", "Public/DiscordWebhookData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookData, File), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_File_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_Embeds_Inner = { "Embeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDiscordWebhookEmbed, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_Embeds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookData" },
		{ "ModuleRelativePath", "Public/DiscordWebhookData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_Embeds = { "Embeds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookData, Embeds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_Embeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_Embeds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_AllowedMentions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookData" },
		{ "ModuleRelativePath", "Public/DiscordWebhookData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_AllowedMentions = { "AllowedMentions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookData, AllowedMentions), Z_Construct_UScriptStruct_FDiscordAllowedMentions, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_AllowedMentions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_AllowedMentions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_Avatar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_bTts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_File,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_Embeds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_Embeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::NewProp_AllowedMentions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordHttpApi,
		nullptr,
		&NewStructOps,
		"DiscordWebhookData",
		sizeof(FDiscordWebhookData),
		alignof(FDiscordWebhookData),
		Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhookData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordHttpApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordWebhookData"), sizeof(FDiscordWebhookData), Get_Z_Construct_UScriptStruct_FDiscordWebhookData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordWebhookData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhookData_Hash() { return 3715858372U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
