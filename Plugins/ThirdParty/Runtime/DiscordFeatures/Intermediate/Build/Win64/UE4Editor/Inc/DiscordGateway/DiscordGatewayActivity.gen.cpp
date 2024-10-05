// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordGateway/Public/DiscordGatewayActivity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordGatewayActivity() {}
// Cross Module References
	DISCORDGATEWAY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayActivity();
	UPackage* Z_Construct_UPackage__Script_DiscordGateway();
	DISCORDGATEWAY_API UEnum* Z_Construct_UEnum_DiscordGateway_EDiscordGatewayActivity();
	DISCORDGATEWAY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps();
	DISCORDGATEWAY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayEmoji();
	DISCORDGATEWAY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayActivityParty();
	DISCORDGATEWAY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset();
	DISCORDGATEWAY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets();
	DISCORDGATEWAY_API UEnum* Z_Construct_UEnum_DiscordGateway_EDiscordGatewayActivityFlags();
// End Cross Module References
class UScriptStruct* FDiscordGatewayActivity::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDGATEWAY_API uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayActivity_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordGatewayActivity, Z_Construct_UPackage__Script_DiscordGateway(), TEXT("DiscordGatewayActivity"), sizeof(FDiscordGatewayActivity), Get_Z_Construct_UScriptStruct_FDiscordGatewayActivity_Hash());
	}
	return Singleton;
}
template<> DISCORDGATEWAY_API UScriptStruct* StaticStruct<FDiscordGatewayActivity>()
{
	return FDiscordGatewayActivity::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordGatewayActivity(FDiscordGatewayActivity::StaticStruct, TEXT("/Script/DiscordGateway"), TEXT("DiscordGatewayActivity"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayActivity
{
	FScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayActivity()
	{
		UScriptStruct::DeferCppStructOps<FDiscordGatewayActivity>(FName(TEXT("DiscordGatewayActivity")));
	}
} ScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayActivity;
	struct Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CreatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamps_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timestamps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ApplicationId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Details_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Details;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Emoji_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Emoji;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Party_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Party;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Assets_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Assets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Secrets_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Secrets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInstance_MetaData[];
#endif
		static void NewProp_bInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivity.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordGatewayActivity>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivity" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivity, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivity" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivity, Type), Z_Construct_UEnum_DiscordGateway_EDiscordGatewayActivity, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_URL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivity" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivity, URL), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivity" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivity, CreatedAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Timestamps_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivity" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Timestamps = { "Timestamps", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivity, Timestamps), Z_Construct_UScriptStruct_FDiscordGatewayActivityTimestamps, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Timestamps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Timestamps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_ApplicationId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivity" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_ApplicationId = { "ApplicationId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivity, ApplicationId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_ApplicationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_ApplicationId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Details_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivity" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivity, Details), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Details_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Details_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivity" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivity, State), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Emoji_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivity" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Emoji = { "Emoji", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivity, Emoji), Z_Construct_UScriptStruct_FDiscordGatewayEmoji, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Emoji_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Emoji_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Party_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivity" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Party = { "Party", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivity, Party), Z_Construct_UScriptStruct_FDiscordGatewayActivityParty, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Party_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Party_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Assets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivity" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivity, Assets), Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Assets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Assets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Secrets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivity" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Secrets = { "Secrets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivity, Secrets), Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Secrets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Secrets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_bInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivity" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivity.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_bInstance_SetBit(void* Obj)
	{
		((FDiscordGatewayActivity*)Obj)->bInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_bInstance = { "bInstance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDiscordGatewayActivity), &Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_bInstance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_bInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_bInstance_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DiscordGateway_EDiscordGatewayActivityFlags, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Flags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivity" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivity, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Flags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_CreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Timestamps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_ApplicationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Details,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Emoji,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Party,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Assets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Secrets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_bInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Flags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Flags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::NewProp_Flags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordGateway,
		nullptr,
		&NewStructOps,
		"DiscordGatewayActivity",
		sizeof(FDiscordGatewayActivity),
		alignof(FDiscordGatewayActivity),
		Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayActivity()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayActivity_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordGateway();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordGatewayActivity"), sizeof(FDiscordGatewayActivity), Get_Z_Construct_UScriptStruct_FDiscordGatewayActivity_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordGatewayActivity_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayActivity_Hash() { return 4058449249U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
