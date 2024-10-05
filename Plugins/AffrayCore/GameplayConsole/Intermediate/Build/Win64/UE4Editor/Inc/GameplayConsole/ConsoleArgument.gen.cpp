// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayConsole/Public/ConsoleArgument.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsoleArgument() {}
// Cross Module References
	GAMEPLAYCONSOLE_API UScriptStruct* Z_Construct_UScriptStruct_FConsoleArgument();
	UPackage* Z_Construct_UPackage__Script_GameplayConsole();
// End Cross Module References
class UScriptStruct* FConsoleArgument::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYCONSOLE_API uint32 Get_Z_Construct_UScriptStruct_FConsoleArgument_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConsoleArgument, Z_Construct_UPackage__Script_GameplayConsole(), TEXT("ConsoleArgument"), sizeof(FConsoleArgument), Get_Z_Construct_UScriptStruct_FConsoleArgument_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYCONSOLE_API UScriptStruct* StaticStruct<FConsoleArgument>()
{
	return FConsoleArgument::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConsoleArgument(FConsoleArgument::StaticStruct, TEXT("/Script/GameplayConsole"), TEXT("ConsoleArgument"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayConsole_StaticRegisterNativesFConsoleArgument
{
	FScriptStruct_GameplayConsole_StaticRegisterNativesFConsoleArgument()
	{
		UScriptStruct::DeferCppStructOps<FConsoleArgument>(FName(TEXT("ConsoleArgument")));
	}
} ScriptStruct_GameplayConsole_StaticRegisterNativesFConsoleArgument;
	struct Z_Construct_UScriptStruct_FConsoleArgument_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleArgument_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ConsoleArgument.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConsoleArgument_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConsoleArgument>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsoleArgument_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConsoleArgument" },
		{ "ModuleRelativePath", "Public/ConsoleArgument.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConsoleArgument_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConsoleArgument, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleArgument_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleArgument_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConsoleArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsoleArgument_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConsoleArgument_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayConsole,
		nullptr,
		&NewStructOps,
		"ConsoleArgument",
		sizeof(FConsoleArgument),
		alignof(FConsoleArgument),
		Z_Construct_UScriptStruct_FConsoleArgument_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleArgument_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConsoleArgument_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsoleArgument_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConsoleArgument()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConsoleArgument_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayConsole();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConsoleArgument"), sizeof(FConsoleArgument), Get_Z_Construct_UScriptStruct_FConsoleArgument_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConsoleArgument_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConsoleArgument_Hash() { return 3042508403U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
