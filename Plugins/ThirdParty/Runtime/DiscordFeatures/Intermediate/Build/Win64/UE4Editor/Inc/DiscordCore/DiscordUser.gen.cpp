// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordCore/Public/DiscordUser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordUser() {}
// Cross Module References
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordUser();
	UPackage* Z_Construct_UPackage__Script_DiscordCore();
// End Cross Module References
class UScriptStruct* FDiscordUser::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDCORE_API uint32 Get_Z_Construct_UScriptStruct_FDiscordUser_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordUser, Z_Construct_UPackage__Script_DiscordCore(), TEXT("DiscordUser"), sizeof(FDiscordUser), Get_Z_Construct_UScriptStruct_FDiscordUser_Hash());
	}
	return Singleton;
}
template<> DISCORDCORE_API UScriptStruct* StaticStruct<FDiscordUser>()
{
	return FDiscordUser::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordUser(FDiscordUser::StaticStruct, TEXT("/Script/DiscordCore"), TEXT("DiscordUser"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordCore_StaticRegisterNativesFDiscordUser
{
	FScriptStruct_DiscordCore_StaticRegisterNativesFDiscordUser()
	{
		UScriptStruct::DeferCppStructOps<FDiscordUser>(FName(TEXT("DiscordUser")));
	}
} ScriptStruct_DiscordCore_StaticRegisterNativesFDiscordUser;
	struct Z_Construct_UScriptStruct_FDiscordUser_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUser_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordUser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordUser_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordUser>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordUser" },
		{ "ModuleRelativePath", "Public/DiscordUser.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordUser, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_Username_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordUser" },
		{ "ModuleRelativePath", "Public/DiscordUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordUser, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_Discriminator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordUser" },
		{ "ModuleRelativePath", "Public/DiscordUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_Discriminator = { "Discriminator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordUser, Discriminator), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_Discriminator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_Discriminator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_Avatar_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordUser" },
		{ "ModuleRelativePath", "Public/DiscordUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordUser, Avatar), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_Avatar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_Avatar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_bBot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordUser" },
		{ "ModuleRelativePath", "Public/DiscordUser.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_bBot_SetBit(void* Obj)
	{
		((FDiscordUser*)Obj)->bBot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_bBot = { "bBot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDiscordUser), &Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_bBot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_bBot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_bBot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_Discriminator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_Avatar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordUser_Statics::NewProp_bBot,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordUser_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordCore,
		nullptr,
		&NewStructOps,
		"DiscordUser",
		sizeof(FDiscordUser),
		alignof(FDiscordUser),
		Z_Construct_UScriptStruct_FDiscordUser_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUser_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordUser_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordUser_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordUser()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordUser_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordUser"), sizeof(FDiscordUser), Get_Z_Construct_UScriptStruct_FDiscordUser_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordUser_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordUser_Hash() { return 1951865082U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
