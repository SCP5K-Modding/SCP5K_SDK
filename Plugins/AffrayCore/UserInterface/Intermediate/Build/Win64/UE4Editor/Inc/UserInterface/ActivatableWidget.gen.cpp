// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/ActivatableWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivatableWidget() {}
// Cross Module References
	USERINTERFACE_API UClass* Z_Construct_UClass_UActivatableWidget_NoRegister();
	USERINTERFACE_API UClass* Z_Construct_UClass_UActivatableWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_EWidgetInputMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode();
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_OnWidgetActivationChanged__DelegateSignature();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
// End Cross Module References
	DEFINE_FUNCTION(UActivatableWidget::execActivateWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivatableWidget::execDeactivateWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivatableWidget::execGetDesiredFocusTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidget**)Z_Param__Result=P_THIS->GetDesiredFocusTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivatableWidget::execIsActivated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActivated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivatableWidget::execUpdateInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInput();
		P_NATIVE_END;
	}
	static FName NAME_UActivatableWidget_BP_GetDesiredFocusTarget = FName(TEXT("BP_GetDesiredFocusTarget"));
	UWidget* UActivatableWidget::BP_GetDesiredFocusTarget() const
	{
		ActivatableWidget_eventBP_GetDesiredFocusTarget_Parms Parms;
		const_cast<UActivatableWidget*>(this)->ProcessEvent(FindFunctionChecked(NAME_UActivatableWidget_BP_GetDesiredFocusTarget),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UActivatableWidget_BP_OnActivated = FName(TEXT("BP_OnActivated"));
	void UActivatableWidget::BP_OnActivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UActivatableWidget_BP_OnActivated),NULL);
	}
	static FName NAME_UActivatableWidget_BP_OnDeactivated = FName(TEXT("BP_OnDeactivated"));
	void UActivatableWidget::BP_OnDeactivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UActivatableWidget_BP_OnDeactivated),NULL);
	}
	static FName NAME_UActivatableWidget_BP_OnHandleBackAction = FName(TEXT("BP_OnHandleBackAction"));
	bool UActivatableWidget::BP_OnHandleBackAction()
	{
		ActivatableWidget_eventBP_OnHandleBackAction_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UActivatableWidget_BP_OnHandleBackAction),&Parms);
		return !!Parms.ReturnValue;
	}
	void UActivatableWidget::StaticRegisterNativesUActivatableWidget()
	{
		UClass* Class = UActivatableWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateWidget", &UActivatableWidget::execActivateWidget },
			{ "DeactivateWidget", &UActivatableWidget::execDeactivateWidget },
			{ "GetDesiredFocusTarget", &UActivatableWidget::execGetDesiredFocusTarget },
			{ "IsActivated", &UActivatableWidget::execIsActivated },
			{ "UpdateInput", &UActivatableWidget::execUpdateInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActivatableWidget_ActivateWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableWidget_ActivateWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidget_ActivateWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivatableWidget, nullptr, "ActivateWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivatableWidget_ActivateWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_ActivateWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivatableWidget_ActivateWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivatableWidget_ActivateWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivatableWidget_BP_GetDesiredFocusTarget_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableWidget_BP_GetDesiredFocusTarget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActivatableWidget_BP_GetDesiredFocusTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivatableWidget_eventBP_GetDesiredFocusTarget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActivatableWidget_BP_GetDesiredFocusTarget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_BP_GetDesiredFocusTarget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivatableWidget_BP_GetDesiredFocusTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivatableWidget_BP_GetDesiredFocusTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableWidget_BP_GetDesiredFocusTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidget_BP_GetDesiredFocusTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivatableWidget, nullptr, "BP_GetDesiredFocusTarget", nullptr, nullptr, sizeof(ActivatableWidget_eventBP_GetDesiredFocusTarget_Parms), Z_Construct_UFunction_UActivatableWidget_BP_GetDesiredFocusTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_BP_GetDesiredFocusTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivatableWidget_BP_GetDesiredFocusTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_BP_GetDesiredFocusTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivatableWidget_BP_GetDesiredFocusTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivatableWidget_BP_GetDesiredFocusTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivatableWidget_BP_OnActivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableWidget_BP_OnActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidget_BP_OnActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivatableWidget, nullptr, "BP_OnActivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivatableWidget_BP_OnActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_BP_OnActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivatableWidget_BP_OnActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivatableWidget_BP_OnActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivatableWidget_BP_OnDeactivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableWidget_BP_OnDeactivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidget_BP_OnDeactivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivatableWidget, nullptr, "BP_OnDeactivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivatableWidget_BP_OnDeactivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_BP_OnDeactivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivatableWidget_BP_OnDeactivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivatableWidget_BP_OnDeactivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivatableWidget_BP_OnHandleBackAction_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActivatableWidget_BP_OnHandleBackAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActivatableWidget_eventBP_OnHandleBackAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActivatableWidget_BP_OnHandleBackAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActivatableWidget_eventBP_OnHandleBackAction_Parms), &Z_Construct_UFunction_UActivatableWidget_BP_OnHandleBackAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivatableWidget_BP_OnHandleBackAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivatableWidget_BP_OnHandleBackAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableWidget_BP_OnHandleBackAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidget_BP_OnHandleBackAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivatableWidget, nullptr, "BP_OnHandleBackAction", nullptr, nullptr, sizeof(ActivatableWidget_eventBP_OnHandleBackAction_Parms), Z_Construct_UFunction_UActivatableWidget_BP_OnHandleBackAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_BP_OnHandleBackAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivatableWidget_BP_OnHandleBackAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_BP_OnHandleBackAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivatableWidget_BP_OnHandleBackAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivatableWidget_BP_OnHandleBackAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivatableWidget_DeactivateWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableWidget_DeactivateWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidget_DeactivateWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivatableWidget, nullptr, "DeactivateWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivatableWidget_DeactivateWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_DeactivateWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivatableWidget_DeactivateWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivatableWidget_DeactivateWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivatableWidget_GetDesiredFocusTarget_Statics
	{
		struct ActivatableWidget_eventGetDesiredFocusTarget_Parms
		{
			UWidget* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableWidget_GetDesiredFocusTarget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActivatableWidget_GetDesiredFocusTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivatableWidget_eventGetDesiredFocusTarget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActivatableWidget_GetDesiredFocusTarget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_GetDesiredFocusTarget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivatableWidget_GetDesiredFocusTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivatableWidget_GetDesiredFocusTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableWidget_GetDesiredFocusTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidget_GetDesiredFocusTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivatableWidget, nullptr, "GetDesiredFocusTarget", nullptr, nullptr, sizeof(ActivatableWidget_eventGetDesiredFocusTarget_Parms), Z_Construct_UFunction_UActivatableWidget_GetDesiredFocusTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_GetDesiredFocusTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivatableWidget_GetDesiredFocusTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_GetDesiredFocusTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivatableWidget_GetDesiredFocusTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivatableWidget_GetDesiredFocusTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivatableWidget_IsActivated_Statics
	{
		struct ActivatableWidget_eventIsActivated_Parms
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
	void Z_Construct_UFunction_UActivatableWidget_IsActivated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActivatableWidget_eventIsActivated_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActivatableWidget_IsActivated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActivatableWidget_eventIsActivated_Parms), &Z_Construct_UFunction_UActivatableWidget_IsActivated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivatableWidget_IsActivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivatableWidget_IsActivated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableWidget_IsActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidget_IsActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivatableWidget, nullptr, "IsActivated", nullptr, nullptr, sizeof(ActivatableWidget_eventIsActivated_Parms), Z_Construct_UFunction_UActivatableWidget_IsActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_IsActivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivatableWidget_IsActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_IsActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivatableWidget_IsActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivatableWidget_IsActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivatableWidget_UpdateInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableWidget_UpdateInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidget_UpdateInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivatableWidget, nullptr, "UpdateInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivatableWidget_UpdateInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidget_UpdateInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivatableWidget_UpdateInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivatableWidget_UpdateInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActivatableWidget_NoRegister()
	{
		return UActivatableWidget::StaticClass();
	}
	struct Z_Construct_UClass_UActivatableWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameMouseCaptureMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMouseCaptureMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameMouseCaptureMode;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionMappings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsBackAction_MetaData[];
#endif
		static void NewProp_bSupportsBackAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsBackAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoActivate_MetaData[];
#endif
		static void NewProp_bAutoActivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoActivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsActivationFocus_MetaData[];
#endif
		static void NewProp_bSupportsActivationFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsActivationFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDialogue_MetaData[];
#endif
		static void NewProp_bIsDialogue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDialogue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoRestoreFocus_MetaData[];
#endif
		static void NewProp_bAutoRestoreFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoRestoreFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_OnWidgetActivated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnWidgetActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_OnWidgetDeactivated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnWidgetDeactivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetVisibilityOnActivated_MetaData[];
#endif
		static void NewProp_bSetVisibilityOnActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetVisibilityOnActivated;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActivatedVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatedVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActivatedVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetVisibilityOnDeactivated_MetaData[];
#endif
		static void NewProp_bSetVisibilityOnDeactivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetVisibilityOnDeactivated;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeactivatedVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeactivatedVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeactivatedVisibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActivatableWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActivatableWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActivatableWidget_ActivateWidget, "ActivateWidget" }, // 2474557018
		{ &Z_Construct_UFunction_UActivatableWidget_BP_GetDesiredFocusTarget, "BP_GetDesiredFocusTarget" }, // 1501050286
		{ &Z_Construct_UFunction_UActivatableWidget_BP_OnActivated, "BP_OnActivated" }, // 2073587649
		{ &Z_Construct_UFunction_UActivatableWidget_BP_OnDeactivated, "BP_OnDeactivated" }, // 1093681169
		{ &Z_Construct_UFunction_UActivatableWidget_BP_OnHandleBackAction, "BP_OnHandleBackAction" }, // 1877065366
		{ &Z_Construct_UFunction_UActivatableWidget_DeactivateWidget, "DeactivateWidget" }, // 3166311119
		{ &Z_Construct_UFunction_UActivatableWidget_GetDesiredFocusTarget, "GetDesiredFocusTarget" }, // 4094600738
		{ &Z_Construct_UFunction_UActivatableWidget_IsActivated, "IsActivated" }, // 2429314735
		{ &Z_Construct_UFunction_UActivatableWidget_UpdateInput, "UpdateInput" }, // 105874080
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActivatableWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActivatableWidget_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidget_Statics::NewProp_InputMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivatableWidget" },
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UActivatableWidget_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivatableWidget, InputMode), Z_Construct_UEnum_UserInterface_EWidgetInputMode, METADATA_PARAMS(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_InputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_InputMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActivatableWidget_Statics::NewProp_GameMouseCaptureMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidget_Statics::NewProp_GameMouseCaptureMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivatableWidget" },
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UActivatableWidget_Statics::NewProp_GameMouseCaptureMode = { "GameMouseCaptureMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivatableWidget, GameMouseCaptureMode), Z_Construct_UEnum_Engine_EMouseCaptureMode, METADATA_PARAMS(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_GameMouseCaptureMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_GameMouseCaptureMode_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UActivatableWidget_Statics::NewProp_ActionMappings_Inner = { "ActionMappings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidget_Statics::NewProp_ActionMappings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivatableWidget" },
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActivatableWidget_Statics::NewProp_ActionMappings = { "ActionMappings", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivatableWidget, ActionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_ActionMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_ActionMappings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSupportsBackAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivatableWidget" },
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	void Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSupportsBackAction_SetBit(void* Obj)
	{
		((UActivatableWidget*)Obj)->bSupportsBackAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSupportsBackAction = { "bSupportsBackAction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActivatableWidget), &Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSupportsBackAction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSupportsBackAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSupportsBackAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bAutoActivate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivatableWidget" },
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	void Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bAutoActivate_SetBit(void* Obj)
	{
		((UActivatableWidget*)Obj)->bAutoActivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bAutoActivate = { "bAutoActivate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActivatableWidget), &Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bAutoActivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bAutoActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bAutoActivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSupportsActivationFocus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivatableWidget" },
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	void Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSupportsActivationFocus_SetBit(void* Obj)
	{
		((UActivatableWidget*)Obj)->bSupportsActivationFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSupportsActivationFocus = { "bSupportsActivationFocus", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActivatableWidget), &Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSupportsActivationFocus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSupportsActivationFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSupportsActivationFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bIsDialogue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivatableWidget" },
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	void Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bIsDialogue_SetBit(void* Obj)
	{
		((UActivatableWidget*)Obj)->bIsDialogue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bIsDialogue = { "bIsDialogue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActivatableWidget), &Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bIsDialogue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bIsDialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bIsDialogue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bAutoRestoreFocus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivatableWidget" },
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	void Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bAutoRestoreFocus_SetBit(void* Obj)
	{
		((UActivatableWidget*)Obj)->bAutoRestoreFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bAutoRestoreFocus = { "bAutoRestoreFocus", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActivatableWidget), &Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bAutoRestoreFocus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bAutoRestoreFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bAutoRestoreFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidget_Statics::NewProp_BP_OnWidgetActivated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivatableWidget" },
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UActivatableWidget_Statics::NewProp_BP_OnWidgetActivated = { "BP_OnWidgetActivated", nullptr, (EPropertyFlags)0x0040000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivatableWidget, BP_OnWidgetActivated), Z_Construct_UDelegateFunction_UserInterface_OnWidgetActivationChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_BP_OnWidgetActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_BP_OnWidgetActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidget_Statics::NewProp_BP_OnWidgetDeactivated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivatableWidget" },
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UActivatableWidget_Statics::NewProp_BP_OnWidgetDeactivated = { "BP_OnWidgetDeactivated", nullptr, (EPropertyFlags)0x0040000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivatableWidget, BP_OnWidgetDeactivated), Z_Construct_UDelegateFunction_UserInterface_OnWidgetActivationChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_BP_OnWidgetDeactivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_BP_OnWidgetDeactivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bIsActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivatableWidget" },
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	void Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((UActivatableWidget*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActivatableWidget), &Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSetVisibilityOnActivated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivatableWidget" },
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	void Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSetVisibilityOnActivated_SetBit(void* Obj)
	{
		((UActivatableWidget*)Obj)->bSetVisibilityOnActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSetVisibilityOnActivated = { "bSetVisibilityOnActivated", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActivatableWidget), &Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSetVisibilityOnActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSetVisibilityOnActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSetVisibilityOnActivated_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActivatableWidget_Statics::NewProp_ActivatedVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidget_Statics::NewProp_ActivatedVisibility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivatableWidget" },
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UActivatableWidget_Statics::NewProp_ActivatedVisibility = { "ActivatedVisibility", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivatableWidget, ActivatedVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_ActivatedVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_ActivatedVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSetVisibilityOnDeactivated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivatableWidget" },
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	void Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSetVisibilityOnDeactivated_SetBit(void* Obj)
	{
		((UActivatableWidget*)Obj)->bSetVisibilityOnDeactivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSetVisibilityOnDeactivated = { "bSetVisibilityOnDeactivated", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActivatableWidget), &Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSetVisibilityOnDeactivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSetVisibilityOnDeactivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSetVisibilityOnDeactivated_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActivatableWidget_Statics::NewProp_DeactivatedVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidget_Statics::NewProp_DeactivatedVisibility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivatableWidget" },
		{ "ModuleRelativePath", "Public/ActivatableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UActivatableWidget_Statics::NewProp_DeactivatedVisibility = { "DeactivatedVisibility", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivatableWidget, DeactivatedVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_DeactivatedVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Statics::NewProp_DeactivatedVisibility_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivatableWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Statics::NewProp_InputMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Statics::NewProp_InputMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Statics::NewProp_GameMouseCaptureMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Statics::NewProp_GameMouseCaptureMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Statics::NewProp_ActionMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Statics::NewProp_ActionMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSupportsBackAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bAutoActivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSupportsActivationFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bIsDialogue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bAutoRestoreFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Statics::NewProp_BP_OnWidgetActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Statics::NewProp_BP_OnWidgetDeactivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bIsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSetVisibilityOnActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Statics::NewProp_ActivatedVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Statics::NewProp_ActivatedVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Statics::NewProp_bSetVisibilityOnDeactivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Statics::NewProp_DeactivatedVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidget_Statics::NewProp_DeactivatedVisibility,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActivatableWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivatableWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActivatableWidget_Statics::ClassParams = {
		&UActivatableWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActivatableWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActivatableWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActivatableWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActivatableWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActivatableWidget, 1587573220);
	template<> USERINTERFACE_API UClass* StaticClass<UActivatableWidget>()
	{
		return UActivatableWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActivatableWidget(Z_Construct_UClass_UActivatableWidget, &UActivatableWidget::StaticClass, TEXT("/Script/UserInterface"), TEXT("UActivatableWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActivatableWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
