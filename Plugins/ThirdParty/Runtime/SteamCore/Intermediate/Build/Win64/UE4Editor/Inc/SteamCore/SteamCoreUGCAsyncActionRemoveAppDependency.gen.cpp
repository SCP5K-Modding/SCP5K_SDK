// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreUGCAsyncActionRemoveAppDependency.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreUGCAsyncActionRemoveAppDependency() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoveAppDependencyResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoveAppDependencyResultAsyncDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreUGCAsyncActionRemoveAppDependency::execHandleCallback)
	{
		P_GET_STRUCT_REF(FRemoveAppDependencyResult,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreUGCAsyncActionRemoveAppDependency::execRemoveAppDependencyAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreUGCAsyncActionRemoveAppDependency**)Z_Param__Result=USteamCoreUGCAsyncActionRemoveAppDependency::RemoveAppDependencyAsync(Z_Param_WorldContextObject,Z_Param_PublishedFileID,Z_Param_AppID);
		P_NATIVE_END;
	}
	void USteamCoreUGCAsyncActionRemoveAppDependency::StaticRegisterNativesUSteamCoreUGCAsyncActionRemoveAppDependency()
	{
		UClass* Class = USteamCoreUGCAsyncActionRemoveAppDependency::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreUGCAsyncActionRemoveAppDependency::execHandleCallback },
			{ "RemoveAppDependencyAsync", &USteamCoreUGCAsyncActionRemoveAppDependency::execRemoveAppDependencyAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Statics
	{
		struct SteamCoreUGCAsyncActionRemoveAppDependency_eventHandleCallback_Parms
		{
			FRemoveAppDependencyResult Data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUGCAsyncActionRemoveAppDependency_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FRemoveAppDependencyResult, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreUGCAsyncActionRemoveAppDependency_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreUGCAsyncActionRemoveAppDependency_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreUGCAsyncActionRemoveAppDependency.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreUGCAsyncActionRemoveAppDependency_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync_Statics
	{
		struct SteamCoreUGCAsyncActionRemoveAppDependency_eventRemoveAppDependencyAsync_Parms
		{
			UObject* WorldContextObject;
			FPublishedFileID PublishedFileID;
			int32 AppID;
			USteamCoreUGCAsyncActionRemoveAppDependency* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUGCAsyncActionRemoveAppDependency_eventRemoveAppDependencyAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUGCAsyncActionRemoveAppDependency_eventRemoveAppDependencyAsync_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUGCAsyncActionRemoveAppDependency_eventRemoveAppDependencyAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUGCAsyncActionRemoveAppDependency_eventRemoveAppDependencyAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreUGCAsyncActionRemoveAppDependency.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency, nullptr, "RemoveAppDependencyAsync", nullptr, nullptr, sizeof(SteamCoreUGCAsyncActionRemoveAppDependency_eventRemoveAppDependencyAsync_Parms), Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_NoRegister()
	{
		return USteamCoreUGCAsyncActionRemoveAppDependency::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback, "HandleCallback" }, // 1284094911
		{ &Z_Construct_UFunction_USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync, "RemoveAppDependencyAsync" }, // 4100909928
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreUGCAsyncActionRemoveAppDependency.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreUGCAsyncActionRemoveAppDependency.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_Statics::NewProp_OnCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreUGCAsyncActionRemoveAppDependency" },
		{ "ModuleRelativePath", "Public/SteamCoreUGCAsyncActionRemoveAppDependency.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreUGCAsyncActionRemoveAppDependency, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnRemoveAppDependencyResultAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUGCAsyncActionRemoveAppDependency>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_Statics::ClassParams = {
		&USteamCoreUGCAsyncActionRemoveAppDependency::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreUGCAsyncActionRemoveAppDependency, 2610349086);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreUGCAsyncActionRemoveAppDependency>()
	{
		return USteamCoreUGCAsyncActionRemoveAppDependency::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreUGCAsyncActionRemoveAppDependency(Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency, &USteamCoreUGCAsyncActionRemoveAppDependency::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreUGCAsyncActionRemoveAppDependency"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreUGCAsyncActionRemoveAppDependency);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
