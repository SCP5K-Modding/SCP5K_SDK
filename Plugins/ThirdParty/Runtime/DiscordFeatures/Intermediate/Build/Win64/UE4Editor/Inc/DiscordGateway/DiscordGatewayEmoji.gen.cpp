// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordGateway/Public/DiscordGatewayEmoji.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordGatewayEmoji() {}
// Cross Module References
	DISCORDGATEWAY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayEmoji();
	UPackage* Z_Construct_UPackage__Script_DiscordGateway();
// End Cross Module References
class UScriptStruct* FDiscordGatewayEmoji::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDGATEWAY_API uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordGatewayEmoji, Z_Construct_UPackage__Script_DiscordGateway(), TEXT("DiscordGatewayEmoji"), sizeof(FDiscordGatewayEmoji), Get_Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Hash());
	}
	return Singleton;
}
template<> DISCORDGATEWAY_API UScriptStruct* StaticStruct<FDiscordGatewayEmoji>()
{
	return FDiscordGatewayEmoji::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordGatewayEmoji(FDiscordGatewayEmoji::StaticStruct, TEXT("/Script/DiscordGateway"), TEXT("DiscordGatewayEmoji"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayEmoji
{
	FScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayEmoji()
	{
		UScriptStruct::DeferCppStructOps<FDiscordGatewayEmoji>(FName(TEXT("DiscordGatewayEmoji")));
	}
} ScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayEmoji;
	struct Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnimated_MetaData[];
#endif
		static void NewProp_bAnimated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordGatewayEmoji.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordGatewayEmoji>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayEmoji" },
		{ "ModuleRelativePath", "Public/DiscordGatewayEmoji.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayEmoji, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayEmoji" },
		{ "ModuleRelativePath", "Public/DiscordGatewayEmoji.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayEmoji, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::NewProp_bAnimated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayEmoji" },
		{ "ModuleRelativePath", "Public/DiscordGatewayEmoji.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::NewProp_bAnimated_SetBit(void* Obj)
	{
		((FDiscordGatewayEmoji*)Obj)->bAnimated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::NewProp_bAnimated = { "bAnimated", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDiscordGatewayEmoji), &Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::NewProp_bAnimated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::NewProp_bAnimated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::NewProp_bAnimated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::NewProp_bAnimated,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordGateway,
		nullptr,
		&NewStructOps,
		"DiscordGatewayEmoji",
		sizeof(FDiscordGatewayEmoji),
		alignof(FDiscordGatewayEmoji),
		Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayEmoji()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordGateway();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordGatewayEmoji"), sizeof(FDiscordGatewayEmoji), Get_Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayEmoji_Hash() { return 2196038741U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
