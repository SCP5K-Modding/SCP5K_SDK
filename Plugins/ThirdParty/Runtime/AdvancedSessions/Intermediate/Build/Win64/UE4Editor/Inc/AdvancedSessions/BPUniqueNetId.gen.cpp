// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Public/BPUniqueNetId.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPUniqueNetId() {}
// Cross Module References
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References
class UScriptStruct* FBPUniqueNetId::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPUniqueNetId_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPUniqueNetId, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPUniqueNetId"), sizeof(FBPUniqueNetId), Get_Z_Construct_UScriptStruct_FBPUniqueNetId_Hash());
	}
	return Singleton;
}
template<> ADVANCEDSESSIONS_API UScriptStruct* StaticStruct<FBPUniqueNetId>()
{
	return FBPUniqueNetId::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPUniqueNetId(FBPUniqueNetId::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPUniqueNetId"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPUniqueNetId
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPUniqueNetId()
	{
		UScriptStruct::DeferCppStructOps<FBPUniqueNetId>(FName(TEXT("BPUniqueNetId")));
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPUniqueNetId;
	struct Z_Construct_UScriptStruct_FBPUniqueNetId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BPUniqueNetId.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPUniqueNetId>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
		nullptr,
		&NewStructOps,
		"BPUniqueNetId",
		sizeof(FBPUniqueNetId),
		alignof(FBPUniqueNetId),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPUniqueNetId_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPUniqueNetId"), sizeof(FBPUniqueNetId), Get_Z_Construct_UScriptStruct_FBPUniqueNetId_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPUniqueNetId_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPUniqueNetId_Hash() { return 3337699329U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
