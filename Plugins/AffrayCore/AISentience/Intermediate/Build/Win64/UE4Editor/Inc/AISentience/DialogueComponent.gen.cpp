// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/DialogueComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueComponent() {}
// Cross Module References
	AISENTIENCE_API UFunction* Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature();
	AISENTIENCE_API UClass* Z_Construct_UClass_UDialogueComponent();
	AISENTIENCE_API UClass* Z_Construct_UClass_UDialogueComponent_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogue();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FCurrentDialogue();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature_Statics
	{
		struct DialogueComponent_eventDialogueMCDelegate_Parms
		{
			UDialogueComponent* Component;
			FName DialogueID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DialogueID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventDialogueMCDelegate_Parms, Component), Z_Construct_UClass_UDialogueComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventDialogueMCDelegate_Parms, DialogueID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature_Statics::NewProp_DialogueID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "DialogueMCDelegate__DelegateSignature", nullptr, nullptr, sizeof(DialogueComponent_eventDialogueMCDelegate_Parms), Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UDialogueComponent::execBroadcastDialogue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_DialogueID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastDialogue(Z_Param_DialogueID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execBroadcastInterrupt)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_DialogueID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterruptRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastInterrupt(Z_Param_DialogueID,Z_Param_InterruptRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execCancelResponse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelResponse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execChangeResponse)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewResponseID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeResponse(Z_Param_NewResponseID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execGetCurrentDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDialogue*)Z_Param__Result=P_THIS->GetCurrentDialogue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execGetCurrentDialogueID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetCurrentDialogueID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execGetCurrentResponseID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetCurrentResponseID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execGetPossibleResponses)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_DialogueID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetPossibleResponses_Implementation(Z_Param_DialogueID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execGetSpeakerName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetSpeakerName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execInterrupt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interrupt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execIsAttemptingToRespond)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAttemptingToRespond();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execIsAwaitingFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAwaitingFinish();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execIsSpeaking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSpeaking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execOnDialogueBroadcasted)
	{
		P_GET_OBJECT(UDialogueComponent,Z_Param_BroadcastingComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_DialogueID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AudibleDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDialogueBroadcasted_Implementation(Z_Param_BroadcastingComponent,Z_Param_DialogueID,Z_Param_AudibleDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execOnFinishSpeaking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFinishSpeaking_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execOnInterruptAttempt)
	{
		P_GET_OBJECT(UDialogueComponent,Z_Param_InterruptingComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterruptDistance);
		P_GET_UBOOL(Z_Param_bWasInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInterruptAttempt_Implementation(Z_Param_InterruptingComponent,Z_Param_InterruptDistance,Z_Param_bWasInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execOnRep_CurrentDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentDialogue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execOnRep_NextOverlayedDialogueID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_NextOverlayedDialogueID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execOnResponseAcknowledged)
	{
		P_GET_UBOOL(Z_Param_bCanRespond);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResponseAcknowledged_Implementation(Z_Param_bCanRespond);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execQueueResponse)
	{
		P_GET_OBJECT(UDialogueComponent,Z_Param_Target);
		P_GET_PROPERTY(FNameProperty,Z_Param_ResponseID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueueResponse(Z_Param_Target,Z_Param_ResponseID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execSetDialogueTable)
	{
		P_GET_OBJECT(UDataTable,Z_Param_NewDialogueTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDialogueTable(Z_Param_NewDialogueTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execShouldBeInterrupted)
	{
		P_GET_OBJECT(UDialogueComponent,Z_Param_InterruptingComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterruptDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldBeInterrupted_Implementation(Z_Param_InterruptingComponent,Z_Param_InterruptDistance);
		P_NATIVE_END;
	}
	static FName NAME_UDialogueComponent_GetPossibleResponses = FName(TEXT("GetPossibleResponses"));
	TArray<FName> UDialogueComponent::GetPossibleResponses(FName DialogueID) const
	{
		DialogueComponent_eventGetPossibleResponses_Parms Parms;
		Parms.DialogueID=DialogueID;
		const_cast<UDialogueComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDialogueComponent_GetPossibleResponses),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDialogueComponent_OnDialogueBroadcasted = FName(TEXT("OnDialogueBroadcasted"));
	void UDialogueComponent::OnDialogueBroadcasted(UDialogueComponent* BroadcastingComponent, FName DialogueID, float AudibleDistance)
	{
		DialogueComponent_eventOnDialogueBroadcasted_Parms Parms;
		Parms.BroadcastingComponent=BroadcastingComponent;
		Parms.DialogueID=DialogueID;
		Parms.AudibleDistance=AudibleDistance;
		ProcessEvent(FindFunctionChecked(NAME_UDialogueComponent_OnDialogueBroadcasted),&Parms);
	}
	static FName NAME_UDialogueComponent_OnFinishSpeaking = FName(TEXT("OnFinishSpeaking"));
	void UDialogueComponent::OnFinishSpeaking()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDialogueComponent_OnFinishSpeaking),NULL);
	}
	static FName NAME_UDialogueComponent_OnInterruptAttempt = FName(TEXT("OnInterruptAttempt"));
	void UDialogueComponent::OnInterruptAttempt(UDialogueComponent* InterruptingComponent, float InterruptDistance, bool bWasInterrupted)
	{
		DialogueComponent_eventOnInterruptAttempt_Parms Parms;
		Parms.InterruptingComponent=InterruptingComponent;
		Parms.InterruptDistance=InterruptDistance;
		Parms.bWasInterrupted=bWasInterrupted ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UDialogueComponent_OnInterruptAttempt),&Parms);
	}
	static FName NAME_UDialogueComponent_OnResponseAcknowledged = FName(TEXT("OnResponseAcknowledged"));
	void UDialogueComponent::OnResponseAcknowledged(bool bCanRespond)
	{
		DialogueComponent_eventOnResponseAcknowledged_Parms Parms;
		Parms.bCanRespond=bCanRespond ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UDialogueComponent_OnResponseAcknowledged),&Parms);
	}
	static FName NAME_UDialogueComponent_ShouldBeInterrupted = FName(TEXT("ShouldBeInterrupted"));
	bool UDialogueComponent::ShouldBeInterrupted(UDialogueComponent* InterruptingComponent, float InterruptDistance) const
	{
		DialogueComponent_eventShouldBeInterrupted_Parms Parms;
		Parms.InterruptingComponent=InterruptingComponent;
		Parms.InterruptDistance=InterruptDistance;
		const_cast<UDialogueComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDialogueComponent_ShouldBeInterrupted),&Parms);
		return !!Parms.ReturnValue;
	}
	void UDialogueComponent::StaticRegisterNativesUDialogueComponent()
	{
		UClass* Class = UDialogueComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastDialogue", &UDialogueComponent::execBroadcastDialogue },
			{ "BroadcastInterrupt", &UDialogueComponent::execBroadcastInterrupt },
			{ "CancelResponse", &UDialogueComponent::execCancelResponse },
			{ "ChangeResponse", &UDialogueComponent::execChangeResponse },
			{ "GetCurrentDialogue", &UDialogueComponent::execGetCurrentDialogue },
			{ "GetCurrentDialogueID", &UDialogueComponent::execGetCurrentDialogueID },
			{ "GetCurrentResponseID", &UDialogueComponent::execGetCurrentResponseID },
			{ "GetPossibleResponses", &UDialogueComponent::execGetPossibleResponses },
			{ "GetSpeakerName", &UDialogueComponent::execGetSpeakerName },
			{ "Interrupt", &UDialogueComponent::execInterrupt },
			{ "IsAttemptingToRespond", &UDialogueComponent::execIsAttemptingToRespond },
			{ "IsAwaitingFinish", &UDialogueComponent::execIsAwaitingFinish },
			{ "IsSpeaking", &UDialogueComponent::execIsSpeaking },
			{ "OnDialogueBroadcasted", &UDialogueComponent::execOnDialogueBroadcasted },
			{ "OnFinishSpeaking", &UDialogueComponent::execOnFinishSpeaking },
			{ "OnInterruptAttempt", &UDialogueComponent::execOnInterruptAttempt },
			{ "OnRep_CurrentDialogue", &UDialogueComponent::execOnRep_CurrentDialogue },
			{ "OnRep_NextOverlayedDialogueID", &UDialogueComponent::execOnRep_NextOverlayedDialogueID },
			{ "OnResponseAcknowledged", &UDialogueComponent::execOnResponseAcknowledged },
			{ "QueueResponse", &UDialogueComponent::execQueueResponse },
			{ "SetDialogueTable", &UDialogueComponent::execSetDialogueTable },
			{ "ShouldBeInterrupted", &UDialogueComponent::execShouldBeInterrupted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueComponent_BroadcastDialogue_Statics
	{
		struct DialogueComponent_eventBroadcastDialogue_Parms
		{
			FName DialogueID;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DialogueID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueComponent_BroadcastDialogue_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventBroadcastDialogue_Parms, DialogueID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_BroadcastDialogue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_BroadcastDialogue_Statics::NewProp_DialogueID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_BroadcastDialogue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_BroadcastDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "BroadcastDialogue", nullptr, nullptr, sizeof(DialogueComponent_eventBroadcastDialogue_Parms), Z_Construct_UFunction_UDialogueComponent_BroadcastDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_BroadcastDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_BroadcastDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_BroadcastDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_BroadcastDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueComponent_BroadcastDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_BroadcastInterrupt_Statics
	{
		struct DialogueComponent_eventBroadcastInterrupt_Parms
		{
			FName DialogueID;
			float InterruptRange;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DialogueID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterruptRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueComponent_BroadcastInterrupt_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventBroadcastInterrupt_Parms, DialogueID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDialogueComponent_BroadcastInterrupt_Statics::NewProp_InterruptRange = { "InterruptRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventBroadcastInterrupt_Parms, InterruptRange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_BroadcastInterrupt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_BroadcastInterrupt_Statics::NewProp_DialogueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_BroadcastInterrupt_Statics::NewProp_InterruptRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_BroadcastInterrupt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_BroadcastInterrupt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "BroadcastInterrupt", nullptr, nullptr, sizeof(DialogueComponent_eventBroadcastInterrupt_Parms), Z_Construct_UFunction_UDialogueComponent_BroadcastInterrupt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_BroadcastInterrupt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_BroadcastInterrupt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_BroadcastInterrupt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_BroadcastInterrupt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueComponent_BroadcastInterrupt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_CancelResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_CancelResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_CancelResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "CancelResponse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_CancelResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_CancelResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_CancelResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueComponent_CancelResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_ChangeResponse_Statics
	{
		struct DialogueComponent_eventChangeResponse_Parms
		{
			FName NewResponseID;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewResponseID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueComponent_ChangeResponse_Statics::NewProp_NewResponseID = { "NewResponseID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventChangeResponse_Parms, NewResponseID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_ChangeResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_ChangeResponse_Statics::NewProp_NewResponseID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_ChangeResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_ChangeResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "ChangeResponse", nullptr, nullptr, sizeof(DialogueComponent_eventChangeResponse_Parms), Z_Construct_UFunction_UDialogueComponent_ChangeResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_ChangeResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_ChangeResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_ChangeResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_ChangeResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueComponent_ChangeResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogue_Statics
	{
		struct DialogueComponent_eventGetCurrentDialogue_Parms
		{
			FDialogue ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventGetCurrentDialogue_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "GetCurrentDialogue", nullptr, nullptr, sizeof(DialogueComponent_eventGetCurrentDialogue_Parms), Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogueID_Statics
	{
		struct DialogueComponent_eventGetCurrentDialogueID_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogueID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventGetCurrentDialogueID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogueID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogueID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogueID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogueID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "GetCurrentDialogueID", nullptr, nullptr, sizeof(DialogueComponent_eventGetCurrentDialogueID_Parms), Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogueID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogueID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogueID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogueID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogueID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogueID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_GetCurrentResponseID_Statics
	{
		struct DialogueComponent_eventGetCurrentResponseID_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueComponent_GetCurrentResponseID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventGetCurrentResponseID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_GetCurrentResponseID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_GetCurrentResponseID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_GetCurrentResponseID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_GetCurrentResponseID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "GetCurrentResponseID", nullptr, nullptr, sizeof(DialogueComponent_eventGetCurrentResponseID_Parms), Z_Construct_UFunction_UDialogueComponent_GetCurrentResponseID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetCurrentResponseID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_GetCurrentResponseID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetCurrentResponseID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_GetCurrentResponseID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueComponent_GetCurrentResponseID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_GetPossibleResponses_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DialogueID;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueComponent_GetPossibleResponses_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventGetPossibleResponses_Parms, DialogueID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueComponent_GetPossibleResponses_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueComponent_GetPossibleResponses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventGetPossibleResponses_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_GetPossibleResponses_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_GetPossibleResponses_Statics::NewProp_DialogueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_GetPossibleResponses_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_GetPossibleResponses_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_GetPossibleResponses_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_GetPossibleResponses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "GetPossibleResponses", nullptr, nullptr, sizeof(DialogueComponent_eventGetPossibleResponses_Parms), Z_Construct_UFunction_UDialogueComponent_GetPossibleResponses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetPossibleResponses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_GetPossibleResponses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetPossibleResponses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_GetPossibleResponses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueComponent_GetPossibleResponses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_GetSpeakerName_Statics
	{
		struct DialogueComponent_eventGetSpeakerName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueComponent_GetSpeakerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventGetSpeakerName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_GetSpeakerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_GetSpeakerName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_GetSpeakerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_GetSpeakerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "GetSpeakerName", nullptr, nullptr, sizeof(DialogueComponent_eventGetSpeakerName_Parms), Z_Construct_UFunction_UDialogueComponent_GetSpeakerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetSpeakerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_GetSpeakerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetSpeakerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_GetSpeakerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueComponent_GetSpeakerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_Interrupt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_Interrupt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_Interrupt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "Interrupt", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_Interrupt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_Interrupt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_Interrupt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueComponent_Interrupt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_IsAttemptingToRespond_Statics
	{
		struct DialogueComponent_eventIsAttemptingToRespond_Parms
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
	void Z_Construct_UFunction_UDialogueComponent_IsAttemptingToRespond_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DialogueComponent_eventIsAttemptingToRespond_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueComponent_IsAttemptingToRespond_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DialogueComponent_eventIsAttemptingToRespond_Parms), &Z_Construct_UFunction_UDialogueComponent_IsAttemptingToRespond_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_IsAttemptingToRespond_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_IsAttemptingToRespond_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_IsAttemptingToRespond_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_IsAttemptingToRespond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "IsAttemptingToRespond", nullptr, nullptr, sizeof(DialogueComponent_eventIsAttemptingToRespond_Parms), Z_Construct_UFunction_UDialogueComponent_IsAttemptingToRespond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_IsAttemptingToRespond_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_IsAttemptingToRespond_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_IsAttemptingToRespond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_IsAttemptingToRespond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueComponent_IsAttemptingToRespond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_IsAwaitingFinish_Statics
	{
		struct DialogueComponent_eventIsAwaitingFinish_Parms
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
	void Z_Construct_UFunction_UDialogueComponent_IsAwaitingFinish_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DialogueComponent_eventIsAwaitingFinish_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueComponent_IsAwaitingFinish_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DialogueComponent_eventIsAwaitingFinish_Parms), &Z_Construct_UFunction_UDialogueComponent_IsAwaitingFinish_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_IsAwaitingFinish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_IsAwaitingFinish_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_IsAwaitingFinish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_IsAwaitingFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "IsAwaitingFinish", nullptr, nullptr, sizeof(DialogueComponent_eventIsAwaitingFinish_Parms), Z_Construct_UFunction_UDialogueComponent_IsAwaitingFinish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_IsAwaitingFinish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_IsAwaitingFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_IsAwaitingFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_IsAwaitingFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueComponent_IsAwaitingFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_IsSpeaking_Statics
	{
		struct DialogueComponent_eventIsSpeaking_Parms
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
	void Z_Construct_UFunction_UDialogueComponent_IsSpeaking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DialogueComponent_eventIsSpeaking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueComponent_IsSpeaking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DialogueComponent_eventIsSpeaking_Parms), &Z_Construct_UFunction_UDialogueComponent_IsSpeaking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_IsSpeaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_IsSpeaking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_IsSpeaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_IsSpeaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "IsSpeaking", nullptr, nullptr, sizeof(DialogueComponent_eventIsSpeaking_Parms), Z_Construct_UFunction_UDialogueComponent_IsSpeaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_IsSpeaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_IsSpeaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_IsSpeaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_IsSpeaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueComponent_IsSpeaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_OnDialogueBroadcasted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BroadcastingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BroadcastingComponent;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DialogueID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AudibleDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_OnDialogueBroadcasted_Statics::NewProp_BroadcastingComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueComponent_OnDialogueBroadcasted_Statics::NewProp_BroadcastingComponent = { "BroadcastingComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventOnDialogueBroadcasted_Parms, BroadcastingComponent), Z_Construct_UClass_UDialogueComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_OnDialogueBroadcasted_Statics::NewProp_BroadcastingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnDialogueBroadcasted_Statics::NewProp_BroadcastingComponent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueComponent_OnDialogueBroadcasted_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventOnDialogueBroadcasted_Parms, DialogueID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDialogueComponent_OnDialogueBroadcasted_Statics::NewProp_AudibleDistance = { "AudibleDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventOnDialogueBroadcasted_Parms, AudibleDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_OnDialogueBroadcasted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnDialogueBroadcasted_Statics::NewProp_BroadcastingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnDialogueBroadcasted_Statics::NewProp_DialogueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnDialogueBroadcasted_Statics::NewProp_AudibleDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_OnDialogueBroadcasted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_OnDialogueBroadcasted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "OnDialogueBroadcasted", nullptr, nullptr, sizeof(DialogueComponent_eventOnDialogueBroadcasted_Parms), Z_Construct_UFunction_UDialogueComponent_OnDialogueBroadcasted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnDialogueBroadcasted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_OnDialogueBroadcasted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnDialogueBroadcasted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_OnDialogueBroadcasted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueComponent_OnDialogueBroadcasted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_OnFinishSpeaking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_OnFinishSpeaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_OnFinishSpeaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "OnFinishSpeaking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_OnFinishSpeaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnFinishSpeaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_OnFinishSpeaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueComponent_OnFinishSpeaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_OnInterruptAttempt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterruptingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterruptingComponent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterruptDistance;
		static void NewProp_bWasInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasInterrupted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_OnInterruptAttempt_Statics::NewProp_InterruptingComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueComponent_OnInterruptAttempt_Statics::NewProp_InterruptingComponent = { "InterruptingComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventOnInterruptAttempt_Parms, InterruptingComponent), Z_Construct_UClass_UDialogueComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_OnInterruptAttempt_Statics::NewProp_InterruptingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnInterruptAttempt_Statics::NewProp_InterruptingComponent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDialogueComponent_OnInterruptAttempt_Statics::NewProp_InterruptDistance = { "InterruptDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventOnInterruptAttempt_Parms, InterruptDistance), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDialogueComponent_OnInterruptAttempt_Statics::NewProp_bWasInterrupted_SetBit(void* Obj)
	{
		((DialogueComponent_eventOnInterruptAttempt_Parms*)Obj)->bWasInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueComponent_OnInterruptAttempt_Statics::NewProp_bWasInterrupted = { "bWasInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DialogueComponent_eventOnInterruptAttempt_Parms), &Z_Construct_UFunction_UDialogueComponent_OnInterruptAttempt_Statics::NewProp_bWasInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_OnInterruptAttempt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnInterruptAttempt_Statics::NewProp_InterruptingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnInterruptAttempt_Statics::NewProp_InterruptDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnInterruptAttempt_Statics::NewProp_bWasInterrupted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_OnInterruptAttempt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_OnInterruptAttempt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "OnInterruptAttempt", nullptr, nullptr, sizeof(DialogueComponent_eventOnInterruptAttempt_Parms), Z_Construct_UFunction_UDialogueComponent_OnInterruptAttempt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnInterruptAttempt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_OnInterruptAttempt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnInterruptAttempt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_OnInterruptAttempt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueComponent_OnInterruptAttempt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_OnRep_CurrentDialogue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_OnRep_CurrentDialogue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_OnRep_CurrentDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "OnRep_CurrentDialogue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_OnRep_CurrentDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnRep_CurrentDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_OnRep_CurrentDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueComponent_OnRep_CurrentDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_OnRep_NextOverlayedDialogueID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_OnRep_NextOverlayedDialogueID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_OnRep_NextOverlayedDialogueID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "OnRep_NextOverlayedDialogueID", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_OnRep_NextOverlayedDialogueID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnRep_NextOverlayedDialogueID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_OnRep_NextOverlayedDialogueID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueComponent_OnRep_NextOverlayedDialogueID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_OnResponseAcknowledged_Statics
	{
		static void NewProp_bCanRespond_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanRespond;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDialogueComponent_OnResponseAcknowledged_Statics::NewProp_bCanRespond_SetBit(void* Obj)
	{
		((DialogueComponent_eventOnResponseAcknowledged_Parms*)Obj)->bCanRespond = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueComponent_OnResponseAcknowledged_Statics::NewProp_bCanRespond = { "bCanRespond", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DialogueComponent_eventOnResponseAcknowledged_Parms), &Z_Construct_UFunction_UDialogueComponent_OnResponseAcknowledged_Statics::NewProp_bCanRespond_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_OnResponseAcknowledged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_OnResponseAcknowledged_Statics::NewProp_bCanRespond,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_OnResponseAcknowledged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_OnResponseAcknowledged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "OnResponseAcknowledged", nullptr, nullptr, sizeof(DialogueComponent_eventOnResponseAcknowledged_Parms), Z_Construct_UFunction_UDialogueComponent_OnResponseAcknowledged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnResponseAcknowledged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_OnResponseAcknowledged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_OnResponseAcknowledged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_OnResponseAcknowledged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueComponent_OnResponseAcknowledged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_QueueResponse_Statics
	{
		struct DialogueComponent_eventQueueResponse_Parms
		{
			UDialogueComponent* Target;
			FName ResponseID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ResponseID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_QueueResponse_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueComponent_QueueResponse_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventQueueResponse_Parms, Target), Z_Construct_UClass_UDialogueComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_QueueResponse_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_QueueResponse_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueComponent_QueueResponse_Statics::NewProp_ResponseID = { "ResponseID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventQueueResponse_Parms, ResponseID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_QueueResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_QueueResponse_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_QueueResponse_Statics::NewProp_ResponseID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_QueueResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_QueueResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "QueueResponse", nullptr, nullptr, sizeof(DialogueComponent_eventQueueResponse_Parms), Z_Construct_UFunction_UDialogueComponent_QueueResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_QueueResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_QueueResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_QueueResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_QueueResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueComponent_QueueResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_SetDialogueTable_Statics
	{
		struct DialogueComponent_eventSetDialogueTable_Parms
		{
			const UDataTable* NewDialogueTable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewDialogueTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewDialogueTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_SetDialogueTable_Statics::NewProp_NewDialogueTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueComponent_SetDialogueTable_Statics::NewProp_NewDialogueTable = { "NewDialogueTable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventSetDialogueTable_Parms, NewDialogueTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_SetDialogueTable_Statics::NewProp_NewDialogueTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_SetDialogueTable_Statics::NewProp_NewDialogueTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_SetDialogueTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_SetDialogueTable_Statics::NewProp_NewDialogueTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_SetDialogueTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_SetDialogueTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "SetDialogueTable", nullptr, nullptr, sizeof(DialogueComponent_eventSetDialogueTable_Parms), Z_Construct_UFunction_UDialogueComponent_SetDialogueTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_SetDialogueTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_SetDialogueTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_SetDialogueTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_SetDialogueTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueComponent_SetDialogueTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_ShouldBeInterrupted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterruptingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterruptingComponent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterruptDistance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_ShouldBeInterrupted_Statics::NewProp_InterruptingComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueComponent_ShouldBeInterrupted_Statics::NewProp_InterruptingComponent = { "InterruptingComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventShouldBeInterrupted_Parms, InterruptingComponent), Z_Construct_UClass_UDialogueComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_ShouldBeInterrupted_Statics::NewProp_InterruptingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_ShouldBeInterrupted_Statics::NewProp_InterruptingComponent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDialogueComponent_ShouldBeInterrupted_Statics::NewProp_InterruptDistance = { "InterruptDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventShouldBeInterrupted_Parms, InterruptDistance), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDialogueComponent_ShouldBeInterrupted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DialogueComponent_eventShouldBeInterrupted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueComponent_ShouldBeInterrupted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DialogueComponent_eventShouldBeInterrupted_Parms), &Z_Construct_UFunction_UDialogueComponent_ShouldBeInterrupted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_ShouldBeInterrupted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_ShouldBeInterrupted_Statics::NewProp_InterruptingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_ShouldBeInterrupted_Statics::NewProp_InterruptDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_ShouldBeInterrupted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_ShouldBeInterrupted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_ShouldBeInterrupted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "ShouldBeInterrupted", nullptr, nullptr, sizeof(DialogueComponent_eventShouldBeInterrupted_Parms), Z_Construct_UFunction_UDialogueComponent_ShouldBeInterrupted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_ShouldBeInterrupted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_ShouldBeInterrupted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_ShouldBeInterrupted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_ShouldBeInterrupted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueComponent_ShouldBeInterrupted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDialogueComponent_NoRegister()
	{
		return UDialogueComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueStartedMCDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DialogueStartedMCDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueFinishedMCDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DialogueFinishedMCDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueInterruptedMCDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DialogueInterruptedMCDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OwnerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialoguePrefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DialoguePrefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OwnerDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogueTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAudibleDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultAudibleDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPreferredDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPreferredDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDialogue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentDialogue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextOverlayedDialogueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NextOverlayedDialogueID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFMODAudioComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueComponent_BroadcastDialogue, "BroadcastDialogue" }, // 3465362559
		{ &Z_Construct_UFunction_UDialogueComponent_BroadcastInterrupt, "BroadcastInterrupt" }, // 2225911971
		{ &Z_Construct_UFunction_UDialogueComponent_CancelResponse, "CancelResponse" }, // 1671188152
		{ &Z_Construct_UFunction_UDialogueComponent_ChangeResponse, "ChangeResponse" }, // 2350333773
		{ &Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature, "DialogueMCDelegate__DelegateSignature" }, // 2698795655
		{ &Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogue, "GetCurrentDialogue" }, // 715365592
		{ &Z_Construct_UFunction_UDialogueComponent_GetCurrentDialogueID, "GetCurrentDialogueID" }, // 381152734
		{ &Z_Construct_UFunction_UDialogueComponent_GetCurrentResponseID, "GetCurrentResponseID" }, // 2123075689
		{ &Z_Construct_UFunction_UDialogueComponent_GetPossibleResponses, "GetPossibleResponses" }, // 1830920469
		{ &Z_Construct_UFunction_UDialogueComponent_GetSpeakerName, "GetSpeakerName" }, // 3331022561
		{ &Z_Construct_UFunction_UDialogueComponent_Interrupt, "Interrupt" }, // 3441544813
		{ &Z_Construct_UFunction_UDialogueComponent_IsAttemptingToRespond, "IsAttemptingToRespond" }, // 1427478543
		{ &Z_Construct_UFunction_UDialogueComponent_IsAwaitingFinish, "IsAwaitingFinish" }, // 1018599589
		{ &Z_Construct_UFunction_UDialogueComponent_IsSpeaking, "IsSpeaking" }, // 3364406266
		{ &Z_Construct_UFunction_UDialogueComponent_OnDialogueBroadcasted, "OnDialogueBroadcasted" }, // 2377177824
		{ &Z_Construct_UFunction_UDialogueComponent_OnFinishSpeaking, "OnFinishSpeaking" }, // 3353243650
		{ &Z_Construct_UFunction_UDialogueComponent_OnInterruptAttempt, "OnInterruptAttempt" }, // 3312525201
		{ &Z_Construct_UFunction_UDialogueComponent_OnRep_CurrentDialogue, "OnRep_CurrentDialogue" }, // 2041935233
		{ &Z_Construct_UFunction_UDialogueComponent_OnRep_NextOverlayedDialogueID, "OnRep_NextOverlayedDialogueID" }, // 415175791
		{ &Z_Construct_UFunction_UDialogueComponent_OnResponseAcknowledged, "OnResponseAcknowledged" }, // 2214383151
		{ &Z_Construct_UFunction_UDialogueComponent_QueueResponse, "QueueResponse" }, // 3652769987
		{ &Z_Construct_UFunction_UDialogueComponent_SetDialogueTable, "SetDialogueTable" }, // 4254308170
		{ &Z_Construct_UFunction_UDialogueComponent_ShouldBeInterrupted, "ShouldBeInterrupted" }, // 4251192480
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "DialogueComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueStartedMCDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueComponent" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueStartedMCDelegate = { "DialogueStartedMCDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueComponent, DialogueStartedMCDelegate), Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueStartedMCDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueStartedMCDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueFinishedMCDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueComponent" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueFinishedMCDelegate = { "DialogueFinishedMCDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueComponent, DialogueFinishedMCDelegate), Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueFinishedMCDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueFinishedMCDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueInterruptedMCDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueComponent" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueInterruptedMCDelegate = { "DialogueInterruptedMCDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueComponent, DialogueInterruptedMCDelegate), Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueInterruptedMCDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueInterruptedMCDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueComponent_Statics::NewProp_OwnerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueComponent" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_OwnerName = { "OwnerName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueComponent, OwnerName), METADATA_PARAMS(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_OwnerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_OwnerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialoguePrefix_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueComponent" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialoguePrefix = { "DialoguePrefix", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueComponent, DialoguePrefix), METADATA_PARAMS(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialoguePrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialoguePrefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueComponent_Statics::NewProp_OwnerDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueComponent" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_OwnerDisplayName = { "OwnerDisplayName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueComponent, OwnerDisplayName), METADATA_PARAMS(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_OwnerDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_OwnerDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueComponent_Statics::NewProp_Color_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueComponent" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueComponent, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueComponent" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueTable = { "DialogueTable", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueComponent, DialogueTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DefaultAudibleDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueComponent" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DefaultAudibleDistance = { "DefaultAudibleDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueComponent, DefaultAudibleDistance), METADATA_PARAMS(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DefaultAudibleDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DefaultAudibleDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueComponent_Statics::NewProp_MaxPreferredDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueComponent" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_MaxPreferredDistance = { "MaxPreferredDistance", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueComponent, MaxPreferredDistance), METADATA_PARAMS(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_MaxPreferredDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_MaxPreferredDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueComponent_Statics::NewProp_CurrentDialogue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueComponent" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_CurrentDialogue = { "CurrentDialogue", "OnRep_CurrentDialogue", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueComponent, CurrentDialogue), Z_Construct_UScriptStruct_FCurrentDialogue, METADATA_PARAMS(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_CurrentDialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_CurrentDialogue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueComponent_Statics::NewProp_NextOverlayedDialogueID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogueComponent" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_NextOverlayedDialogueID = { "NextOverlayedDialogueID", "OnRep_NextOverlayedDialogueID", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueComponent, NextOverlayedDialogueID), METADATA_PARAMS(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_NextOverlayedDialogueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_NextOverlayedDialogueID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueStartedMCDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueFinishedMCDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueInterruptedMCDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_OwnerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialoguePrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_OwnerDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DefaultAudibleDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_MaxPreferredDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_CurrentDialogue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_NextOverlayedDialogueID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueComponent_Statics::ClassParams = {
		&UDialogueComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDialogueComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueComponent, 3153740603);
	template<> AISENTIENCE_API UClass* StaticClass<UDialogueComponent>()
	{
		return UDialogueComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueComponent(Z_Construct_UClass_UDialogueComponent, &UDialogueComponent::StaticClass, TEXT("/Script/AISentience"), TEXT("UDialogueComponent"), false, nullptr, nullptr, nullptr);

	void UDialogueComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_DialogueTable(TEXT("DialogueTable"));
		static const FName Name_CurrentDialogue(TEXT("CurrentDialogue"));
		static const FName Name_NextOverlayedDialogueID(TEXT("NextOverlayedDialogueID"));

		const bool bIsValid = true
			&& Name_DialogueTable == ClassReps[(int32)ENetFields_Private::DialogueTable].Property->GetFName()
			&& Name_CurrentDialogue == ClassReps[(int32)ENetFields_Private::CurrentDialogue].Property->GetFName()
			&& Name_NextOverlayedDialogueID == ClassReps[(int32)ENetFields_Private::NextOverlayedDialogueID].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDialogueComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
