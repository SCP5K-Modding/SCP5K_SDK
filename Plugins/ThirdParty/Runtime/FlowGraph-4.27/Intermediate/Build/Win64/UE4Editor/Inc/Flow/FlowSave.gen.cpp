// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/FlowSave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowSave() {}
// Cross Module References
	FLOW_API UScriptStruct* Z_Construct_UScriptStruct_FFlowComponentSaveData();
	UPackage* Z_Construct_UPackage__Script_Flow();
	FLOW_API UScriptStruct* Z_Construct_UScriptStruct_FFlowAssetSaveData();
	FLOW_API UScriptStruct* Z_Construct_UScriptStruct_FFlowNodeSaveData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	FLOW_API UClass* Z_Construct_UClass_UFlowSaveGame_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
// End Cross Module References
class UScriptStruct* FFlowComponentSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOW_API uint32 Get_Z_Construct_UScriptStruct_FFlowComponentSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowComponentSaveData, Z_Construct_UPackage__Script_Flow(), TEXT("FlowComponentSaveData"), sizeof(FFlowComponentSaveData), Get_Z_Construct_UScriptStruct_FFlowComponentSaveData_Hash());
	}
	return Singleton;
}
template<> FLOW_API UScriptStruct* StaticStruct<FFlowComponentSaveData>()
{
	return FFlowComponentSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlowComponentSaveData(FFlowComponentSaveData::StaticStruct, TEXT("/Script/Flow"), TEXT("FlowComponentSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_Flow_StaticRegisterNativesFFlowComponentSaveData
{
	FScriptStruct_Flow_StaticRegisterNativesFFlowComponentSaveData()
	{
		UScriptStruct::DeferCppStructOps<FFlowComponentSaveData>(FName(TEXT("FlowComponentSaveData")));
	}
} ScriptStruct_Flow_StaticRegisterNativesFFlowComponentSaveData;
	struct Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WorldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorInstanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActorInstanceName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ComponentData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlowSave.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowComponentSaveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::NewProp_WorldName_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/FlowSave.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::NewProp_WorldName = { "WorldName", nullptr, (EPropertyFlags)0x0010000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowComponentSaveData, WorldName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::NewProp_WorldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::NewProp_WorldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::NewProp_ActorInstanceName_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/FlowSave.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::NewProp_ActorInstanceName = { "ActorInstanceName", nullptr, (EPropertyFlags)0x0010000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowComponentSaveData, ActorInstanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::NewProp_ActorInstanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::NewProp_ActorInstanceName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::NewProp_ComponentData_Inner = { "ComponentData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::NewProp_ComponentData_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlowSave.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::NewProp_ComponentData = { "ComponentData", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowComponentSaveData, ComponentData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::NewProp_ComponentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::NewProp_ComponentData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::NewProp_WorldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::NewProp_ActorInstanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::NewProp_ComponentData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::NewProp_ComponentData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
		nullptr,
		&NewStructOps,
		"FlowComponentSaveData",
		sizeof(FFlowComponentSaveData),
		alignof(FFlowComponentSaveData),
		Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowComponentSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlowComponentSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Flow();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlowComponentSaveData"), sizeof(FFlowComponentSaveData), Get_Z_Construct_UScriptStruct_FFlowComponentSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlowComponentSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlowComponentSaveData_Hash() { return 3998204109U; }
class UScriptStruct* FFlowAssetSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOW_API uint32 Get_Z_Construct_UScriptStruct_FFlowAssetSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowAssetSaveData, Z_Construct_UPackage__Script_Flow(), TEXT("FlowAssetSaveData"), sizeof(FFlowAssetSaveData), Get_Z_Construct_UScriptStruct_FFlowAssetSaveData_Hash());
	}
	return Singleton;
}
template<> FLOW_API UScriptStruct* StaticStruct<FFlowAssetSaveData>()
{
	return FFlowAssetSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlowAssetSaveData(FFlowAssetSaveData::StaticStruct, TEXT("/Script/Flow"), TEXT("FlowAssetSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_Flow_StaticRegisterNativesFFlowAssetSaveData
{
	FScriptStruct_Flow_StaticRegisterNativesFFlowAssetSaveData()
	{
		UScriptStruct::DeferCppStructOps<FFlowAssetSaveData>(FName(TEXT("FlowAssetSaveData")));
	}
} ScriptStruct_Flow_StaticRegisterNativesFFlowAssetSaveData;
	struct Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WorldName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstanceName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AssetData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeRecords_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeRecords_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NodeRecords;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlowSave.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowAssetSaveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_WorldName_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/FlowSave.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_WorldName = { "WorldName", nullptr, (EPropertyFlags)0x0010000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowAssetSaveData, WorldName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_WorldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_WorldName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_InstanceName_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/FlowSave.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0010000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowAssetSaveData, InstanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_InstanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_InstanceName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_AssetData_Inner = { "AssetData", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_AssetData_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/FlowSave.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000001020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowAssetSaveData, AssetData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_AssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_AssetData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_NodeRecords_Inner = { "NodeRecords", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFlowNodeSaveData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_NodeRecords_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/FlowSave.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_NodeRecords = { "NodeRecords", nullptr, (EPropertyFlags)0x0010000001020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowAssetSaveData, NodeRecords), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_NodeRecords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_NodeRecords_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_WorldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_InstanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_AssetData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_AssetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_NodeRecords_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::NewProp_NodeRecords,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
		nullptr,
		&NewStructOps,
		"FlowAssetSaveData",
		sizeof(FFlowAssetSaveData),
		alignof(FFlowAssetSaveData),
		Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowAssetSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlowAssetSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Flow();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlowAssetSaveData"), sizeof(FFlowAssetSaveData), Get_Z_Construct_UScriptStruct_FFlowAssetSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlowAssetSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlowAssetSaveData_Hash() { return 2603826898U; }
class UScriptStruct* FFlowNodeSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOW_API uint32 Get_Z_Construct_UScriptStruct_FFlowNodeSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowNodeSaveData, Z_Construct_UPackage__Script_Flow(), TEXT("FlowNodeSaveData"), sizeof(FFlowNodeSaveData), Get_Z_Construct_UScriptStruct_FFlowNodeSaveData_Hash());
	}
	return Singleton;
}
template<> FLOW_API UScriptStruct* StaticStruct<FFlowNodeSaveData>()
{
	return FFlowNodeSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlowNodeSaveData(FFlowNodeSaveData::StaticStruct, TEXT("/Script/Flow"), TEXT("FlowNodeSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_Flow_StaticRegisterNativesFFlowNodeSaveData
{
	FScriptStruct_Flow_StaticRegisterNativesFFlowNodeSaveData()
	{
		UScriptStruct::DeferCppStructOps<FFlowNodeSaveData>(FName(TEXT("FlowNodeSaveData")));
	}
} ScriptStruct_Flow_StaticRegisterNativesFFlowNodeSaveData;
	struct Z_Construct_UScriptStruct_FFlowNodeSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeGuid;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NodeData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NodeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowNodeSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlowSave.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowNodeSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowNodeSaveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowNodeSaveData_Statics::NewProp_NodeGuid_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/FlowSave.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowNodeSaveData_Statics::NewProp_NodeGuid = { "NodeGuid", nullptr, (EPropertyFlags)0x0010000001020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowNodeSaveData, NodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowNodeSaveData_Statics::NewProp_NodeGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowNodeSaveData_Statics::NewProp_NodeGuid_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFlowNodeSaveData_Statics::NewProp_NodeData_Inner = { "NodeData", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowNodeSaveData_Statics::NewProp_NodeData_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/FlowSave.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFlowNodeSaveData_Statics::NewProp_NodeData = { "NodeData", nullptr, (EPropertyFlags)0x0010000001020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowNodeSaveData, NodeData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowNodeSaveData_Statics::NewProp_NodeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowNodeSaveData_Statics::NewProp_NodeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowNodeSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowNodeSaveData_Statics::NewProp_NodeGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowNodeSaveData_Statics::NewProp_NodeData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowNodeSaveData_Statics::NewProp_NodeData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowNodeSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
		nullptr,
		&NewStructOps,
		"FlowNodeSaveData",
		sizeof(FFlowNodeSaveData),
		alignof(FFlowNodeSaveData),
		Z_Construct_UScriptStruct_FFlowNodeSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowNodeSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowNodeSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowNodeSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowNodeSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlowNodeSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Flow();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlowNodeSaveData"), sizeof(FFlowNodeSaveData), Get_Z_Construct_UScriptStruct_FFlowNodeSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlowNodeSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlowNodeSaveData_Hash() { return 2396217221U; }
	void UFlowSaveGame::StaticRegisterNativesUFlowSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UFlowSaveGame_NoRegister()
	{
		return UFlowSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UFlowSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FlowComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlowComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FlowComponents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FlowInstances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlowInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FlowInstances;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowSaveGame_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FlowSave.h" },
		{ "ModuleRelativePath", "Public/FlowSave.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowSaveGame_Statics::NewProp_SaveSlotName_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/FlowSave.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlowSaveGame_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowSaveGame, SaveSlotName), METADATA_PARAMS(Z_Construct_UClass_UFlowSaveGame_Statics::NewProp_SaveSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowSaveGame_Statics::NewProp_SaveSlotName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowSaveGame_Statics::NewProp_FlowComponents_Inner = { "FlowComponents", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFlowComponentSaveData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowSaveGame_Statics::NewProp_FlowComponents_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/FlowSave.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowSaveGame_Statics::NewProp_FlowComponents = { "FlowComponents", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowSaveGame, FlowComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowSaveGame_Statics::NewProp_FlowComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowSaveGame_Statics::NewProp_FlowComponents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowSaveGame_Statics::NewProp_FlowInstances_Inner = { "FlowInstances", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFlowAssetSaveData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowSaveGame_Statics::NewProp_FlowInstances_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/FlowSave.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowSaveGame_Statics::NewProp_FlowInstances = { "FlowInstances", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowSaveGame, FlowInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowSaveGame_Statics::NewProp_FlowInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowSaveGame_Statics::NewProp_FlowInstances_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowSaveGame_Statics::NewProp_SaveSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowSaveGame_Statics::NewProp_FlowComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowSaveGame_Statics::NewProp_FlowComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowSaveGame_Statics::NewProp_FlowInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowSaveGame_Statics::NewProp_FlowInstances,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowSaveGame_Statics::ClassParams = {
		&UFlowSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowSaveGame, 3684160561);
	template<> FLOW_API UClass* StaticClass<UFlowSaveGame>()
	{
		return UFlowSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowSaveGame(Z_Construct_UClass_UFlowSaveGame, &UFlowSaveGame::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
