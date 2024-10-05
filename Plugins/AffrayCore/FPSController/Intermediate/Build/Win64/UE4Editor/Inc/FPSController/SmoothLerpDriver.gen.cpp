// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/SmoothLerpDriver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmoothLerpDriver() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSmoothLerpDriver();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
class UScriptStruct* FSmoothLerpDriver::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FSmoothLerpDriver_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmoothLerpDriver, Z_Construct_UPackage__Script_FPSController(), TEXT("SmoothLerpDriver"), sizeof(FSmoothLerpDriver), Get_Z_Construct_UScriptStruct_FSmoothLerpDriver_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FSmoothLerpDriver>()
{
	return FSmoothLerpDriver::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSmoothLerpDriver(FSmoothLerpDriver::StaticStruct, TEXT("/Script/FPSController"), TEXT("SmoothLerpDriver"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFSmoothLerpDriver
{
	FScriptStruct_FPSController_StaticRegisterNativesFSmoothLerpDriver()
	{
		UScriptStruct::DeferCppStructOps<FSmoothLerpDriver>(FName(TEXT("SmoothLerpDriver")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFSmoothLerpDriver;
	struct Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SmoothLerpDriver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmoothLerpDriver>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::NewProp_LerpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SmoothLerpDriver" },
		{ "ModuleRelativePath", "Public/SmoothLerpDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::NewProp_LerpSpeed = { "LerpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmoothLerpDriver, LerpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::NewProp_LerpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::NewProp_LerpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::NewProp_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SmoothLerpDriver" },
		{ "ModuleRelativePath", "Public/SmoothLerpDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmoothLerpDriver, Target), METADATA_PARAMS(Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::NewProp_Current_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SmoothLerpDriver" },
		{ "ModuleRelativePath", "Public/SmoothLerpDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmoothLerpDriver, Current), METADATA_PARAMS(Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::NewProp_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::NewProp_Current_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::NewProp_LerpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::NewProp_Current,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"SmoothLerpDriver",
		sizeof(FSmoothLerpDriver),
		alignof(FSmoothLerpDriver),
		Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmoothLerpDriver()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSmoothLerpDriver_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SmoothLerpDriver"), sizeof(FSmoothLerpDriver), Get_Z_Construct_UScriptStruct_FSmoothLerpDriver_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSmoothLerpDriver_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSmoothLerpDriver_Hash() { return 2186451883U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
