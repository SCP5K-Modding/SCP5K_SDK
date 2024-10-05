// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/MainGameLayout.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGameLayout() {}
// Cross Module References
	USERINTERFACE_API UClass* Z_Construct_UClass_UMainGameLayout_NoRegister();
	USERINTERFACE_API UClass* Z_Construct_UClass_UMainGameLayout();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	USERINTERFACE_API UClass* Z_Construct_UClass_UActivatableWidget_NoRegister();
	USERINTERFACE_API UClass* Z_Construct_UClass_UActivatableWidgetContainerStack_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMainGameLayout::execAddWidgetToLayer)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Layer);
		P_GET_OBJECT(UClass,Z_Param_ActivatableWidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActivatableWidget**)Z_Param__Result=P_THIS->AddWidgetToLayer(Z_Param_Layer,Z_Param_ActivatableWidgetClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainGameLayout::execGetLayerWidget)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_LayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActivatableWidgetContainerStack**)Z_Param__Result=P_THIS->GetLayerWidget(Z_Param_LayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainGameLayout::execRegisterLayer)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_LayerTag);
		P_GET_OBJECT(UActivatableWidgetContainerStack,Z_Param_LayerWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterLayer(Z_Param_LayerTag,Z_Param_LayerWidget);
		P_NATIVE_END;
	}
	void UMainGameLayout::StaticRegisterNativesUMainGameLayout()
	{
		UClass* Class = UMainGameLayout::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWidgetToLayer", &UMainGameLayout::execAddWidgetToLayer },
			{ "GetLayerWidget", &UMainGameLayout::execGetLayerWidget },
			{ "RegisterLayer", &UMainGameLayout::execRegisterLayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainGameLayout_AddWidgetToLayer_Statics
	{
		struct MainGameLayout_eventAddWidgetToLayer_Parms
		{
			FGameplayTag Layer;
			TSubclassOf<UActivatableWidget>  ActivatableWidgetClass;
			UActivatableWidget* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Layer;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActivatableWidgetClass;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMainGameLayout_AddWidgetToLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainGameLayout_eventAddWidgetToLayer_Parms, Layer), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMainGameLayout_AddWidgetToLayer_Statics::NewProp_ActivatableWidgetClass = { "ActivatableWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainGameLayout_eventAddWidgetToLayer_Parms, ActivatableWidgetClass), Z_Construct_UClass_UActivatableWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainGameLayout_AddWidgetToLayer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMainGameLayout_AddWidgetToLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainGameLayout_eventAddWidgetToLayer_Parms, ReturnValue), Z_Construct_UClass_UActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMainGameLayout_AddWidgetToLayer_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameLayout_AddWidgetToLayer_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainGameLayout_AddWidgetToLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainGameLayout_AddWidgetToLayer_Statics::NewProp_Layer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainGameLayout_AddWidgetToLayer_Statics::NewProp_ActivatableWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainGameLayout_AddWidgetToLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainGameLayout_AddWidgetToLayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainGameLayout.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainGameLayout_AddWidgetToLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainGameLayout, nullptr, "AddWidgetToLayer", nullptr, nullptr, sizeof(MainGameLayout_eventAddWidgetToLayer_Parms), Z_Construct_UFunction_UMainGameLayout_AddWidgetToLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameLayout_AddWidgetToLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainGameLayout_AddWidgetToLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameLayout_AddWidgetToLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainGameLayout_AddWidgetToLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainGameLayout_AddWidgetToLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainGameLayout_GetLayerWidget_Statics
	{
		struct MainGameLayout_eventGetLayerWidget_Parms
		{
			FGameplayTag LayerName;
			UActivatableWidgetContainerStack* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayerName;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMainGameLayout_GetLayerWidget_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainGameLayout_eventGetLayerWidget_Parms, LayerName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainGameLayout_GetLayerWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMainGameLayout_GetLayerWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainGameLayout_eventGetLayerWidget_Parms, ReturnValue), Z_Construct_UClass_UActivatableWidgetContainerStack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMainGameLayout_GetLayerWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameLayout_GetLayerWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainGameLayout_GetLayerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainGameLayout_GetLayerWidget_Statics::NewProp_LayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainGameLayout_GetLayerWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainGameLayout_GetLayerWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainGameLayout.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainGameLayout_GetLayerWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainGameLayout, nullptr, "GetLayerWidget", nullptr, nullptr, sizeof(MainGameLayout_eventGetLayerWidget_Parms), Z_Construct_UFunction_UMainGameLayout_GetLayerWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameLayout_GetLayerWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainGameLayout_GetLayerWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameLayout_GetLayerWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainGameLayout_GetLayerWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainGameLayout_GetLayerWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainGameLayout_RegisterLayer_Statics
	{
		struct MainGameLayout_eventRegisterLayer_Parms
		{
			FGameplayTag LayerTag;
			UActivatableWidgetContainerStack* LayerWidget;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayerTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayerWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMainGameLayout_RegisterLayer_Statics::NewProp_LayerTag = { "LayerTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainGameLayout_eventRegisterLayer_Parms, LayerTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainGameLayout_RegisterLayer_Statics::NewProp_LayerWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMainGameLayout_RegisterLayer_Statics::NewProp_LayerWidget = { "LayerWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainGameLayout_eventRegisterLayer_Parms, LayerWidget), Z_Construct_UClass_UActivatableWidgetContainerStack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMainGameLayout_RegisterLayer_Statics::NewProp_LayerWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameLayout_RegisterLayer_Statics::NewProp_LayerWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainGameLayout_RegisterLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainGameLayout_RegisterLayer_Statics::NewProp_LayerTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainGameLayout_RegisterLayer_Statics::NewProp_LayerWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainGameLayout_RegisterLayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainGameLayout.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainGameLayout_RegisterLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainGameLayout, nullptr, "RegisterLayer", nullptr, nullptr, sizeof(MainGameLayout_eventRegisterLayer_Parms), Z_Construct_UFunction_UMainGameLayout_RegisterLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameLayout_RegisterLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainGameLayout_RegisterLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainGameLayout_RegisterLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainGameLayout_RegisterLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainGameLayout_RegisterLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMainGameLayout_NoRegister()
	{
		return UMainGameLayout::StaticClass();
	}
	struct Z_Construct_UClass_UMainGameLayout_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layers_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Layers_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Layers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Layers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainGameLayout_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainGameLayout_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainGameLayout_AddWidgetToLayer, "AddWidgetToLayer" }, // 1566419980
		{ &Z_Construct_UFunction_UMainGameLayout_GetLayerWidget, "GetLayerWidget" }, // 2630380683
		{ &Z_Construct_UFunction_UMainGameLayout_RegisterLayer, "RegisterLayer" }, // 1201680870
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainGameLayout_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MainGameLayout.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MainGameLayout.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainGameLayout_Statics::NewProp_Layers_ValueProp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MainGameLayout" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainGameLayout.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainGameLayout_Statics::NewProp_Layers_ValueProp = { "Layers", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UActivatableWidgetContainerStack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainGameLayout_Statics::NewProp_Layers_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainGameLayout_Statics::NewProp_Layers_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMainGameLayout_Statics::NewProp_Layers_Key_KeyProp = { "Layers_Key", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainGameLayout_Statics::NewProp_Layers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MainGameLayout" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainGameLayout.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMainGameLayout_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainGameLayout, Layers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMainGameLayout_Statics::NewProp_Layers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainGameLayout_Statics::NewProp_Layers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainGameLayout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainGameLayout_Statics::NewProp_Layers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainGameLayout_Statics::NewProp_Layers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainGameLayout_Statics::NewProp_Layers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainGameLayout_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainGameLayout>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainGameLayout_Statics::ClassParams = {
		&UMainGameLayout::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMainGameLayout_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainGameLayout_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMainGameLayout_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainGameLayout_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainGameLayout()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMainGameLayout_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainGameLayout, 2907098381);
	template<> USERINTERFACE_API UClass* StaticClass<UMainGameLayout>()
	{
		return UMainGameLayout::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainGameLayout(Z_Construct_UClass_UMainGameLayout, &UMainGameLayout::StaticClass, TEXT("/Script/UserInterface"), TEXT("UMainGameLayout"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainGameLayout);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
