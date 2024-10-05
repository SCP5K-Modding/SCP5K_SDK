// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Public/SessionPropertyKeyPair.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSessionPropertyKeyPair() {}
// Cross Module References
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSessionPropertyKeyPair();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References
class UScriptStruct* FSessionPropertyKeyPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionPropertyKeyPair, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("SessionPropertyKeyPair"), sizeof(FSessionPropertyKeyPair), Get_Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Hash());
	}
	return Singleton;
}
template<> ADVANCEDSESSIONS_API UScriptStruct* StaticStruct<FSessionPropertyKeyPair>()
{
	return FSessionPropertyKeyPair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSessionPropertyKeyPair(FSessionPropertyKeyPair::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("SessionPropertyKeyPair"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFSessionPropertyKeyPair
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFSessionPropertyKeyPair()
	{
		UScriptStruct::DeferCppStructOps<FSessionPropertyKeyPair>(FName(TEXT("SessionPropertyKeyPair")));
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFSessionPropertyKeyPair;
	struct Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SessionPropertyKeyPair.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionPropertyKeyPair>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
		nullptr,
		&NewStructOps,
		"SessionPropertyKeyPair",
		sizeof(FSessionPropertyKeyPair),
		alignof(FSessionPropertyKeyPair),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSessionPropertyKeyPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SessionPropertyKeyPair"), sizeof(FSessionPropertyKeyPair), Get_Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSessionPropertyKeyPair_Hash() { return 1372075227U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
