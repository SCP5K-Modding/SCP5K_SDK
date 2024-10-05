// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordOverlay/Public/OpenVoiceSettingsProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenVoiceSettingsProxy() {}
// Cross Module References
	DISCORDOVERLAY_API UClass* Z_Construct_UClass_UOpenVoiceSettingsProxy_NoRegister();
	DISCORDOVERLAY_API UClass* Z_Construct_UClass_UOpenVoiceSettingsProxy();
	DISCORDOVERLAY_API UClass* Z_Construct_UClass_UBaseOverlayAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordOverlay();
	DISCORDOVERLAY_API UClass* Z_Construct_UClass_UDiscordOverlayManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOpenVoiceSettingsProxy::execOpenVoiceSettings)
	{
		P_GET_OBJECT(UDiscordOverlayManager,Z_Param_OverlayManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOpenVoiceSettingsProxy**)Z_Param__Result=UOpenVoiceSettingsProxy::OpenVoiceSettings(Z_Param_OverlayManager);
		P_NATIVE_END;
	}
	void UOpenVoiceSettingsProxy::StaticRegisterNativesUOpenVoiceSettingsProxy()
	{
		UClass* Class = UOpenVoiceSettingsProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenVoiceSettings", &UOpenVoiceSettingsProxy::execOpenVoiceSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenVoiceSettingsProxy_OpenVoiceSettings_Statics
	{
		struct OpenVoiceSettingsProxy_eventOpenVoiceSettings_Parms
		{
			UDiscordOverlayManager* OverlayManager;
			UOpenVoiceSettingsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlayManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenVoiceSettingsProxy_OpenVoiceSettings_Statics::NewProp_OverlayManager = { "OverlayManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVoiceSettingsProxy_eventOpenVoiceSettings_Parms, OverlayManager), Z_Construct_UClass_UDiscordOverlayManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenVoiceSettingsProxy_OpenVoiceSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenVoiceSettingsProxy_eventOpenVoiceSettings_Parms, ReturnValue), Z_Construct_UClass_UOpenVoiceSettingsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenVoiceSettingsProxy_OpenVoiceSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVoiceSettingsProxy_OpenVoiceSettings_Statics::NewProp_OverlayManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenVoiceSettingsProxy_OpenVoiceSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenVoiceSettingsProxy_OpenVoiceSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenVoiceSettingsProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenVoiceSettingsProxy_OpenVoiceSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVoiceSettingsProxy, nullptr, "OpenVoiceSettings", nullptr, nullptr, sizeof(OpenVoiceSettingsProxy_eventOpenVoiceSettings_Parms), Z_Construct_UFunction_UOpenVoiceSettingsProxy_OpenVoiceSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVoiceSettingsProxy_OpenVoiceSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenVoiceSettingsProxy_OpenVoiceSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenVoiceSettingsProxy_OpenVoiceSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenVoiceSettingsProxy_OpenVoiceSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenVoiceSettingsProxy_OpenVoiceSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOpenVoiceSettingsProxy_NoRegister()
	{
		return UOpenVoiceSettingsProxy::StaticClass();
	}
	struct Z_Construct_UClass_UOpenVoiceSettingsProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenVoiceSettingsProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseOverlayAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordOverlay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenVoiceSettingsProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenVoiceSettingsProxy_OpenVoiceSettings, "OpenVoiceSettings" }, // 2408208016
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenVoiceSettingsProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OpenVoiceSettingsProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OpenVoiceSettingsProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenVoiceSettingsProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenVoiceSettingsProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenVoiceSettingsProxy_Statics::ClassParams = {
		&UOpenVoiceSettingsProxy::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenVoiceSettingsProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenVoiceSettingsProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenVoiceSettingsProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenVoiceSettingsProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenVoiceSettingsProxy, 3976682725);
	template<> DISCORDOVERLAY_API UClass* StaticClass<UOpenVoiceSettingsProxy>()
	{
		return UOpenVoiceSettingsProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenVoiceSettingsProxy(Z_Construct_UClass_UOpenVoiceSettingsProxy, &UOpenVoiceSettingsProxy::StaticClass, TEXT("/Script/DiscordOverlay"), TEXT("UOpenVoiceSettingsProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenVoiceSettingsProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
