// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/Nodes/World/FlowNode_ComponentObserver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowNode_ComponentObserver() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_ComponentObserver_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_ComponentObserver();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode();
	UPackage* Z_Construct_UPackage__Script_Flow();
	FLOW_API UClass* Z_Construct_UClass_UFlowComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	FLOW_API UEnum* Z_Construct_UEnum_Flow_EFlowTagContainerMatchType();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UFlowNode_ComponentObserver::execOnEventReceived)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEventReceived();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode_ComponentObserver::execOnComponentUnregistered)
	{
		P_GET_OBJECT(UFlowComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentUnregistered(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode_ComponentObserver::execOnComponentTagRemoved)
	{
		P_GET_OBJECT(UFlowComponent,Z_Param_Component);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_RemovedTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentTagRemoved(Z_Param_Component,Z_Param_Out_RemovedTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode_ComponentObserver::execOnComponentTagAdded)
	{
		P_GET_OBJECT(UFlowComponent,Z_Param_Component);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_AddedTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentTagAdded(Z_Param_Component,Z_Param_Out_AddedTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode_ComponentObserver::execOnComponentRegistered)
	{
		P_GET_OBJECT(UFlowComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentRegistered(Z_Param_Component);
		P_NATIVE_END;
	}
	void UFlowNode_ComponentObserver::StaticRegisterNativesUFlowNode_ComponentObserver()
	{
		UClass* Class = UFlowNode_ComponentObserver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnComponentRegistered", &UFlowNode_ComponentObserver::execOnComponentRegistered },
			{ "OnComponentTagAdded", &UFlowNode_ComponentObserver::execOnComponentTagAdded },
			{ "OnComponentTagRemoved", &UFlowNode_ComponentObserver::execOnComponentTagRemoved },
			{ "OnComponentUnregistered", &UFlowNode_ComponentObserver::execOnComponentUnregistered },
			{ "OnEventReceived", &UFlowNode_ComponentObserver::execOnEventReceived },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentRegistered_Statics
	{
		struct FlowNode_ComponentObserver_eventOnComponentRegistered_Parms
		{
			UFlowComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentRegistered_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentRegistered_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_ComponentObserver_eventOnComponentRegistered_Parms, Component), Z_Construct_UClass_UFlowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentRegistered_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentRegistered_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentRegistered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentRegistered_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentRegistered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_ComponentObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode_ComponentObserver, nullptr, "OnComponentRegistered", nullptr, nullptr, sizeof(FlowNode_ComponentObserver_eventOnComponentRegistered_Parms), Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentRegistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentRegistered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentRegistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentRegistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagAdded_Statics
	{
		struct FlowNode_ComponentObserver_eventOnComponentTagAdded_Parms
		{
			UFlowComponent* Component;
			FGameplayTagContainer AddedTags;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddedTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagAdded_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagAdded_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_ComponentObserver_eventOnComponentTagAdded_Parms, Component), Z_Construct_UClass_UFlowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagAdded_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagAdded_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagAdded_Statics::NewProp_AddedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagAdded_Statics::NewProp_AddedTags = { "AddedTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_ComponentObserver_eventOnComponentTagAdded_Parms, AddedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagAdded_Statics::NewProp_AddedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagAdded_Statics::NewProp_AddedTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagAdded_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagAdded_Statics::NewProp_AddedTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_ComponentObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode_ComponentObserver, nullptr, "OnComponentTagAdded", nullptr, nullptr, sizeof(FlowNode_ComponentObserver_eventOnComponentTagAdded_Parms), Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagRemoved_Statics
	{
		struct FlowNode_ComponentObserver_eventOnComponentTagRemoved_Parms
		{
			UFlowComponent* Component;
			FGameplayTagContainer RemovedTags;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemovedTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagRemoved_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagRemoved_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_ComponentObserver_eventOnComponentTagRemoved_Parms, Component), Z_Construct_UClass_UFlowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagRemoved_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagRemoved_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagRemoved_Statics::NewProp_RemovedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagRemoved_Statics::NewProp_RemovedTags = { "RemovedTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_ComponentObserver_eventOnComponentTagRemoved_Parms, RemovedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagRemoved_Statics::NewProp_RemovedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagRemoved_Statics::NewProp_RemovedTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagRemoved_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagRemoved_Statics::NewProp_RemovedTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_ComponentObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode_ComponentObserver, nullptr, "OnComponentTagRemoved", nullptr, nullptr, sizeof(FlowNode_ComponentObserver_eventOnComponentTagRemoved_Parms), Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentUnregistered_Statics
	{
		struct FlowNode_ComponentObserver_eventOnComponentUnregistered_Parms
		{
			UFlowComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentUnregistered_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentUnregistered_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_ComponentObserver_eventOnComponentUnregistered_Parms, Component), Z_Construct_UClass_UFlowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentUnregistered_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentUnregistered_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentUnregistered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentUnregistered_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentUnregistered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_ComponentObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentUnregistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode_ComponentObserver, nullptr, "OnComponentUnregistered", nullptr, nullptr, sizeof(FlowNode_ComponentObserver_eventOnComponentUnregistered_Parms), Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentUnregistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentUnregistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentUnregistered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentUnregistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentUnregistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentUnregistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_ComponentObserver_OnEventReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_ComponentObserver_OnEventReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_ComponentObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_ComponentObserver_OnEventReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode_ComponentObserver, nullptr, "OnEventReceived", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnEventReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_ComponentObserver_OnEventReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_ComponentObserver_OnEventReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_ComponentObserver_OnEventReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFlowNode_ComponentObserver_NoRegister()
	{
		return UFlowNode_ComponentObserver::StaticClass();
	}
	struct Z_Construct_UClass_UFlowNode_ComponentObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdentityTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IdentityTags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IdentityMatchType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdentityMatchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IdentityMatchType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuccessLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuccessCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdentityTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IdentityTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentRegistered, "OnComponentRegistered" }, // 3678164811
		{ &Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagAdded, "OnComponentTagAdded" }, // 2279680705
		{ &Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentTagRemoved, "OnComponentTagRemoved" }, // 1710553283
		{ &Z_Construct_UFunction_UFlowNode_ComponentObserver_OnComponentUnregistered, "OnComponentUnregistered" }, // 733550927
		{ &Z_Construct_UFunction_UFlowNode_ComponentObserver_OnEventReceived, "OnEventReceived" }, // 4027812326
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for nodes operating on actors with the Flow Component\n * Such nodes usually wait until a specific action occurs in the actor\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Nodes/World/FlowNode_ComponentObserver.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_ComponentObserver.h" },
		{ "ToolTip", "Base class for nodes operating on actors with the Flow Component\nSuch nodes usually wait until a specific action occurs in the actor" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_IdentityTags_MetaData[] = {
		{ "Category", "ObservedComponent" },
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_ComponentObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_IdentityTags = { "IdentityTags", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_ComponentObserver, IdentityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_IdentityTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_IdentityTags_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_IdentityMatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_IdentityMatchType_MetaData[] = {
		{ "Category", "ObservedComponent" },
		{ "Comment", "// Container A: Identity Tags in Flow Component\n// Container B: Identity Tags listed above\n" },
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_ComponentObserver.h" },
		{ "ToolTip", "Container A: Identity Tags in Flow Component\nContainer B: Identity Tags listed above" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_IdentityMatchType = { "IdentityMatchType", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_ComponentObserver, IdentityMatchType), Z_Construct_UEnum_Flow_EFlowTagContainerMatchType, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_IdentityMatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_IdentityMatchType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_SuccessLimit_MetaData[] = {
		{ "Category", "Lifetime" },
		{ "ClampMin", "0" },
		{ "Comment", "// This node will become Completed, if Success Limit > 0 and Success Count reaches this limit\n// Set this to zero, if you'd like receive events indefinitely (node would finish work only if explicitly Stopped)\n" },
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_ComponentObserver.h" },
		{ "ToolTip", "This node will become Completed, if Success Limit > 0 and Success Count reaches this limit\nSet this to zero, if you'd like receive events indefinitely (node would finish work only if explicitly Stopped)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_SuccessLimit = { "SuccessLimit", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_ComponentObserver, SuccessLimit), METADATA_PARAMS(Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_SuccessLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_SuccessLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_SuccessCount_MetaData[] = {
		{ "Category", "Lifetime" },
		{ "Comment", "// This node will become Completed, if Success Limit > 0 and Success Count reaches this limit\n" },
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_ComponentObserver.h" },
		{ "ToolTip", "This node will become Completed, if Success Limit > 0 and Success Count reaches this limit" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_SuccessCount = { "SuccessCount", nullptr, (EPropertyFlags)0x0020080001020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_ComponentObserver, SuccessCount), METADATA_PARAMS(Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_SuccessCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_SuccessCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_IdentityTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_ComponentObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_IdentityTag = { "IdentityTag", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_ComponentObserver, IdentityTag_DEPRECATED), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_IdentityTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_IdentityTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_IdentityTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_IdentityMatchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_IdentityMatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_SuccessLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_SuccessCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::NewProp_IdentityTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowNode_ComponentObserver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::ClassParams = {
		&UFlowNode_ComponentObserver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowNode_ComponentObserver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowNode_ComponentObserver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowNode_ComponentObserver, 1696795434);
	template<> FLOW_API UClass* StaticClass<UFlowNode_ComponentObserver>()
	{
		return UFlowNode_ComponentObserver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowNode_ComponentObserver(Z_Construct_UClass_UFlowNode_ComponentObserver, &UFlowNode_ComponentObserver::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowNode_ComponentObserver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowNode_ComponentObserver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
