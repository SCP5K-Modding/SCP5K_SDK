// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/DiscordWebhookUser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordWebhookUser() {}
// Cross Module References
	DISCORDHTTPAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookUser();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
	DISCORDHTTPAPI_API UEnum* Z_Construct_UEnum_DiscordHttpApi_EDiscordWebhookUserFlag();
	DISCORDHTTPAPI_API UEnum* Z_Construct_UEnum_DiscordHttpApi_EDiscordWebhookPremiumType();
// End Cross Module References
class UScriptStruct* FDiscordWebhookUser::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDHTTPAPI_API uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhookUser_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordWebhookUser, Z_Construct_UPackage__Script_DiscordHttpApi(), TEXT("DiscordWebhookUser"), sizeof(FDiscordWebhookUser), Get_Z_Construct_UScriptStruct_FDiscordWebhookUser_Hash());
	}
	return Singleton;
}
template<> DISCORDHTTPAPI_API UScriptStruct* StaticStruct<FDiscordWebhookUser>()
{
	return FDiscordWebhookUser::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordWebhookUser(FDiscordWebhookUser::StaticStruct, TEXT("/Script/DiscordHttpApi"), TEXT("DiscordWebhookUser"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhookUser
{
	FScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhookUser()
	{
		UScriptStruct::DeferCppStructOps<FDiscordWebhookUser>(FName(TEXT("DiscordWebhookUser")));
	}
} ScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhookUser;
	struct Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Discriminator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Discriminator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Avatar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Avatar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBot_MetaData[];
#endif
		static void NewProp_bBot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSystem_MetaData[];
#endif
		static void NewProp_bSystem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMfaEnabled_MetaData[];
#endif
		static void NewProp_bMfaEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMfaEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Locale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Locale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVerified_MetaData[];
#endif
		static void NewProp_bVerified_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVerified;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PremiumType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PremiumType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PremiumType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PublicFlags_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PublicFlags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublicFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PublicFlags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordWebhookUser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordWebhookUser>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookUser" },
		{ "ModuleRelativePath", "Public/DiscordWebhookUser.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookUser, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Username_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookUser" },
		{ "ModuleRelativePath", "Public/DiscordWebhookUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookUser, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Discriminator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookUser" },
		{ "ModuleRelativePath", "Public/DiscordWebhookUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Discriminator = { "Discriminator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookUser, Discriminator), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Discriminator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Discriminator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Avatar_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookUser" },
		{ "ModuleRelativePath", "Public/DiscordWebhookUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookUser, Avatar), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Avatar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Avatar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bBot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookUser" },
		{ "ModuleRelativePath", "Public/DiscordWebhookUser.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bBot_SetBit(void* Obj)
	{
		((FDiscordWebhookUser*)Obj)->bBot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bBot = { "bBot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDiscordWebhookUser), &Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bBot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bBot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bBot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bSystem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookUser" },
		{ "ModuleRelativePath", "Public/DiscordWebhookUser.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bSystem_SetBit(void* Obj)
	{
		((FDiscordWebhookUser*)Obj)->bSystem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bSystem = { "bSystem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDiscordWebhookUser), &Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bSystem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bMfaEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookUser" },
		{ "ModuleRelativePath", "Public/DiscordWebhookUser.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bMfaEnabled_SetBit(void* Obj)
	{
		((FDiscordWebhookUser*)Obj)->bMfaEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bMfaEnabled = { "bMfaEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDiscordWebhookUser), &Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bMfaEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bMfaEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bMfaEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Locale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookUser" },
		{ "ModuleRelativePath", "Public/DiscordWebhookUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Locale = { "Locale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookUser, Locale), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Locale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Locale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bVerified_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookUser" },
		{ "ModuleRelativePath", "Public/DiscordWebhookUser.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bVerified_SetBit(void* Obj)
	{
		((FDiscordWebhookUser*)Obj)->bVerified = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bVerified = { "bVerified", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDiscordWebhookUser), &Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bVerified_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bVerified_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bVerified_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Email_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookUser" },
		{ "ModuleRelativePath", "Public/DiscordWebhookUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookUser, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Email_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DiscordHttpApi_EDiscordWebhookUserFlag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Flags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookUser" },
		{ "ModuleRelativePath", "Public/DiscordWebhookUser.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookUser, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Flags_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_PremiumType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_PremiumType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookUser" },
		{ "ModuleRelativePath", "Public/DiscordWebhookUser.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_PremiumType = { "PremiumType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookUser, PremiumType), Z_Construct_UEnum_DiscordHttpApi_EDiscordWebhookPremiumType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_PremiumType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_PremiumType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_PublicFlags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_PublicFlags_Inner = { "PublicFlags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DiscordHttpApi_EDiscordWebhookUserFlag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_PublicFlags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookUser" },
		{ "ModuleRelativePath", "Public/DiscordWebhookUser.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_PublicFlags = { "PublicFlags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookUser, PublicFlags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_PublicFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_PublicFlags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Discriminator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Avatar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bBot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bMfaEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Locale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_bVerified,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Flags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Flags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_PremiumType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_PremiumType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_PublicFlags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_PublicFlags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::NewProp_PublicFlags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordHttpApi,
		nullptr,
		&NewStructOps,
		"DiscordWebhookUser",
		sizeof(FDiscordWebhookUser),
		alignof(FDiscordWebhookUser),
		Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookUser()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhookUser_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordHttpApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordWebhookUser"), sizeof(FDiscordWebhookUser), Get_Z_Construct_UScriptStruct_FDiscordWebhookUser_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordWebhookUser_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhookUser_Hash() { return 1823963521U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
