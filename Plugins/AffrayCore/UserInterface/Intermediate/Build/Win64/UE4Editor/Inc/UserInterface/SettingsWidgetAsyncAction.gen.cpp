// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/SettingsWidgetAsyncAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsWidgetAsyncAction() {}
// Cross Module References
	USERINTERFACE_API UClass* Z_Construct_UClass_USettingsWidgetAsyncAction_NoRegister();
	USERINTERFACE_API UClass* Z_Construct_UClass_USettingsWidgetAsyncAction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	GAMEUTILITIES_API UEnum* Z_Construct_UEnum_GameUtilities_EAudioSetting();
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_AudioSettingsUpdated__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USettingsWidgetAsyncAction::execBindAudioSettings)
	{
		P_GET_ENUM(EAudioSetting,Z_Param_Setting);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USettingsWidgetAsyncAction**)Z_Param__Result=USettingsWidgetAsyncAction::BindAudioSettings(EAudioSetting(Z_Param_Setting));
		P_NATIVE_END;
	}
	void USettingsWidgetAsyncAction::StaticRegisterNativesUSettingsWidgetAsyncAction()
	{
		UClass* Class = USettingsWidgetAsyncAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindAudioSettings", &USettingsWidgetAsyncAction::execBindAudioSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USettingsWidgetAsyncAction_BindAudioSettings_Statics
	{
		struct SettingsWidgetAsyncAction_eventBindAudioSettings_Parms
		{
			EAudioSetting Setting;
			USettingsWidgetAsyncAction* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Setting_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Setting;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USettingsWidgetAsyncAction_BindAudioSettings_Statics::NewProp_Setting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USettingsWidgetAsyncAction_BindAudioSettings_Statics::NewProp_Setting = { "Setting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsWidgetAsyncAction_eventBindAudioSettings_Parms, Setting), Z_Construct_UEnum_GameUtilities_EAudioSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingsWidgetAsyncAction_BindAudioSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsWidgetAsyncAction_eventBindAudioSettings_Parms, ReturnValue), Z_Construct_UClass_USettingsWidgetAsyncAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsWidgetAsyncAction_BindAudioSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsWidgetAsyncAction_BindAudioSettings_Statics::NewProp_Setting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsWidgetAsyncAction_BindAudioSettings_Statics::NewProp_Setting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsWidgetAsyncAction_BindAudioSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsWidgetAsyncAction_BindAudioSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SettingsWidgetAsyncAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsWidgetAsyncAction_BindAudioSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsWidgetAsyncAction, nullptr, "BindAudioSettings", nullptr, nullptr, sizeof(SettingsWidgetAsyncAction_eventBindAudioSettings_Parms), Z_Construct_UFunction_USettingsWidgetAsyncAction_BindAudioSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsWidgetAsyncAction_BindAudioSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsWidgetAsyncAction_BindAudioSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsWidgetAsyncAction_BindAudioSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsWidgetAsyncAction_BindAudioSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingsWidgetAsyncAction_BindAudioSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USettingsWidgetAsyncAction_NoRegister()
	{
		return USettingsWidgetAsyncAction::StaticClass();
	}
	struct Z_Construct_UClass_USettingsWidgetAsyncAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SettingUpdated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USettingsWidgetAsyncAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USettingsWidgetAsyncAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USettingsWidgetAsyncAction_BindAudioSettings, "BindAudioSettings" }, // 1835722209
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsWidgetAsyncAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SettingsWidgetAsyncAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SettingsWidgetAsyncAction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsWidgetAsyncAction_Statics::NewProp_SettingUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SettingsWidgetAsyncAction" },
		{ "ModuleRelativePath", "Public/SettingsWidgetAsyncAction.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USettingsWidgetAsyncAction_Statics::NewProp_SettingUpdated = { "SettingUpdated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsWidgetAsyncAction, SettingUpdated), Z_Construct_UDelegateFunction_UserInterface_AudioSettingsUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USettingsWidgetAsyncAction_Statics::NewProp_SettingUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsWidgetAsyncAction_Statics::NewProp_SettingUpdated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USettingsWidgetAsyncAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsWidgetAsyncAction_Statics::NewProp_SettingUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USettingsWidgetAsyncAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingsWidgetAsyncAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USettingsWidgetAsyncAction_Statics::ClassParams = {
		&USettingsWidgetAsyncAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USettingsWidgetAsyncAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USettingsWidgetAsyncAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USettingsWidgetAsyncAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsWidgetAsyncAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USettingsWidgetAsyncAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USettingsWidgetAsyncAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USettingsWidgetAsyncAction, 3713674777);
	template<> USERINTERFACE_API UClass* StaticClass<USettingsWidgetAsyncAction>()
	{
		return USettingsWidgetAsyncAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USettingsWidgetAsyncAction(Z_Construct_UClass_USettingsWidgetAsyncAction, &USettingsWidgetAsyncAction::StaticClass, TEXT("/Script/UserInterface"), TEXT("USettingsWidgetAsyncAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USettingsWidgetAsyncAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
