// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SplinePath.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplinePath() {}
// Cross Module References
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FSplinePath();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
class UScriptStruct* FSplinePath::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AISENTIENCE_API uint32 Get_Z_Construct_UScriptStruct_FSplinePath_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplinePath, Z_Construct_UPackage__Script_AISentience(), TEXT("SplinePath"), sizeof(FSplinePath), Get_Z_Construct_UScriptStruct_FSplinePath_Hash());
	}
	return Singleton;
}
template<> AISENTIENCE_API UScriptStruct* StaticStruct<FSplinePath>()
{
	return FSplinePath::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSplinePath(FSplinePath::StaticStruct, TEXT("/Script/AISentience"), TEXT("SplinePath"), false, nullptr, nullptr);
static struct FScriptStruct_AISentience_StaticRegisterNativesFSplinePath
{
	FScriptStruct_AISentience_StaticRegisterNativesFSplinePath()
	{
		UScriptStruct::DeferCppStructOps<FSplinePath>(FName(TEXT("SplinePath")));
	}
} ScriptStruct_AISentience_StaticRegisterNativesFSplinePath;
	struct Z_Construct_UScriptStruct_FSplinePath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplinePath_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SplinePath.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSplinePath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplinePath>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplinePath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
		nullptr,
		&NewStructOps,
		"SplinePath",
		sizeof(FSplinePath),
		alignof(FSplinePath),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSplinePath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplinePath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSplinePath()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSplinePath_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SplinePath"), sizeof(FSplinePath), Get_Z_Construct_UScriptStruct_FSplinePath_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSplinePath_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSplinePath_Hash() { return 3746204561U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
