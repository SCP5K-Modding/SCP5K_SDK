// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordVoice/Public/DiscordInputMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordInputMode() {}
// Cross Module References
	DISCORDVOICE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordInputMode();
	UPackage* Z_Construct_UPackage__Script_DiscordVoice();
	DISCORDVOICE_API UEnum* Z_Construct_UEnum_DiscordVoice_EDiscordInputModeType();
// End Cross Module References
class UScriptStruct* FDiscordInputMode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDVOICE_API uint32 Get_Z_Construct_UScriptStruct_FDiscordInputMode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordInputMode, Z_Construct_UPackage__Script_DiscordVoice(), TEXT("DiscordInputMode"), sizeof(FDiscordInputMode), Get_Z_Construct_UScriptStruct_FDiscordInputMode_Hash());
	}
	return Singleton;
}
template<> DISCORDVOICE_API UScriptStruct* StaticStruct<FDiscordInputMode>()
{
	return FDiscordInputMode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordInputMode(FDiscordInputMode::StaticStruct, TEXT("/Script/DiscordVoice"), TEXT("DiscordInputMode"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordVoice_StaticRegisterNativesFDiscordInputMode
{
	FScriptStruct_DiscordVoice_StaticRegisterNativesFDiscordInputMode()
	{
		UScriptStruct::DeferCppStructOps<FDiscordInputMode>(FName(TEXT("DiscordInputMode")));
	}
} ScriptStruct_DiscordVoice_StaticRegisterNativesFDiscordInputMode;
	struct Z_Construct_UScriptStruct_FDiscordInputMode_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shortcut_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Shortcut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordInputMode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordInputMode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordInputMode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordInputMode>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDiscordInputMode_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordInputMode_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordInputMode" },
		{ "ModuleRelativePath", "Public/DiscordInputMode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDiscordInputMode_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordInputMode, Type), Z_Construct_UEnum_DiscordVoice_EDiscordInputModeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordInputMode_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordInputMode_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordInputMode_Statics::NewProp_Shortcut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordInputMode" },
		{ "ModuleRelativePath", "Public/DiscordInputMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordInputMode_Statics::NewProp_Shortcut = { "Shortcut", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordInputMode, Shortcut), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordInputMode_Statics::NewProp_Shortcut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordInputMode_Statics::NewProp_Shortcut_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordInputMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordInputMode_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordInputMode_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordInputMode_Statics::NewProp_Shortcut,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordInputMode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordVoice,
		nullptr,
		&NewStructOps,
		"DiscordInputMode",
		sizeof(FDiscordInputMode),
		alignof(FDiscordInputMode),
		Z_Construct_UScriptStruct_FDiscordInputMode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordInputMode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordInputMode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordInputMode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordInputMode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordInputMode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordVoice();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordInputMode"), sizeof(FDiscordInputMode), Get_Z_Construct_UScriptStruct_FDiscordInputMode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordInputMode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordInputMode_Hash() { return 2781311825U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
