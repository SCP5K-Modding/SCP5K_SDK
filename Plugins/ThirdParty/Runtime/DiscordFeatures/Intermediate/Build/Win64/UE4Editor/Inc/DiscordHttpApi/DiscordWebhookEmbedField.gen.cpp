// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/DiscordWebhookEmbedField.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordWebhookEmbedField() {}
// Cross Module References
	DISCORDHTTPAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookEmbedField();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
// End Cross Module References
class UScriptStruct* FDiscordWebhookEmbedField::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDHTTPAPI_API uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordWebhookEmbedField, Z_Construct_UPackage__Script_DiscordHttpApi(), TEXT("DiscordWebhookEmbedField"), sizeof(FDiscordWebhookEmbedField), Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Hash());
	}
	return Singleton;
}
template<> DISCORDHTTPAPI_API UScriptStruct* StaticStruct<FDiscordWebhookEmbedField>()
{
	return FDiscordWebhookEmbedField::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordWebhookEmbedField(FDiscordWebhookEmbedField::StaticStruct, TEXT("/Script/DiscordHttpApi"), TEXT("DiscordWebhookEmbedField"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhookEmbedField
{
	FScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhookEmbedField()
	{
		UScriptStruct::DeferCppStructOps<FDiscordWebhookEmbedField>(FName(TEXT("DiscordWebhookEmbedField")));
	}
} ScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhookEmbedField;
	struct Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInline_MetaData[];
#endif
		static void NewProp_bInline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbedField.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordWebhookEmbedField>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbedField" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbedField.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbedField, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbedField" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbedField.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbedField, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::NewProp_bInline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbedField" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbedField.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::NewProp_bInline_SetBit(void* Obj)
	{
		((FDiscordWebhookEmbedField*)Obj)->bInline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::NewProp_bInline = { "bInline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDiscordWebhookEmbedField), &Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::NewProp_bInline_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::NewProp_bInline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::NewProp_bInline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::NewProp_bInline,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordHttpApi,
		nullptr,
		&NewStructOps,
		"DiscordWebhookEmbedField",
		sizeof(FDiscordWebhookEmbedField),
		alignof(FDiscordWebhookEmbedField),
		Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookEmbedField()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordHttpApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordWebhookEmbedField"), sizeof(FDiscordWebhookEmbedField), Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbedField_Hash() { return 2185029971U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
