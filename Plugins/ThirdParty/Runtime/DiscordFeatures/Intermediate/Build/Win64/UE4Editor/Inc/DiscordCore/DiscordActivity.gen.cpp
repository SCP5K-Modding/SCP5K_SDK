// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordCore/Public/DiscordActivity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordActivity() {}
// Cross Module References
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordActivity();
	UPackage* Z_Construct_UPackage__Script_DiscordCore();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordActivityType();
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordActivityTimestamps();
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordActivityAssets();
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordActivityParty();
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordActivitySecrets();
// End Cross Module References
class UScriptStruct* FDiscordActivity::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDCORE_API uint32 Get_Z_Construct_UScriptStruct_FDiscordActivity_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordActivity, Z_Construct_UPackage__Script_DiscordCore(), TEXT("DiscordActivity"), sizeof(FDiscordActivity), Get_Z_Construct_UScriptStruct_FDiscordActivity_Hash());
	}
	return Singleton;
}
template<> DISCORDCORE_API UScriptStruct* StaticStruct<FDiscordActivity>()
{
	return FDiscordActivity::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordActivity(FDiscordActivity::StaticStruct, TEXT("/Script/DiscordCore"), TEXT("DiscordActivity"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordCore_StaticRegisterNativesFDiscordActivity
{
	FScriptStruct_DiscordCore_StaticRegisterNativesFDiscordActivity()
	{
		UScriptStruct::DeferCppStructOps<FDiscordActivity>(FName(TEXT("DiscordActivity")));
	}
} ScriptStruct_DiscordCore_StaticRegisterNativesFDiscordActivity;
	struct Z_Construct_UScriptStruct_FDiscordActivity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ApplicationId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Details_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Details;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamps_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timestamps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Assets_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Assets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Party_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Party;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Secrets_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Secrets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInstance_MetaData[];
#endif
		static void NewProp_bInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordActivity.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordActivity>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivity" },
		{ "ModuleRelativePath", "Public/DiscordActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordActivity, Type), Z_Construct_UEnum_DiscordCore_EDiscordActivityType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_ApplicationId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivity" },
		{ "ModuleRelativePath", "Public/DiscordActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_ApplicationId = { "ApplicationId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordActivity, ApplicationId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_ApplicationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_ApplicationId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivity" },
		{ "ModuleRelativePath", "Public/DiscordActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordActivity, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivity" },
		{ "ModuleRelativePath", "Public/DiscordActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordActivity, State), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Details_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivity" },
		{ "ModuleRelativePath", "Public/DiscordActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordActivity, Details), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Details_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Details_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Timestamps_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivity" },
		{ "ModuleRelativePath", "Public/DiscordActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Timestamps = { "Timestamps", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordActivity, Timestamps), Z_Construct_UScriptStruct_FDiscordActivityTimestamps, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Timestamps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Timestamps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Assets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivity" },
		{ "ModuleRelativePath", "Public/DiscordActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordActivity, Assets), Z_Construct_UScriptStruct_FDiscordActivityAssets, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Assets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Assets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Party_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivity" },
		{ "ModuleRelativePath", "Public/DiscordActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Party = { "Party", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordActivity, Party), Z_Construct_UScriptStruct_FDiscordActivityParty, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Party_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Party_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Secrets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivity" },
		{ "ModuleRelativePath", "Public/DiscordActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Secrets = { "Secrets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordActivity, Secrets), Z_Construct_UScriptStruct_FDiscordActivitySecrets, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Secrets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Secrets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_bInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivity" },
		{ "ModuleRelativePath", "Public/DiscordActivity.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_bInstance_SetBit(void* Obj)
	{
		((FDiscordActivity*)Obj)->bInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_bInstance = { "bInstance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDiscordActivity), &Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_bInstance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_bInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_bInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordActivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_ApplicationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Details,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Timestamps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Assets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Party,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_Secrets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordActivity_Statics::NewProp_bInstance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordActivity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordCore,
		nullptr,
		&NewStructOps,
		"DiscordActivity",
		sizeof(FDiscordActivity),
		alignof(FDiscordActivity),
		Z_Construct_UScriptStruct_FDiscordActivity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordActivity()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordActivity_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordActivity"), sizeof(FDiscordActivity), Get_Z_Construct_UScriptStruct_FDiscordActivity_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordActivity_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordActivity_Hash() { return 5327630U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
