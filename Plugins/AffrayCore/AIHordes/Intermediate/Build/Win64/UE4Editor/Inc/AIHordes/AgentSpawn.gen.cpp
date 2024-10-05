// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIHordes/Public/AgentSpawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgentSpawn() {}
// Cross Module References
	AIHORDES_API UScriptStruct* Z_Construct_UScriptStruct_FAgentSpawn();
	UPackage* Z_Construct_UPackage__Script_AIHordes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIHORDES_API UClass* Z_Construct_UClass_AHordeAgent_NoRegister();
// End Cross Module References
class UScriptStruct* FAgentSpawn::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIHORDES_API uint32 Get_Z_Construct_UScriptStruct_FAgentSpawn_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAgentSpawn, Z_Construct_UPackage__Script_AIHordes(), TEXT("AgentSpawn"), sizeof(FAgentSpawn), Get_Z_Construct_UScriptStruct_FAgentSpawn_Hash());
	}
	return Singleton;
}
template<> AIHORDES_API UScriptStruct* StaticStruct<FAgentSpawn>()
{
	return FAgentSpawn::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAgentSpawn(FAgentSpawn::StaticStruct, TEXT("/Script/AIHordes"), TEXT("AgentSpawn"), false, nullptr, nullptr);
static struct FScriptStruct_AIHordes_StaticRegisterNativesFAgentSpawn
{
	FScriptStruct_AIHordes_StaticRegisterNativesFAgentSpawn()
	{
		UScriptStruct::DeferCppStructOps<FAgentSpawn>(FName(TEXT("AgentSpawn")));
	}
} ScriptStruct_AIHordes_StaticRegisterNativesFAgentSpawn;
	struct Z_Construct_UScriptStruct_FAgentSpawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentSpawn_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgentSpawn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAgentSpawn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAgentSpawn>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentSpawn_Statics::NewProp_Class_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AgentSpawn" },
		{ "ModuleRelativePath", "Public/AgentSpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAgentSpawn_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentSpawn, Class), Z_Construct_UClass_AHordeAgent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentSpawn_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentSpawn_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAgentSpawn_Statics::NewProp_Weight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AgentSpawn" },
		{ "ModuleRelativePath", "Public/AgentSpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAgentSpawn_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAgentSpawn, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentSpawn_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentSpawn_Statics::NewProp_Weight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAgentSpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentSpawn_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgentSpawn_Statics::NewProp_Weight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAgentSpawn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIHordes,
		nullptr,
		&NewStructOps,
		"AgentSpawn",
		sizeof(FAgentSpawn),
		alignof(FAgentSpawn),
		Z_Construct_UScriptStruct_FAgentSpawn_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentSpawn_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAgentSpawn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgentSpawn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAgentSpawn()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAgentSpawn_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIHordes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AgentSpawn"), sizeof(FAgentSpawn), Get_Z_Construct_UScriptStruct_FAgentSpawn_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAgentSpawn_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAgentSpawn_Hash() { return 930432411U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
