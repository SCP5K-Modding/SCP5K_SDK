// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayObjectives/Public/SimpleObjectiveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleObjectiveData() {}
// Cross Module References
	GAMEPLAYOBJECTIVES_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleObjectiveData();
	UPackage* Z_Construct_UPackage__Script_GameplayObjectives();
// End Cross Module References
class UScriptStruct* FSimpleObjectiveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYOBJECTIVES_API uint32 Get_Z_Construct_UScriptStruct_FSimpleObjectiveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleObjectiveData, Z_Construct_UPackage__Script_GameplayObjectives(), TEXT("SimpleObjectiveData"), sizeof(FSimpleObjectiveData), Get_Z_Construct_UScriptStruct_FSimpleObjectiveData_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYOBJECTIVES_API UScriptStruct* StaticStruct<FSimpleObjectiveData>()
{
	return FSimpleObjectiveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSimpleObjectiveData(FSimpleObjectiveData::StaticStruct, TEXT("/Script/GameplayObjectives"), TEXT("SimpleObjectiveData"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayObjectives_StaticRegisterNativesFSimpleObjectiveData
{
	FScriptStruct_GameplayObjectives_StaticRegisterNativesFSimpleObjectiveData()
	{
		UScriptStruct::DeferCppStructOps<FSimpleObjectiveData>(FName(TEXT("SimpleObjectiveData")));
	}
} ScriptStruct_GameplayObjectives_StaticRegisterNativesFSimpleObjectiveData;
	struct Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectiveName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStarted_MetaData[];
#endif
		static void NewProp_bStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComplete_MetaData[];
#endif
		static void NewProp_bComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSucceeded_MetaData[];
#endif
		static void NewProp_bSucceeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleObjectiveData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleObjectiveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_ObjectiveName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleObjectiveData" },
		{ "ModuleRelativePath", "Public/SimpleObjectiveData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_ObjectiveName = { "ObjectiveName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleObjectiveData, ObjectiveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_ObjectiveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_ObjectiveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleObjectiveData" },
		{ "ModuleRelativePath", "Public/SimpleObjectiveData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((FSimpleObjectiveData*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSimpleObjectiveData), &Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleObjectiveData" },
		{ "ModuleRelativePath", "Public/SimpleObjectiveData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bStarted_SetBit(void* Obj)
	{
		((FSimpleObjectiveData*)Obj)->bStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bStarted = { "bStarted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSimpleObjectiveData), &Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bStarted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleObjectiveData" },
		{ "ModuleRelativePath", "Public/SimpleObjectiveData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bComplete_SetBit(void* Obj)
	{
		((FSimpleObjectiveData*)Obj)->bComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bComplete = { "bComplete", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSimpleObjectiveData), &Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bSucceeded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleObjectiveData" },
		{ "ModuleRelativePath", "Public/SimpleObjectiveData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bSucceeded_SetBit(void* Obj)
	{
		((FSimpleObjectiveData*)Obj)->bSucceeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSimpleObjectiveData), &Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bSucceeded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bSucceeded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_CustomData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleObjectiveData" },
		{ "ModuleRelativePath", "Public/SimpleObjectiveData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleObjectiveData, CustomData), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_CustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_CustomData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_ObjectiveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_bSucceeded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::NewProp_CustomData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayObjectives,
		nullptr,
		&NewStructOps,
		"SimpleObjectiveData",
		sizeof(FSimpleObjectiveData),
		alignof(FSimpleObjectiveData),
		Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleObjectiveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSimpleObjectiveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayObjectives();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SimpleObjectiveData"), sizeof(FSimpleObjectiveData), Get_Z_Construct_UScriptStruct_FSimpleObjectiveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSimpleObjectiveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSimpleObjectiveData_Hash() { return 2265727170U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
