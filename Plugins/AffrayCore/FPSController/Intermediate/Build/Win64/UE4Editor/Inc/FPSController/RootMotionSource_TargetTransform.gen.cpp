// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/RootMotionSource_TargetTransform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootMotionSource_TargetTransform() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_TargetTransform();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce();
// End Cross Module References

static_assert(std::is_polymorphic<FRootMotionSource_TargetTransform>() == std::is_polymorphic<FRootMotionSource_MoveToForce>(), "USTRUCT FRootMotionSource_TargetTransform cannot be polymorphic unless super FRootMotionSource_MoveToForce is polymorphic");

class UScriptStruct* FRootMotionSource_TargetTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_TargetTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_TargetTransform, Z_Construct_UPackage__Script_FPSController(), TEXT("RootMotionSource_TargetTransform"), sizeof(FRootMotionSource_TargetTransform), Get_Z_Construct_UScriptStruct_FRootMotionSource_TargetTransform_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FRootMotionSource_TargetTransform>()
{
	return FRootMotionSource_TargetTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionSource_TargetTransform(FRootMotionSource_TargetTransform::StaticStruct, TEXT("/Script/FPSController"), TEXT("RootMotionSource_TargetTransform"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFRootMotionSource_TargetTransform
{
	FScriptStruct_FPSController_StaticRegisterNativesFRootMotionSource_TargetTransform()
	{
		UScriptStruct::DeferCppStructOps<FRootMotionSource_TargetTransform>(FName(TEXT("RootMotionSource_TargetTransform")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFRootMotionSource_TargetTransform;
	struct Z_Construct_UScriptStruct_FRootMotionSource_TargetTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_TargetTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RootMotionSource_TargetTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootMotionSource_TargetTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSource_TargetTransform>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionSource_TargetTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce,
		&NewStructOps,
		"RootMotionSource_TargetTransform",
		sizeof(FRootMotionSource_TargetTransform),
		alignof(FRootMotionSource_TargetTransform),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_TargetTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_TargetTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_TargetTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_TargetTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionSource_TargetTransform"), sizeof(FRootMotionSource_TargetTransform), Get_Z_Construct_UScriptStruct_FRootMotionSource_TargetTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRootMotionSource_TargetTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_TargetTransform_Hash() { return 2177526725U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
