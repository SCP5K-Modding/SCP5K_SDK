// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAISquad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAISquad() {}
// Cross Module References
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FSAISquad();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
class UScriptStruct* FSAISquad::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AISENTIENCE_API uint32 Get_Z_Construct_UScriptStruct_FSAISquad_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSAISquad, Z_Construct_UPackage__Script_AISentience(), TEXT("SAISquad"), sizeof(FSAISquad), Get_Z_Construct_UScriptStruct_FSAISquad_Hash());
	}
	return Singleton;
}
template<> AISENTIENCE_API UScriptStruct* StaticStruct<FSAISquad>()
{
	return FSAISquad::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSAISquad(FSAISquad::StaticStruct, TEXT("/Script/AISentience"), TEXT("SAISquad"), false, nullptr, nullptr);
static struct FScriptStruct_AISentience_StaticRegisterNativesFSAISquad
{
	FScriptStruct_AISentience_StaticRegisterNativesFSAISquad()
	{
		UScriptStruct::DeferCppStructOps<FSAISquad>(FName(TEXT("SAISquad")));
	}
} ScriptStruct_AISentience_StaticRegisterNativesFSAISquad;
	struct Z_Construct_UScriptStruct_FSAISquad_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAISquad_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SAISquad.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSAISquad_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSAISquad>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSAISquad_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
		nullptr,
		&NewStructOps,
		"SAISquad",
		sizeof(FSAISquad),
		alignof(FSAISquad),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSAISquad_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAISquad_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSAISquad()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSAISquad_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SAISquad"), sizeof(FSAISquad), Get_Z_Construct_UScriptStruct_FSAISquad_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSAISquad_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSAISquad_Hash() { return 3274454282U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
