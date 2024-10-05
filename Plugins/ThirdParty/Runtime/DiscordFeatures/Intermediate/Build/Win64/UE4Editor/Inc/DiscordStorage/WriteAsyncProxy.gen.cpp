// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordStorage/Public/WriteAsyncProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWriteAsyncProxy() {}
// Cross Module References
	DISCORDSTORAGE_API UClass* Z_Construct_UClass_UWriteAsyncProxy_NoRegister();
	DISCORDSTORAGE_API UClass* Z_Construct_UClass_UWriteAsyncProxy();
	DISCORDSTORAGE_API UClass* Z_Construct_UClass_UBaseStorageAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordStorage();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordResult();
	DISCORDSTORAGE_API UClass* Z_Construct_UClass_UDiscordStorageManager_NoRegister();
	DISCORDSTORAGE_API UFunction* Z_Construct_UDelegateFunction_DiscordStorage_OnWriteAsyncEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWriteAsyncProxy::execOnResult)
	{
		P_GET_ENUM(EDiscordResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResult(EDiscordResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWriteAsyncProxy::execWriteAsync)
	{
		P_GET_OBJECT(UDiscordStorageManager,Z_Param_StorageManager);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWriteAsyncProxy**)Z_Param__Result=UWriteAsyncProxy::WriteAsync(Z_Param_StorageManager,Z_Param_Name,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	void UWriteAsyncProxy::StaticRegisterNativesUWriteAsyncProxy()
	{
		UClass* Class = UWriteAsyncProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnResult", &UWriteAsyncProxy::execOnResult },
			{ "WriteAsync", &UWriteAsyncProxy::execWriteAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWriteAsyncProxy_OnResult_Statics
	{
		struct WriteAsyncProxy_eventOnResult_Parms
		{
			EDiscordResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWriteAsyncProxy_OnResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWriteAsyncProxy_OnResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WriteAsyncProxy_eventOnResult_Parms, Result), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWriteAsyncProxy_OnResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWriteAsyncProxy_OnResult_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWriteAsyncProxy_OnResult_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWriteAsyncProxy_OnResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WriteAsyncProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWriteAsyncProxy_OnResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWriteAsyncProxy, nullptr, "OnResult", nullptr, nullptr, sizeof(WriteAsyncProxy_eventOnResult_Parms), Z_Construct_UFunction_UWriteAsyncProxy_OnResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWriteAsyncProxy_OnResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWriteAsyncProxy_OnResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWriteAsyncProxy_OnResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWriteAsyncProxy_OnResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWriteAsyncProxy_OnResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics
	{
		struct WriteAsyncProxy_eventWriteAsync_Parms
		{
			UDiscordStorageManager* StorageManager;
			FString Name;
			TArray<uint8> Data;
			UWriteAsyncProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StorageManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::NewProp_StorageManager = { "StorageManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WriteAsyncProxy_eventWriteAsync_Parms, StorageManager), Z_Construct_UClass_UDiscordStorageManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WriteAsyncProxy_eventWriteAsync_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WriteAsyncProxy_eventWriteAsync_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WriteAsyncProxy_eventWriteAsync_Parms, ReturnValue), Z_Construct_UClass_UWriteAsyncProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::NewProp_StorageManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WriteAsyncProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWriteAsyncProxy, nullptr, "WriteAsync", nullptr, nullptr, sizeof(WriteAsyncProxy_eventWriteAsync_Parms), Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWriteAsyncProxy_NoRegister()
	{
		return UWriteAsyncProxy::StaticClass();
	}
	struct Z_Construct_UClass_UWriteAsyncProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWriteAsyncProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseStorageAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordStorage,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWriteAsyncProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWriteAsyncProxy_OnResult, "OnResult" }, // 2689762340
		{ &Z_Construct_UFunction_UWriteAsyncProxy_WriteAsync, "WriteAsync" }, // 2777727410
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWriteAsyncProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WriteAsyncProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WriteAsyncProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWriteAsyncProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WriteAsyncProxy" },
		{ "ModuleRelativePath", "Public/WriteAsyncProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWriteAsyncProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWriteAsyncProxy, OnSuccess), Z_Construct_UDelegateFunction_DiscordStorage_OnWriteAsyncEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWriteAsyncProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWriteAsyncProxy_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWriteAsyncProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WriteAsyncProxy" },
		{ "ModuleRelativePath", "Public/WriteAsyncProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWriteAsyncProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWriteAsyncProxy, OnError), Z_Construct_UDelegateFunction_DiscordStorage_OnWriteAsyncEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWriteAsyncProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWriteAsyncProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWriteAsyncProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWriteAsyncProxy_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWriteAsyncProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWriteAsyncProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWriteAsyncProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWriteAsyncProxy_Statics::ClassParams = {
		&UWriteAsyncProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWriteAsyncProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWriteAsyncProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWriteAsyncProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWriteAsyncProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWriteAsyncProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWriteAsyncProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWriteAsyncProxy, 3846113328);
	template<> DISCORDSTORAGE_API UClass* StaticClass<UWriteAsyncProxy>()
	{
		return UWriteAsyncProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWriteAsyncProxy(Z_Construct_UClass_UWriteAsyncProxy, &UWriteAsyncProxy::StaticClass, TEXT("/Script/DiscordStorage"), TEXT("UWriteAsyncProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWriteAsyncProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
