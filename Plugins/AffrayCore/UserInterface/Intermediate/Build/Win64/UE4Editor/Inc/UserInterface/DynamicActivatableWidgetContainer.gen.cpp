// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/DynamicActivatableWidgetContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicActivatableWidgetContainer() {}
// Cross Module References
	USERINTERFACE_API UClass* Z_Construct_UClass_UDynamicActivatableWidgetContainer_NoRegister();
	USERINTERFACE_API UClass* Z_Construct_UClass_UDynamicActivatableWidgetContainer();
	USERINTERFACE_API UClass* Z_Construct_UClass_UActivatableWidget();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	USERINTERFACE_API UClass* Z_Construct_UClass_UActivatableWidget_NoRegister();
// End Cross Module References
	static FName NAME_UDynamicActivatableWidgetContainer_AddWidgets = FName(TEXT("AddWidgets"));
	void UDynamicActivatableWidgetContainer::AddWidgets(TArray<TSubclassOf<UActivatableWidget> > const& Widgets)
	{
		DynamicActivatableWidgetContainer_eventAddWidgets_Parms Parms;
		Parms.Widgets=Widgets;
		ProcessEvent(FindFunctionChecked(NAME_UDynamicActivatableWidgetContainer_AddWidgets),&Parms);
	}
	void UDynamicActivatableWidgetContainer::StaticRegisterNativesUDynamicActivatableWidgetContainer()
	{
	}
	struct Z_Construct_UFunction_UDynamicActivatableWidgetContainer_AddWidgets_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Widgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Widgets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDynamicActivatableWidgetContainer_AddWidgets_Statics::NewProp_Widgets_Inner = { "Widgets", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActivatableWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicActivatableWidgetContainer_AddWidgets_Statics::NewProp_Widgets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDynamicActivatableWidgetContainer_AddWidgets_Statics::NewProp_Widgets = { "Widgets", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicActivatableWidgetContainer_eventAddWidgets_Parms, Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDynamicActivatableWidgetContainer_AddWidgets_Statics::NewProp_Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicActivatableWidgetContainer_AddWidgets_Statics::NewProp_Widgets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicActivatableWidgetContainer_AddWidgets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicActivatableWidgetContainer_AddWidgets_Statics::NewProp_Widgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicActivatableWidgetContainer_AddWidgets_Statics::NewProp_Widgets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicActivatableWidgetContainer_AddWidgets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DynamicActivatableWidgetContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicActivatableWidgetContainer_AddWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicActivatableWidgetContainer, nullptr, "AddWidgets", nullptr, nullptr, sizeof(DynamicActivatableWidgetContainer_eventAddWidgets_Parms), Z_Construct_UFunction_UDynamicActivatableWidgetContainer_AddWidgets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicActivatableWidgetContainer_AddWidgets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicActivatableWidgetContainer_AddWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicActivatableWidgetContainer_AddWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicActivatableWidgetContainer_AddWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicActivatableWidgetContainer_AddWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDynamicActivatableWidgetContainer_NoRegister()
	{
		return UDynamicActivatableWidgetContainer::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicActivatableWidgetContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicActivatableWidgetContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActivatableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDynamicActivatableWidgetContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicActivatableWidgetContainer_AddWidgets, "AddWidgets" }, // 893422766
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicActivatableWidgetContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DynamicActivatableWidgetContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DynamicActivatableWidgetContainer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicActivatableWidgetContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicActivatableWidgetContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDynamicActivatableWidgetContainer_Statics::ClassParams = {
		&UDynamicActivatableWidgetContainer::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamicActivatableWidgetContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicActivatableWidgetContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicActivatableWidgetContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDynamicActivatableWidgetContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDynamicActivatableWidgetContainer, 1405750823);
	template<> USERINTERFACE_API UClass* StaticClass<UDynamicActivatableWidgetContainer>()
	{
		return UDynamicActivatableWidgetContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDynamicActivatableWidgetContainer(Z_Construct_UClass_UDynamicActivatableWidgetContainer, &UDynamicActivatableWidgetContainer::StaticClass, TEXT("/Script/UserInterface"), TEXT("UDynamicActivatableWidgetContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicActivatableWidgetContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
