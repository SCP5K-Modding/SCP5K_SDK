// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/DiscordWebhook.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordWebhook() {}
// Cross Module References
	DISCORDHTTPAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhook();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
	DISCORDHTTPAPI_API UEnum* Z_Construct_UEnum_DiscordHttpApi_EDiscordWebhookType();
	DISCORDHTTPAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookUser();
// End Cross Module References
class UScriptStruct* FDiscordWebhook::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDHTTPAPI_API uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhook_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordWebhook, Z_Construct_UPackage__Script_DiscordHttpApi(), TEXT("DiscordWebhook"), sizeof(FDiscordWebhook), Get_Z_Construct_UScriptStruct_FDiscordWebhook_Hash());
	}
	return Singleton;
}
template<> DISCORDHTTPAPI_API UScriptStruct* StaticStruct<FDiscordWebhook>()
{
	return FDiscordWebhook::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordWebhook(FDiscordWebhook::StaticStruct, TEXT("/Script/DiscordHttpApi"), TEXT("DiscordWebhook"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhook
{
	FScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhook()
	{
		UScriptStruct::DeferCppStructOps<FDiscordWebhook>(FName(TEXT("DiscordWebhook")));
	}
} ScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhook;
	struct Z_Construct_UScriptStruct_FDiscordWebhook_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuildId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_GuildId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ChannelId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_User;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Avatar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Avatar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Token;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhook_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordWebhook.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordWebhook>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhook" },
		{ "ModuleRelativePath", "Public/DiscordWebhook.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhook, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhook" },
		{ "ModuleRelativePath", "Public/DiscordWebhook.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhook, Type), Z_Construct_UEnum_DiscordHttpApi_EDiscordWebhookType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_GuildId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhook" },
		{ "ModuleRelativePath", "Public/DiscordWebhook.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_GuildId = { "GuildId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhook, GuildId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_GuildId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_GuildId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_ChannelId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhook" },
		{ "ModuleRelativePath", "Public/DiscordWebhook.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhook, ChannelId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_ChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_ChannelId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_User_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhook" },
		{ "ModuleRelativePath", "Public/DiscordWebhook.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhook, User), Z_Construct_UScriptStruct_FDiscordWebhookUser, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_User_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_User_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhook" },
		{ "ModuleRelativePath", "Public/DiscordWebhook.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhook, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_Avatar_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhook" },
		{ "ModuleRelativePath", "Public/DiscordWebhook.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhook, Avatar), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_Avatar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_Avatar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_Token_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhook" },
		{ "ModuleRelativePath", "Public/DiscordWebhook.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhook, Token), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_Token_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordWebhook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_GuildId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_ChannelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_Avatar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhook_Statics::NewProp_Token,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordWebhook_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordHttpApi,
		nullptr,
		&NewStructOps,
		"DiscordWebhook",
		sizeof(FDiscordWebhook),
		alignof(FDiscordWebhook),
		Z_Construct_UScriptStruct_FDiscordWebhook_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhook_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhook_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhook_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhook()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhook_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordHttpApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordWebhook"), sizeof(FDiscordWebhook), Get_Z_Construct_UScriptStruct_FDiscordWebhook_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordWebhook_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhook_Hash() { return 1592799469U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
