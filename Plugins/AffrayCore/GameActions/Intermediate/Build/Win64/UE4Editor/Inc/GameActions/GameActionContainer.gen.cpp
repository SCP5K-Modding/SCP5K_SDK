// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameActions/Public/GameActionContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameActionContainer() {}
// Cross Module References
	GAMEACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FGameActionContainer();
	UPackage* Z_Construct_UPackage__Script_GameActions();
	GAMEACTIONS_API UClass* Z_Construct_UClass_UGameAction_NoRegister();
// End Cross Module References
class UScriptStruct* FGameActionContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEACTIONS_API uint32 Get_Z_Construct_UScriptStruct_FGameActionContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameActionContainer, Z_Construct_UPackage__Script_GameActions(), TEXT("GameActionContainer"), sizeof(FGameActionContainer), Get_Z_Construct_UScriptStruct_FGameActionContainer_Hash());
	}
	return Singleton;
}
template<> GAMEACTIONS_API UScriptStruct* StaticStruct<FGameActionContainer>()
{
	return FGameActionContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameActionContainer(FGameActionContainer::StaticStruct, TEXT("/Script/GameActions"), TEXT("GameActionContainer"), false, nullptr, nullptr);
static struct FScriptStruct_GameActions_StaticRegisterNativesFGameActionContainer
{
	FScriptStruct_GameActions_StaticRegisterNativesFGameActionContainer()
	{
		UScriptStruct::DeferCppStructOps<FGameActionContainer>(FName(TEXT("GameActionContainer")));
	}
} ScriptStruct_GameActions_StaticRegisterNativesFGameActionContainer;
	struct Z_Construct_UScriptStruct_FGameActionContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameActionContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameActionContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameActionContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameActionContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameActionContainer_Statics::NewProp_Action_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameActionContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameActionContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameActionContainer_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameActionContainer, Action), Z_Construct_UClass_UGameAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameActionContainer_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameActionContainer_Statics::NewProp_Action_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameActionContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameActionContainer_Statics::NewProp_Action,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameActionContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameActions,
		nullptr,
		&NewStructOps,
		"GameActionContainer",
		sizeof(FGameActionContainer),
		alignof(FGameActionContainer),
		Z_Construct_UScriptStruct_FGameActionContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameActionContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameActionContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameActionContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameActionContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameActionContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameActions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameActionContainer"), sizeof(FGameActionContainer), Get_Z_Construct_UScriptStruct_FGameActionContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameActionContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameActionContainer_Hash() { return 1866426399U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
