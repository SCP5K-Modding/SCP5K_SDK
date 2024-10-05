// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreUserAsyncActionRequestStoreAuthURL.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreUserAsyncActionRequestStoreAuthURL() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FStoreAuthURLResponse();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreUserAsyncActionRequestStoreAuthURL::execHandleCallback)
	{
		P_GET_STRUCT_REF(FStoreAuthURLResponse,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreUserAsyncActionRequestStoreAuthURL::execRequestStoreAuthURLAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_RedirectURL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreUserAsyncActionRequestStoreAuthURL**)Z_Param__Result=USteamCoreUserAsyncActionRequestStoreAuthURL::RequestStoreAuthURLAsync(Z_Param_WorldContextObject,Z_Param_RedirectURL);
		P_NATIVE_END;
	}
	void USteamCoreUserAsyncActionRequestStoreAuthURL::StaticRegisterNativesUSteamCoreUserAsyncActionRequestStoreAuthURL()
	{
		UClass* Class = USteamCoreUserAsyncActionRequestStoreAuthURL::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreUserAsyncActionRequestStoreAuthURL::execHandleCallback },
			{ "RequestStoreAuthURLAsync", &USteamCoreUserAsyncActionRequestStoreAuthURL::execRequestStoreAuthURLAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics
	{
		struct SteamCoreUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms
		{
			FStoreAuthURLResponse Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FStoreAuthURLResponse, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreUserAsyncActionRequestStoreAuthURL.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreUserAsyncActionRequestStoreAuthURL_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics
	{
		struct SteamCoreUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms
		{
			UObject* WorldContextObject;
			FString RedirectURL;
			USteamCoreUserAsyncActionRequestStoreAuthURL* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedirectURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RedirectURL;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_RedirectURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_RedirectURL = { "RedirectURL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms, RedirectURL), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_RedirectURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_RedirectURL_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_RedirectURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreUserAsyncActionRequestStoreAuthURL.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL, nullptr, "RequestStoreAuthURLAsync", nullptr, nullptr, sizeof(SteamCoreUserAsyncActionRequestStoreAuthURL_eventRequestStoreAuthURLAsync_Parms), Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_NoRegister()
	{
		return USteamCoreUserAsyncActionRequestStoreAuthURL::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback, "HandleCallback" }, // 401935501
		{ &Z_Construct_UFunction_USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync, "RequestStoreAuthURLAsync" }, // 853436573
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreUserAsyncActionRequestStoreAuthURL.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreUserAsyncActionRequestStoreAuthURL.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::NewProp_OnCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreUserAsyncActionRequestStoreAuthURL" },
		{ "ModuleRelativePath", "Public/SteamCoreUserAsyncActionRequestStoreAuthURL.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreUserAsyncActionRequestStoreAuthURL, OnCallback), Z_Construct_UDelegateFunction_SteamCore_RequestStoreAuthURLDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUserAsyncActionRequestStoreAuthURL>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::ClassParams = {
		&USteamCoreUserAsyncActionRequestStoreAuthURL::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreUserAsyncActionRequestStoreAuthURL, 1887224433);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreUserAsyncActionRequestStoreAuthURL>()
	{
		return USteamCoreUserAsyncActionRequestStoreAuthURL::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL(Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL, &USteamCoreUserAsyncActionRequestStoreAuthURL::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreUserAsyncActionRequestStoreAuthURL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreUserAsyncActionRequestStoreAuthURL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
