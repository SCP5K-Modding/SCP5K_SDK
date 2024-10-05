// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dismemberment/Public/ShortVector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShortVector() {}
// Cross Module References
	DISMEMBERMENT_API UScriptStruct* Z_Construct_UScriptStruct_FShortVector();
	UPackage* Z_Construct_UPackage__Script_Dismemberment();
// End Cross Module References
class UScriptStruct* FShortVector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISMEMBERMENT_API uint32 Get_Z_Construct_UScriptStruct_FShortVector_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShortVector, Z_Construct_UPackage__Script_Dismemberment(), TEXT("ShortVector"), sizeof(FShortVector), Get_Z_Construct_UScriptStruct_FShortVector_Hash());
	}
	return Singleton;
}
template<> DISMEMBERMENT_API UScriptStruct* StaticStruct<FShortVector>()
{
	return FShortVector::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShortVector(FShortVector::StaticStruct, TEXT("/Script/Dismemberment"), TEXT("ShortVector"), false, nullptr, nullptr);
static struct FScriptStruct_Dismemberment_StaticRegisterNativesFShortVector
{
	FScriptStruct_Dismemberment_StaticRegisterNativesFShortVector()
	{
		UScriptStruct::DeferCppStructOps<FShortVector>(FName(TEXT("ShortVector")));
	}
} ScriptStruct_Dismemberment_StaticRegisterNativesFShortVector;
	struct Z_Construct_UScriptStruct_FShortVector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShortVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShortVector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShortVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShortVector>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShortVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Dismemberment,
		nullptr,
		&NewStructOps,
		"ShortVector",
		sizeof(FShortVector),
		alignof(FShortVector),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShortVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShortVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShortVector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShortVector_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Dismemberment();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShortVector"), sizeof(FShortVector), Get_Z_Construct_UScriptStruct_FShortVector_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShortVector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShortVector_Hash() { return 2333292970U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
