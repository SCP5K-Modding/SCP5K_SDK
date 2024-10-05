// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSPlayerCameraManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSPlayerCameraManager() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSPlayerCameraManager_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSPlayerCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	GAMEUTILITIES_API UEnum* Z_Construct_UEnum_GameUtilities_EVideoSetting();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
// End Cross Module References
	DEFINE_FUNCTION(AFPSPlayerCameraManager::execOnVideoSettingsUpdated)
	{
		P_GET_ENUM(EVideoSetting,Z_Param_Setting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVideoSettingsUpdated(EVideoSetting(Z_Param_Setting));
		P_NATIVE_END;
	}
	void AFPSPlayerCameraManager::StaticRegisterNativesAFPSPlayerCameraManager()
	{
		UClass* Class = AFPSPlayerCameraManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnVideoSettingsUpdated", &AFPSPlayerCameraManager::execOnVideoSettingsUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSPlayerCameraManager_OnVideoSettingsUpdated_Statics
	{
		struct FPSPlayerCameraManager_eventOnVideoSettingsUpdated_Parms
		{
			EVideoSetting Setting;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Setting_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Setting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSPlayerCameraManager_OnVideoSettingsUpdated_Statics::NewProp_Setting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFPSPlayerCameraManager_OnVideoSettingsUpdated_Statics::NewProp_Setting = { "Setting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerCameraManager_eventOnVideoSettingsUpdated_Parms, Setting), Z_Construct_UEnum_GameUtilities_EVideoSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerCameraManager_OnVideoSettingsUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerCameraManager_OnVideoSettingsUpdated_Statics::NewProp_Setting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerCameraManager_OnVideoSettingsUpdated_Statics::NewProp_Setting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerCameraManager_OnVideoSettingsUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerCameraManager_OnVideoSettingsUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerCameraManager, nullptr, "OnVideoSettingsUpdated", nullptr, nullptr, sizeof(FPSPlayerCameraManager_eventOnVideoSettingsUpdated_Parms), Z_Construct_UFunction_AFPSPlayerCameraManager_OnVideoSettingsUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerCameraManager_OnVideoSettingsUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerCameraManager_OnVideoSettingsUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerCameraManager_OnVideoSettingsUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerCameraManager_OnVideoSettingsUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerCameraManager_OnVideoSettingsUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSPlayerCameraManager_NoRegister()
	{
		return AFPSPlayerCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_AFPSPlayerCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSPlayerCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSPlayerCameraManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSPlayerCameraManager_OnVideoSettingsUpdated, "OnVideoSettingsUpdated" }, // 1698589651
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerCameraManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FPSPlayerCameraManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSPlayerCameraManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerCameraManager_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/FPSPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSPlayerCameraManager_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerCameraManager, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerCameraManager_Statics::NewProp_PostProcessSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerCameraManager_Statics::NewProp_PostProcessSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSPlayerCameraManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerCameraManager_Statics::NewProp_PostProcessSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSPlayerCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSPlayerCameraManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSPlayerCameraManager_Statics::ClassParams = {
		&AFPSPlayerCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSPlayerCameraManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerCameraManager_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerCameraManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSPlayerCameraManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSPlayerCameraManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSPlayerCameraManager, 2944860208);
	template<> FPSCONTROLLER_API UClass* StaticClass<AFPSPlayerCameraManager>()
	{
		return AFPSPlayerCameraManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSPlayerCameraManager(Z_Construct_UClass_AFPSPlayerCameraManager, &AFPSPlayerCameraManager::StaticClass, TEXT("/Script/FPSController"), TEXT("AFPSPlayerCameraManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSPlayerCameraManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
