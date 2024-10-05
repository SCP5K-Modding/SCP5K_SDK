// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/AIInteractionAnimations.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIInteractionAnimations() {}
// Cross Module References
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FAIInteractionAnimations();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
class UScriptStruct* FAIInteractionAnimations::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AISENTIENCE_API uint32 Get_Z_Construct_UScriptStruct_FAIInteractionAnimations_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIInteractionAnimations, Z_Construct_UPackage__Script_AISentience(), TEXT("AIInteractionAnimations"), sizeof(FAIInteractionAnimations), Get_Z_Construct_UScriptStruct_FAIInteractionAnimations_Hash());
	}
	return Singleton;
}
template<> AISENTIENCE_API UScriptStruct* StaticStruct<FAIInteractionAnimations>()
{
	return FAIInteractionAnimations::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIInteractionAnimations(FAIInteractionAnimations::StaticStruct, TEXT("/Script/AISentience"), TEXT("AIInteractionAnimations"), false, nullptr, nullptr);
static struct FScriptStruct_AISentience_StaticRegisterNativesFAIInteractionAnimations
{
	FScriptStruct_AISentience_StaticRegisterNativesFAIInteractionAnimations()
	{
		UScriptStruct::DeferCppStructOps<FAIInteractionAnimations>(FName(TEXT("AIInteractionAnimations")));
	}
} ScriptStruct_AISentience_StaticRegisterNativesFAIInteractionAnimations;
	struct Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractBegin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractBegin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractLoop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractInterupt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractInterupt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AIInteractionAnimations.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIInteractionAnimations>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::NewProp_InteractBegin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIInteractionAnimations" },
		{ "ModuleRelativePath", "Public/AIInteractionAnimations.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::NewProp_InteractBegin = { "InteractBegin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIInteractionAnimations, InteractBegin), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::NewProp_InteractBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::NewProp_InteractBegin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::NewProp_InteractLoop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIInteractionAnimations" },
		{ "ModuleRelativePath", "Public/AIInteractionAnimations.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::NewProp_InteractLoop = { "InteractLoop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIInteractionAnimations, InteractLoop), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::NewProp_InteractLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::NewProp_InteractLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::NewProp_InteractEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIInteractionAnimations" },
		{ "ModuleRelativePath", "Public/AIInteractionAnimations.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::NewProp_InteractEnd = { "InteractEnd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIInteractionAnimations, InteractEnd), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::NewProp_InteractEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::NewProp_InteractEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::NewProp_InteractInterupt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIInteractionAnimations" },
		{ "ModuleRelativePath", "Public/AIInteractionAnimations.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::NewProp_InteractInterupt = { "InteractInterupt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIInteractionAnimations, InteractInterupt), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::NewProp_InteractInterupt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::NewProp_InteractInterupt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::NewProp_InteractBegin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::NewProp_InteractLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::NewProp_InteractEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::NewProp_InteractInterupt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
		nullptr,
		&NewStructOps,
		"AIInteractionAnimations",
		sizeof(FAIInteractionAnimations),
		alignof(FAIInteractionAnimations),
		Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIInteractionAnimations()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIInteractionAnimations_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIInteractionAnimations"), sizeof(FAIInteractionAnimations), Get_Z_Construct_UScriptStruct_FAIInteractionAnimations_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIInteractionAnimations_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIInteractionAnimations_Hash() { return 2248707749U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
