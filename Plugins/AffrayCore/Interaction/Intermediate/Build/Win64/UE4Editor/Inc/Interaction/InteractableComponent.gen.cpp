// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Public/InteractableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableComponent() {}
// Cross Module References
	INTERACTION_API UClass* Z_Construct_UClass_UInteractableComponent_NoRegister();
	INTERACTION_API UClass* Z_Construct_UClass_UInteractableComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_Interaction();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	INTERACTION_API UFunction* Z_Construct_UDelegateFunction_Interaction_InteractMCDelegate__DelegateSignature();
	INTERACTION_API UFunction* Z_Construct_UDelegateFunction_Interaction_InterruptMCDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInteractableComponent::execBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractableComponent::execCanFocus)
	{
		P_GET_OBJECT(AActor,Z_Param_EventInstigator);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Dot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanFocus(Z_Param_EventInstigator,Z_Param_Dot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractableComponent::execCanInteract)
	{
		P_GET_OBJECT(AActor,Z_Param_EventInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanInteract(Z_Param_EventInstigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractableComponent::execEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractableComponent::execGetActiveState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActiveState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractableComponent::execGetInteractableName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetInteractableName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractableComponent::execGetInteractableState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetInteractableState(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractableComponent::execGetInteractableStates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FText>*)Z_Param__Result=P_THIS->GetInteractableStates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractableComponent::execGetInteractionDotProduct)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInteractionDotProduct();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractableComponent::execGetSecondsToInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSecondsToInteract();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractableComponent::execInteract)
	{
		P_GET_OBJECT(AActor,Z_Param_EventInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact(Z_Param_EventInstigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractableComponent::execInterrupt)
	{
		P_GET_OBJECT(AActor,Z_Param_EventInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interrupt(Z_Param_EventInstigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractableComponent::execMulticast_Interact)
	{
		P_GET_OBJECT(AActor,Z_Param_EventInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_Interact_Implementation(Z_Param_EventInstigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractableComponent::execMulticast_Interrupt)
	{
		P_GET_OBJECT(AActor,Z_Param_EventInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_Interrupt_Implementation(Z_Param_EventInstigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractableComponent::execServer_Interact)
	{
		P_GET_OBJECT(AActor,Z_Param_EventInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_Interact_Validate(Z_Param_EventInstigator))
		{
			RPC_ValidateFailed(TEXT("Server_Interact_Validate"));
			return;
		}
		P_THIS->Server_Interact_Implementation(Z_Param_EventInstigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractableComponent::execServer_Interrupt)
	{
		P_GET_OBJECT(AActor,Z_Param_EventInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_Interrupt_Validate(Z_Param_EventInstigator))
		{
			RPC_ValidateFailed(TEXT("Server_Interrupt_Validate"));
			return;
		}
		P_THIS->Server_Interrupt_Implementation(Z_Param_EventInstigator);
		P_NATIVE_END;
	}
	static FName NAME_UInteractableComponent_Multicast_Interact = FName(TEXT("Multicast_Interact"));
	void UInteractableComponent::Multicast_Interact(AActor* EventInstigator)
	{
		InteractableComponent_eventMulticast_Interact_Parms Parms;
		Parms.EventInstigator=EventInstigator;
		ProcessEvent(FindFunctionChecked(NAME_UInteractableComponent_Multicast_Interact),&Parms);
	}
	static FName NAME_UInteractableComponent_Multicast_Interrupt = FName(TEXT("Multicast_Interrupt"));
	void UInteractableComponent::Multicast_Interrupt(AActor* EventInstigator)
	{
		InteractableComponent_eventMulticast_Interrupt_Parms Parms;
		Parms.EventInstigator=EventInstigator;
		ProcessEvent(FindFunctionChecked(NAME_UInteractableComponent_Multicast_Interrupt),&Parms);
	}
	static FName NAME_UInteractableComponent_Server_Interact = FName(TEXT("Server_Interact"));
	void UInteractableComponent::Server_Interact(AActor* EventInstigator)
	{
		InteractableComponent_eventServer_Interact_Parms Parms;
		Parms.EventInstigator=EventInstigator;
		ProcessEvent(FindFunctionChecked(NAME_UInteractableComponent_Server_Interact),&Parms);
	}
	static FName NAME_UInteractableComponent_Server_Interrupt = FName(TEXT("Server_Interrupt"));
	void UInteractableComponent::Server_Interrupt(AActor* EventInstigator)
	{
		InteractableComponent_eventServer_Interrupt_Parms Parms;
		Parms.EventInstigator=EventInstigator;
		ProcessEvent(FindFunctionChecked(NAME_UInteractableComponent_Server_Interrupt),&Parms);
	}
	void UInteractableComponent::StaticRegisterNativesUInteractableComponent()
	{
		UClass* Class = UInteractableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginOverlap", &UInteractableComponent::execBeginOverlap },
			{ "CanFocus", &UInteractableComponent::execCanFocus },
			{ "CanInteract", &UInteractableComponent::execCanInteract },
			{ "EndOverlap", &UInteractableComponent::execEndOverlap },
			{ "GetActiveState", &UInteractableComponent::execGetActiveState },
			{ "GetInteractableName", &UInteractableComponent::execGetInteractableName },
			{ "GetInteractableState", &UInteractableComponent::execGetInteractableState },
			{ "GetInteractableStates", &UInteractableComponent::execGetInteractableStates },
			{ "GetInteractionDotProduct", &UInteractableComponent::execGetInteractionDotProduct },
			{ "GetSecondsToInteract", &UInteractableComponent::execGetSecondsToInteract },
			{ "Interact", &UInteractableComponent::execInteract },
			{ "Interrupt", &UInteractableComponent::execInterrupt },
			{ "Multicast_Interact", &UInteractableComponent::execMulticast_Interact },
			{ "Multicast_Interrupt", &UInteractableComponent::execMulticast_Interrupt },
			{ "Server_Interact", &UInteractableComponent::execServer_Interact },
			{ "Server_Interrupt", &UInteractableComponent::execServer_Interrupt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics
	{
		struct InteractableComponent_eventBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventBeginOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((InteractableComponent_eventBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractableComponent_eventBeginOverlap_Parms), &Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableComponent, nullptr, "BeginOverlap", nullptr, nullptr, sizeof(InteractableComponent_eventBeginOverlap_Parms), Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableComponent_BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableComponent_BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableComponent_CanFocus_Statics
	{
		struct InteractableComponent_eventCanFocus_Parms
		{
			const AActor* EventInstigator;
			float Dot;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Dot;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_CanFocus_Statics::NewProp_EventInstigator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableComponent_CanFocus_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventCanFocus_Parms, EventInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_CanFocus_Statics::NewProp_EventInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_CanFocus_Statics::NewProp_EventInstigator_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractableComponent_CanFocus_Statics::NewProp_Dot = { "Dot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventCanFocus_Parms, Dot), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInteractableComponent_CanFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractableComponent_eventCanFocus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractableComponent_CanFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractableComponent_eventCanFocus_Parms), &Z_Construct_UFunction_UInteractableComponent_CanFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableComponent_CanFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_CanFocus_Statics::NewProp_EventInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_CanFocus_Statics::NewProp_Dot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_CanFocus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_CanFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableComponent_CanFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableComponent, nullptr, "CanFocus", nullptr, nullptr, sizeof(InteractableComponent_eventCanFocus_Parms), Z_Construct_UFunction_UInteractableComponent_CanFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_CanFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_CanFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_CanFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableComponent_CanFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableComponent_CanFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics
	{
		struct InteractableComponent_eventCanInteract_Parms
		{
			AActor* EventInstigator;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventCanInteract_Parms, EventInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractableComponent_eventCanInteract_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractableComponent_eventCanInteract_Parms), &Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::NewProp_EventInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableComponent, nullptr, "CanInteract", nullptr, nullptr, sizeof(InteractableComponent_eventCanInteract_Parms), Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableComponent_CanInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics
	{
		struct InteractableComponent_eventEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventEndOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableComponent, nullptr, "EndOverlap", nullptr, nullptr, sizeof(InteractableComponent_eventEndOverlap_Parms), Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableComponent_EndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableComponent_EndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableComponent_GetActiveState_Statics
	{
		struct InteractableComponent_eventGetActiveState_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInteractableComponent_GetActiveState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventGetActiveState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableComponent_GetActiveState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_GetActiveState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_GetActiveState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableComponent_GetActiveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableComponent, nullptr, "GetActiveState", nullptr, nullptr, sizeof(InteractableComponent_eventGetActiveState_Parms), Z_Construct_UFunction_UInteractableComponent_GetActiveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_GetActiveState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_GetActiveState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_GetActiveState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableComponent_GetActiveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableComponent_GetActiveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableComponent_GetInteractableName_Statics
	{
		struct InteractableComponent_eventGetInteractableName_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInteractableComponent_GetInteractableName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventGetInteractableName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableComponent_GetInteractableName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_GetInteractableName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_GetInteractableName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableComponent_GetInteractableName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableComponent, nullptr, "GetInteractableName", nullptr, nullptr, sizeof(InteractableComponent_eventGetInteractableName_Parms), Z_Construct_UFunction_UInteractableComponent_GetInteractableName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_GetInteractableName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_GetInteractableName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_GetInteractableName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableComponent_GetInteractableName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableComponent_GetInteractableName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableComponent_GetInteractableState_Statics
	{
		struct InteractableComponent_eventGetInteractableState_Parms
		{
			int32 Index;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInteractableComponent_GetInteractableState_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventGetInteractableState_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInteractableComponent_GetInteractableState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventGetInteractableState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableComponent_GetInteractableState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_GetInteractableState_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_GetInteractableState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_GetInteractableState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableComponent_GetInteractableState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableComponent, nullptr, "GetInteractableState", nullptr, nullptr, sizeof(InteractableComponent_eventGetInteractableState_Parms), Z_Construct_UFunction_UInteractableComponent_GetInteractableState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_GetInteractableState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_GetInteractableState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_GetInteractableState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableComponent_GetInteractableState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableComponent_GetInteractableState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableComponent_GetInteractableStates_Statics
	{
		struct InteractableComponent_eventGetInteractableStates_Parms
		{
			TArray<FText> ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInteractableComponent_GetInteractableStates_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInteractableComponent_GetInteractableStates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventGetInteractableStates_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableComponent_GetInteractableStates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_GetInteractableStates_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_GetInteractableStates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_GetInteractableStates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableComponent_GetInteractableStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableComponent, nullptr, "GetInteractableStates", nullptr, nullptr, sizeof(InteractableComponent_eventGetInteractableStates_Parms), Z_Construct_UFunction_UInteractableComponent_GetInteractableStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_GetInteractableStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_GetInteractableStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_GetInteractableStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableComponent_GetInteractableStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableComponent_GetInteractableStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableComponent_GetInteractionDotProduct_Statics
	{
		struct InteractableComponent_eventGetInteractionDotProduct_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractableComponent_GetInteractionDotProduct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventGetInteractionDotProduct_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableComponent_GetInteractionDotProduct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_GetInteractionDotProduct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_GetInteractionDotProduct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableComponent_GetInteractionDotProduct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableComponent, nullptr, "GetInteractionDotProduct", nullptr, nullptr, sizeof(InteractableComponent_eventGetInteractionDotProduct_Parms), Z_Construct_UFunction_UInteractableComponent_GetInteractionDotProduct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_GetInteractionDotProduct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_GetInteractionDotProduct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_GetInteractionDotProduct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableComponent_GetInteractionDotProduct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableComponent_GetInteractionDotProduct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableComponent_GetSecondsToInteract_Statics
	{
		struct InteractableComponent_eventGetSecondsToInteract_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractableComponent_GetSecondsToInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventGetSecondsToInteract_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableComponent_GetSecondsToInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_GetSecondsToInteract_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_GetSecondsToInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableComponent_GetSecondsToInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableComponent, nullptr, "GetSecondsToInteract", nullptr, nullptr, sizeof(InteractableComponent_eventGetSecondsToInteract_Parms), Z_Construct_UFunction_UInteractableComponent_GetSecondsToInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_GetSecondsToInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_GetSecondsToInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_GetSecondsToInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableComponent_GetSecondsToInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableComponent_GetSecondsToInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableComponent_Interact_Statics
	{
		struct InteractableComponent_eventInteract_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableComponent_Interact_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventInteract_Parms, EventInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableComponent_Interact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_Interact_Statics::NewProp_EventInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableComponent_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableComponent, nullptr, "Interact", nullptr, nullptr, sizeof(InteractableComponent_eventInteract_Parms), Z_Construct_UFunction_UInteractableComponent_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableComponent_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableComponent_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableComponent_Interrupt_Statics
	{
		struct InteractableComponent_eventInterrupt_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableComponent_Interrupt_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventInterrupt_Parms, EventInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableComponent_Interrupt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_Interrupt_Statics::NewProp_EventInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_Interrupt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableComponent_Interrupt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableComponent, nullptr, "Interrupt", nullptr, nullptr, sizeof(InteractableComponent_eventInterrupt_Parms), Z_Construct_UFunction_UInteractableComponent_Interrupt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_Interrupt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_Interrupt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_Interrupt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableComponent_Interrupt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableComponent_Interrupt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableComponent_Multicast_Interact_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableComponent_Multicast_Interact_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventMulticast_Interact_Parms, EventInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableComponent_Multicast_Interact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_Multicast_Interact_Statics::NewProp_EventInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_Multicast_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableComponent_Multicast_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableComponent, nullptr, "Multicast_Interact", nullptr, nullptr, sizeof(InteractableComponent_eventMulticast_Interact_Parms), Z_Construct_UFunction_UInteractableComponent_Multicast_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_Multicast_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_Multicast_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_Multicast_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableComponent_Multicast_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableComponent_Multicast_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableComponent_Multicast_Interrupt_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableComponent_Multicast_Interrupt_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventMulticast_Interrupt_Parms, EventInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableComponent_Multicast_Interrupt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_Multicast_Interrupt_Statics::NewProp_EventInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_Multicast_Interrupt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableComponent_Multicast_Interrupt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableComponent, nullptr, "Multicast_Interrupt", nullptr, nullptr, sizeof(InteractableComponent_eventMulticast_Interrupt_Parms), Z_Construct_UFunction_UInteractableComponent_Multicast_Interrupt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_Multicast_Interrupt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_Multicast_Interrupt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_Multicast_Interrupt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableComponent_Multicast_Interrupt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableComponent_Multicast_Interrupt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableComponent_Server_Interact_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableComponent_Server_Interact_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventServer_Interact_Parms, EventInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableComponent_Server_Interact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_Server_Interact_Statics::NewProp_EventInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_Server_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableComponent_Server_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableComponent, nullptr, "Server_Interact", nullptr, nullptr, sizeof(InteractableComponent_eventServer_Interact_Parms), Z_Construct_UFunction_UInteractableComponent_Server_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_Server_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_Server_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_Server_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableComponent_Server_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableComponent_Server_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableComponent_Server_Interrupt_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableComponent_Server_Interrupt_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableComponent_eventServer_Interrupt_Parms, EventInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableComponent_Server_Interrupt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_Server_Interrupt_Statics::NewProp_EventInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_Server_Interrupt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableComponent_Server_Interrupt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableComponent, nullptr, "Server_Interrupt", nullptr, nullptr, sizeof(InteractableComponent_eventServer_Interrupt_Parms), Z_Construct_UFunction_UInteractableComponent_Server_Interrupt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_Server_Interrupt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_Server_Interrupt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_Server_Interrupt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableComponent_Server_Interrupt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableComponent_Server_Interrupt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractableComponent_NoRegister()
	{
		return UInteractableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInteractableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractMCDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_InteractMCDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterruptMCDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_InterruptMCDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PositionWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InteractableName;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InteractableStates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InteractableStates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveState_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionDot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractionDot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsToInteract_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondsToInteract;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractionDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Interaction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractableComponent_BeginOverlap, "BeginOverlap" }, // 2069676695
		{ &Z_Construct_UFunction_UInteractableComponent_CanFocus, "CanFocus" }, // 2415539917
		{ &Z_Construct_UFunction_UInteractableComponent_CanInteract, "CanInteract" }, // 2232480281
		{ &Z_Construct_UFunction_UInteractableComponent_EndOverlap, "EndOverlap" }, // 3672502142
		{ &Z_Construct_UFunction_UInteractableComponent_GetActiveState, "GetActiveState" }, // 2014741942
		{ &Z_Construct_UFunction_UInteractableComponent_GetInteractableName, "GetInteractableName" }, // 3792190559
		{ &Z_Construct_UFunction_UInteractableComponent_GetInteractableState, "GetInteractableState" }, // 524492651
		{ &Z_Construct_UFunction_UInteractableComponent_GetInteractableStates, "GetInteractableStates" }, // 1206400281
		{ &Z_Construct_UFunction_UInteractableComponent_GetInteractionDotProduct, "GetInteractionDotProduct" }, // 100987702
		{ &Z_Construct_UFunction_UInteractableComponent_GetSecondsToInteract, "GetSecondsToInteract" }, // 1129520829
		{ &Z_Construct_UFunction_UInteractableComponent_Interact, "Interact" }, // 1161126950
		{ &Z_Construct_UFunction_UInteractableComponent_Interrupt, "Interrupt" }, // 2294202278
		{ &Z_Construct_UFunction_UInteractableComponent_Multicast_Interact, "Multicast_Interact" }, // 2501153203
		{ &Z_Construct_UFunction_UInteractableComponent_Multicast_Interrupt, "Multicast_Interrupt" }, // 1275562657
		{ &Z_Construct_UFunction_UInteractableComponent_Server_Interact, "Server_Interact" }, // 3297782533
		{ &Z_Construct_UFunction_UInteractableComponent_Server_Interrupt, "Server_Interrupt" }, // 1271926743
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "InteractableComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractMCDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InteractableComponent" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractMCDelegate = { "InteractMCDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractableComponent, InteractMCDelegate), Z_Construct_UDelegateFunction_Interaction_InteractMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractMCDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractMCDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InterruptMCDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InteractableComponent" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InterruptMCDelegate = { "InterruptMCDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractableComponent, InterruptMCDelegate), Z_Construct_UDelegateFunction_Interaction_InterruptMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InterruptMCDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InterruptMCDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableComponent_Statics::NewProp_PositionWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InteractableComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractableComponent_Statics::NewProp_PositionWidget = { "PositionWidget", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractableComponent, PositionWidget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_PositionWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_PositionWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractableName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InteractableComponent" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractableName = { "InteractableName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractableComponent, InteractableName), METADATA_PARAMS(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractableName_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractableStates_Inner = { "InteractableStates", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractableStates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InteractableComponent" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractableStates = { "InteractableStates", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractableComponent, InteractableStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractableStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractableStates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableComponent_Statics::NewProp_ActiveState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InteractableComponent" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInteractableComponent_Statics::NewProp_ActiveState = { "ActiveState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractableComponent, ActiveState), METADATA_PARAMS(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_ActiveState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_ActiveState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionDot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InteractableComponent" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionDot = { "InteractionDot", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractableComponent, InteractionDot), METADATA_PARAMS(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionDot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionDot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableComponent_Statics::NewProp_SecondsToInteract_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InteractableComponent" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractableComponent_Statics::NewProp_SecondsToInteract = { "SecondsToInteract", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractableComponent, SecondsToInteract), METADATA_PARAMS(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_SecondsToInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_SecondsToInteract_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InteractableComponent" },
		{ "ModuleRelativePath", "Public/InteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionDelay = { "InteractionDelay", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractableComponent, InteractionDelay), METADATA_PARAMS(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractMCDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InterruptMCDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableComponent_Statics::NewProp_PositionWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractableStates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractableStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableComponent_Statics::NewProp_ActiveState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionDot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableComponent_Statics::NewProp_SecondsToInteract,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractableComponent_Statics::ClassParams = {
		&UInteractableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractableComponent, 4226045158);
	template<> INTERACTION_API UClass* StaticClass<UInteractableComponent>()
	{
		return UInteractableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractableComponent(Z_Construct_UClass_UInteractableComponent, &UInteractableComponent::StaticClass, TEXT("/Script/Interaction"), TEXT("UInteractableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
