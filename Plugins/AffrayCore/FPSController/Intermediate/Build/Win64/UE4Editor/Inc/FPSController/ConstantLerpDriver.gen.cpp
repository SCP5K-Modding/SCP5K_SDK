// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/ConstantLerpDriver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstantLerpDriver() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FConstantLerpDriver();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
class UScriptStruct* FConstantLerpDriver::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FConstantLerpDriver_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstantLerpDriver, Z_Construct_UPackage__Script_FPSController(), TEXT("ConstantLerpDriver"), sizeof(FConstantLerpDriver), Get_Z_Construct_UScriptStruct_FConstantLerpDriver_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FConstantLerpDriver>()
{
	return FConstantLerpDriver::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstantLerpDriver(FConstantLerpDriver::StaticStruct, TEXT("/Script/FPSController"), TEXT("ConstantLerpDriver"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFConstantLerpDriver
{
	FScriptStruct_FPSController_StaticRegisterNativesFConstantLerpDriver()
	{
		UScriptStruct::DeferCppStructOps<FConstantLerpDriver>(FName(TEXT("ConstantLerpDriver")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFConstantLerpDriver;
	struct Z_Construct_UScriptStruct_FConstantLerpDriver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LerpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LerpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Current;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ConstantLerpDriver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstantLerpDriver>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::NewProp_LerpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstantLerpDriver" },
		{ "ModuleRelativePath", "Public/ConstantLerpDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::NewProp_LerpSpeed = { "LerpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstantLerpDriver, LerpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::NewProp_LerpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::NewProp_LerpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::NewProp_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstantLerpDriver" },
		{ "ModuleRelativePath", "Public/ConstantLerpDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstantLerpDriver, Target), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::NewProp_Current_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConstantLerpDriver" },
		{ "ModuleRelativePath", "Public/ConstantLerpDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstantLerpDriver, Current), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::NewProp_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::NewProp_Current_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::NewProp_LerpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::NewProp_Current,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"ConstantLerpDriver",
		sizeof(FConstantLerpDriver),
		alignof(FConstantLerpDriver),
		Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstantLerpDriver()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstantLerpDriver_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstantLerpDriver"), sizeof(FConstantLerpDriver), Get_Z_Construct_UScriptStruct_FConstantLerpDriver_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConstantLerpDriver_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstantLerpDriver_Hash() { return 2031744331U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
