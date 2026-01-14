// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/FlowAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowAsset() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UFlowAsset_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Flow();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FLOW_API UScriptStruct* Z_Construct_UScriptStruct_FFlowAssetSaveData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_Start_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_CustomInput_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFlowAsset::execIsBoundToWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBoundToWorld_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowAsset::execOnLoad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoad_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowAsset::execOnSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSave_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowAsset::execLoadInstance)
	{
		P_GET_STRUCT_REF(FFlowAssetSaveData,Z_Param_Out_AssetRecord);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadInstance(Z_Param_Out_AssetRecord);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowAsset::execSaveInstance)
	{
		P_GET_TARRAY_REF(FFlowAssetSaveData,Z_Param_Out_SavedFlowInstances);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFlowAssetSaveData*)Z_Param__Result=P_THIS->SaveInstance(Z_Param_Out_SavedFlowInstances);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowAsset::execGetRecordedNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UFlowNode*>*)Z_Param__Result=P_THIS->GetRecordedNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowAsset::execGetActiveNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UFlowNode*>*)Z_Param__Result=P_THIS->GetActiveNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowAsset::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowAsset::execGetOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetOwner();
		P_NATIVE_END;
	}
	static FName NAME_UFlowAsset_IsBoundToWorld = FName(TEXT("IsBoundToWorld"));
	bool UFlowAsset::IsBoundToWorld()
	{
		FlowAsset_eventIsBoundToWorld_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UFlowAsset_IsBoundToWorld),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UFlowAsset_OnLoad = FName(TEXT("OnLoad"));
	void UFlowAsset::OnLoad()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFlowAsset_OnLoad),NULL);
	}
	static FName NAME_UFlowAsset_OnSave = FName(TEXT("OnSave"));
	void UFlowAsset::OnSave()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFlowAsset_OnSave),NULL);
	}
	void UFlowAsset::StaticRegisterNativesUFlowAsset()
	{
		UClass* Class = UFlowAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveNodes", &UFlowAsset::execGetActiveNodes },
			{ "GetOwner", &UFlowAsset::execGetOwner },
			{ "GetRecordedNodes", &UFlowAsset::execGetRecordedNodes },
			{ "IsActive", &UFlowAsset::execIsActive },
			{ "IsBoundToWorld", &UFlowAsset::execIsBoundToWorld },
			{ "LoadInstance", &UFlowAsset::execLoadInstance },
			{ "OnLoad", &UFlowAsset::execOnLoad },
			{ "OnSave", &UFlowAsset::execOnSave },
			{ "SaveInstance", &UFlowAsset::execSaveInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlowAsset_GetActiveNodes_Statics
	{
		struct FlowAsset_eventGetActiveNodes_Parms
		{
			TArray<UFlowNode*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlowAsset_GetActiveNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFlowNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlowAsset_GetActiveNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowAsset_eventGetActiveNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowAsset_GetActiveNodes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowAsset_GetActiveNodes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowAsset_GetActiveNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowAsset_GetActiveNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flow" },
		{ "Comment", "// Returns nodes that have any work left, not marked as Finished yet\n" },
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
		{ "ToolTip", "Returns nodes that have any work left, not marked as Finished yet" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowAsset_GetActiveNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowAsset, nullptr, "GetActiveNodes", nullptr, nullptr, sizeof(FlowAsset_eventGetActiveNodes_Parms), Z_Construct_UFunction_UFlowAsset_GetActiveNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowAsset_GetActiveNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowAsset_GetActiveNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowAsset_GetActiveNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowAsset_GetActiveNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowAsset_GetActiveNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowAsset_GetOwner_Statics
	{
		struct FlowAsset_eventGetOwner_Parms
		{
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlowAsset_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowAsset_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowAsset_GetOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowAsset_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowAsset_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flow" },
		{ "Comment", "// Object that spawned Root Flow instance, i.e. World Settings or Player Controller\n// This pointer is passed to child instances: Flow Asset instances created by the SubGraph nodes\n" },
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
		{ "ToolTip", "Object that spawned Root Flow instance, i.e. World Settings or Player Controller\nThis pointer is passed to child instances: Flow Asset instances created by the SubGraph nodes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowAsset_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowAsset, nullptr, "GetOwner", nullptr, nullptr, sizeof(FlowAsset_eventGetOwner_Parms), Z_Construct_UFunction_UFlowAsset_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowAsset_GetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowAsset_GetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowAsset_GetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowAsset_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowAsset_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowAsset_GetRecordedNodes_Statics
	{
		struct FlowAsset_eventGetRecordedNodes_Parms
		{
			TArray<UFlowNode*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlowAsset_GetRecordedNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFlowNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlowAsset_GetRecordedNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowAsset_eventGetRecordedNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowAsset_GetRecordedNodes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowAsset_GetRecordedNodes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowAsset_GetRecordedNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowAsset_GetRecordedNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flow" },
		{ "Comment", "// Returns nodes active in the past, done their work\n" },
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
		{ "ToolTip", "Returns nodes active in the past, done their work" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowAsset_GetRecordedNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowAsset, nullptr, "GetRecordedNodes", nullptr, nullptr, sizeof(FlowAsset_eventGetRecordedNodes_Parms), Z_Construct_UFunction_UFlowAsset_GetRecordedNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowAsset_GetRecordedNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowAsset_GetRecordedNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowAsset_GetRecordedNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowAsset_GetRecordedNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowAsset_GetRecordedNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowAsset_IsActive_Statics
	{
		struct FlowAsset_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFlowAsset_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlowAsset_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlowAsset_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlowAsset_eventIsActive_Parms), &Z_Construct_UFunction_UFlowAsset_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowAsset_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowAsset_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowAsset_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flow" },
		{ "Comment", "// Are there any active nodes?\n" },
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
		{ "ToolTip", "Are there any active nodes?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowAsset_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowAsset, nullptr, "IsActive", nullptr, nullptr, sizeof(FlowAsset_eventIsActive_Parms), Z_Construct_UFunction_UFlowAsset_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowAsset_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowAsset_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowAsset_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowAsset_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowAsset_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowAsset_IsBoundToWorld_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFlowAsset_IsBoundToWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlowAsset_eventIsBoundToWorld_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlowAsset_IsBoundToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlowAsset_eventIsBoundToWorld_Parms), &Z_Construct_UFunction_UFlowAsset_IsBoundToWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowAsset_IsBoundToWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowAsset_IsBoundToWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowAsset_IsBoundToWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowAsset_IsBoundToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowAsset, nullptr, "IsBoundToWorld", nullptr, nullptr, sizeof(FlowAsset_eventIsBoundToWorld_Parms), Z_Construct_UFunction_UFlowAsset_IsBoundToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowAsset_IsBoundToWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowAsset_IsBoundToWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowAsset_IsBoundToWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowAsset_IsBoundToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowAsset_IsBoundToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowAsset_LoadInstance_Statics
	{
		struct FlowAsset_eventLoadInstance_Parms
		{
			FFlowAssetSaveData AssetRecord;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetRecord_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetRecord;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowAsset_LoadInstance_Statics::NewProp_AssetRecord_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlowAsset_LoadInstance_Statics::NewProp_AssetRecord = { "AssetRecord", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowAsset_eventLoadInstance_Parms, AssetRecord), Z_Construct_UScriptStruct_FFlowAssetSaveData, METADATA_PARAMS(Z_Construct_UFunction_UFlowAsset_LoadInstance_Statics::NewProp_AssetRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowAsset_LoadInstance_Statics::NewProp_AssetRecord_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowAsset_LoadInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowAsset_LoadInstance_Statics::NewProp_AssetRecord,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowAsset_LoadInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowAsset_LoadInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowAsset, nullptr, "LoadInstance", nullptr, nullptr, sizeof(FlowAsset_eventLoadInstance_Parms), Z_Construct_UFunction_UFlowAsset_LoadInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowAsset_LoadInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowAsset_LoadInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowAsset_LoadInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowAsset_LoadInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowAsset_LoadInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowAsset_OnLoad_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowAsset_OnLoad_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowAsset_OnLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowAsset, nullptr, "OnLoad", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowAsset_OnLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowAsset_OnLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowAsset_OnLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowAsset_OnLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowAsset_OnSave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowAsset_OnSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowAsset_OnSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowAsset, nullptr, "OnSave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowAsset_OnSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowAsset_OnSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowAsset_OnSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowAsset_OnSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowAsset_SaveInstance_Statics
	{
		struct FlowAsset_eventSaveInstance_Parms
		{
			TArray<FFlowAssetSaveData> SavedFlowInstances;
			FFlowAssetSaveData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SavedFlowInstances_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SavedFlowInstances;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlowAsset_SaveInstance_Statics::NewProp_SavedFlowInstances_Inner = { "SavedFlowInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFlowAssetSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlowAsset_SaveInstance_Statics::NewProp_SavedFlowInstances = { "SavedFlowInstances", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowAsset_eventSaveInstance_Parms, SavedFlowInstances), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlowAsset_SaveInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowAsset_eventSaveInstance_Parms, ReturnValue), Z_Construct_UScriptStruct_FFlowAssetSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowAsset_SaveInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowAsset_SaveInstance_Statics::NewProp_SavedFlowInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowAsset_SaveInstance_Statics::NewProp_SavedFlowInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowAsset_SaveInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowAsset_SaveInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGame" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// SaveGame\n" },
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
		{ "ToolTip", "SaveGame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowAsset_SaveInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowAsset, nullptr, "SaveInstance", nullptr, nullptr, sizeof(FlowAsset_eventSaveInstance_Parms), Z_Construct_UFunction_UFlowAsset_SaveInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowAsset_SaveInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowAsset_SaveInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowAsset_SaveInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowAsset_SaveInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowAsset_SaveInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFlowAsset_NoRegister()
	{
		return UFlowAsset::StaticClass();
	}
	struct Z_Construct_UClass_UFlowAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWorldBound_MetaData[];
#endif
		static void NewProp_bWorldBound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldBound;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlowGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlowGraph;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nodes_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Nodes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Nodes;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CustomInputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomInputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomInputs;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CustomOutputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomOutputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomOutputs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveInstances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TemplateAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartNode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomInputNodes_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomInputNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_CustomInputNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreloadedNodes_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreloadedNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_PreloadedNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RecordedNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecordedNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RecordedNodes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlowAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlowAsset_GetActiveNodes, "GetActiveNodes" }, // 3412841063
		{ &Z_Construct_UFunction_UFlowAsset_GetOwner, "GetOwner" }, // 1432916061
		{ &Z_Construct_UFunction_UFlowAsset_GetRecordedNodes, "GetRecordedNodes" }, // 1247627201
		{ &Z_Construct_UFunction_UFlowAsset_IsActive, "IsActive" }, // 3761031678
		{ &Z_Construct_UFunction_UFlowAsset_IsBoundToWorld, "IsBoundToWorld" }, // 2409699681
		{ &Z_Construct_UFunction_UFlowAsset_LoadInstance, "LoadInstance" }, // 423646677
		{ &Z_Construct_UFunction_UFlowAsset_OnLoad, "OnLoad" }, // 71896037
		{ &Z_Construct_UFunction_UFlowAsset_OnSave, "OnSave" }, // 1091566396
		{ &Z_Construct_UFunction_UFlowAsset_SaveInstance, "SaveInstance" }, // 3723936456
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Single asset containing flow nodes.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "FlowAsset.h" },
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
		{ "ToolTip", "Single asset containing flow nodes." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAsset_Statics::NewProp_AssetGuid_MetaData[] = {
		{ "Category", "Flow Asset" },
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowAsset_Statics::NewProp_AssetGuid = { "AssetGuid", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAsset, AssetGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UFlowAsset_Statics::NewProp_AssetGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAsset_Statics::NewProp_AssetGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAsset_Statics::NewProp_bWorldBound_MetaData[] = {
		{ "Category", "Flow Asset" },
		{ "Comment", "// Set it to False, if this asset is instantiated as Root Flow for owner that doesn't live in the world\n// This allow to SaveGame support works properly, if owner of Root Flow would be Game Instance or its subsystem\n" },
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
		{ "ToolTip", "Set it to False, if this asset is instantiated as Root Flow for owner that doesn't live in the world\nThis allow to SaveGame support works properly, if owner of Root Flow would be Game Instance or its subsystem" },
	};
#endif
	void Z_Construct_UClass_UFlowAsset_Statics::NewProp_bWorldBound_SetBit(void* Obj)
	{
		((UFlowAsset*)Obj)->bWorldBound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowAsset_Statics::NewProp_bWorldBound = { "bWorldBound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowAsset), &Z_Construct_UClass_UFlowAsset_Statics::NewProp_bWorldBound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowAsset_Statics::NewProp_bWorldBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAsset_Statics::NewProp_bWorldBound_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAsset_Statics::NewProp_FlowGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowAsset_Statics::NewProp_FlowGraph = { "FlowGraph", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAsset, FlowGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlowAsset_Statics::NewProp_FlowGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAsset_Statics::NewProp_FlowGraph_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowAsset_Statics::NewProp_Nodes_ValueProp = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UFlowNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowAsset_Statics::NewProp_Nodes_Key_KeyProp = { "Nodes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAsset_Statics::NewProp_Nodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFlowAsset_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAsset, Nodes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowAsset_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAsset_Statics::NewProp_Nodes_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFlowAsset_Statics::NewProp_CustomInputs_Inner = { "CustomInputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAsset_Statics::NewProp_CustomInputs_MetaData[] = {
		{ "Category", "Sub Graph" },
		{ "Comment", "/**\n\x09 * Custom Inputs define custom entry points in graph, it's similar to blueprint Custom Events\n\x09 * Sub Graph node using this Flow Asset will generate context Input Pin for every valid Event name on this list\n\x09 */" },
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
		{ "ToolTip", "Custom Inputs define custom entry points in graph, it's similar to blueprint Custom Events\nSub Graph node using this Flow Asset will generate context Input Pin for every valid Event name on this list" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowAsset_Statics::NewProp_CustomInputs = { "CustomInputs", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAsset, CustomInputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowAsset_Statics::NewProp_CustomInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAsset_Statics::NewProp_CustomInputs_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFlowAsset_Statics::NewProp_CustomOutputs_Inner = { "CustomOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAsset_Statics::NewProp_CustomOutputs_MetaData[] = {
		{ "Category", "Sub Graph" },
		{ "Comment", "/**\n\x09 * Custom Outputs define custom graph outputs, this allow to send signals to the parent graph while executing this graph\n\x09 * Sub Graph node using this Flow Asset will generate context Output Pin for every valid Event name on this list\n\x09 */" },
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
		{ "ToolTip", "Custom Outputs define custom graph outputs, this allow to send signals to the parent graph while executing this graph\nSub Graph node using this Flow Asset will generate context Output Pin for every valid Event name on this list" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowAsset_Statics::NewProp_CustomOutputs = { "CustomOutputs", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAsset, CustomOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowAsset_Statics::NewProp_CustomOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAsset_Statics::NewProp_CustomOutputs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowAsset_Statics::NewProp_ActiveInstances_Inner = { "ActiveInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFlowAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAsset_Statics::NewProp_ActiveInstances_MetaData[] = {
		{ "Comment", "// Original object holds references to instances\n" },
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
		{ "ToolTip", "Original object holds references to instances" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowAsset_Statics::NewProp_ActiveInstances = { "ActiveInstances", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAsset, ActiveInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowAsset_Statics::NewProp_ActiveInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAsset_Statics::NewProp_ActiveInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAsset_Statics::NewProp_TemplateAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowAsset_Statics::NewProp_TemplateAsset = { "TemplateAsset", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAsset, TemplateAsset), Z_Construct_UClass_UFlowAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlowAsset_Statics::NewProp_TemplateAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAsset_Statics::NewProp_TemplateAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAsset_Statics::NewProp_StartNode_MetaData[] = {
		{ "Comment", "// Execution of the graph always starts from this node, there can be only one StartNode in the graph\n" },
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
		{ "ToolTip", "Execution of the graph always starts from this node, there can be only one StartNode in the graph" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowAsset_Statics::NewProp_StartNode = { "StartNode", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAsset, StartNode), Z_Construct_UClass_UFlowNode_Start_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlowAsset_Statics::NewProp_StartNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAsset_Statics::NewProp_StartNode_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowAsset_Statics::NewProp_CustomInputNodes_ElementProp = { "CustomInputNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFlowNode_CustomInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAsset_Statics::NewProp_CustomInputNodes_MetaData[] = {
		{ "Comment", "// Optional entry points to the graph, similar to blueprint Custom Events\n" },
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
		{ "ToolTip", "Optional entry points to the graph, similar to blueprint Custom Events" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UFlowAsset_Statics::NewProp_CustomInputNodes = { "CustomInputNodes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAsset, CustomInputNodes), METADATA_PARAMS(Z_Construct_UClass_UFlowAsset_Statics::NewProp_CustomInputNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAsset_Statics::NewProp_CustomInputNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowAsset_Statics::NewProp_PreloadedNodes_ElementProp = { "PreloadedNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFlowNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAsset_Statics::NewProp_PreloadedNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UFlowAsset_Statics::NewProp_PreloadedNodes = { "PreloadedNodes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAsset, PreloadedNodes), METADATA_PARAMS(Z_Construct_UClass_UFlowAsset_Statics::NewProp_PreloadedNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAsset_Statics::NewProp_PreloadedNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowAsset_Statics::NewProp_ActiveNodes_Inner = { "ActiveNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFlowNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAsset_Statics::NewProp_ActiveNodes_MetaData[] = {
		{ "Comment", "// Nodes that have any work left, not marked as Finished yet\n" },
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
		{ "ToolTip", "Nodes that have any work left, not marked as Finished yet" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowAsset_Statics::NewProp_ActiveNodes = { "ActiveNodes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAsset, ActiveNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowAsset_Statics::NewProp_ActiveNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAsset_Statics::NewProp_ActiveNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowAsset_Statics::NewProp_RecordedNodes_Inner = { "RecordedNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFlowNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAsset_Statics::NewProp_RecordedNodes_MetaData[] = {
		{ "Comment", "// All nodes active in the past, done their work\n" },
		{ "ModuleRelativePath", "Public/FlowAsset.h" },
		{ "ToolTip", "All nodes active in the past, done their work" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowAsset_Statics::NewProp_RecordedNodes = { "RecordedNodes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAsset, RecordedNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowAsset_Statics::NewProp_RecordedNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAsset_Statics::NewProp_RecordedNodes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAsset_Statics::NewProp_AssetGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAsset_Statics::NewProp_bWorldBound,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAsset_Statics::NewProp_FlowGraph,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAsset_Statics::NewProp_Nodes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAsset_Statics::NewProp_Nodes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAsset_Statics::NewProp_Nodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAsset_Statics::NewProp_CustomInputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAsset_Statics::NewProp_CustomInputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAsset_Statics::NewProp_CustomOutputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAsset_Statics::NewProp_CustomOutputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAsset_Statics::NewProp_ActiveInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAsset_Statics::NewProp_ActiveInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAsset_Statics::NewProp_TemplateAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAsset_Statics::NewProp_StartNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAsset_Statics::NewProp_CustomInputNodes_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAsset_Statics::NewProp_CustomInputNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAsset_Statics::NewProp_PreloadedNodes_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAsset_Statics::NewProp_PreloadedNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAsset_Statics::NewProp_ActiveNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAsset_Statics::NewProp_ActiveNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAsset_Statics::NewProp_RecordedNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAsset_Statics::NewProp_RecordedNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowAsset_Statics::ClassParams = {
		&UFlowAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFlowAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowAsset, 3851429621);
	template<> FLOW_API UClass* StaticClass<UFlowAsset>()
	{
		return UFlowAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowAsset(Z_Construct_UClass_UFlowAsset, &UFlowAsset::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
