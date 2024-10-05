// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Electronics/Public/ElectronicDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElectronicDoor() {}
// Cross Module References
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronicDoor_NoRegister();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronicDoor();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronic();
	UPackage* Z_Construct_UPackage__Script_Electronics();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationLink();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
	ELECTRONICS_API UFunction* Z_Construct_UDelegateFunction_Electronics_DoorLinkReachedSignature__DelegateSignature();
	ELECTRONICS_API UClass* Z_Construct_UClass_UDoorLinkComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkHostInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavRelevantInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AElectronicDoor::execBreach)
	{
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Breach(Z_Param_Caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicDoor::execGetCanDoorBreak)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanDoorBreak();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicDoor::execGetMoving)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMoving();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicDoor::execGetSmoothValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSmoothValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicDoor::execHasMovingAgents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMovingAgents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicDoor::execIsDoorLinkEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDoorLinkEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicDoor::execMulticastDestroyHinge)
	{
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastDestroyHinge_Implementation(Z_Param_position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicDoor::execOnDoorFinishedClosing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDoorFinishedClosing_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicDoor::execOnDoorFinishedOpening)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDoorFinishedOpening_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicDoor::execOnDoorUpdateValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDoorUpdateValue_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicDoor::execResumePathFollowing)
	{
		P_GET_OBJECT(AActor,Z_Param_Agent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumePathFollowing(Z_Param_Agent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicDoor::execSetDoorLinkEnabled)
	{
		P_GET_UBOOL(Z_Param_bIsDoorLinkEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDoorLinkEnabled(Z_Param_bIsDoorLinkEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicDoor::execUpdateDoorInteractors)
	{
		P_GET_OBJECT(AActor,Z_Param_PathOwner);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DestinationPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDoorInteractors(Z_Param_PathOwner,Z_Param_Out_DestinationPoint);
		P_NATIVE_END;
	}
	static FName NAME_AElectronicDoor_MulticastDestroyHinge = FName(TEXT("MulticastDestroyHinge"));
	void AElectronicDoor::MulticastDestroyHinge(FVector_NetQuantize position)
	{
		ElectronicDoor_eventMulticastDestroyHinge_Parms Parms;
		Parms.position=position;
		ProcessEvent(FindFunctionChecked(NAME_AElectronicDoor_MulticastDestroyHinge),&Parms);
	}
	static FName NAME_AElectronicDoor_OnDoorFinishedClosing = FName(TEXT("OnDoorFinishedClosing"));
	void AElectronicDoor::OnDoorFinishedClosing()
	{
		ProcessEvent(FindFunctionChecked(NAME_AElectronicDoor_OnDoorFinishedClosing),NULL);
	}
	static FName NAME_AElectronicDoor_OnDoorFinishedOpening = FName(TEXT("OnDoorFinishedOpening"));
	void AElectronicDoor::OnDoorFinishedOpening()
	{
		ProcessEvent(FindFunctionChecked(NAME_AElectronicDoor_OnDoorFinishedOpening),NULL);
	}
	static FName NAME_AElectronicDoor_OnDoorUpdateValue = FName(TEXT("OnDoorUpdateValue"));
	void AElectronicDoor::OnDoorUpdateValue(float Value)
	{
		ElectronicDoor_eventOnDoorUpdateValue_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_AElectronicDoor_OnDoorUpdateValue),&Parms);
	}
	static FName NAME_AElectronicDoor_ReceiveSmartLinkReached = FName(TEXT("ReceiveSmartLinkReached"));
	void AElectronicDoor::ReceiveSmartLinkReached(AActor* Agent, FVector const& Destination)
	{
		ElectronicDoor_eventReceiveSmartLinkReached_Parms Parms;
		Parms.Agent=Agent;
		Parms.Destination=Destination;
		ProcessEvent(FindFunctionChecked(NAME_AElectronicDoor_ReceiveSmartLinkReached),&Parms);
	}
	void AElectronicDoor::StaticRegisterNativesAElectronicDoor()
	{
		UClass* Class = AElectronicDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Breach", &AElectronicDoor::execBreach },
			{ "GetCanDoorBreak", &AElectronicDoor::execGetCanDoorBreak },
			{ "GetMoving", &AElectronicDoor::execGetMoving },
			{ "GetSmoothValue", &AElectronicDoor::execGetSmoothValue },
			{ "HasMovingAgents", &AElectronicDoor::execHasMovingAgents },
			{ "IsDoorLinkEnabled", &AElectronicDoor::execIsDoorLinkEnabled },
			{ "MulticastDestroyHinge", &AElectronicDoor::execMulticastDestroyHinge },
			{ "OnDoorFinishedClosing", &AElectronicDoor::execOnDoorFinishedClosing },
			{ "OnDoorFinishedOpening", &AElectronicDoor::execOnDoorFinishedOpening },
			{ "OnDoorUpdateValue", &AElectronicDoor::execOnDoorUpdateValue },
			{ "ResumePathFollowing", &AElectronicDoor::execResumePathFollowing },
			{ "SetDoorLinkEnabled", &AElectronicDoor::execSetDoorLinkEnabled },
			{ "UpdateDoorInteractors", &AElectronicDoor::execUpdateDoorInteractors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AElectronicDoor_Breach_Statics
	{
		struct ElectronicDoor_eventBreach_Parms
		{
			AActor* Caller;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronicDoor_Breach_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicDoor_eventBreach_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicDoor_Breach_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicDoor_Breach_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicDoor_Breach_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicDoor_Breach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicDoor, nullptr, "Breach", nullptr, nullptr, sizeof(ElectronicDoor_eventBreach_Parms), Z_Construct_UFunction_AElectronicDoor_Breach_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_Breach_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicDoor_Breach_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_Breach_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicDoor_Breach()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicDoor_Breach_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicDoor_GetCanDoorBreak_Statics
	{
		struct ElectronicDoor_eventGetCanDoorBreak_Parms
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
	void Z_Construct_UFunction_AElectronicDoor_GetCanDoorBreak_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElectronicDoor_eventGetCanDoorBreak_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElectronicDoor_GetCanDoorBreak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElectronicDoor_eventGetCanDoorBreak_Parms), &Z_Construct_UFunction_AElectronicDoor_GetCanDoorBreak_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicDoor_GetCanDoorBreak_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicDoor_GetCanDoorBreak_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicDoor_GetCanDoorBreak_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicDoor_GetCanDoorBreak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicDoor, nullptr, "GetCanDoorBreak", nullptr, nullptr, sizeof(ElectronicDoor_eventGetCanDoorBreak_Parms), Z_Construct_UFunction_AElectronicDoor_GetCanDoorBreak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_GetCanDoorBreak_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicDoor_GetCanDoorBreak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_GetCanDoorBreak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicDoor_GetCanDoorBreak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicDoor_GetCanDoorBreak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicDoor_GetMoving_Statics
	{
		struct ElectronicDoor_eventGetMoving_Parms
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
	void Z_Construct_UFunction_AElectronicDoor_GetMoving_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElectronicDoor_eventGetMoving_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElectronicDoor_GetMoving_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElectronicDoor_eventGetMoving_Parms), &Z_Construct_UFunction_AElectronicDoor_GetMoving_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicDoor_GetMoving_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicDoor_GetMoving_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicDoor_GetMoving_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicDoor_GetMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicDoor, nullptr, "GetMoving", nullptr, nullptr, sizeof(ElectronicDoor_eventGetMoving_Parms), Z_Construct_UFunction_AElectronicDoor_GetMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_GetMoving_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicDoor_GetMoving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_GetMoving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicDoor_GetMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicDoor_GetMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicDoor_GetSmoothValue_Statics
	{
		struct ElectronicDoor_eventGetSmoothValue_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AElectronicDoor_GetSmoothValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicDoor_eventGetSmoothValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicDoor_GetSmoothValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicDoor_GetSmoothValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicDoor_GetSmoothValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicDoor_GetSmoothValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicDoor, nullptr, "GetSmoothValue", nullptr, nullptr, sizeof(ElectronicDoor_eventGetSmoothValue_Parms), Z_Construct_UFunction_AElectronicDoor_GetSmoothValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_GetSmoothValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicDoor_GetSmoothValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_GetSmoothValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicDoor_GetSmoothValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicDoor_GetSmoothValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicDoor_HasMovingAgents_Statics
	{
		struct ElectronicDoor_eventHasMovingAgents_Parms
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
	void Z_Construct_UFunction_AElectronicDoor_HasMovingAgents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElectronicDoor_eventHasMovingAgents_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElectronicDoor_HasMovingAgents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElectronicDoor_eventHasMovingAgents_Parms), &Z_Construct_UFunction_AElectronicDoor_HasMovingAgents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicDoor_HasMovingAgents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicDoor_HasMovingAgents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicDoor_HasMovingAgents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicDoor_HasMovingAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicDoor, nullptr, "HasMovingAgents", nullptr, nullptr, sizeof(ElectronicDoor_eventHasMovingAgents_Parms), Z_Construct_UFunction_AElectronicDoor_HasMovingAgents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_HasMovingAgents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicDoor_HasMovingAgents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_HasMovingAgents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicDoor_HasMovingAgents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicDoor_HasMovingAgents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicDoor_IsDoorLinkEnabled_Statics
	{
		struct ElectronicDoor_eventIsDoorLinkEnabled_Parms
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
	void Z_Construct_UFunction_AElectronicDoor_IsDoorLinkEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElectronicDoor_eventIsDoorLinkEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElectronicDoor_IsDoorLinkEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElectronicDoor_eventIsDoorLinkEnabled_Parms), &Z_Construct_UFunction_AElectronicDoor_IsDoorLinkEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicDoor_IsDoorLinkEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicDoor_IsDoorLinkEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicDoor_IsDoorLinkEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicDoor_IsDoorLinkEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicDoor, nullptr, "IsDoorLinkEnabled", nullptr, nullptr, sizeof(ElectronicDoor_eventIsDoorLinkEnabled_Parms), Z_Construct_UFunction_AElectronicDoor_IsDoorLinkEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_IsDoorLinkEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicDoor_IsDoorLinkEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_IsDoorLinkEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicDoor_IsDoorLinkEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicDoor_IsDoorLinkEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicDoor_MulticastDestroyHinge_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AElectronicDoor_MulticastDestroyHinge_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicDoor_eventMulticastDestroyHinge_Parms, position), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicDoor_MulticastDestroyHinge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicDoor_MulticastDestroyHinge_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicDoor_MulticastDestroyHinge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicDoor_MulticastDestroyHinge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicDoor, nullptr, "MulticastDestroyHinge", nullptr, nullptr, sizeof(ElectronicDoor_eventMulticastDestroyHinge_Parms), Z_Construct_UFunction_AElectronicDoor_MulticastDestroyHinge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_MulticastDestroyHinge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicDoor_MulticastDestroyHinge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_MulticastDestroyHinge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicDoor_MulticastDestroyHinge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicDoor_MulticastDestroyHinge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicDoor_OnDoorFinishedClosing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicDoor_OnDoorFinishedClosing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicDoor_OnDoorFinishedClosing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicDoor, nullptr, "OnDoorFinishedClosing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicDoor_OnDoorFinishedClosing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_OnDoorFinishedClosing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicDoor_OnDoorFinishedClosing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicDoor_OnDoorFinishedClosing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicDoor_OnDoorFinishedOpening_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicDoor_OnDoorFinishedOpening_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicDoor_OnDoorFinishedOpening_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicDoor, nullptr, "OnDoorFinishedOpening", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicDoor_OnDoorFinishedOpening_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_OnDoorFinishedOpening_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicDoor_OnDoorFinishedOpening()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicDoor_OnDoorFinishedOpening_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicDoor_OnDoorUpdateValue_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AElectronicDoor_OnDoorUpdateValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicDoor_eventOnDoorUpdateValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicDoor_OnDoorUpdateValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicDoor_OnDoorUpdateValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicDoor_OnDoorUpdateValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicDoor_OnDoorUpdateValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicDoor, nullptr, "OnDoorUpdateValue", nullptr, nullptr, sizeof(ElectronicDoor_eventOnDoorUpdateValue_Parms), Z_Construct_UFunction_AElectronicDoor_OnDoorUpdateValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_OnDoorUpdateValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicDoor_OnDoorUpdateValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_OnDoorUpdateValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicDoor_OnDoorUpdateValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicDoor_OnDoorUpdateValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicDoor_ReceiveSmartLinkReached_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Agent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Destination;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronicDoor_ReceiveSmartLinkReached_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicDoor_eventReceiveSmartLinkReached_Parms, Agent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicDoor_ReceiveSmartLinkReached_Statics::NewProp_Destination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AElectronicDoor_ReceiveSmartLinkReached_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicDoor_eventReceiveSmartLinkReached_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AElectronicDoor_ReceiveSmartLinkReached_Statics::NewProp_Destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_ReceiveSmartLinkReached_Statics::NewProp_Destination_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicDoor_ReceiveSmartLinkReached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicDoor_ReceiveSmartLinkReached_Statics::NewProp_Agent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicDoor_ReceiveSmartLinkReached_Statics::NewProp_Destination,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicDoor_ReceiveSmartLinkReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicDoor_ReceiveSmartLinkReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicDoor, nullptr, "ReceiveSmartLinkReached", nullptr, nullptr, sizeof(ElectronicDoor_eventReceiveSmartLinkReached_Parms), Z_Construct_UFunction_AElectronicDoor_ReceiveSmartLinkReached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_ReceiveSmartLinkReached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicDoor_ReceiveSmartLinkReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_ReceiveSmartLinkReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicDoor_ReceiveSmartLinkReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicDoor_ReceiveSmartLinkReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicDoor_ResumePathFollowing_Statics
	{
		struct ElectronicDoor_eventResumePathFollowing_Parms
		{
			AActor* Agent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Agent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronicDoor_ResumePathFollowing_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicDoor_eventResumePathFollowing_Parms, Agent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicDoor_ResumePathFollowing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicDoor_ResumePathFollowing_Statics::NewProp_Agent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicDoor_ResumePathFollowing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicDoor_ResumePathFollowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicDoor, nullptr, "ResumePathFollowing", nullptr, nullptr, sizeof(ElectronicDoor_eventResumePathFollowing_Parms), Z_Construct_UFunction_AElectronicDoor_ResumePathFollowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_ResumePathFollowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicDoor_ResumePathFollowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_ResumePathFollowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicDoor_ResumePathFollowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicDoor_ResumePathFollowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicDoor_SetDoorLinkEnabled_Statics
	{
		struct ElectronicDoor_eventSetDoorLinkEnabled_Parms
		{
			bool bIsDoorLinkEnabled;
		};
		static void NewProp_bIsDoorLinkEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDoorLinkEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AElectronicDoor_SetDoorLinkEnabled_Statics::NewProp_bIsDoorLinkEnabled_SetBit(void* Obj)
	{
		((ElectronicDoor_eventSetDoorLinkEnabled_Parms*)Obj)->bIsDoorLinkEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElectronicDoor_SetDoorLinkEnabled_Statics::NewProp_bIsDoorLinkEnabled = { "bIsDoorLinkEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElectronicDoor_eventSetDoorLinkEnabled_Parms), &Z_Construct_UFunction_AElectronicDoor_SetDoorLinkEnabled_Statics::NewProp_bIsDoorLinkEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicDoor_SetDoorLinkEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicDoor_SetDoorLinkEnabled_Statics::NewProp_bIsDoorLinkEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicDoor_SetDoorLinkEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicDoor_SetDoorLinkEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicDoor, nullptr, "SetDoorLinkEnabled", nullptr, nullptr, sizeof(ElectronicDoor_eventSetDoorLinkEnabled_Parms), Z_Construct_UFunction_AElectronicDoor_SetDoorLinkEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_SetDoorLinkEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicDoor_SetDoorLinkEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_SetDoorLinkEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicDoor_SetDoorLinkEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicDoor_SetDoorLinkEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicDoor_UpdateDoorInteractors_Statics
	{
		struct ElectronicDoor_eventUpdateDoorInteractors_Parms
		{
			AActor* PathOwner;
			FVector DestinationPoint;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestinationPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronicDoor_UpdateDoorInteractors_Statics::NewProp_PathOwner = { "PathOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicDoor_eventUpdateDoorInteractors_Parms, PathOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicDoor_UpdateDoorInteractors_Statics::NewProp_DestinationPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AElectronicDoor_UpdateDoorInteractors_Statics::NewProp_DestinationPoint = { "DestinationPoint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicDoor_eventUpdateDoorInteractors_Parms, DestinationPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AElectronicDoor_UpdateDoorInteractors_Statics::NewProp_DestinationPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_UpdateDoorInteractors_Statics::NewProp_DestinationPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicDoor_UpdateDoorInteractors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicDoor_UpdateDoorInteractors_Statics::NewProp_PathOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicDoor_UpdateDoorInteractors_Statics::NewProp_DestinationPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicDoor_UpdateDoorInteractors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicDoor_UpdateDoorInteractors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicDoor, nullptr, "UpdateDoorInteractors", nullptr, nullptr, sizeof(ElectronicDoor_eventUpdateDoorInteractors_Parms), Z_Construct_UFunction_AElectronicDoor_UpdateDoorInteractors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_UpdateDoorInteractors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicDoor_UpdateDoorInteractors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicDoor_UpdateDoorInteractors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicDoor_UpdateDoorInteractors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicDoor_UpdateDoorInteractors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AElectronicDoor_NoRegister()
	{
		return AElectronicDoor::StaticClass();
	}
	struct Z_Construct_UClass_AElectronicDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointLinks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointLinks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PointLinks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoorLinkIsRelevant_MetaData[];
#endif
		static void NewProp_bDoorLinkIsRelevant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoorLinkIsRelevant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMoving_MetaData[];
#endif
		static void NewProp_bMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorCollisions_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorCollisions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorCollisions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DoorCollisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToOpen_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanInterrupt_MetaData[];
#endif
		static void NewProp_bCanInterrupt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanInterrupt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeBreached_MetaData[];
#endif
		static void NewProp_bCanBeBreached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeBreached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HingeBreakParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HingeBreakParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HingeBreakSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HingeBreakSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreachSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BreachSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BreakForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakForceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BreakForceOffset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hinges_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hinges_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Hinges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeakPointDamageThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeakPointDamageThreshold;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeakPoints_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeakPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_WeakPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreachSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BreachSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBreaching_MetaData[];
#endif
		static void NewProp_bIsBreaching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBreaching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSmartLinkReached_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSmartLinkReached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorLinkComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorLinkComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnabledLinkAreaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EnabledLinkAreaClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledLinkAreaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DisabledLinkAreaClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AElectronicDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AElectronic,
		(UObject* (*)())Z_Construct_UPackage__Script_Electronics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AElectronicDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AElectronicDoor_Breach, "Breach" }, // 1017932618
		{ &Z_Construct_UFunction_AElectronicDoor_GetCanDoorBreak, "GetCanDoorBreak" }, // 1920757058
		{ &Z_Construct_UFunction_AElectronicDoor_GetMoving, "GetMoving" }, // 1645924059
		{ &Z_Construct_UFunction_AElectronicDoor_GetSmoothValue, "GetSmoothValue" }, // 1675120376
		{ &Z_Construct_UFunction_AElectronicDoor_HasMovingAgents, "HasMovingAgents" }, // 2287474076
		{ &Z_Construct_UFunction_AElectronicDoor_IsDoorLinkEnabled, "IsDoorLinkEnabled" }, // 3055827041
		{ &Z_Construct_UFunction_AElectronicDoor_MulticastDestroyHinge, "MulticastDestroyHinge" }, // 589469185
		{ &Z_Construct_UFunction_AElectronicDoor_OnDoorFinishedClosing, "OnDoorFinishedClosing" }, // 2741202906
		{ &Z_Construct_UFunction_AElectronicDoor_OnDoorFinishedOpening, "OnDoorFinishedOpening" }, // 99843518
		{ &Z_Construct_UFunction_AElectronicDoor_OnDoorUpdateValue, "OnDoorUpdateValue" }, // 3427379543
		{ &Z_Construct_UFunction_AElectronicDoor_ReceiveSmartLinkReached, "ReceiveSmartLinkReached" }, // 4241079237
		{ &Z_Construct_UFunction_AElectronicDoor_ResumePathFollowing, "ResumePathFollowing" }, // 2963907897
		{ &Z_Construct_UFunction_AElectronicDoor_SetDoorLinkEnabled, "SetDoorLinkEnabled" }, // 1627778850
		{ &Z_Construct_UFunction_AElectronicDoor_UpdateDoorInteractors, "UpdateDoorInteractors" }, // 2337765595
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ElectronicDoor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_PointLinks_Inner = { "PointLinks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNavigationLink, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_PointLinks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_PointLinks = { "PointLinks", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicDoor, PointLinks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_PointLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_PointLinks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bDoorLinkIsRelevant_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	void Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bDoorLinkIsRelevant_SetBit(void* Obj)
	{
		((AElectronicDoor*)Obj)->bDoorLinkIsRelevant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bDoorLinkIsRelevant = { "bDoorLinkIsRelevant", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronicDoor), &Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bDoorLinkIsRelevant_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bDoorLinkIsRelevant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bDoorLinkIsRelevant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_TargetValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicDoor, TargetValue), METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_TargetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_TargetValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_CurrentValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicDoor, CurrentValue), METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_CurrentValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_CurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_SmoothValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_SmoothValue = { "SmoothValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicDoor, SmoothValue), METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_SmoothValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_SmoothValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	void Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bMoving_SetBit(void* Obj)
	{
		((AElectronicDoor*)Obj)->bMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bMoving = { "bMoving", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronicDoor), &Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_DoorCollisions_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_DoorCollisions_Inner = { "DoorCollisions", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_DoorCollisions_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_DoorCollisions_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_DoorCollisions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_DoorCollisions = { "DoorCollisions", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicDoor, DoorCollisions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_DoorCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_DoorCollisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_InterpolationSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_InterpolationSpeed = { "InterpolationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicDoor, InterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_InterpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_InterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_TimeToOpen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_TimeToOpen = { "TimeToOpen", nullptr, (EPropertyFlags)0x0021080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicDoor, TimeToOpen), METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_TimeToOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_TimeToOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bCanInterrupt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	void Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bCanInterrupt_SetBit(void* Obj)
	{
		((AElectronicDoor*)Obj)->bCanInterrupt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bCanInterrupt = { "bCanInterrupt", nullptr, (EPropertyFlags)0x0021080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronicDoor), &Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bCanInterrupt_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bCanInterrupt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bCanInterrupt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bCanBeBreached_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	void Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bCanBeBreached_SetBit(void* Obj)
	{
		((AElectronicDoor*)Obj)->bCanBeBreached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bCanBeBreached = { "bCanBeBreached", nullptr, (EPropertyFlags)0x0021080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronicDoor), &Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bCanBeBreached_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bCanBeBreached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bCanBeBreached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_HingeBreakParticle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_HingeBreakParticle = { "HingeBreakParticle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicDoor, HingeBreakParticle), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_HingeBreakParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_HingeBreakParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_HingeBreakSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_HingeBreakSound = { "HingeBreakSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicDoor, HingeBreakSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_HingeBreakSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_HingeBreakSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_BreachSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_BreachSound = { "BreachSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicDoor, BreachSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_BreachSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_BreachSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_BreakForce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_BreakForce = { "BreakForce", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicDoor, BreakForce), METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_BreakForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_BreakForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_BreakForceOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_BreakForceOffset = { "BreakForceOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicDoor, BreakForceOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_BreakForceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_BreakForceOffset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_Hinges_ElementProp = { "Hinges", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_Hinges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_Hinges = { "Hinges", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicDoor, Hinges), METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_Hinges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_Hinges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_WeakPointDamageThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_WeakPointDamageThreshold = { "WeakPointDamageThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicDoor, WeakPointDamageThreshold), METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_WeakPointDamageThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_WeakPointDamageThreshold_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_WeakPoints_ElementProp = { "WeakPoints", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_WeakPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_WeakPoints = { "WeakPoints", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicDoor, WeakPoints), METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_WeakPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_WeakPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_BreachSpeedMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_BreachSpeedMultiplier = { "BreachSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicDoor, BreachSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_BreachSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_BreachSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bIsBreaching_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	void Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bIsBreaching_SetBit(void* Obj)
	{
		((AElectronicDoor*)Obj)->bIsBreaching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bIsBreaching = { "bIsBreaching", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronicDoor), &Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bIsBreaching_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bIsBreaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bIsBreaching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_OnSmartLinkReached_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_OnSmartLinkReached = { "OnSmartLinkReached", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicDoor, OnSmartLinkReached), Z_Construct_UDelegateFunction_Electronics_DoorLinkReachedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_OnSmartLinkReached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_OnSmartLinkReached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_DoorLinkComp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_DoorLinkComp = { "DoorLinkComp", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicDoor, DoorLinkComp), Z_Construct_UClass_UDoorLinkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_DoorLinkComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_DoorLinkComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_EnabledLinkAreaClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_EnabledLinkAreaClass = { "EnabledLinkAreaClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicDoor, EnabledLinkAreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_EnabledLinkAreaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_EnabledLinkAreaClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicDoor_Statics::NewProp_DisabledLinkAreaClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicDoor" },
		{ "ModuleRelativePath", "Public/ElectronicDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AElectronicDoor_Statics::NewProp_DisabledLinkAreaClass = { "DisabledLinkAreaClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicDoor, DisabledLinkAreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_DisabledLinkAreaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::NewProp_DisabledLinkAreaClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AElectronicDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_PointLinks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_PointLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bDoorLinkIsRelevant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_TargetValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_CurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_SmoothValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_DoorCollisions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_DoorCollisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_InterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_TimeToOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bCanInterrupt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bCanBeBreached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_HingeBreakParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_HingeBreakSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_BreachSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_BreakForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_BreakForceOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_Hinges_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_Hinges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_WeakPointDamageThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_WeakPoints_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_WeakPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_BreachSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_bIsBreaching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_OnSmartLinkReached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_DoorLinkComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_EnabledLinkAreaClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicDoor_Statics::NewProp_DisabledLinkAreaClass,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AElectronicDoor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavLinkHostInterface_NoRegister, (int32)VTABLE_OFFSET(AElectronicDoor, INavLinkHostInterface), false },
			{ Z_Construct_UClass_UNavRelevantInterface_NoRegister, (int32)VTABLE_OFFSET(AElectronicDoor, INavRelevantInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AElectronicDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElectronicDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AElectronicDoor_Statics::ClassParams = {
		&AElectronicDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AElectronicDoor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AElectronicDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AElectronicDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AElectronicDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AElectronicDoor, 2390324466);
	template<> ELECTRONICS_API UClass* StaticClass<AElectronicDoor>()
	{
		return AElectronicDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AElectronicDoor(Z_Construct_UClass_AElectronicDoor, &AElectronicDoor::StaticClass, TEXT("/Script/Electronics"), TEXT("AElectronicDoor"), false, nullptr, nullptr, nullptr);

	void AElectronicDoor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsBreaching(TEXT("bIsBreaching"));

		const bool bIsValid = true
			&& Name_bIsBreaching == ClassReps[(int32)ENetFields_Private::bIsBreaching].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AElectronicDoor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AElectronicDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
