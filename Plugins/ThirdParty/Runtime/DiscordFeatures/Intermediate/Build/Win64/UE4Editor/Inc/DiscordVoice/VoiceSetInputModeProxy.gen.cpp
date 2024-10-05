// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordVoice/Public/VoiceSetInputModeProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceSetInputModeProxy() {}
// Cross Module References
	DISCORDVOICE_API UClass* Z_Construct_UClass_UVoiceSetInputModeProxy_NoRegister();
	DISCORDVOICE_API UClass* Z_Construct_UClass_UVoiceSetInputModeProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_DiscordVoice();
	DISCORDVOICE_API UClass* Z_Construct_UClass_UDiscordVoiceManager_NoRegister();
	DISCORDVOICE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordInputMode();
	DISCORDVOICE_API UFunction* Z_Construct_UDelegateFunction_DiscordVoice_SetInputModeEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UVoiceSetInputModeProxy::execSetInputMode)
	{
		P_GET_OBJECT(UDiscordVoiceManager,Z_Param_VoiceManager);
		P_GET_STRUCT_REF(FDiscordInputMode,Z_Param_Out_NewInputMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVoiceSetInputModeProxy**)Z_Param__Result=UVoiceSetInputModeProxy::SetInputMode(Z_Param_VoiceManager,Z_Param_Out_NewInputMode);
		P_NATIVE_END;
	}
	void UVoiceSetInputModeProxy::StaticRegisterNativesUVoiceSetInputModeProxy()
	{
		UClass* Class = UVoiceSetInputModeProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetInputMode", &UVoiceSetInputModeProxy::execSetInputMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoiceSetInputModeProxy_SetInputMode_Statics
	{
		struct VoiceSetInputModeProxy_eventSetInputMode_Parms
		{
			UDiscordVoiceManager* VoiceManager;
			FDiscordInputMode NewInputMode;
			UVoiceSetInputModeProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoiceManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewInputMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewInputMode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceSetInputModeProxy_SetInputMode_Statics::NewProp_VoiceManager = { "VoiceManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceSetInputModeProxy_eventSetInputMode_Parms, VoiceManager), Z_Construct_UClass_UDiscordVoiceManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceSetInputModeProxy_SetInputMode_Statics::NewProp_NewInputMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoiceSetInputModeProxy_SetInputMode_Statics::NewProp_NewInputMode = { "NewInputMode", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceSetInputModeProxy_eventSetInputMode_Parms, NewInputMode), Z_Construct_UScriptStruct_FDiscordInputMode, METADATA_PARAMS(Z_Construct_UFunction_UVoiceSetInputModeProxy_SetInputMode_Statics::NewProp_NewInputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceSetInputModeProxy_SetInputMode_Statics::NewProp_NewInputMode_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoiceSetInputModeProxy_SetInputMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoiceSetInputModeProxy_eventSetInputMode_Parms, ReturnValue), Z_Construct_UClass_UVoiceSetInputModeProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoiceSetInputModeProxy_SetInputMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceSetInputModeProxy_SetInputMode_Statics::NewProp_VoiceManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceSetInputModeProxy_SetInputMode_Statics::NewProp_NewInputMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoiceSetInputModeProxy_SetInputMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoiceSetInputModeProxy_SetInputMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoiceSetInputModeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoiceSetInputModeProxy_SetInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoiceSetInputModeProxy, nullptr, "SetInputMode", nullptr, nullptr, sizeof(VoiceSetInputModeProxy_eventSetInputMode_Parms), Z_Construct_UFunction_UVoiceSetInputModeProxy_SetInputMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceSetInputModeProxy_SetInputMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoiceSetInputModeProxy_SetInputMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoiceSetInputModeProxy_SetInputMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoiceSetInputModeProxy_SetInputMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoiceSetInputModeProxy_SetInputMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoiceSetInputModeProxy_NoRegister()
	{
		return UVoiceSetInputModeProxy::StaticClass();
	}
	struct Z_Construct_UClass_UVoiceSetInputModeProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInputModeSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputModeSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordVoice,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoiceSetInputModeProxy_SetInputMode, "SetInputMode" }, // 2537798729
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoiceSetInputModeProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoiceSetInputModeProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::NewProp_OnInputModeSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "VoiceSetInputModeProxy" },
		{ "ModuleRelativePath", "Public/VoiceSetInputModeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::NewProp_OnInputModeSet = { "OnInputModeSet", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoiceSetInputModeProxy, OnInputModeSet), Z_Construct_UDelegateFunction_DiscordVoice_SetInputModeEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::NewProp_OnInputModeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::NewProp_OnInputModeSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "VoiceSetInputModeProxy" },
		{ "ModuleRelativePath", "Public/VoiceSetInputModeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoiceSetInputModeProxy, OnError), Z_Construct_UDelegateFunction_DiscordVoice_SetInputModeEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::NewProp_OnError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::NewProp_Manager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "VoiceSetInputModeProxy" },
		{ "ModuleRelativePath", "Public/VoiceSetInputModeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoiceSetInputModeProxy, Manager), Z_Construct_UClass_UDiscordVoiceManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::NewProp_Manager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::NewProp_OnInputModeSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::NewProp_Manager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoiceSetInputModeProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::ClassParams = {
		&UVoiceSetInputModeProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoiceSetInputModeProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoiceSetInputModeProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoiceSetInputModeProxy, 1960723186);
	template<> DISCORDVOICE_API UClass* StaticClass<UVoiceSetInputModeProxy>()
	{
		return UVoiceSetInputModeProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoiceSetInputModeProxy(Z_Construct_UClass_UVoiceSetInputModeProxy, &UVoiceSetInputModeProxy::StaticClass, TEXT("/Script/DiscordVoice"), TEXT("UVoiceSetInputModeProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoiceSetInputModeProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
