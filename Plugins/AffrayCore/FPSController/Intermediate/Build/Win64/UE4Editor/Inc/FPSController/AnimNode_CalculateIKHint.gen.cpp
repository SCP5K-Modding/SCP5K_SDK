// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/AnimNode_CalculateIKHint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_CalculateIKHint() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_CalculateIKHint>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_CalculateIKHint cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FAnimNode_CalculateIKHint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint, Z_Construct_UPackage__Script_FPSController(), TEXT("AnimNode_CalculateIKHint"), sizeof(FAnimNode_CalculateIKHint), Get_Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FAnimNode_CalculateIKHint>()
{
	return FAnimNode_CalculateIKHint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_CalculateIKHint(FAnimNode_CalculateIKHint::StaticStruct, TEXT("/Script/FPSController"), TEXT("AnimNode_CalculateIKHint"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFAnimNode_CalculateIKHint
{
	FScriptStruct_FPSController_StaticRegisterNativesFAnimNode_CalculateIKHint()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_CalculateIKHint>(FName(TEXT("AnimNode_CalculateIKHint")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFAnimNode_CalculateIKHint;
	struct Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HintDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HintDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneToModify_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneToModify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TopBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MiddleBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_CalculateIKHint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_CalculateIKHint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_HintDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_CalculateIKHint" },
		{ "ModuleRelativePath", "Public/AnimNode_CalculateIKHint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_HintDistance = { "HintDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_CalculateIKHint, HintDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_HintDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_HintDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_BoneToModify_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_CalculateIKHint" },
		{ "ModuleRelativePath", "Public/AnimNode_CalculateIKHint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_BoneToModify = { "BoneToModify", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_CalculateIKHint, BoneToModify), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_BoneToModify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_BoneToModify_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_TopBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_CalculateIKHint" },
		{ "ModuleRelativePath", "Public/AnimNode_CalculateIKHint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_TopBone = { "TopBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_CalculateIKHint, TopBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_TopBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_TopBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_MiddleBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_CalculateIKHint" },
		{ "ModuleRelativePath", "Public/AnimNode_CalculateIKHint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_MiddleBone = { "MiddleBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_CalculateIKHint, MiddleBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_MiddleBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_MiddleBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_EndBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_CalculateIKHint" },
		{ "ModuleRelativePath", "Public/AnimNode_CalculateIKHint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_EndBone = { "EndBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_CalculateIKHint, EndBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_EndBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_EndBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_HintDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_BoneToModify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_TopBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_MiddleBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::NewProp_EndBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_CalculateIKHint",
		sizeof(FAnimNode_CalculateIKHint),
		alignof(FAnimNode_CalculateIKHint),
		Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_CalculateIKHint"), sizeof(FAnimNode_CalculateIKHint), Get_Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CalculateIKHint_Hash() { return 494945701U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
