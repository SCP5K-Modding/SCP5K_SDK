// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/Nodes/FlowNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowNode() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Flow();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowAsset_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowSubsystem_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	FLOW_API UScriptStruct* Z_Construct_UScriptStruct_FFlowNodeSaveData();
	FLOW_API UEnum* Z_Construct_UEnum_Flow_EFlowOnScreenMessageType();
	FLOW_API UEnum* Z_Construct_UEnum_Flow_EFlowPinActivationType();
	FLOW_API UScriptStruct* Z_Construct_UScriptStruct_FFlowOutputPinHandle();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	FLOW_API UEnum* Z_Construct_UEnum_Flow_EFlowNodeStyle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	FLOW_API UEnum* Z_Construct_UEnum_Flow_EFlowSignalMode();
	FLOW_API UScriptStruct* Z_Construct_UScriptStruct_FFlowPin();
	FLOW_API UScriptStruct* Z_Construct_UScriptStruct_FConnectedPin();
	FLOW_API UEnum* Z_Construct_UEnum_Flow_EFlowNodeState();
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFlowNode::execOnPassThrough)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPassThrough_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode::execOnLoad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoad_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode::execOnSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSave_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode::execLoadInstance)
	{
		P_GET_STRUCT_REF(FFlowNodeSaveData,Z_Param_Out_NodeRecord);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadInstance(Z_Param_Out_NodeRecord);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode::execSaveInstance)
	{
		P_GET_STRUCT_REF(FFlowNodeSaveData,Z_Param_Out_NodeRecord);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveInstance(Z_Param_Out_NodeRecord);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode::execLogError)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_ENUM(EFlowOnScreenMessageType,Z_Param_OnScreenMessageType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogError(Z_Param_Message,EFlowOnScreenMessageType(Z_Param_OnScreenMessageType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode::execGetProgressAsString)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFlowNode::GetProgressAsString(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode::execGetClassDescription)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFlowNode::GetClassDescription(Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode::execGetNotifyTagsDescription)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFlowNode::GetNotifyTagsDescription(Z_Param_Out_Tags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode::execGetIdentityTagsDescription)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFlowNode::GetIdentityTagsDescription(Z_Param_Out_Tags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode::execGetIdentityTagDescription)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFlowNode::GetIdentityTagDescription(Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode::execFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Finish();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode::execTriggerOutputPin)
	{
		P_GET_STRUCT(FFlowOutputPinHandle,Z_Param_Pin);
		P_GET_UBOOL(Z_Param_bFinish);
		P_GET_ENUM(EFlowPinActivationType,Z_Param_ActivationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerOutputPin(Z_Param_Pin,Z_Param_bFinish,EFlowPinActivationType(Z_Param_ActivationType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode::execTriggerOutput)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PinName);
		P_GET_UBOOL(Z_Param_bFinish);
		P_GET_ENUM(EFlowPinActivationType,Z_Param_ActivationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerOutput(Z_Param_Out_PinName,Z_Param_bFinish,EFlowPinActivationType(Z_Param_ActivationType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode::execTriggerFirstOutput)
	{
		P_GET_UBOOL(Z_Param_bFinish);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerFirstOutput(Z_Param_bFinish);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode::execGetFlowSubsystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFlowSubsystem**)Z_Param__Result=P_THIS->GetFlowSubsystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode::execIsOutputConnected)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PinName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOutputConnected(Z_Param_Out_PinName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode::execIsInputConnected)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PinName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInputConnected(Z_Param_Out_PinName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode::execGetOutputNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetOutputNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode::execGetInputNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetInputNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode::execGetFlowAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFlowAsset**)Z_Param__Result=P_THIS->GetFlowAsset();
		P_NATIVE_END;
	}
	static FName NAME_UFlowNode_K2_CanUserAddInput = FName(TEXT("K2_CanUserAddInput"));
	bool UFlowNode::K2_CanUserAddInput() const
	{
		FlowNode_eventK2_CanUserAddInput_Parms Parms;
		const_cast<UFlowNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_UFlowNode_K2_CanUserAddInput),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UFlowNode_K2_CanUserAddOutput = FName(TEXT("K2_CanUserAddOutput"));
	bool UFlowNode::K2_CanUserAddOutput() const
	{
		FlowNode_eventK2_CanUserAddOutput_Parms Parms;
		const_cast<UFlowNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_UFlowNode_K2_CanUserAddOutput),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UFlowNode_K2_Cleanup = FName(TEXT("K2_Cleanup"));
	void UFlowNode::K2_Cleanup()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFlowNode_K2_Cleanup),NULL);
	}
	static FName NAME_UFlowNode_K2_ExecuteInput = FName(TEXT("K2_ExecuteInput"));
	void UFlowNode::K2_ExecuteInput(FName const& PinName)
	{
		FlowNode_eventK2_ExecuteInput_Parms Parms;
		Parms.PinName=PinName;
		ProcessEvent(FindFunctionChecked(NAME_UFlowNode_K2_ExecuteInput),&Parms);
	}
	static FName NAME_UFlowNode_K2_FlushContent = FName(TEXT("K2_FlushContent"));
	void UFlowNode::K2_FlushContent()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFlowNode_K2_FlushContent),NULL);
	}
	static FName NAME_UFlowNode_K2_ForceFinishNode = FName(TEXT("K2_ForceFinishNode"));
	void UFlowNode::K2_ForceFinishNode()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFlowNode_K2_ForceFinishNode),NULL);
	}
	static FName NAME_UFlowNode_K2_GetActorToFocus = FName(TEXT("K2_GetActorToFocus"));
	AActor* UFlowNode::K2_GetActorToFocus()
	{
		FlowNode_eventK2_GetActorToFocus_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UFlowNode_K2_GetActorToFocus),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UFlowNode_K2_GetAssetPath = FName(TEXT("K2_GetAssetPath"));
	FString UFlowNode::K2_GetAssetPath()
	{
		FlowNode_eventK2_GetAssetPath_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UFlowNode_K2_GetAssetPath),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UFlowNode_K2_GetAssetToEdit = FName(TEXT("K2_GetAssetToEdit"));
	UObject* UFlowNode::K2_GetAssetToEdit()
	{
		FlowNode_eventK2_GetAssetToEdit_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UFlowNode_K2_GetAssetToEdit),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UFlowNode_K2_GetNodeDescription = FName(TEXT("K2_GetNodeDescription"));
	FString UFlowNode::K2_GetNodeDescription() const
	{
		FlowNode_eventK2_GetNodeDescription_Parms Parms;
		const_cast<UFlowNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_UFlowNode_K2_GetNodeDescription),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UFlowNode_K2_GetStatusBackgroundColor = FName(TEXT("K2_GetStatusBackgroundColor"));
	bool UFlowNode::K2_GetStatusBackgroundColor(FLinearColor& OutColor) const
	{
		FlowNode_eventK2_GetStatusBackgroundColor_Parms Parms;
		Parms.OutColor=OutColor;
		const_cast<UFlowNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_UFlowNode_K2_GetStatusBackgroundColor),&Parms);
		OutColor=Parms.OutColor;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UFlowNode_K2_GetStatusString = FName(TEXT("K2_GetStatusString"));
	FString UFlowNode::K2_GetStatusString() const
	{
		FlowNode_eventK2_GetStatusString_Parms Parms;
		const_cast<UFlowNode*>(this)->ProcessEvent(FindFunctionChecked(NAME_UFlowNode_K2_GetStatusString),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UFlowNode_K2_InitializeInstance = FName(TEXT("K2_InitializeInstance"));
	void UFlowNode::K2_InitializeInstance()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFlowNode_K2_InitializeInstance),NULL);
	}
	static FName NAME_UFlowNode_K2_OnActivate = FName(TEXT("K2_OnActivate"));
	void UFlowNode::K2_OnActivate()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFlowNode_K2_OnActivate),NULL);
	}
	static FName NAME_UFlowNode_K2_PreloadContent = FName(TEXT("K2_PreloadContent"));
	void UFlowNode::K2_PreloadContent()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFlowNode_K2_PreloadContent),NULL);
	}
	static FName NAME_UFlowNode_OnLoad = FName(TEXT("OnLoad"));
	void UFlowNode::OnLoad()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFlowNode_OnLoad),NULL);
	}
	static FName NAME_UFlowNode_OnPassThrough = FName(TEXT("OnPassThrough"));
	void UFlowNode::OnPassThrough()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFlowNode_OnPassThrough),NULL);
	}
	static FName NAME_UFlowNode_OnSave = FName(TEXT("OnSave"));
	void UFlowNode::OnSave()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFlowNode_OnSave),NULL);
	}
	void UFlowNode::StaticRegisterNativesUFlowNode()
	{
		UClass* Class = UFlowNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Finish", &UFlowNode::execFinish },
			{ "GetClassDescription", &UFlowNode::execGetClassDescription },
			{ "GetFlowAsset", &UFlowNode::execGetFlowAsset },
			{ "GetFlowSubsystem", &UFlowNode::execGetFlowSubsystem },
			{ "GetIdentityTagDescription", &UFlowNode::execGetIdentityTagDescription },
			{ "GetIdentityTagsDescription", &UFlowNode::execGetIdentityTagsDescription },
			{ "GetInputNames", &UFlowNode::execGetInputNames },
			{ "GetNotifyTagsDescription", &UFlowNode::execGetNotifyTagsDescription },
			{ "GetOutputNames", &UFlowNode::execGetOutputNames },
			{ "GetProgressAsString", &UFlowNode::execGetProgressAsString },
			{ "IsInputConnected", &UFlowNode::execIsInputConnected },
			{ "IsOutputConnected", &UFlowNode::execIsOutputConnected },
			{ "LoadInstance", &UFlowNode::execLoadInstance },
			{ "LogError", &UFlowNode::execLogError },
			{ "OnLoad", &UFlowNode::execOnLoad },
			{ "OnPassThrough", &UFlowNode::execOnPassThrough },
			{ "OnSave", &UFlowNode::execOnSave },
			{ "SaveInstance", &UFlowNode::execSaveInstance },
			{ "TriggerFirstOutput", &UFlowNode::execTriggerFirstOutput },
			{ "TriggerOutput", &UFlowNode::execTriggerOutput },
			{ "TriggerOutputPin", &UFlowNode::execTriggerOutputPin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlowNode_Finish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_Finish_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "Comment", "// Finish execution of node, it will call Cleanup\n" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
		{ "ToolTip", "Finish execution of node, it will call Cleanup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_Finish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "Finish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_Finish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_Finish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_Finish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_Finish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_GetClassDescription_Statics
	{
		struct FlowNode_eventGetClassDescription_Parms
		{
			const TSubclassOf<UObject>  Class;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_GetClassDescription_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFlowNode_GetClassDescription_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventGetClassDescription_Parms, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_GetClassDescription_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_GetClassDescription_Statics::NewProp_Class_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlowNode_GetClassDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventGetClassDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_GetClassDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_GetClassDescription_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_GetClassDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_GetClassDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_GetClassDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "GetClassDescription", nullptr, nullptr, sizeof(FlowNode_eventGetClassDescription_Parms), Z_Construct_UFunction_UFlowNode_GetClassDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_GetClassDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_GetClassDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_GetClassDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_GetClassDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_GetClassDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_GetFlowAsset_Statics
	{
		struct FlowNode_eventGetFlowAsset_Parms
		{
			UFlowAsset* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlowNode_GetFlowAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventGetFlowAsset_Parms, ReturnValue), Z_Construct_UClass_UFlowAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_GetFlowAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_GetFlowAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_GetFlowAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_GetFlowAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "GetFlowAsset", nullptr, nullptr, sizeof(FlowNode_eventGetFlowAsset_Parms), Z_Construct_UFunction_UFlowNode_GetFlowAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_GetFlowAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_GetFlowAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_GetFlowAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_GetFlowAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_GetFlowAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_GetFlowSubsystem_Statics
	{
		struct FlowNode_eventGetFlowSubsystem_Parms
		{
			UFlowSubsystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlowNode_GetFlowSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventGetFlowSubsystem_Parms, ReturnValue), Z_Construct_UClass_UFlowSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_GetFlowSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_GetFlowSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_GetFlowSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_GetFlowSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "GetFlowSubsystem", nullptr, nullptr, sizeof(FlowNode_eventGetFlowSubsystem_Parms), Z_Construct_UFunction_UFlowNode_GetFlowSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_GetFlowSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_GetFlowSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_GetFlowSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_GetFlowSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_GetFlowSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_GetIdentityTagDescription_Statics
	{
		struct FlowNode_eventGetIdentityTagDescription_Parms
		{
			FGameplayTag Tag;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_GetIdentityTagDescription_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlowNode_GetIdentityTagDescription_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventGetIdentityTagDescription_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_GetIdentityTagDescription_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_GetIdentityTagDescription_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlowNode_GetIdentityTagDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventGetIdentityTagDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_GetIdentityTagDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_GetIdentityTagDescription_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_GetIdentityTagDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_GetIdentityTagDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_GetIdentityTagDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "GetIdentityTagDescription", nullptr, nullptr, sizeof(FlowNode_eventGetIdentityTagDescription_Parms), Z_Construct_UFunction_UFlowNode_GetIdentityTagDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_GetIdentityTagDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_GetIdentityTagDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_GetIdentityTagDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_GetIdentityTagDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_GetIdentityTagDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_GetIdentityTagsDescription_Statics
	{
		struct FlowNode_eventGetIdentityTagsDescription_Parms
		{
			FGameplayTagContainer Tags;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_GetIdentityTagsDescription_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlowNode_GetIdentityTagsDescription_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventGetIdentityTagsDescription_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_GetIdentityTagsDescription_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_GetIdentityTagsDescription_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlowNode_GetIdentityTagsDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventGetIdentityTagsDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_GetIdentityTagsDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_GetIdentityTagsDescription_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_GetIdentityTagsDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_GetIdentityTagsDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_GetIdentityTagsDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "GetIdentityTagsDescription", nullptr, nullptr, sizeof(FlowNode_eventGetIdentityTagsDescription_Parms), Z_Construct_UFunction_UFlowNode_GetIdentityTagsDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_GetIdentityTagsDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_GetIdentityTagsDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_GetIdentityTagsDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_GetIdentityTagsDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_GetIdentityTagsDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_GetInputNames_Statics
	{
		struct FlowNode_eventGetInputNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFlowNode_GetInputNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlowNode_GetInputNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventGetInputNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_GetInputNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_GetInputNames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_GetInputNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_GetInputNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_GetInputNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "GetInputNames", nullptr, nullptr, sizeof(FlowNode_eventGetInputNames_Parms), Z_Construct_UFunction_UFlowNode_GetInputNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_GetInputNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_GetInputNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_GetInputNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_GetInputNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_GetInputNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_GetNotifyTagsDescription_Statics
	{
		struct FlowNode_eventGetNotifyTagsDescription_Parms
		{
			FGameplayTagContainer Tags;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_GetNotifyTagsDescription_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlowNode_GetNotifyTagsDescription_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventGetNotifyTagsDescription_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_GetNotifyTagsDescription_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_GetNotifyTagsDescription_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlowNode_GetNotifyTagsDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventGetNotifyTagsDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_GetNotifyTagsDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_GetNotifyTagsDescription_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_GetNotifyTagsDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_GetNotifyTagsDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_GetNotifyTagsDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "GetNotifyTagsDescription", nullptr, nullptr, sizeof(FlowNode_eventGetNotifyTagsDescription_Parms), Z_Construct_UFunction_UFlowNode_GetNotifyTagsDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_GetNotifyTagsDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_GetNotifyTagsDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_GetNotifyTagsDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_GetNotifyTagsDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_GetNotifyTagsDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_GetOutputNames_Statics
	{
		struct FlowNode_eventGetOutputNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFlowNode_GetOutputNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlowNode_GetOutputNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventGetOutputNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_GetOutputNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_GetOutputNames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_GetOutputNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_GetOutputNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_GetOutputNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "GetOutputNames", nullptr, nullptr, sizeof(FlowNode_eventGetOutputNames_Parms), Z_Construct_UFunction_UFlowNode_GetOutputNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_GetOutputNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_GetOutputNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_GetOutputNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_GetOutputNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_GetOutputNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_GetProgressAsString_Statics
	{
		struct FlowNode_eventGetProgressAsString_Parms
		{
			float Value;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlowNode_GetProgressAsString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventGetProgressAsString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlowNode_GetProgressAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventGetProgressAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_GetProgressAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_GetProgressAsString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_GetProgressAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_GetProgressAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_GetProgressAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "GetProgressAsString", nullptr, nullptr, sizeof(FlowNode_eventGetProgressAsString_Parms), Z_Construct_UFunction_UFlowNode_GetProgressAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_GetProgressAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_GetProgressAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_GetProgressAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_GetProgressAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_GetProgressAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_IsInputConnected_Statics
	{
		struct FlowNode_eventIsInputConnected_Parms
		{
			FName PinName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PinName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_IsInputConnected_Statics::NewProp_PinName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFlowNode_IsInputConnected_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventIsInputConnected_Parms, PinName), METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_IsInputConnected_Statics::NewProp_PinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_IsInputConnected_Statics::NewProp_PinName_MetaData)) };
	void Z_Construct_UFunction_UFlowNode_IsInputConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlowNode_eventIsInputConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlowNode_IsInputConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlowNode_eventIsInputConnected_Parms), &Z_Construct_UFunction_UFlowNode_IsInputConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_IsInputConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_IsInputConnected_Statics::NewProp_PinName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_IsInputConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_IsInputConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_IsInputConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "IsInputConnected", nullptr, nullptr, sizeof(FlowNode_eventIsInputConnected_Parms), Z_Construct_UFunction_UFlowNode_IsInputConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_IsInputConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_IsInputConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_IsInputConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_IsInputConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_IsInputConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_IsOutputConnected_Statics
	{
		struct FlowNode_eventIsOutputConnected_Parms
		{
			FName PinName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PinName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_IsOutputConnected_Statics::NewProp_PinName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFlowNode_IsOutputConnected_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventIsOutputConnected_Parms, PinName), METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_IsOutputConnected_Statics::NewProp_PinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_IsOutputConnected_Statics::NewProp_PinName_MetaData)) };
	void Z_Construct_UFunction_UFlowNode_IsOutputConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlowNode_eventIsOutputConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlowNode_IsOutputConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlowNode_eventIsOutputConnected_Parms), &Z_Construct_UFunction_UFlowNode_IsOutputConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_IsOutputConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_IsOutputConnected_Statics::NewProp_PinName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_IsOutputConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_IsOutputConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_IsOutputConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "IsOutputConnected", nullptr, nullptr, sizeof(FlowNode_eventIsOutputConnected_Parms), Z_Construct_UFunction_UFlowNode_IsOutputConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_IsOutputConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_IsOutputConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_IsOutputConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_IsOutputConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_IsOutputConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_K2_CanUserAddInput_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFlowNode_K2_CanUserAddInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlowNode_eventK2_CanUserAddInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlowNode_K2_CanUserAddInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlowNode_eventK2_CanUserAddInput_Parms), &Z_Construct_UFunction_UFlowNode_K2_CanUserAddInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_K2_CanUserAddInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_K2_CanUserAddInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_K2_CanUserAddInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "DisplayName", "Can User Add Input" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_K2_CanUserAddInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "K2_CanUserAddInput", nullptr, nullptr, sizeof(FlowNode_eventK2_CanUserAddInput_Parms), Z_Construct_UFunction_UFlowNode_K2_CanUserAddInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_CanUserAddInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_K2_CanUserAddInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_CanUserAddInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_K2_CanUserAddInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_K2_CanUserAddInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_K2_CanUserAddOutput_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFlowNode_K2_CanUserAddOutput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlowNode_eventK2_CanUserAddOutput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlowNode_K2_CanUserAddOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlowNode_eventK2_CanUserAddOutput_Parms), &Z_Construct_UFunction_UFlowNode_K2_CanUserAddOutput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_K2_CanUserAddOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_K2_CanUserAddOutput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_K2_CanUserAddOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "DisplayName", "Can User Add Output" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_K2_CanUserAddOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "K2_CanUserAddOutput", nullptr, nullptr, sizeof(FlowNode_eventK2_CanUserAddOutput_Parms), Z_Construct_UFunction_UFlowNode_K2_CanUserAddOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_CanUserAddOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_K2_CanUserAddOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_CanUserAddOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_K2_CanUserAddOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_K2_CanUserAddOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_K2_Cleanup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_K2_Cleanup_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "Comment", "// Event called after node finished the work\n" },
		{ "DisplayName", "Cleanup" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
		{ "ToolTip", "Event called after node finished the work" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_K2_Cleanup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "K2_Cleanup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_K2_Cleanup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_Cleanup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_K2_Cleanup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_K2_Cleanup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_K2_ExecuteInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PinName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_K2_ExecuteInput_Statics::NewProp_PinName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFlowNode_K2_ExecuteInput_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventK2_ExecuteInput_Parms, PinName), METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_K2_ExecuteInput_Statics::NewProp_PinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_ExecuteInput_Statics::NewProp_PinName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_K2_ExecuteInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_K2_ExecuteInput_Statics::NewProp_PinName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_K2_ExecuteInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "Comment", "// Event reacting on triggering Input pin\n" },
		{ "DisplayName", "Execute Input" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
		{ "ToolTip", "Event reacting on triggering Input pin" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_K2_ExecuteInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "K2_ExecuteInput", nullptr, nullptr, sizeof(FlowNode_eventK2_ExecuteInput_Parms), Z_Construct_UFunction_UFlowNode_K2_ExecuteInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_ExecuteInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_K2_ExecuteInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_ExecuteInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_K2_ExecuteInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_K2_ExecuteInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_K2_FlushContent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_K2_FlushContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "DisplayName", "Flush Content" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_K2_FlushContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "K2_FlushContent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_K2_FlushContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_FlushContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_K2_FlushContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_K2_FlushContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_K2_ForceFinishNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_K2_ForceFinishNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "Comment", "// Define what happens when node is terminated from the outside\n" },
		{ "DisplayName", "Force Finish Node" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
		{ "ToolTip", "Define what happens when node is terminated from the outside" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_K2_ForceFinishNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "K2_ForceFinishNode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_K2_ForceFinishNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_ForceFinishNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_K2_ForceFinishNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_K2_ForceFinishNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_K2_GetActorToFocus_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlowNode_K2_GetActorToFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventK2_GetActorToFocus_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_K2_GetActorToFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_K2_GetActorToFocus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_K2_GetActorToFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "DisplayName", "Get Actor To Focus" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_K2_GetActorToFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "K2_GetActorToFocus", nullptr, nullptr, sizeof(FlowNode_eventK2_GetActorToFocus_Parms), Z_Construct_UFunction_UFlowNode_K2_GetActorToFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_GetActorToFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_K2_GetActorToFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_GetActorToFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_K2_GetActorToFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_K2_GetActorToFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_K2_GetAssetPath_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlowNode_K2_GetAssetPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventK2_GetAssetPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_K2_GetAssetPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_K2_GetAssetPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_K2_GetAssetPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "DisplayName", "Get Asset Path" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_K2_GetAssetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "K2_GetAssetPath", nullptr, nullptr, sizeof(FlowNode_eventK2_GetAssetPath_Parms), Z_Construct_UFunction_UFlowNode_K2_GetAssetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_GetAssetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_K2_GetAssetPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_GetAssetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_K2_GetAssetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_K2_GetAssetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_K2_GetAssetToEdit_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlowNode_K2_GetAssetToEdit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventK2_GetAssetToEdit_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_K2_GetAssetToEdit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_K2_GetAssetToEdit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_K2_GetAssetToEdit_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "DisplayName", "Get Asset To Edit" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_K2_GetAssetToEdit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "K2_GetAssetToEdit", nullptr, nullptr, sizeof(FlowNode_eventK2_GetAssetToEdit_Parms), Z_Construct_UFunction_UFlowNode_K2_GetAssetToEdit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_GetAssetToEdit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_K2_GetAssetToEdit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_GetAssetToEdit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_K2_GetAssetToEdit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_K2_GetAssetToEdit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_K2_GetNodeDescription_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlowNode_K2_GetNodeDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventK2_GetNodeDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_K2_GetNodeDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_K2_GetNodeDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_K2_GetNodeDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "Comment", "// Short summary of node's content - displayed over node as NodeInfoPopup\n" },
		{ "DisplayName", "Get Node Description" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
		{ "ToolTip", "Short summary of node's content - displayed over node as NodeInfoPopup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_K2_GetNodeDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "K2_GetNodeDescription", nullptr, nullptr, sizeof(FlowNode_eventK2_GetNodeDescription_Parms), Z_Construct_UFunction_UFlowNode_K2_GetNodeDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_GetNodeDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_K2_GetNodeDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_GetNodeDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_K2_GetNodeDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_K2_GetNodeDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_K2_GetStatusBackgroundColor_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutColor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlowNode_K2_GetStatusBackgroundColor_Statics::NewProp_OutColor = { "OutColor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventK2_GetStatusBackgroundColor_Parms, OutColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFlowNode_K2_GetStatusBackgroundColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FlowNode_eventK2_GetStatusBackgroundColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlowNode_K2_GetStatusBackgroundColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlowNode_eventK2_GetStatusBackgroundColor_Parms), &Z_Construct_UFunction_UFlowNode_K2_GetStatusBackgroundColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_K2_GetStatusBackgroundColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_K2_GetStatusBackgroundColor_Statics::NewProp_OutColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_K2_GetStatusBackgroundColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_K2_GetStatusBackgroundColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "DisplayName", "Get Status Background Color" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_K2_GetStatusBackgroundColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "K2_GetStatusBackgroundColor", nullptr, nullptr, sizeof(FlowNode_eventK2_GetStatusBackgroundColor_Parms), Z_Construct_UFunction_UFlowNode_K2_GetStatusBackgroundColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_GetStatusBackgroundColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C80800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_K2_GetStatusBackgroundColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_GetStatusBackgroundColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_K2_GetStatusBackgroundColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_K2_GetStatusBackgroundColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_K2_GetStatusString_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlowNode_K2_GetStatusString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventK2_GetStatusString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_K2_GetStatusString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_K2_GetStatusString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_K2_GetStatusString_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "Comment", "// Information displayed while node is working - displayed over node as NodeInfoPopup\n" },
		{ "DisplayName", "Get Status String" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
		{ "ToolTip", "Information displayed while node is working - displayed over node as NodeInfoPopup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_K2_GetStatusString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "K2_GetStatusString", nullptr, nullptr, sizeof(FlowNode_eventK2_GetStatusString_Parms), Z_Construct_UFunction_UFlowNode_K2_GetStatusString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_GetStatusString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_K2_GetStatusString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_GetStatusString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_K2_GetStatusString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_K2_GetStatusString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_K2_InitializeInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_K2_InitializeInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "Comment", "// Event called just after creating the node instance, while initializing the Flow Asset instance\n// This happens before executing graph, only called during gameplay\n" },
		{ "DisplayName", "Init Instance" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
		{ "ToolTip", "Event called just after creating the node instance, while initializing the Flow Asset instance\nThis happens before executing graph, only called during gameplay" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_K2_InitializeInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "K2_InitializeInstance", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_K2_InitializeInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_InitializeInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_K2_InitializeInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_K2_InitializeInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_K2_OnActivate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_K2_OnActivate_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "DisplayName", "On Activate" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_K2_OnActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "K2_OnActivate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_K2_OnActivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_OnActivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_K2_OnActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_K2_OnActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_K2_PreloadContent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_K2_PreloadContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "DisplayName", "Preload Content" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_K2_PreloadContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "K2_PreloadContent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_K2_PreloadContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_K2_PreloadContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_K2_PreloadContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_K2_PreloadContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_LoadInstance_Statics
	{
		struct FlowNode_eventLoadInstance_Parms
		{
			FFlowNodeSaveData NodeRecord;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeRecord_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeRecord;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_LoadInstance_Statics::NewProp_NodeRecord_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlowNode_LoadInstance_Statics::NewProp_NodeRecord = { "NodeRecord", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventLoadInstance_Parms, NodeRecord), Z_Construct_UScriptStruct_FFlowNodeSaveData, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_LoadInstance_Statics::NewProp_NodeRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_LoadInstance_Statics::NewProp_NodeRecord_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_LoadInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_LoadInstance_Statics::NewProp_NodeRecord,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_LoadInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_LoadInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "LoadInstance", nullptr, nullptr, sizeof(FlowNode_eventLoadInstance_Parms), Z_Construct_UFunction_UFlowNode_LoadInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_LoadInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_LoadInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_LoadInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_LoadInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_LoadInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_LogError_Statics
	{
		struct FlowNode_eventLogError_Parms
		{
			FString Message;
			EFlowOnScreenMessageType OnScreenMessageType;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OnScreenMessageType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnScreenMessageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OnScreenMessageType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFlowNode_LogError_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventLogError_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlowNode_LogError_Statics::NewProp_OnScreenMessageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_LogError_Statics::NewProp_OnScreenMessageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlowNode_LogError_Statics::NewProp_OnScreenMessageType = { "OnScreenMessageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventLogError_Parms, OnScreenMessageType), Z_Construct_UEnum_Flow_EFlowOnScreenMessageType, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_LogError_Statics::NewProp_OnScreenMessageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_LogError_Statics::NewProp_OnScreenMessageType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_LogError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_LogError_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_LogError_Statics::NewProp_OnScreenMessageType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_LogError_Statics::NewProp_OnScreenMessageType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_LogError_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "CPP_Default_OnScreenMessageType", "Permanent" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_LogError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "LogError", nullptr, nullptr, sizeof(FlowNode_eventLogError_Parms), Z_Construct_UFunction_UFlowNode_LogError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_LogError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_LogError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_LogError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_LogError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_LogError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_OnLoad_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_OnLoad_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_OnLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "OnLoad", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_OnLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_OnLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_OnLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_OnLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_OnPassThrough_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_OnPassThrough_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_OnPassThrough_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "OnPassThrough", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_OnPassThrough_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_OnPassThrough_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_OnPassThrough()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_OnPassThrough_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_OnSave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_OnSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_OnSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "OnSave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_OnSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_OnSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_OnSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_OnSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_SaveInstance_Statics
	{
		struct FlowNode_eventSaveInstance_Parms
		{
			FFlowNodeSaveData NodeRecord;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeRecord;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlowNode_SaveInstance_Statics::NewProp_NodeRecord = { "NodeRecord", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventSaveInstance_Parms, NodeRecord), Z_Construct_UScriptStruct_FFlowNodeSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_SaveInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_SaveInstance_Statics::NewProp_NodeRecord,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_SaveInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_SaveInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "SaveInstance", nullptr, nullptr, sizeof(FlowNode_eventSaveInstance_Parms), Z_Construct_UFunction_UFlowNode_SaveInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_SaveInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_SaveInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_SaveInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_SaveInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_SaveInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_TriggerFirstOutput_Statics
	{
		struct FlowNode_eventTriggerFirstOutput_Parms
		{
			bool bFinish;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFinish_MetaData[];
#endif
		static void NewProp_bFinish_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFinish;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_TriggerFirstOutput_Statics::NewProp_bFinish_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFlowNode_TriggerFirstOutput_Statics::NewProp_bFinish_SetBit(void* Obj)
	{
		((FlowNode_eventTriggerFirstOutput_Parms*)Obj)->bFinish = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlowNode_TriggerFirstOutput_Statics::NewProp_bFinish = { "bFinish", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlowNode_eventTriggerFirstOutput_Parms), &Z_Construct_UFunction_UFlowNode_TriggerFirstOutput_Statics::NewProp_bFinish_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_TriggerFirstOutput_Statics::NewProp_bFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_TriggerFirstOutput_Statics::NewProp_bFinish_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_TriggerFirstOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_TriggerFirstOutput_Statics::NewProp_bFinish,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_TriggerFirstOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "Comment", "// Simply trigger the first Output Pin, convenient to use if node has only one output\n" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
		{ "ToolTip", "Simply trigger the first Output Pin, convenient to use if node has only one output" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_TriggerFirstOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "TriggerFirstOutput", nullptr, nullptr, sizeof(FlowNode_eventTriggerFirstOutput_Parms), Z_Construct_UFunction_UFlowNode_TriggerFirstOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_TriggerFirstOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_TriggerFirstOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_TriggerFirstOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_TriggerFirstOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_TriggerFirstOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics
	{
		struct FlowNode_eventTriggerOutput_Parms
		{
			FName PinName;
			bool bFinish;
			EFlowPinActivationType ActivationType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PinName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFinish_MetaData[];
#endif
		static void NewProp_bFinish_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFinish;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActivationType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActivationType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::NewProp_PinName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventTriggerOutput_Parms, PinName), METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::NewProp_PinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::NewProp_PinName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::NewProp_bFinish_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::NewProp_bFinish_SetBit(void* Obj)
	{
		((FlowNode_eventTriggerOutput_Parms*)Obj)->bFinish = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::NewProp_bFinish = { "bFinish", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlowNode_eventTriggerOutput_Parms), &Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::NewProp_bFinish_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::NewProp_bFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::NewProp_bFinish_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::NewProp_ActivationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::NewProp_ActivationType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::NewProp_ActivationType = { "ActivationType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventTriggerOutput_Parms, ActivationType), Z_Construct_UEnum_Flow_EFlowPinActivationType, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::NewProp_ActivationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::NewProp_ActivationType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::NewProp_PinName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::NewProp_bFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::NewProp_ActivationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::NewProp_ActivationType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "CPP_Default_ActivationType", "Default" },
		{ "CPP_Default_bFinish", "false" },
		{ "HidePin", "bForcedActivation" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "TriggerOutput", nullptr, nullptr, sizeof(FlowNode_eventTriggerOutput_Parms), Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_TriggerOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_TriggerOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics
	{
		struct FlowNode_eventTriggerOutputPin_Parms
		{
			FFlowOutputPinHandle Pin;
			bool bFinish;
			EFlowPinActivationType ActivationType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFinish_MetaData[];
#endif
		static void NewProp_bFinish_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFinish;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActivationType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActivationType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::NewProp_Pin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::NewProp_Pin = { "Pin", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventTriggerOutputPin_Parms, Pin), Z_Construct_UScriptStruct_FFlowOutputPinHandle, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::NewProp_Pin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::NewProp_Pin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::NewProp_bFinish_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::NewProp_bFinish_SetBit(void* Obj)
	{
		((FlowNode_eventTriggerOutputPin_Parms*)Obj)->bFinish = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::NewProp_bFinish = { "bFinish", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FlowNode_eventTriggerOutputPin_Parms), &Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::NewProp_bFinish_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::NewProp_bFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::NewProp_bFinish_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::NewProp_ActivationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::NewProp_ActivationType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::NewProp_ActivationType = { "ActivationType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlowNode_eventTriggerOutputPin_Parms, ActivationType), Z_Construct_UEnum_Flow_EFlowPinActivationType, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::NewProp_ActivationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::NewProp_ActivationType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::NewProp_Pin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::NewProp_bFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::NewProp_ActivationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::NewProp_ActivationType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlowNode" },
		{ "CPP_Default_ActivationType", "Default" },
		{ "CPP_Default_bFinish", "false" },
		{ "HidePin", "ActivationType" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode, nullptr, "TriggerOutputPin", nullptr, nullptr, sizeof(FlowNode_eventTriggerOutputPin_Parms), Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_TriggerOutputPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_TriggerOutputPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFlowNode_NoRegister()
	{
		return UFlowNode::StaticClass();
	}
	struct Z_Construct_UClass_UFlowNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphNode;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NodeStyle_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NodeStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNodeDeprecated_MetaData[];
#endif
		static void NewProp_bNodeDeprecated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNodeDeprecated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplacedBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReplacedBy;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeGuid;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AllowedSignalModes_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AllowedSignalModes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedSignalModes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllowedSignalModes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SignalMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignalMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SignalMode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputPins_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPins_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputPins;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutputPins_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputPins_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutputPins;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Connections_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Connections_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Connections;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActivationState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActivationState;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutputNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutputNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlowNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlowNode_Finish, "Finish" }, // 3545317333
		{ &Z_Construct_UFunction_UFlowNode_GetClassDescription, "GetClassDescription" }, // 889068959
		{ &Z_Construct_UFunction_UFlowNode_GetFlowAsset, "GetFlowAsset" }, // 2805434272
		{ &Z_Construct_UFunction_UFlowNode_GetFlowSubsystem, "GetFlowSubsystem" }, // 2333092835
		{ &Z_Construct_UFunction_UFlowNode_GetIdentityTagDescription, "GetIdentityTagDescription" }, // 3445535432
		{ &Z_Construct_UFunction_UFlowNode_GetIdentityTagsDescription, "GetIdentityTagsDescription" }, // 2495748754
		{ &Z_Construct_UFunction_UFlowNode_GetInputNames, "GetInputNames" }, // 1845444130
		{ &Z_Construct_UFunction_UFlowNode_GetNotifyTagsDescription, "GetNotifyTagsDescription" }, // 172481655
		{ &Z_Construct_UFunction_UFlowNode_GetOutputNames, "GetOutputNames" }, // 3174965881
		{ &Z_Construct_UFunction_UFlowNode_GetProgressAsString, "GetProgressAsString" }, // 3282152019
		{ &Z_Construct_UFunction_UFlowNode_IsInputConnected, "IsInputConnected" }, // 2944380387
		{ &Z_Construct_UFunction_UFlowNode_IsOutputConnected, "IsOutputConnected" }, // 544666450
		{ &Z_Construct_UFunction_UFlowNode_K2_CanUserAddInput, "K2_CanUserAddInput" }, // 65664466
		{ &Z_Construct_UFunction_UFlowNode_K2_CanUserAddOutput, "K2_CanUserAddOutput" }, // 3868028261
		{ &Z_Construct_UFunction_UFlowNode_K2_Cleanup, "K2_Cleanup" }, // 2429193520
		{ &Z_Construct_UFunction_UFlowNode_K2_ExecuteInput, "K2_ExecuteInput" }, // 2191032973
		{ &Z_Construct_UFunction_UFlowNode_K2_FlushContent, "K2_FlushContent" }, // 1887114762
		{ &Z_Construct_UFunction_UFlowNode_K2_ForceFinishNode, "K2_ForceFinishNode" }, // 2134207014
		{ &Z_Construct_UFunction_UFlowNode_K2_GetActorToFocus, "K2_GetActorToFocus" }, // 787428458
		{ &Z_Construct_UFunction_UFlowNode_K2_GetAssetPath, "K2_GetAssetPath" }, // 2328388901
		{ &Z_Construct_UFunction_UFlowNode_K2_GetAssetToEdit, "K2_GetAssetToEdit" }, // 3334105050
		{ &Z_Construct_UFunction_UFlowNode_K2_GetNodeDescription, "K2_GetNodeDescription" }, // 1146159941
		{ &Z_Construct_UFunction_UFlowNode_K2_GetStatusBackgroundColor, "K2_GetStatusBackgroundColor" }, // 3024950326
		{ &Z_Construct_UFunction_UFlowNode_K2_GetStatusString, "K2_GetStatusString" }, // 3303401951
		{ &Z_Construct_UFunction_UFlowNode_K2_InitializeInstance, "K2_InitializeInstance" }, // 4213155792
		{ &Z_Construct_UFunction_UFlowNode_K2_OnActivate, "K2_OnActivate" }, // 3724234809
		{ &Z_Construct_UFunction_UFlowNode_K2_PreloadContent, "K2_PreloadContent" }, // 248159500
		{ &Z_Construct_UFunction_UFlowNode_LoadInstance, "LoadInstance" }, // 2456574203
		{ &Z_Construct_UFunction_UFlowNode_LogError, "LogError" }, // 3559623346
		{ &Z_Construct_UFunction_UFlowNode_OnLoad, "OnLoad" }, // 1834071554
		{ &Z_Construct_UFunction_UFlowNode_OnPassThrough, "OnPassThrough" }, // 2222767275
		{ &Z_Construct_UFunction_UFlowNode_OnSave, "OnSave" }, // 1020365548
		{ &Z_Construct_UFunction_UFlowNode_SaveInstance, "SaveInstance" }, // 3783452287
		{ &Z_Construct_UFunction_UFlowNode_TriggerFirstOutput, "TriggerFirstOutput" }, // 2574151177
		{ &Z_Construct_UFunction_UFlowNode_TriggerOutput, "TriggerOutput" }, // 3131376848
		{ &Z_Construct_UFunction_UFlowNode_TriggerOutputPin, "TriggerOutputPin" }, // 1177595207
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A Flow Node is UObject-based node designed to handle entire gameplay feature within single node.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Nodes/FlowNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
		{ "ToolTip", "A Flow Node is UObject-based node designed to handle entire gameplay feature within single node." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Statics::NewProp_GraphNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_GraphNode = { "GraphNode", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode, GraphNode), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Statics::NewProp_GraphNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Statics::NewProp_GraphNode_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Statics::NewProp_Category_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode, Category), METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_NodeStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Statics::NewProp_NodeStyle_MetaData[] = {
		{ "Category", "FlowNode" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_NodeStyle = { "NodeStyle", nullptr, (EPropertyFlags)0x0020080800010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode, NodeStyle), Z_Construct_UEnum_Flow_EFlowNodeStyle, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Statics::NewProp_NodeStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Statics::NewProp_NodeStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Statics::NewProp_bNodeDeprecated_MetaData[] = {
		{ "Category", "FlowNode" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	void Z_Construct_UClass_UFlowNode_Statics::NewProp_bNodeDeprecated_SetBit(void* Obj)
	{
		((UFlowNode*)Obj)->bNodeDeprecated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_bNodeDeprecated = { "bNodeDeprecated", nullptr, (EPropertyFlags)0x0020080800010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowNode), &Z_Construct_UClass_UFlowNode_Statics::NewProp_bNodeDeprecated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Statics::NewProp_bNodeDeprecated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Statics::NewProp_bNodeDeprecated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Statics::NewProp_ReplacedBy_MetaData[] = {
		{ "Category", "FlowNode" },
		{ "Comment", "// If this node is deprecated, it might be replaced by another node\n" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
		{ "ToolTip", "If this node is deprecated, it might be replaced by another node" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_ReplacedBy = { "ReplacedBy", nullptr, (EPropertyFlags)0x0024080800010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode, ReplacedBy), Z_Construct_UClass_UFlowNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Statics::NewProp_ReplacedBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Statics::NewProp_ReplacedBy_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Statics::NewProp_NodeGuid_MetaData[] = {
		{ "Comment", "// Inherits Guid after graph node\n" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
		{ "ToolTip", "Inherits Guid after graph node" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_NodeGuid = { "NodeGuid", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode, NodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Statics::NewProp_NodeGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Statics::NewProp_NodeGuid_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_AllowedSignalModes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_AllowedSignalModes_Inner = { "AllowedSignalModes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Flow_EFlowSignalMode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Statics::NewProp_AllowedSignalModes_MetaData[] = {
		{ "Category", "FlowNode" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_AllowedSignalModes = { "AllowedSignalModes", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode, AllowedSignalModes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Statics::NewProp_AllowedSignalModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Statics::NewProp_AllowedSignalModes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_SignalMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Statics::NewProp_SignalMode_MetaData[] = {
		{ "Comment", "// If enabled, signal will pass through node without calling ExecuteInput()\n// Designed to handle patching\n" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
		{ "ToolTip", "If enabled, signal will pass through node without calling ExecuteInput()\nDesigned to handle patching" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_SignalMode = { "SignalMode", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode, SignalMode), Z_Construct_UEnum_Flow_EFlowSignalMode, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Statics::NewProp_SignalMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Statics::NewProp_SignalMode_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_InputPins_Inner = { "InputPins", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFlowPin, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Statics::NewProp_InputPins_MetaData[] = {
		{ "Category", "FlowNode" },
		{ "Comment", "// Class-specific and user-added inputs\n" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
		{ "ToolTip", "Class-specific and user-added inputs" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_InputPins = { "InputPins", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode, InputPins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Statics::NewProp_InputPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Statics::NewProp_InputPins_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_OutputPins_Inner = { "OutputPins", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFlowPin, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Statics::NewProp_OutputPins_MetaData[] = {
		{ "Category", "FlowNode" },
		{ "Comment", "// Class-specific and user-added outputs\n" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
		{ "ToolTip", "Class-specific and user-added outputs" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_OutputPins = { "OutputPins", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode, OutputPins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Statics::NewProp_OutputPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Statics::NewProp_OutputPins_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_Connections_ValueProp = { "Connections", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FConnectedPin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_Connections_Key_KeyProp = { "Connections_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Statics::NewProp_Connections_MetaData[] = {
		{ "Comment", "// Map outputs to the connected node and input pin\n" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
		{ "ToolTip", "Map outputs to the connected node and input pin" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode, Connections), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Statics::NewProp_Connections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Statics::NewProp_Connections_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_ActivationState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Statics::NewProp_ActivationState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_ActivationState = { "ActivationState", nullptr, (EPropertyFlags)0x0020080001000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode, ActivationState), Z_Construct_UEnum_Flow_EFlowNodeState, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Statics::NewProp_ActivationState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Statics::NewProp_ActivationState_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_InputNames_Inner = { "InputNames", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Statics::NewProp_InputNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_InputNames = { "InputNames", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode, InputNames_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Statics::NewProp_InputNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Statics::NewProp_InputNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_OutputNames_Inner = { "OutputNames", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Statics::NewProp_OutputNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/FlowNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowNode_Statics::NewProp_OutputNames = { "OutputNames", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode, OutputNames_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Statics::NewProp_OutputNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Statics::NewProp_OutputNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_GraphNode,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_NodeStyle_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_NodeStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_bNodeDeprecated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_ReplacedBy,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_NodeGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_AllowedSignalModes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_AllowedSignalModes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_AllowedSignalModes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_SignalMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_SignalMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_InputPins_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_InputPins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_OutputPins_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_OutputPins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_Connections_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_Connections_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_Connections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_ActivationState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_ActivationState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_InputNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_InputNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_OutputNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Statics::NewProp_OutputNames,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFlowNode_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister, (int32)VTABLE_OFFSET(UFlowNode, IVisualLoggerDebugSnapshotInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowNode_Statics::ClassParams = {
		&UFlowNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFlowNode_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowNode, 2125765347);
	template<> FLOW_API UClass* StaticClass<UFlowNode>()
	{
		return UFlowNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowNode(Z_Construct_UClass_UFlowNode, &UFlowNode::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
