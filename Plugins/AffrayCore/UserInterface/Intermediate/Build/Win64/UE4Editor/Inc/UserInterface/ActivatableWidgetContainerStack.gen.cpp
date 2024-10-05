// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/ActivatableWidgetContainerStack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivatableWidgetContainerStack() {}
// Cross Module References
	USERINTERFACE_API UClass* Z_Construct_UClass_UActivatableWidgetContainerStack_NoRegister();
	USERINTERFACE_API UClass* Z_Construct_UClass_UActivatableWidgetContainerStack();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	USERINTERFACE_API UClass* Z_Construct_UClass_UActivatableWidget_NoRegister();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FUserWidgetPool();
// End Cross Module References
	DEFINE_FUNCTION(UActivatableWidgetContainerStack::execBP_AddWidget)
	{
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActivatableWidget**)Z_Param__Result=P_THIS->BP_AddWidget(Z_Param_WidgetClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivatableWidgetContainerStack::execBP_AddWidgetList)
	{
		P_GET_TARRAY(TSubclassOf<UActivatableWidget> ,Z_Param_WidgetClassList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_AddWidgetList(Z_Param_WidgetClassList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivatableWidgetContainerStack::execClearWidgets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearWidgets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivatableWidgetContainerStack::execGetActiveWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActivatableWidget**)Z_Param__Result=P_THIS->GetActiveWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivatableWidgetContainerStack::execIsWidgetClassAlreadyPresent)
	{
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWidgetClassAlreadyPresent(Z_Param_WidgetClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivatableWidgetContainerStack::execRemoveWidget)
	{
		P_GET_OBJECT(UActivatableWidget,Z_Param_WidgetToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveWidget(Z_Param_WidgetToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivatableWidgetContainerStack::execSetRootWidget)
	{
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRootWidget(Z_Param_WidgetClass);
		P_NATIVE_END;
	}
	void UActivatableWidgetContainerStack::StaticRegisterNativesUActivatableWidgetContainerStack()
	{
		UClass* Class = UActivatableWidgetContainerStack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_AddWidget", &UActivatableWidgetContainerStack::execBP_AddWidget },
			{ "BP_AddWidgetList", &UActivatableWidgetContainerStack::execBP_AddWidgetList },
			{ "ClearWidgets", &UActivatableWidgetContainerStack::execClearWidgets },
			{ "GetActiveWidget", &UActivatableWidgetContainerStack::execGetActiveWidget },
			{ "IsWidgetClassAlreadyPresent", &UActivatableWidgetContainerStack::execIsWidgetClassAlreadyPresent },
			{ "RemoveWidget", &UActivatableWidgetContainerStack::execRemoveWidget },
			{ "SetRootWidget", &UActivatableWidgetContainerStack::execSetRootWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidget_Statics
	{
		struct ActivatableWidgetContainerStack_eventBP_AddWidget_Parms
		{
			TSubclassOf<UActivatableWidget>  WidgetClass;
			UActivatableWidget* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidget_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivatableWidgetContainerStack_eventBP_AddWidget_Parms, WidgetClass), Z_Construct_UClass_UActivatableWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivatableWidgetContainerStack_eventBP_AddWidget_Parms, ReturnValue), Z_Construct_UClass_UActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidget_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivatableWidgetContainerStack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivatableWidgetContainerStack, nullptr, "BP_AddWidget", nullptr, nullptr, sizeof(ActivatableWidgetContainerStack_eventBP_AddWidget_Parms), Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidgetList_Statics
	{
		struct ActivatableWidgetContainerStack_eventBP_AddWidgetList_Parms
		{
			TArray<TSubclassOf<UActivatableWidget> > WidgetClassList;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClassList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WidgetClassList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidgetList_Statics::NewProp_WidgetClassList_Inner = { "WidgetClassList", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActivatableWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidgetList_Statics::NewProp_WidgetClassList = { "WidgetClassList", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivatableWidgetContainerStack_eventBP_AddWidgetList_Parms, WidgetClassList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidgetList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidgetList_Statics::NewProp_WidgetClassList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidgetList_Statics::NewProp_WidgetClassList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidgetList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivatableWidgetContainerStack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidgetList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivatableWidgetContainerStack, nullptr, "BP_AddWidgetList", nullptr, nullptr, sizeof(ActivatableWidgetContainerStack_eventBP_AddWidgetList_Parms), Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidgetList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidgetList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidgetList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidgetList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidgetList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidgetList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivatableWidgetContainerStack_ClearWidgets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableWidgetContainerStack_ClearWidgets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivatableWidgetContainerStack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidgetContainerStack_ClearWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivatableWidgetContainerStack, nullptr, "ClearWidgets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivatableWidgetContainerStack_ClearWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidgetContainerStack_ClearWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivatableWidgetContainerStack_ClearWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivatableWidgetContainerStack_ClearWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivatableWidgetContainerStack_GetActiveWidget_Statics
	{
		struct ActivatableWidgetContainerStack_eventGetActiveWidget_Parms
		{
			UActivatableWidget* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableWidgetContainerStack_GetActiveWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActivatableWidgetContainerStack_GetActiveWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivatableWidgetContainerStack_eventGetActiveWidget_Parms, ReturnValue), Z_Construct_UClass_UActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActivatableWidgetContainerStack_GetActiveWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidgetContainerStack_GetActiveWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivatableWidgetContainerStack_GetActiveWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivatableWidgetContainerStack_GetActiveWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableWidgetContainerStack_GetActiveWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivatableWidgetContainerStack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidgetContainerStack_GetActiveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivatableWidgetContainerStack, nullptr, "GetActiveWidget", nullptr, nullptr, sizeof(ActivatableWidgetContainerStack_eventGetActiveWidget_Parms), Z_Construct_UFunction_UActivatableWidgetContainerStack_GetActiveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidgetContainerStack_GetActiveWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivatableWidgetContainerStack_GetActiveWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidgetContainerStack_GetActiveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivatableWidgetContainerStack_GetActiveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivatableWidgetContainerStack_GetActiveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivatableWidgetContainerStack_IsWidgetClassAlreadyPresent_Statics
	{
		struct ActivatableWidgetContainerStack_eventIsWidgetClassAlreadyPresent_Parms
		{
			TSubclassOf<UActivatableWidget>  WidgetClass;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActivatableWidgetContainerStack_IsWidgetClassAlreadyPresent_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivatableWidgetContainerStack_eventIsWidgetClassAlreadyPresent_Parms, WidgetClass), Z_Construct_UClass_UActivatableWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActivatableWidgetContainerStack_IsWidgetClassAlreadyPresent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActivatableWidgetContainerStack_eventIsWidgetClassAlreadyPresent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActivatableWidgetContainerStack_IsWidgetClassAlreadyPresent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActivatableWidgetContainerStack_eventIsWidgetClassAlreadyPresent_Parms), &Z_Construct_UFunction_UActivatableWidgetContainerStack_IsWidgetClassAlreadyPresent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivatableWidgetContainerStack_IsWidgetClassAlreadyPresent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivatableWidgetContainerStack_IsWidgetClassAlreadyPresent_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivatableWidgetContainerStack_IsWidgetClassAlreadyPresent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableWidgetContainerStack_IsWidgetClassAlreadyPresent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivatableWidgetContainerStack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidgetContainerStack_IsWidgetClassAlreadyPresent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivatableWidgetContainerStack, nullptr, "IsWidgetClassAlreadyPresent", nullptr, nullptr, sizeof(ActivatableWidgetContainerStack_eventIsWidgetClassAlreadyPresent_Parms), Z_Construct_UFunction_UActivatableWidgetContainerStack_IsWidgetClassAlreadyPresent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidgetContainerStack_IsWidgetClassAlreadyPresent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivatableWidgetContainerStack_IsWidgetClassAlreadyPresent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidgetContainerStack_IsWidgetClassAlreadyPresent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivatableWidgetContainerStack_IsWidgetClassAlreadyPresent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivatableWidgetContainerStack_IsWidgetClassAlreadyPresent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivatableWidgetContainerStack_RemoveWidget_Statics
	{
		struct ActivatableWidgetContainerStack_eventRemoveWidget_Parms
		{
			UActivatableWidget* WidgetToRemove;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetToRemove_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableWidgetContainerStack_RemoveWidget_Statics::NewProp_WidgetToRemove_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActivatableWidgetContainerStack_RemoveWidget_Statics::NewProp_WidgetToRemove = { "WidgetToRemove", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivatableWidgetContainerStack_eventRemoveWidget_Parms, WidgetToRemove), Z_Construct_UClass_UActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActivatableWidgetContainerStack_RemoveWidget_Statics::NewProp_WidgetToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidgetContainerStack_RemoveWidget_Statics::NewProp_WidgetToRemove_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivatableWidgetContainerStack_RemoveWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivatableWidgetContainerStack_RemoveWidget_Statics::NewProp_WidgetToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableWidgetContainerStack_RemoveWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivatableWidgetContainerStack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidgetContainerStack_RemoveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivatableWidgetContainerStack, nullptr, "RemoveWidget", nullptr, nullptr, sizeof(ActivatableWidgetContainerStack_eventRemoveWidget_Parms), Z_Construct_UFunction_UActivatableWidgetContainerStack_RemoveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidgetContainerStack_RemoveWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivatableWidgetContainerStack_RemoveWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidgetContainerStack_RemoveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivatableWidgetContainerStack_RemoveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivatableWidgetContainerStack_RemoveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivatableWidgetContainerStack_SetRootWidget_Statics
	{
		struct ActivatableWidgetContainerStack_eventSetRootWidget_Parms
		{
			TSubclassOf<UActivatableWidget>  WidgetClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActivatableWidgetContainerStack_SetRootWidget_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivatableWidgetContainerStack_eventSetRootWidget_Parms, WidgetClass), Z_Construct_UClass_UActivatableWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivatableWidgetContainerStack_SetRootWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivatableWidgetContainerStack_SetRootWidget_Statics::NewProp_WidgetClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatableWidgetContainerStack_SetRootWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivatableWidgetContainerStack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatableWidgetContainerStack_SetRootWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivatableWidgetContainerStack, nullptr, "SetRootWidget", nullptr, nullptr, sizeof(ActivatableWidgetContainerStack_eventSetRootWidget_Parms), Z_Construct_UFunction_UActivatableWidgetContainerStack_SetRootWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidgetContainerStack_SetRootWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivatableWidgetContainerStack_SetRootWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatableWidgetContainerStack_SetRootWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivatableWidgetContainerStack_SetRootWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivatableWidgetContainerStack_SetRootWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActivatableWidgetContainerStack_NoRegister()
	{
		return UActivatableWidgetContainerStack::StaticClass();
	}
	struct Z_Construct_UClass_UActivatableWidgetContainerStack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetList_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WidgetList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayedWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DisplayedWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedWidgetsPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneratedWidgetsPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RootWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidget, "BP_AddWidget" }, // 414446230
		{ &Z_Construct_UFunction_UActivatableWidgetContainerStack_BP_AddWidgetList, "BP_AddWidgetList" }, // 3443090803
		{ &Z_Construct_UFunction_UActivatableWidgetContainerStack_ClearWidgets, "ClearWidgets" }, // 2147237734
		{ &Z_Construct_UFunction_UActivatableWidgetContainerStack_GetActiveWidget, "GetActiveWidget" }, // 502074726
		{ &Z_Construct_UFunction_UActivatableWidgetContainerStack_IsWidgetClassAlreadyPresent, "IsWidgetClassAlreadyPresent" }, // 4042203996
		{ &Z_Construct_UFunction_UActivatableWidgetContainerStack_RemoveWidget, "RemoveWidget" }, // 4004350345
		{ &Z_Construct_UFunction_UActivatableWidgetContainerStack_SetRootWidget, "SetRootWidget" }, // 841335699
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActivatableWidgetContainerStack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActivatableWidgetContainerStack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_WidgetList_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivatableWidgetContainerStack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActivatableWidgetContainerStack.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_WidgetList_Inner = { "WidgetList", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_WidgetList_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_WidgetList_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_WidgetList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivatableWidgetContainerStack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActivatableWidgetContainerStack.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_WidgetList = { "WidgetList", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivatableWidgetContainerStack, WidgetList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_WidgetList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_WidgetList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_DisplayedWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivatableWidgetContainerStack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActivatableWidgetContainerStack.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_DisplayedWidget = { "DisplayedWidget", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivatableWidgetContainerStack, DisplayedWidget), Z_Construct_UClass_UActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_DisplayedWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_DisplayedWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_GeneratedWidgetsPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivatableWidgetContainerStack" },
		{ "ModuleRelativePath", "Public/ActivatableWidgetContainerStack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_GeneratedWidgetsPool = { "GeneratedWidgetsPool", nullptr, (EPropertyFlags)0x0020088000002001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivatableWidgetContainerStack, GeneratedWidgetsPool), Z_Construct_UScriptStruct_FUserWidgetPool, METADATA_PARAMS(Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_GeneratedWidgetsPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_GeneratedWidgetsPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_RootWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivatableWidgetContainerStack" },
		{ "ModuleRelativePath", "Public/ActivatableWidgetContainerStack.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_RootWidgetClass = { "RootWidgetClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivatableWidgetContainerStack, RootWidgetClass), Z_Construct_UClass_UActivatableWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_RootWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_RootWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_RootWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivatableWidgetContainerStack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActivatableWidgetContainerStack.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_RootWidget = { "RootWidget", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivatableWidgetContainerStack, RootWidget), Z_Construct_UClass_UActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_RootWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_RootWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_WidgetList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_WidgetList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_DisplayedWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_GeneratedWidgetsPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_RootWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::NewProp_RootWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivatableWidgetContainerStack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::ClassParams = {
		&UActivatableWidgetContainerStack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActivatableWidgetContainerStack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActivatableWidgetContainerStack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActivatableWidgetContainerStack, 800493258);
	template<> USERINTERFACE_API UClass* StaticClass<UActivatableWidgetContainerStack>()
	{
		return UActivatableWidgetContainerStack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActivatableWidgetContainerStack(Z_Construct_UClass_UActivatableWidgetContainerStack, &UActivatableWidgetContainerStack::StaticClass, TEXT("/Script/UserInterface"), TEXT("UActivatableWidgetContainerStack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActivatableWidgetContainerStack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
