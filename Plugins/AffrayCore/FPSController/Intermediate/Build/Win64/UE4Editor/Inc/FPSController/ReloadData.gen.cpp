// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/ReloadData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReloadData() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FReloadData();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
class UScriptStruct* FReloadData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FReloadData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReloadData, Z_Construct_UPackage__Script_FPSController(), TEXT("ReloadData"), sizeof(FReloadData), Get_Z_Construct_UScriptStruct_FReloadData_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FReloadData>()
{
	return FReloadData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReloadData(FReloadData::StaticStruct, TEXT("/Script/FPSController"), TEXT("ReloadData"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFReloadData
{
	FScriptStruct_FPSController_StaticRegisterNativesFReloadData()
	{
		UScriptStruct::DeferCppStructOps<FReloadData>(FName(TEXT("ReloadData")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFReloadData;
	struct Z_Construct_UScriptStruct_FReloadData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReloading_MetaData[];
#endif
		static void NewProp_bIsReloading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReloading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCancelled_MetaData[];
#endif
		static void NewProp_bCancelled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCancelled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSpeedReload_MetaData[];
#endif
		static void NewProp_bIsSpeedReload_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSpeedReload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReloadData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReloadData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReloadData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReloadData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReloadData_Statics::NewProp_bIsReloading_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ReloadData" },
		{ "ModuleRelativePath", "Public/ReloadData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReloadData_Statics::NewProp_bIsReloading_SetBit(void* Obj)
	{
		((FReloadData*)Obj)->bIsReloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReloadData_Statics::NewProp_bIsReloading = { "bIsReloading", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FReloadData), &Z_Construct_UScriptStruct_FReloadData_Statics::NewProp_bIsReloading_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReloadData_Statics::NewProp_bIsReloading_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReloadData_Statics::NewProp_bIsReloading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReloadData_Statics::NewProp_bCancelled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ReloadData" },
		{ "ModuleRelativePath", "Public/ReloadData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReloadData_Statics::NewProp_bCancelled_SetBit(void* Obj)
	{
		((FReloadData*)Obj)->bCancelled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReloadData_Statics::NewProp_bCancelled = { "bCancelled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FReloadData), &Z_Construct_UScriptStruct_FReloadData_Statics::NewProp_bCancelled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReloadData_Statics::NewProp_bCancelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReloadData_Statics::NewProp_bCancelled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReloadData_Statics::NewProp_bIsSpeedReload_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ReloadData" },
		{ "ModuleRelativePath", "Public/ReloadData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FReloadData_Statics::NewProp_bIsSpeedReload_SetBit(void* Obj)
	{
		((FReloadData*)Obj)->bIsSpeedReload = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReloadData_Statics::NewProp_bIsSpeedReload = { "bIsSpeedReload", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FReloadData), &Z_Construct_UScriptStruct_FReloadData_Statics::NewProp_bIsSpeedReload_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReloadData_Statics::NewProp_bIsSpeedReload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReloadData_Statics::NewProp_bIsSpeedReload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReloadData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReloadData_Statics::NewProp_bIsReloading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReloadData_Statics::NewProp_bCancelled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReloadData_Statics::NewProp_bIsSpeedReload,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReloadData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"ReloadData",
		sizeof(FReloadData),
		alignof(FReloadData),
		Z_Construct_UScriptStruct_FReloadData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReloadData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReloadData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReloadData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReloadData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReloadData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReloadData"), sizeof(FReloadData), Get_Z_Construct_UScriptStruct_FReloadData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReloadData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReloadData_Hash() { return 3076075569U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
