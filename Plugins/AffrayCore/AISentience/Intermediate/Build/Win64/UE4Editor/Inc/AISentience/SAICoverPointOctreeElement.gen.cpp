// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAICoverPointOctreeElement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAICoverPointOctreeElement() {}
// Cross Module References
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FSAICoverPointOctreeElement();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
class UScriptStruct* FSAICoverPointOctreeElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AISENTIENCE_API uint32 Get_Z_Construct_UScriptStruct_FSAICoverPointOctreeElement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSAICoverPointOctreeElement, Z_Construct_UPackage__Script_AISentience(), TEXT("SAICoverPointOctreeElement"), sizeof(FSAICoverPointOctreeElement), Get_Z_Construct_UScriptStruct_FSAICoverPointOctreeElement_Hash());
	}
	return Singleton;
}
template<> AISENTIENCE_API UScriptStruct* StaticStruct<FSAICoverPointOctreeElement>()
{
	return FSAICoverPointOctreeElement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSAICoverPointOctreeElement(FSAICoverPointOctreeElement::StaticStruct, TEXT("/Script/AISentience"), TEXT("SAICoverPointOctreeElement"), false, nullptr, nullptr);
static struct FScriptStruct_AISentience_StaticRegisterNativesFSAICoverPointOctreeElement
{
	FScriptStruct_AISentience_StaticRegisterNativesFSAICoverPointOctreeElement()
	{
		UScriptStruct::DeferCppStructOps<FSAICoverPointOctreeElement>(FName(TEXT("SAICoverPointOctreeElement")));
	}
} ScriptStruct_AISentience_StaticRegisterNativesFSAICoverPointOctreeElement;
	struct Z_Construct_UScriptStruct_FSAICoverPointOctreeElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAICoverPointOctreeElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SAICoverPointOctreeElement.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSAICoverPointOctreeElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSAICoverPointOctreeElement>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSAICoverPointOctreeElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
		nullptr,
		&NewStructOps,
		"SAICoverPointOctreeElement",
		sizeof(FSAICoverPointOctreeElement),
		alignof(FSAICoverPointOctreeElement),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSAICoverPointOctreeElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAICoverPointOctreeElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSAICoverPointOctreeElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSAICoverPointOctreeElement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SAICoverPointOctreeElement"), sizeof(FSAICoverPointOctreeElement), Get_Z_Construct_UScriptStruct_FSAICoverPointOctreeElement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSAICoverPointOctreeElement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSAICoverPointOctreeElement_Hash() { return 2364133628U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
