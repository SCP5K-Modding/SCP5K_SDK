// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Public/InteractionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionComponent() {}
// Cross Module References
	INTERACTION_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();
	INTERACTION_API UClass* Z_Construct_UClass_UInteractionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Interaction();
	INTERACTION_API UClass* Z_Construct_UClass_UInteractableComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	INTERACTION_API UFunction* Z_Construct_UDelegateFunction_Interaction_InteractableRegisteredMCDelegate__DelegateSignature();
	INTERACTION_API UFunction* Z_Construct_UDelegateFunction_Interaction_InteractableDeregisteredMCDelegate__DelegateSignature();
	INTERACTION_API UFunction* Z_Construct_UDelegateFunction_Interaction_InteractableFocusedMCDelegate__DelegateSignature();
	INTERACTION_API UFunction* Z_Construct_UDelegateFunction_Interaction_InteractionStartedMCDelegate__DelegateSignature();
	INTERACTION_API UFunction* Z_Construct_UDelegateFunction_Interaction_InteractionFinishedMCDelegate__DelegateSignature();
	INTERACTION_API UFunction* Z_Construct_UDelegateFunction_Interaction_InteractionInterruptedMCDelegate__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(UInteractionComponent::execClient_BroadcastInteractionFinished)
	{
		P_GET_OBJECT(UInteractableComponent,Z_Param_Interactable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_BroadcastInteractionFinished_Implementation(Z_Param_Interactable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionComponent::execDeferredInteraction)
	{
		P_GET_OBJECT(UInteractableComponent,Z_Param_Interactable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeferredInteraction(Z_Param_Interactable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionComponent::execDeregisterInteractable)
	{
		P_GET_OBJECT(UInteractableComponent,Z_Param_Interactable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeregisterInteractable(Z_Param_Interactable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionComponent::execGetFocusedInteractable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInteractableComponent**)Z_Param__Result=P_THIS->GetFocusedInteractable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionComponent::execGetKnownInteractables)
	{
		P_GET_TARRAY_REF(UInteractableComponent*,Z_Param_Out_OutKnownInteractables);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetKnownInteractables(Z_Param_Out_OutKnownInteractables);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionComponent::execGetTimeUntilInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeUntilInteract();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionComponent::execInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionComponent::execInterrupt)
	{
		P_GET_OBJECT(AActor,Z_Param_EventInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interrupt(Z_Param_EventInstigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionComponent::execIsInteractingWith)
	{
		P_GET_OBJECT(UInteractableComponent,Z_Param_Interactable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInteractingWith(Z_Param_Interactable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionComponent::execMulticast_BroadcastInteractionFinished)
	{
		P_GET_OBJECT(UInteractableComponent,Z_Param_Interactable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_BroadcastInteractionFinished_Implementation(Z_Param_Interactable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionComponent::execMulticast_BroadcastInteractionInterrupted)
	{
		P_GET_OBJECT(UInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(AActor,Z_Param_EventInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_BroadcastInteractionInterrupted_Implementation(Z_Param_Interactable,Z_Param_EventInstigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionComponent::execMulticast_BroadcastInteractionStarted)
	{
		P_GET_OBJECT(UInteractableComponent,Z_Param_Interactable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_BroadcastInteractionStarted_Implementation(Z_Param_Interactable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionComponent::execRegisterInteractable)
	{
		P_GET_OBJECT(UInteractableComponent,Z_Param_Interactable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterInteractable(Z_Param_Interactable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionComponent::execServer_Interact)
	{
		P_GET_OBJECT(UInteractableComponent,Z_Param_Interactable);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_Interact_Validate(Z_Param_Interactable))
		{
			RPC_ValidateFailed(TEXT("Server_Interact_Validate"));
			return;
		}
		P_THIS->Server_Interact_Implementation(Z_Param_Interactable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionComponent::execServer_Interrupt)
	{
		P_GET_OBJECT(AActor,Z_Param_EventInstigator);
		P_GET_OBJECT(UInteractableComponent,Z_Param_Interactable);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_Interrupt_Validate(Z_Param_EventInstigator,Z_Param_Interactable))
		{
			RPC_ValidateFailed(TEXT("Server_Interrupt_Validate"));
			return;
		}
		P_THIS->Server_Interrupt_Implementation(Z_Param_EventInstigator,Z_Param_Interactable);
		P_NATIVE_END;
	}
	static FName NAME_UInteractionComponent_Client_BroadcastInteractionFinished = FName(TEXT("Client_BroadcastInteractionFinished"));
	void UInteractionComponent::Client_BroadcastInteractionFinished(UInteractableComponent* Interactable)
	{
		InteractionComponent_eventClient_BroadcastInteractionFinished_Parms Parms;
		Parms.Interactable=Interactable;
		ProcessEvent(FindFunctionChecked(NAME_UInteractionComponent_Client_BroadcastInteractionFinished),&Parms);
	}
	static FName NAME_UInteractionComponent_Multicast_BroadcastInteractionFinished = FName(TEXT("Multicast_BroadcastInteractionFinished"));
	void UInteractionComponent::Multicast_BroadcastInteractionFinished(UInteractableComponent* Interactable)
	{
		InteractionComponent_eventMulticast_BroadcastInteractionFinished_Parms Parms;
		Parms.Interactable=Interactable;
		ProcessEvent(FindFunctionChecked(NAME_UInteractionComponent_Multicast_BroadcastInteractionFinished),&Parms);
	}
	static FName NAME_UInteractionComponent_Multicast_BroadcastInteractionInterrupted = FName(TEXT("Multicast_BroadcastInteractionInterrupted"));
	void UInteractionComponent::Multicast_BroadcastInteractionInterrupted(UInteractableComponent* Interactable, AActor* EventInstigator)
	{
		InteractionComponent_eventMulticast_BroadcastInteractionInterrupted_Parms Parms;
		Parms.Interactable=Interactable;
		Parms.EventInstigator=EventInstigator;
		ProcessEvent(FindFunctionChecked(NAME_UInteractionComponent_Multicast_BroadcastInteractionInterrupted),&Parms);
	}
	static FName NAME_UInteractionComponent_Multicast_BroadcastInteractionStarted = FName(TEXT("Multicast_BroadcastInteractionStarted"));
	void UInteractionComponent::Multicast_BroadcastInteractionStarted(UInteractableComponent* Interactable)
	{
		InteractionComponent_eventMulticast_BroadcastInteractionStarted_Parms Parms;
		Parms.Interactable=Interactable;
		ProcessEvent(FindFunctionChecked(NAME_UInteractionComponent_Multicast_BroadcastInteractionStarted),&Parms);
	}
	static FName NAME_UInteractionComponent_Server_Interact = FName(TEXT("Server_Interact"));
	void UInteractionComponent::Server_Interact(UInteractableComponent* Interactable)
	{
		InteractionComponent_eventServer_Interact_Parms Parms;
		Parms.Interactable=Interactable;
		ProcessEvent(FindFunctionChecked(NAME_UInteractionComponent_Server_Interact),&Parms);
	}
	static FName NAME_UInteractionComponent_Server_Interrupt = FName(TEXT("Server_Interrupt"));
	void UInteractionComponent::Server_Interrupt(AActor* EventInstigator, UInteractableComponent* Interactable)
	{
		InteractionComponent_eventServer_Interrupt_Parms Parms;
		Parms.EventInstigator=EventInstigator;
		Parms.Interactable=Interactable;
		ProcessEvent(FindFunctionChecked(NAME_UInteractionComponent_Server_Interrupt),&Parms);
	}
	void UInteractionComponent::StaticRegisterNativesUInteractionComponent()
	{
		UClass* Class = UInteractionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_BroadcastInteractionFinished", &UInteractionComponent::execClient_BroadcastInteractionFinished },
			{ "DeferredInteraction", &UInteractionComponent::execDeferredInteraction },
			{ "DeregisterInteractable", &UInteractionComponent::execDeregisterInteractable },
			{ "GetFocusedInteractable", &UInteractionComponent::execGetFocusedInteractable },
			{ "GetKnownInteractables", &UInteractionComponent::execGetKnownInteractables },
			{ "GetTimeUntilInteract", &UInteractionComponent::execGetTimeUntilInteract },
			{ "Interact", &UInteractionComponent::execInteract },
			{ "Interrupt", &UInteractionComponent::execInterrupt },
			{ "IsInteractingWith", &UInteractionComponent::execIsInteractingWith },
			{ "Multicast_BroadcastInteractionFinished", &UInteractionComponent::execMulticast_BroadcastInteractionFinished },
			{ "Multicast_BroadcastInteractionInterrupted", &UInteractionComponent::execMulticast_BroadcastInteractionInterrupted },
			{ "Multicast_BroadcastInteractionStarted", &UInteractionComponent::execMulticast_BroadcastInteractionStarted },
			{ "RegisterInteractable", &UInteractionComponent::execRegisterInteractable },
			{ "Server_Interact", &UInteractionComponent::execServer_Interact },
			{ "Server_Interrupt", &UInteractionComponent::execServer_Interrupt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionComponent_Client_BroadcastInteractionFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_Client_BroadcastInteractionFinished_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionComponent_Client_BroadcastInteractionFinished_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionComponent_eventClient_BroadcastInteractionFinished_Parms, Interactable), Z_Construct_UClass_UInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_Client_BroadcastInteractionFinished_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_Client_BroadcastInteractionFinished_Statics::NewProp_Interactable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_Client_BroadcastInteractionFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_Client_BroadcastInteractionFinished_Statics::NewProp_Interactable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_Client_BroadcastInteractionFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_Client_BroadcastInteractionFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "Client_BroadcastInteractionFinished", nullptr, nullptr, sizeof(InteractionComponent_eventClient_BroadcastInteractionFinished_Parms), Z_Construct_UFunction_UInteractionComponent_Client_BroadcastInteractionFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_Client_BroadcastInteractionFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_Client_BroadcastInteractionFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_Client_BroadcastInteractionFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_Client_BroadcastInteractionFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_Client_BroadcastInteractionFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_DeferredInteraction_Statics
	{
		struct InteractionComponent_eventDeferredInteraction_Parms
		{
			UInteractableComponent* Interactable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_DeferredInteraction_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionComponent_DeferredInteraction_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionComponent_eventDeferredInteraction_Parms, Interactable), Z_Construct_UClass_UInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_DeferredInteraction_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_DeferredInteraction_Statics::NewProp_Interactable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_DeferredInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_DeferredInteraction_Statics::NewProp_Interactable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_DeferredInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_DeferredInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "DeferredInteraction", nullptr, nullptr, sizeof(InteractionComponent_eventDeferredInteraction_Parms), Z_Construct_UFunction_UInteractionComponent_DeferredInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_DeferredInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_DeferredInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_DeferredInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_DeferredInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_DeferredInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_DeregisterInteractable_Statics
	{
		struct InteractionComponent_eventDeregisterInteractable_Parms
		{
			UInteractableComponent* Interactable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_DeregisterInteractable_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionComponent_DeregisterInteractable_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionComponent_eventDeregisterInteractable_Parms, Interactable), Z_Construct_UClass_UInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_DeregisterInteractable_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_DeregisterInteractable_Statics::NewProp_Interactable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_DeregisterInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_DeregisterInteractable_Statics::NewProp_Interactable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_DeregisterInteractable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_DeregisterInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "DeregisterInteractable", nullptr, nullptr, sizeof(InteractionComponent_eventDeregisterInteractable_Parms), Z_Construct_UFunction_UInteractionComponent_DeregisterInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_DeregisterInteractable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_DeregisterInteractable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_DeregisterInteractable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_DeregisterInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_DeregisterInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_GetFocusedInteractable_Statics
	{
		struct InteractionComponent_eventGetFocusedInteractable_Parms
		{
			UInteractableComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_GetFocusedInteractable_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionComponent_GetFocusedInteractable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionComponent_eventGetFocusedInteractable_Parms, ReturnValue), Z_Construct_UClass_UInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_GetFocusedInteractable_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_GetFocusedInteractable_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_GetFocusedInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_GetFocusedInteractable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_GetFocusedInteractable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_GetFocusedInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "GetFocusedInteractable", nullptr, nullptr, sizeof(InteractionComponent_eventGetFocusedInteractable_Parms), Z_Construct_UFunction_UInteractionComponent_GetFocusedInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_GetFocusedInteractable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_GetFocusedInteractable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_GetFocusedInteractable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_GetFocusedInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_GetFocusedInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_GetKnownInteractables_Statics
	{
		struct InteractionComponent_eventGetKnownInteractables_Parms
		{
			TArray<UInteractableComponent*> OutKnownInteractables;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutKnownInteractables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutKnownInteractables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutKnownInteractables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionComponent_GetKnownInteractables_Statics::NewProp_OutKnownInteractables_Inner = { "OutKnownInteractables", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInteractableComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_GetKnownInteractables_Statics::NewProp_OutKnownInteractables_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInteractionComponent_GetKnownInteractables_Statics::NewProp_OutKnownInteractables = { "OutKnownInteractables", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionComponent_eventGetKnownInteractables_Parms, OutKnownInteractables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_GetKnownInteractables_Statics::NewProp_OutKnownInteractables_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_GetKnownInteractables_Statics::NewProp_OutKnownInteractables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_GetKnownInteractables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_GetKnownInteractables_Statics::NewProp_OutKnownInteractables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_GetKnownInteractables_Statics::NewProp_OutKnownInteractables,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_GetKnownInteractables_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_GetKnownInteractables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "GetKnownInteractables", nullptr, nullptr, sizeof(InteractionComponent_eventGetKnownInteractables_Parms), Z_Construct_UFunction_UInteractionComponent_GetKnownInteractables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_GetKnownInteractables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_GetKnownInteractables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_GetKnownInteractables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_GetKnownInteractables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_GetKnownInteractables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_GetTimeUntilInteract_Statics
	{
		struct InteractionComponent_eventGetTimeUntilInteract_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractionComponent_GetTimeUntilInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionComponent_eventGetTimeUntilInteract_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_GetTimeUntilInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_GetTimeUntilInteract_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_GetTimeUntilInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_GetTimeUntilInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "GetTimeUntilInteract", nullptr, nullptr, sizeof(InteractionComponent_eventGetTimeUntilInteract_Parms), Z_Construct_UFunction_UInteractionComponent_GetTimeUntilInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_GetTimeUntilInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_GetTimeUntilInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_GetTimeUntilInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_GetTimeUntilInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_GetTimeUntilInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_Interact_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "Interact", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_Interrupt_Statics
	{
		struct InteractionComponent_eventInterrupt_Parms
		{
			AActor* EventInstigator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionComponent_Interrupt_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionComponent_eventInterrupt_Parms, EventInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_Interrupt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_Interrupt_Statics::NewProp_EventInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_Interrupt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_Interrupt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "Interrupt", nullptr, nullptr, sizeof(InteractionComponent_eventInterrupt_Parms), Z_Construct_UFunction_UInteractionComponent_Interrupt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_Interrupt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_Interrupt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_Interrupt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_Interrupt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_Interrupt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_IsInteractingWith_Statics
	{
		struct InteractionComponent_eventIsInteractingWith_Parms
		{
			UInteractableComponent* Interactable;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_IsInteractingWith_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionComponent_IsInteractingWith_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionComponent_eventIsInteractingWith_Parms, Interactable), Z_Construct_UClass_UInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_IsInteractingWith_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_IsInteractingWith_Statics::NewProp_Interactable_MetaData)) };
	void Z_Construct_UFunction_UInteractionComponent_IsInteractingWith_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractionComponent_eventIsInteractingWith_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionComponent_IsInteractingWith_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractionComponent_eventIsInteractingWith_Parms), &Z_Construct_UFunction_UInteractionComponent_IsInteractingWith_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_IsInteractingWith_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_IsInteractingWith_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_IsInteractingWith_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_IsInteractingWith_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_IsInteractingWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "IsInteractingWith", nullptr, nullptr, sizeof(InteractionComponent_eventIsInteractingWith_Parms), Z_Construct_UFunction_UInteractionComponent_IsInteractingWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_IsInteractingWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_IsInteractingWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_IsInteractingWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_IsInteractingWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_IsInteractingWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionFinished_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionFinished_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionComponent_eventMulticast_BroadcastInteractionFinished_Parms, Interactable), Z_Construct_UClass_UInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionFinished_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionFinished_Statics::NewProp_Interactable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionFinished_Statics::NewProp_Interactable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "Multicast_BroadcastInteractionFinished", nullptr, nullptr, sizeof(InteractionComponent_eventMulticast_BroadcastInteractionFinished_Parms), Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionInterrupted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionInterrupted_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionInterrupted_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionComponent_eventMulticast_BroadcastInteractionInterrupted_Parms, Interactable), Z_Construct_UClass_UInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionInterrupted_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionInterrupted_Statics::NewProp_Interactable_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionInterrupted_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionComponent_eventMulticast_BroadcastInteractionInterrupted_Parms, EventInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionInterrupted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionInterrupted_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionInterrupted_Statics::NewProp_EventInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionInterrupted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionInterrupted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "Multicast_BroadcastInteractionInterrupted", nullptr, nullptr, sizeof(InteractionComponent_eventMulticast_BroadcastInteractionInterrupted_Parms), Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionInterrupted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionInterrupted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionInterrupted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionInterrupted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionInterrupted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionInterrupted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionStarted_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionStarted_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionComponent_eventMulticast_BroadcastInteractionStarted_Parms, Interactable), Z_Construct_UClass_UInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionStarted_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionStarted_Statics::NewProp_Interactable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionStarted_Statics::NewProp_Interactable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "Multicast_BroadcastInteractionStarted", nullptr, nullptr, sizeof(InteractionComponent_eventMulticast_BroadcastInteractionStarted_Parms), Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_RegisterInteractable_Statics
	{
		struct InteractionComponent_eventRegisterInteractable_Parms
		{
			UInteractableComponent* Interactable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_RegisterInteractable_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionComponent_RegisterInteractable_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionComponent_eventRegisterInteractable_Parms, Interactable), Z_Construct_UClass_UInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_RegisterInteractable_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_RegisterInteractable_Statics::NewProp_Interactable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_RegisterInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_RegisterInteractable_Statics::NewProp_Interactable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_RegisterInteractable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_RegisterInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "RegisterInteractable", nullptr, nullptr, sizeof(InteractionComponent_eventRegisterInteractable_Parms), Z_Construct_UFunction_UInteractionComponent_RegisterInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_RegisterInteractable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_RegisterInteractable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_RegisterInteractable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_RegisterInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_RegisterInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_Server_Interact_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_Server_Interact_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionComponent_Server_Interact_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionComponent_eventServer_Interact_Parms, Interactable), Z_Construct_UClass_UInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_Server_Interact_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_Server_Interact_Statics::NewProp_Interactable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_Server_Interact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_Server_Interact_Statics::NewProp_Interactable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_Server_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_Server_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "Server_Interact", nullptr, nullptr, sizeof(InteractionComponent_eventServer_Interact_Parms), Z_Construct_UFunction_UInteractionComponent_Server_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_Server_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_Server_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_Server_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_Server_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_Server_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_Server_Interrupt_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionComponent_Server_Interrupt_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionComponent_eventServer_Interrupt_Parms, EventInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_Server_Interrupt_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionComponent_Server_Interrupt_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionComponent_eventServer_Interrupt_Parms, Interactable), Z_Construct_UClass_UInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_Server_Interrupt_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_Server_Interrupt_Statics::NewProp_Interactable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_Server_Interrupt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_Server_Interrupt_Statics::NewProp_EventInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_Server_Interrupt_Statics::NewProp_Interactable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_Server_Interrupt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_Server_Interrupt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "Server_Interrupt", nullptr, nullptr, sizeof(InteractionComponent_eventServer_Interrupt_Parms), Z_Construct_UFunction_UInteractionComponent_Server_Interrupt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_Server_Interrupt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_Server_Interrupt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_Server_Interrupt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_Server_Interrupt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_Server_Interrupt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionComponent_NoRegister()
	{
		return UInteractionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableRegisteredMCDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_InteractableRegisteredMCDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableDeregisteredMCDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_InteractableDeregisteredMCDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableFocusedMCDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_InteractableFocusedMCDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionStartedMCDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_InteractionStartedMCDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionFinishedMCDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_InteractionFinishedMCDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionInterruptedMCDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_InteractionInterruptedMCDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractionDelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Interaction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionComponent_Client_BroadcastInteractionFinished, "Client_BroadcastInteractionFinished" }, // 294468268
		{ &Z_Construct_UFunction_UInteractionComponent_DeferredInteraction, "DeferredInteraction" }, // 2936994565
		{ &Z_Construct_UFunction_UInteractionComponent_DeregisterInteractable, "DeregisterInteractable" }, // 3708870358
		{ &Z_Construct_UFunction_UInteractionComponent_GetFocusedInteractable, "GetFocusedInteractable" }, // 1267846903
		{ &Z_Construct_UFunction_UInteractionComponent_GetKnownInteractables, "GetKnownInteractables" }, // 2099602011
		{ &Z_Construct_UFunction_UInteractionComponent_GetTimeUntilInteract, "GetTimeUntilInteract" }, // 1077943714
		{ &Z_Construct_UFunction_UInteractionComponent_Interact, "Interact" }, // 3773148317
		{ &Z_Construct_UFunction_UInteractionComponent_Interrupt, "Interrupt" }, // 1767641115
		{ &Z_Construct_UFunction_UInteractionComponent_IsInteractingWith, "IsInteractingWith" }, // 1470958206
		{ &Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionFinished, "Multicast_BroadcastInteractionFinished" }, // 259910397
		{ &Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionInterrupted, "Multicast_BroadcastInteractionInterrupted" }, // 113083366
		{ &Z_Construct_UFunction_UInteractionComponent_Multicast_BroadcastInteractionStarted, "Multicast_BroadcastInteractionStarted" }, // 2340058116
		{ &Z_Construct_UFunction_UInteractionComponent_RegisterInteractable, "RegisterInteractable" }, // 865347906
		{ &Z_Construct_UFunction_UInteractionComponent_Server_Interact, "Server_Interact" }, // 1438913786
		{ &Z_Construct_UFunction_UInteractionComponent_Server_Interrupt, "Server_Interrupt" }, // 832452306
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InteractionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractableRegisteredMCDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InteractionComponent" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractableRegisteredMCDelegate = { "InteractableRegisteredMCDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionComponent, InteractableRegisteredMCDelegate), Z_Construct_UDelegateFunction_Interaction_InteractableRegisteredMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractableRegisteredMCDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractableRegisteredMCDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractableDeregisteredMCDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InteractionComponent" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractableDeregisteredMCDelegate = { "InteractableDeregisteredMCDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionComponent, InteractableDeregisteredMCDelegate), Z_Construct_UDelegateFunction_Interaction_InteractableDeregisteredMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractableDeregisteredMCDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractableDeregisteredMCDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractableFocusedMCDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InteractionComponent" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractableFocusedMCDelegate = { "InteractableFocusedMCDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionComponent, InteractableFocusedMCDelegate), Z_Construct_UDelegateFunction_Interaction_InteractableFocusedMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractableFocusedMCDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractableFocusedMCDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionStartedMCDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InteractionComponent" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionStartedMCDelegate = { "InteractionStartedMCDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionComponent, InteractionStartedMCDelegate), Z_Construct_UDelegateFunction_Interaction_InteractionStartedMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionStartedMCDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionStartedMCDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionFinishedMCDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InteractionComponent" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionFinishedMCDelegate = { "InteractionFinishedMCDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionComponent, InteractionFinishedMCDelegate), Z_Construct_UDelegateFunction_Interaction_InteractionFinishedMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionFinishedMCDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionFinishedMCDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionInterruptedMCDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InteractionComponent" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionInterruptedMCDelegate = { "InteractionInterruptedMCDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionComponent, InteractionInterruptedMCDelegate), Z_Construct_UDelegateFunction_Interaction_InteractionInterruptedMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionInterruptedMCDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionInterruptedMCDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionDelayTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InteractionComponent" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionDelayTime = { "InteractionDelayTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionComponent, InteractionDelayTime), METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionDelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InteractionComponent" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionDelay = { "InteractionDelay", nullptr, (EPropertyFlags)0x0040000000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionComponent, InteractionDelay), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InteractionComponent" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionTimer = { "InteractionTimer", nullptr, (EPropertyFlags)0x0040000000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionComponent, InteractionTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractableRegisteredMCDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractableDeregisteredMCDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractableFocusedMCDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionStartedMCDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionFinishedMCDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionInterruptedMCDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionComponent_Statics::ClassParams = {
		&UInteractionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionComponent, 2581957658);
	template<> INTERACTION_API UClass* StaticClass<UInteractionComponent>()
	{
		return UInteractionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionComponent(Z_Construct_UClass_UInteractionComponent, &UInteractionComponent::StaticClass, TEXT("/Script/Interaction"), TEXT("UInteractionComponent"), false, nullptr, nullptr, nullptr);

	void UInteractionComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_InteractionDelay(TEXT("InteractionDelay"));
		static const FName Name_InteractionTimer(TEXT("InteractionTimer"));

		const bool bIsValid = true
			&& Name_InteractionDelay == ClassReps[(int32)ENetFields_Private::InteractionDelay].Property->GetFName()
			&& Name_InteractionTimer == ClassReps[(int32)ENetFields_Private::InteractionTimer].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInteractionComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
