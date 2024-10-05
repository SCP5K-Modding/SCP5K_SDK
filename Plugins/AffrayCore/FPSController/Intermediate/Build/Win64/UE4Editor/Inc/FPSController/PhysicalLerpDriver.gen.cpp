// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/PhysicalLerpDriver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalLerpDriver() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalLerpDriver();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
class UScriptStruct* FPhysicalLerpDriver::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FPhysicalLerpDriver_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalLerpDriver, Z_Construct_UPackage__Script_FPSController(), TEXT("PhysicalLerpDriver"), sizeof(FPhysicalLerpDriver), Get_Z_Construct_UScriptStruct_FPhysicalLerpDriver_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FPhysicalLerpDriver>()
{
	return FPhysicalLerpDriver::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhysicalLerpDriver(FPhysicalLerpDriver::StaticStruct, TEXT("/Script/FPSController"), TEXT("PhysicalLerpDriver"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFPhysicalLerpDriver
{
	FScriptStruct_FPSController_StaticRegisterNativesFPhysicalLerpDriver()
	{
		UScriptStruct::DeferCppStructOps<FPhysicalLerpDriver>(FName(TEXT("PhysicalLerpDriver")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFPhysicalLerpDriver;
	struct Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityLerpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityLerpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PhysicalLerpDriver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalLerpDriver>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_LerpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhysicalLerpDriver" },
		{ "ModuleRelativePath", "Public/PhysicalLerpDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_LerpSpeed = { "LerpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalLerpDriver, LerpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_LerpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_LerpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_VelocityLerpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhysicalLerpDriver" },
		{ "ModuleRelativePath", "Public/PhysicalLerpDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_VelocityLerpSpeed = { "VelocityLerpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalLerpDriver, VelocityLerpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_VelocityLerpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_VelocityLerpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhysicalLerpDriver" },
		{ "ModuleRelativePath", "Public/PhysicalLerpDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalLerpDriver, Target), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_Current_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhysicalLerpDriver" },
		{ "ModuleRelativePath", "Public/PhysicalLerpDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalLerpDriver, Current), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_Current_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_CurrentVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhysicalLerpDriver" },
		{ "ModuleRelativePath", "Public/PhysicalLerpDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_CurrentVelocity = { "CurrentVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalLerpDriver, CurrentVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_CurrentVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_CurrentVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_LerpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_VelocityLerpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_Current,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::NewProp_CurrentVelocity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"PhysicalLerpDriver",
		sizeof(FPhysicalLerpDriver),
		alignof(FPhysicalLerpDriver),
		Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicalLerpDriver()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhysicalLerpDriver_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhysicalLerpDriver"), sizeof(FPhysicalLerpDriver), Get_Z_Construct_UScriptStruct_FPhysicalLerpDriver_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhysicalLerpDriver_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhysicalLerpDriver_Hash() { return 1515307399U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
