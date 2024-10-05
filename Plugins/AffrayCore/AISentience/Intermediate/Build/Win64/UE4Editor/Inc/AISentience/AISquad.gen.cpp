// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/AISquad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISquad() {}
// Cross Module References
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FAISquad();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
class UScriptStruct* FAISquad::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AISENTIENCE_API uint32 Get_Z_Construct_UScriptStruct_FAISquad_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAISquad, Z_Construct_UPackage__Script_AISentience(), TEXT("AISquad"), sizeof(FAISquad), Get_Z_Construct_UScriptStruct_FAISquad_Hash());
	}
	return Singleton;
}
template<> AISENTIENCE_API UScriptStruct* StaticStruct<FAISquad>()
{
	return FAISquad::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAISquad(FAISquad::StaticStruct, TEXT("/Script/AISentience"), TEXT("AISquad"), false, nullptr, nullptr);
static struct FScriptStruct_AISentience_StaticRegisterNativesFAISquad
{
	FScriptStruct_AISentience_StaticRegisterNativesFAISquad()
	{
		UScriptStruct::DeferCppStructOps<FAISquad>(FName(TEXT("AISquad")));
	}
} ScriptStruct_AISentience_StaticRegisterNativesFAISquad;
	struct Z_Construct_UScriptStruct_FAISquad_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SquadMembers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SquadMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SquadMembers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISquad_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AISquad.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAISquad_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAISquad>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAISquad_Statics::NewProp_SquadMembers_Inner = { "SquadMembers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISquad_Statics::NewProp_SquadMembers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISquad" },
		{ "ModuleRelativePath", "Public/AISquad.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAISquad_Statics::NewProp_SquadMembers = { "SquadMembers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISquad, SquadMembers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISquad_Statics::NewProp_SquadMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISquad_Statics::NewProp_SquadMembers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAISquad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISquad_Statics::NewProp_SquadMembers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISquad_Statics::NewProp_SquadMembers,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAISquad_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
		nullptr,
		&NewStructOps,
		"AISquad",
		sizeof(FAISquad),
		alignof(FAISquad),
		Z_Construct_UScriptStruct_FAISquad_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISquad_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAISquad_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISquad_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAISquad()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAISquad_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AISquad"), sizeof(FAISquad), Get_Z_Construct_UScriptStruct_FAISquad_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAISquad_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAISquad_Hash() { return 1369872196U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
