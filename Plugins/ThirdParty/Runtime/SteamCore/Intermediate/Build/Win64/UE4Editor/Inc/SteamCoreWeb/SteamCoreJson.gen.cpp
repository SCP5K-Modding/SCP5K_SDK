// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreJson.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreJson() {}
// Cross Module References
	STEAMCOREWEB_API UScriptStruct* Z_Construct_UScriptStruct_FSteamCoreJson();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_ESteamValueType();
// End Cross Module References
class UScriptStruct* FSteamCoreJson::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCOREWEB_API uint32 Get_Z_Construct_UScriptStruct_FSteamCoreJson_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamCoreJson, Z_Construct_UPackage__Script_SteamCoreWeb(), TEXT("SteamCoreJson"), sizeof(FSteamCoreJson), Get_Z_Construct_UScriptStruct_FSteamCoreJson_Hash());
	}
	return Singleton;
}
template<> STEAMCOREWEB_API UScriptStruct* StaticStruct<FSteamCoreJson>()
{
	return FSteamCoreJson::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamCoreJson(FSteamCoreJson::StaticStruct, TEXT("/Script/SteamCoreWeb"), TEXT("SteamCoreJson"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCoreWeb_StaticRegisterNativesFSteamCoreJson
{
	FScriptStruct_SteamCoreWeb_StaticRegisterNativesFSteamCoreJson()
	{
		UScriptStruct::DeferCppStructOps<FSteamCoreJson>(FName(TEXT("SteamCoreJson")));
	}
} ScriptStruct_SteamCoreWeb_StaticRegisterNativesFSteamCoreJson;
	struct Z_Construct_UScriptStruct_FSteamCoreJson_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Number_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Number;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bool_MetaData[];
#endif
		static void NewProp_Bool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Bool;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamCoreJson_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreJson.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamCoreJson>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreJson" },
		{ "ModuleRelativePath", "Public/SteamCoreJson.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamCoreJson, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_String_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreJson" },
		{ "ModuleRelativePath", "Public/SteamCoreJson.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamCoreJson, String), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_String_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Number_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreJson" },
		{ "ModuleRelativePath", "Public/SteamCoreJson.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamCoreJson, Number), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Number_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Number_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Bool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreJson" },
		{ "ModuleRelativePath", "Public/SteamCoreJson.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Bool_SetBit(void* Obj)
	{
		((FSteamCoreJson*)Obj)->Bool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Bool = { "Bool", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSteamCoreJson), &Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Bool_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Bool_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Bool_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreJson" },
		{ "ModuleRelativePath", "Public/SteamCoreJson.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamCoreJson, Type), Z_Construct_UEnum_SteamCoreWeb_ESteamValueType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamCoreJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Number,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Bool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamCoreJson_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
		nullptr,
		&NewStructOps,
		"SteamCoreJson",
		sizeof(FSteamCoreJson),
		alignof(FSteamCoreJson),
		Z_Construct_UScriptStruct_FSteamCoreJson_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamCoreJson_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamCoreJson_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamCoreJson_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamCoreJson()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamCoreJson_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCoreWeb();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamCoreJson"), sizeof(FSteamCoreJson), Get_Z_Construct_UScriptStruct_FSteamCoreJson_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamCoreJson_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamCoreJson_Hash() { return 2866033722U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
