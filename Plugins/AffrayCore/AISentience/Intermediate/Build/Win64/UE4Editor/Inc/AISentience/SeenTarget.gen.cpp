// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SeenTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeenTarget() {}
// Cross Module References
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FSeenTarget();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
class UScriptStruct* FSeenTarget::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AISENTIENCE_API uint32 Get_Z_Construct_UScriptStruct_FSeenTarget_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSeenTarget, Z_Construct_UPackage__Script_AISentience(), TEXT("SeenTarget"), sizeof(FSeenTarget), Get_Z_Construct_UScriptStruct_FSeenTarget_Hash());
	}
	return Singleton;
}
template<> AISENTIENCE_API UScriptStruct* StaticStruct<FSeenTarget>()
{
	return FSeenTarget::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSeenTarget(FSeenTarget::StaticStruct, TEXT("/Script/AISentience"), TEXT("SeenTarget"), false, nullptr, nullptr);
static struct FScriptStruct_AISentience_StaticRegisterNativesFSeenTarget
{
	FScriptStruct_AISentience_StaticRegisterNativesFSeenTarget()
	{
		UScriptStruct::DeferCppStructOps<FSeenTarget>(FName(TEXT("SeenTarget")));
	}
} ScriptStruct_AISentience_StaticRegisterNativesFSeenTarget;
	struct Z_Construct_UScriptStruct_FSeenTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeenCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeenCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectedAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectedAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSeenTarget_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SeenTarget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSeenTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSeenTarget>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSeenTarget_Statics::NewProp_SeenCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SeenTarget" },
		{ "ModuleRelativePath", "Public/SeenTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSeenTarget_Statics::NewProp_SeenCharacter = { "SeenCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSeenTarget, SeenCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSeenTarget_Statics::NewProp_SeenCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeenTarget_Statics::NewProp_SeenCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSeenTarget_Statics::NewProp_DetectedAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SeenTarget" },
		{ "ModuleRelativePath", "Public/SeenTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSeenTarget_Statics::NewProp_DetectedAmount = { "DetectedAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSeenTarget, DetectedAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSeenTarget_Statics::NewProp_DetectedAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeenTarget_Statics::NewProp_DetectedAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSeenTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeenTarget_Statics::NewProp_SeenCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeenTarget_Statics::NewProp_DetectedAmount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSeenTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
		nullptr,
		&NewStructOps,
		"SeenTarget",
		sizeof(FSeenTarget),
		alignof(FSeenTarget),
		Z_Construct_UScriptStruct_FSeenTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeenTarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSeenTarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeenTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSeenTarget()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSeenTarget_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SeenTarget"), sizeof(FSeenTarget), Get_Z_Construct_UScriptStruct_FSeenTarget_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSeenTarget_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSeenTarget_Hash() { return 1212571460U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
