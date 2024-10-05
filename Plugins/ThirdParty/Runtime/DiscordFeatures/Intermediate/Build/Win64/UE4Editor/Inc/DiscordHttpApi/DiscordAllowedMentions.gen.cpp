// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/DiscordAllowedMentions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordAllowedMentions() {}
// Cross Module References
	DISCORDHTTPAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordAllowedMentions();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
	DISCORDHTTPAPI_API UEnum* Z_Construct_UEnum_DiscordHttpApi_EDiscordAllowedMentionTypes();
// End Cross Module References
class UScriptStruct* FDiscordAllowedMentions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDHTTPAPI_API uint32 Get_Z_Construct_UScriptStruct_FDiscordAllowedMentions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordAllowedMentions, Z_Construct_UPackage__Script_DiscordHttpApi(), TEXT("DiscordAllowedMentions"), sizeof(FDiscordAllowedMentions), Get_Z_Construct_UScriptStruct_FDiscordAllowedMentions_Hash());
	}
	return Singleton;
}
template<> DISCORDHTTPAPI_API UScriptStruct* StaticStruct<FDiscordAllowedMentions>()
{
	return FDiscordAllowedMentions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordAllowedMentions(FDiscordAllowedMentions::StaticStruct, TEXT("/Script/DiscordHttpApi"), TEXT("DiscordAllowedMentions"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordAllowedMentions
{
	FScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordAllowedMentions()
	{
		UScriptStruct::DeferCppStructOps<FDiscordAllowedMentions>(FName(TEXT("DiscordAllowedMentions")));
	}
} ScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordAllowedMentions;
	struct Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Parse_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Parse_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parse_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Parse;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Roles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Roles;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Users_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Users_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Users;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordAllowedMentions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordAllowedMentions>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Parse_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Parse_Inner = { "Parse", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DiscordHttpApi_EDiscordAllowedMentionTypes, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Parse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordAllowedMentions" },
		{ "ModuleRelativePath", "Public/DiscordAllowedMentions.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Parse = { "Parse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordAllowedMentions, Parse), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Parse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Parse_MetaData)) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Roles_Inner = { "Roles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Roles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordAllowedMentions" },
		{ "ModuleRelativePath", "Public/DiscordAllowedMentions.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Roles = { "Roles", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordAllowedMentions, Roles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Roles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Roles_MetaData)) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Users_Inner = { "Users", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Users_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordAllowedMentions" },
		{ "ModuleRelativePath", "Public/DiscordAllowedMentions.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordAllowedMentions, Users), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Users_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Users_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Parse_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Parse_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Parse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Roles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Roles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Users_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::NewProp_Users,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordHttpApi,
		nullptr,
		&NewStructOps,
		"DiscordAllowedMentions",
		sizeof(FDiscordAllowedMentions),
		alignof(FDiscordAllowedMentions),
		Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordAllowedMentions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordAllowedMentions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordHttpApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordAllowedMentions"), sizeof(FDiscordAllowedMentions), Get_Z_Construct_UScriptStruct_FDiscordAllowedMentions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordAllowedMentions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordAllowedMentions_Hash() { return 270685926U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
