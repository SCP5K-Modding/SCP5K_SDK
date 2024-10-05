// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/UIInputLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIInputLibrary() {}
// Cross Module References
	USERINTERFACE_API UClass* Z_Construct_UClass_UUIInputLibrary_NoRegister();
	USERINTERFACE_API UClass* Z_Construct_UClass_UUIInputLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_EInputType();
	USERINTERFACE_API UClass* Z_Construct_UClass_UActivatableWidget_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UUIInputLibrary::execGetFirstWidget)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=UUIInputLibrary::GetFirstWidget(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIInputLibrary::execGetOwningPlayerInputType)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_WidgetContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EInputType*)Z_Param__Result=UUIInputLibrary::GetOwningPlayerInputType(Z_Param_WidgetContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIInputLibrary::execIsPlayerUsingGamepad)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_WidgetContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUIInputLibrary::IsPlayerUsingGamepad(Z_Param_WidgetContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIInputLibrary::execPopContentFromLayer)
	{
		P_GET_OBJECT(UActivatableWidget,Z_Param_ActivatableWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUIInputLibrary::PopContentFromLayer(Z_Param_ActivatableWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIInputLibrary::execPushContentToLayer)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_LayerName);
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActivatableWidget**)Z_Param__Result=UUIInputLibrary::PushContentToLayer(Z_Param_LayerName,Z_Param_WidgetClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIInputLibrary::execPushStreamedContentToLayer)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_LayerName);
		P_GET_SOFTCLASS(TSoftClassPtr<UActivatableWidget> ,Z_Param_WidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUIInputLibrary::PushStreamedContentToLayer(Z_Param_LayerName,Z_Param_WidgetClass);
		P_NATIVE_END;
	}
	void UUIInputLibrary::StaticRegisterNativesUUIInputLibrary()
	{
		UClass* Class = UUIInputLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFirstWidget", &UUIInputLibrary::execGetFirstWidget },
			{ "GetOwningPlayerInputType", &UUIInputLibrary::execGetOwningPlayerInputType },
			{ "IsPlayerUsingGamepad", &UUIInputLibrary::execIsPlayerUsingGamepad },
			{ "PopContentFromLayer", &UUIInputLibrary::execPopContentFromLayer },
			{ "PushContentToLayer", &UUIInputLibrary::execPushContentToLayer },
			{ "PushStreamedContentToLayer", &UUIInputLibrary::execPushStreamedContentToLayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIInputLibrary_GetFirstWidget_Statics
	{
		struct UIInputLibrary_eventGetFirstWidget_Parms
		{
			const UUserWidget* Widget;
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputLibrary_GetFirstWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIInputLibrary_GetFirstWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIInputLibrary_eventGetFirstWidget_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUIInputLibrary_GetFirstWidget_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputLibrary_GetFirstWidget_Statics::NewProp_Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputLibrary_GetFirstWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIInputLibrary_GetFirstWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIInputLibrary_eventGetFirstWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUIInputLibrary_GetFirstWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputLibrary_GetFirstWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIInputLibrary_GetFirstWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputLibrary_GetFirstWidget_Statics::NewProp_Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputLibrary_GetFirstWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputLibrary_GetFirstWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIInputLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputLibrary_GetFirstWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIInputLibrary, nullptr, "GetFirstWidget", nullptr, nullptr, sizeof(UIInputLibrary_eventGetFirstWidget_Parms), Z_Construct_UFunction_UUIInputLibrary_GetFirstWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputLibrary_GetFirstWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIInputLibrary_GetFirstWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputLibrary_GetFirstWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIInputLibrary_GetFirstWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIInputLibrary_GetFirstWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIInputLibrary_GetOwningPlayerInputType_Statics
	{
		struct UIInputLibrary_eventGetOwningPlayerInputType_Parms
		{
			const UUserWidget* WidgetContextObject;
			EInputType ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputLibrary_GetOwningPlayerInputType_Statics::NewProp_WidgetContextObject_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIInputLibrary_GetOwningPlayerInputType_Statics::NewProp_WidgetContextObject = { "WidgetContextObject", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIInputLibrary_eventGetOwningPlayerInputType_Parms, WidgetContextObject), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUIInputLibrary_GetOwningPlayerInputType_Statics::NewProp_WidgetContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputLibrary_GetOwningPlayerInputType_Statics::NewProp_WidgetContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIInputLibrary_GetOwningPlayerInputType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUIInputLibrary_GetOwningPlayerInputType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIInputLibrary_eventGetOwningPlayerInputType_Parms, ReturnValue), Z_Construct_UEnum_UserInterface_EInputType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIInputLibrary_GetOwningPlayerInputType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputLibrary_GetOwningPlayerInputType_Statics::NewProp_WidgetContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputLibrary_GetOwningPlayerInputType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputLibrary_GetOwningPlayerInputType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputLibrary_GetOwningPlayerInputType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIInputLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputLibrary_GetOwningPlayerInputType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIInputLibrary, nullptr, "GetOwningPlayerInputType", nullptr, nullptr, sizeof(UIInputLibrary_eventGetOwningPlayerInputType_Parms), Z_Construct_UFunction_UUIInputLibrary_GetOwningPlayerInputType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputLibrary_GetOwningPlayerInputType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIInputLibrary_GetOwningPlayerInputType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputLibrary_GetOwningPlayerInputType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIInputLibrary_GetOwningPlayerInputType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIInputLibrary_GetOwningPlayerInputType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIInputLibrary_IsPlayerUsingGamepad_Statics
	{
		struct UIInputLibrary_eventIsPlayerUsingGamepad_Parms
		{
			const UUserWidget* WidgetContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputLibrary_IsPlayerUsingGamepad_Statics::NewProp_WidgetContextObject_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIInputLibrary_IsPlayerUsingGamepad_Statics::NewProp_WidgetContextObject = { "WidgetContextObject", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIInputLibrary_eventIsPlayerUsingGamepad_Parms, WidgetContextObject), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUIInputLibrary_IsPlayerUsingGamepad_Statics::NewProp_WidgetContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputLibrary_IsPlayerUsingGamepad_Statics::NewProp_WidgetContextObject_MetaData)) };
	void Z_Construct_UFunction_UUIInputLibrary_IsPlayerUsingGamepad_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UIInputLibrary_eventIsPlayerUsingGamepad_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIInputLibrary_IsPlayerUsingGamepad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIInputLibrary_eventIsPlayerUsingGamepad_Parms), &Z_Construct_UFunction_UUIInputLibrary_IsPlayerUsingGamepad_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIInputLibrary_IsPlayerUsingGamepad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputLibrary_IsPlayerUsingGamepad_Statics::NewProp_WidgetContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputLibrary_IsPlayerUsingGamepad_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputLibrary_IsPlayerUsingGamepad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIInputLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputLibrary_IsPlayerUsingGamepad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIInputLibrary, nullptr, "IsPlayerUsingGamepad", nullptr, nullptr, sizeof(UIInputLibrary_eventIsPlayerUsingGamepad_Parms), Z_Construct_UFunction_UUIInputLibrary_IsPlayerUsingGamepad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputLibrary_IsPlayerUsingGamepad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIInputLibrary_IsPlayerUsingGamepad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputLibrary_IsPlayerUsingGamepad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIInputLibrary_IsPlayerUsingGamepad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIInputLibrary_IsPlayerUsingGamepad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIInputLibrary_PopContentFromLayer_Statics
	{
		struct UIInputLibrary_eventPopContentFromLayer_Parms
		{
			UActivatableWidget* ActivatableWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatableWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivatableWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputLibrary_PopContentFromLayer_Statics::NewProp_ActivatableWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIInputLibrary_PopContentFromLayer_Statics::NewProp_ActivatableWidget = { "ActivatableWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIInputLibrary_eventPopContentFromLayer_Parms, ActivatableWidget), Z_Construct_UClass_UActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUIInputLibrary_PopContentFromLayer_Statics::NewProp_ActivatableWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputLibrary_PopContentFromLayer_Statics::NewProp_ActivatableWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIInputLibrary_PopContentFromLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputLibrary_PopContentFromLayer_Statics::NewProp_ActivatableWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputLibrary_PopContentFromLayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIInputLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputLibrary_PopContentFromLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIInputLibrary, nullptr, "PopContentFromLayer", nullptr, nullptr, sizeof(UIInputLibrary_eventPopContentFromLayer_Parms), Z_Construct_UFunction_UUIInputLibrary_PopContentFromLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputLibrary_PopContentFromLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIInputLibrary_PopContentFromLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputLibrary_PopContentFromLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIInputLibrary_PopContentFromLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIInputLibrary_PopContentFromLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIInputLibrary_PushContentToLayer_Statics
	{
		struct UIInputLibrary_eventPushContentToLayer_Parms
		{
			FGameplayTag LayerName;
			TSubclassOf<UActivatableWidget>  WidgetClass;
			UActivatableWidget* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayerName;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIInputLibrary_PushContentToLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIInputLibrary_eventPushContentToLayer_Parms, LayerName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUIInputLibrary_PushContentToLayer_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIInputLibrary_eventPushContentToLayer_Parms, WidgetClass), Z_Construct_UClass_UActivatableWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputLibrary_PushContentToLayer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIInputLibrary_PushContentToLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIInputLibrary_eventPushContentToLayer_Parms, ReturnValue), Z_Construct_UClass_UActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUIInputLibrary_PushContentToLayer_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputLibrary_PushContentToLayer_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIInputLibrary_PushContentToLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputLibrary_PushContentToLayer_Statics::NewProp_LayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputLibrary_PushContentToLayer_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputLibrary_PushContentToLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputLibrary_PushContentToLayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIInputLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputLibrary_PushContentToLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIInputLibrary, nullptr, "PushContentToLayer", nullptr, nullptr, sizeof(UIInputLibrary_eventPushContentToLayer_Parms), Z_Construct_UFunction_UUIInputLibrary_PushContentToLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputLibrary_PushContentToLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIInputLibrary_PushContentToLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputLibrary_PushContentToLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIInputLibrary_PushContentToLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIInputLibrary_PushContentToLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIInputLibrary_PushStreamedContentToLayer_Statics
	{
		struct UIInputLibrary_eventPushStreamedContentToLayer_Parms
		{
			FGameplayTag LayerName;
			TSoftClassPtr<UActivatableWidget>  WidgetClass;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayerName;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_WidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIInputLibrary_PushStreamedContentToLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIInputLibrary_eventPushStreamedContentToLayer_Parms, LayerName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UUIInputLibrary_PushStreamedContentToLayer_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIInputLibrary_eventPushStreamedContentToLayer_Parms, WidgetClass), Z_Construct_UClass_UActivatableWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIInputLibrary_PushStreamedContentToLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputLibrary_PushStreamedContentToLayer_Statics::NewProp_LayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIInputLibrary_PushStreamedContentToLayer_Statics::NewProp_WidgetClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIInputLibrary_PushStreamedContentToLayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIInputLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIInputLibrary_PushStreamedContentToLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIInputLibrary, nullptr, "PushStreamedContentToLayer", nullptr, nullptr, sizeof(UIInputLibrary_eventPushStreamedContentToLayer_Parms), Z_Construct_UFunction_UUIInputLibrary_PushStreamedContentToLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputLibrary_PushStreamedContentToLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIInputLibrary_PushStreamedContentToLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIInputLibrary_PushStreamedContentToLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIInputLibrary_PushStreamedContentToLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIInputLibrary_PushStreamedContentToLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUIInputLibrary_NoRegister()
	{
		return UUIInputLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUIInputLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIInputLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIInputLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIInputLibrary_GetFirstWidget, "GetFirstWidget" }, // 30586924
		{ &Z_Construct_UFunction_UUIInputLibrary_GetOwningPlayerInputType, "GetOwningPlayerInputType" }, // 175523688
		{ &Z_Construct_UFunction_UUIInputLibrary_IsPlayerUsingGamepad, "IsPlayerUsingGamepad" }, // 4050458846
		{ &Z_Construct_UFunction_UUIInputLibrary_PopContentFromLayer, "PopContentFromLayer" }, // 4164188298
		{ &Z_Construct_UFunction_UUIInputLibrary_PushContentToLayer, "PushContentToLayer" }, // 1398354387
		{ &Z_Construct_UFunction_UUIInputLibrary_PushStreamedContentToLayer, "PushStreamedContentToLayer" }, // 1484525260
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIInputLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UIInputLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UIInputLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIInputLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIInputLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUIInputLibrary_Statics::ClassParams = {
		&UUIInputLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIInputLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIInputLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIInputLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUIInputLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUIInputLibrary, 1786989056);
	template<> USERINTERFACE_API UClass* StaticClass<UUIInputLibrary>()
	{
		return UUIInputLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUIInputLibrary(Z_Construct_UClass_UUIInputLibrary, &UUIInputLibrary::StaticClass, TEXT("/Script/UserInterface"), TEXT("UUIInputLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIInputLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
