// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordStorage/Public/ReadAsyncPartialProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadAsyncPartialProxy() {}
// Cross Module References
	DISCORDSTORAGE_API UClass* Z_Construct_UClass_UReadAsyncPartialProxy_NoRegister();
	DISCORDSTORAGE_API UClass* Z_Construct_UClass_UReadAsyncPartialProxy();
	DISCORDSTORAGE_API UClass* Z_Construct_UClass_UBaseStorageAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordStorage();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordResult();
	DISCORDSTORAGE_API UClass* Z_Construct_UClass_UDiscordStorageManager_NoRegister();
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUint64();
	DISCORDSTORAGE_API UFunction* Z_Construct_UDelegateFunction_DiscordStorage_OnReadAsyncEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UReadAsyncPartialProxy::execOnResult)
	{
		P_GET_ENUM(EDiscordResult,Z_Param_Result);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResult(EDiscordResult(Z_Param_Result),Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadAsyncPartialProxy::execReadAsyncPartial)
	{
		P_GET_OBJECT(UDiscordStorageManager,Z_Param_StorageManager);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_STRUCT_REF(FUint64,Z_Param_Out_Offset);
		P_GET_STRUCT_REF(FUint64,Z_Param_Out_Length);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UReadAsyncPartialProxy**)Z_Param__Result=UReadAsyncPartialProxy::ReadAsyncPartial(Z_Param_StorageManager,Z_Param_Name,Z_Param_Out_Offset,Z_Param_Out_Length);
		P_NATIVE_END;
	}
	void UReadAsyncPartialProxy::StaticRegisterNativesUReadAsyncPartialProxy()
	{
		UClass* Class = UReadAsyncPartialProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnResult", &UReadAsyncPartialProxy::execOnResult },
			{ "ReadAsyncPartial", &UReadAsyncPartialProxy::execReadAsyncPartial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReadAsyncPartialProxy_OnResult_Statics
	{
		struct ReadAsyncPartialProxy_eventOnResult_Parms
		{
			EDiscordResult Result;
			TArray<uint8> Data;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UReadAsyncPartialProxy_OnResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UReadAsyncPartialProxy_OnResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadAsyncPartialProxy_eventOnResult_Parms, Result), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UReadAsyncPartialProxy_OnResult_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UReadAsyncPartialProxy_OnResult_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadAsyncPartialProxy_eventOnResult_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadAsyncPartialProxy_OnResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadAsyncPartialProxy_OnResult_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadAsyncPartialProxy_OnResult_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadAsyncPartialProxy_OnResult_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadAsyncPartialProxy_OnResult_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadAsyncPartialProxy_OnResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadAsyncPartialProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadAsyncPartialProxy_OnResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadAsyncPartialProxy, nullptr, "OnResult", nullptr, nullptr, sizeof(ReadAsyncPartialProxy_eventOnResult_Parms), Z_Construct_UFunction_UReadAsyncPartialProxy_OnResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadAsyncPartialProxy_OnResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadAsyncPartialProxy_OnResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadAsyncPartialProxy_OnResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadAsyncPartialProxy_OnResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadAsyncPartialProxy_OnResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics
	{
		struct ReadAsyncPartialProxy_eventReadAsyncPartial_Parms
		{
			UDiscordStorageManager* StorageManager;
			FString Name;
			FUint64 Offset;
			FUint64 Length;
			UReadAsyncPartialProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StorageManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::NewProp_StorageManager = { "StorageManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadAsyncPartialProxy_eventReadAsyncPartial_Parms, StorageManager), Z_Construct_UClass_UDiscordStorageManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadAsyncPartialProxy_eventReadAsyncPartial_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadAsyncPartialProxy_eventReadAsyncPartial_Parms, Offset), Z_Construct_UScriptStruct_FUint64, METADATA_PARAMS(Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::NewProp_Length_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadAsyncPartialProxy_eventReadAsyncPartial_Parms, Length), Z_Construct_UScriptStruct_FUint64, METADATA_PARAMS(Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::NewProp_Length_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadAsyncPartialProxy_eventReadAsyncPartial_Parms, ReturnValue), Z_Construct_UClass_UReadAsyncPartialProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::NewProp_StorageManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadAsyncPartialProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadAsyncPartialProxy, nullptr, "ReadAsyncPartial", nullptr, nullptr, sizeof(ReadAsyncPartialProxy_eventReadAsyncPartial_Parms), Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UReadAsyncPartialProxy_NoRegister()
	{
		return UReadAsyncPartialProxy::StaticClass();
	}
	struct Z_Construct_UClass_UReadAsyncPartialProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UReadAsyncPartialProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseStorageAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordStorage,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReadAsyncPartialProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadAsyncPartialProxy_OnResult, "OnResult" }, // 1203443377
		{ &Z_Construct_UFunction_UReadAsyncPartialProxy_ReadAsyncPartial, "ReadAsyncPartial" }, // 4102770076
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadAsyncPartialProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ReadAsyncPartialProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ReadAsyncPartialProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadAsyncPartialProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ReadAsyncPartialProxy" },
		{ "ModuleRelativePath", "Public/ReadAsyncPartialProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UReadAsyncPartialProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReadAsyncPartialProxy, OnSuccess), Z_Construct_UDelegateFunction_DiscordStorage_OnReadAsyncEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UReadAsyncPartialProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadAsyncPartialProxy_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadAsyncPartialProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ReadAsyncPartialProxy" },
		{ "ModuleRelativePath", "Public/ReadAsyncPartialProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UReadAsyncPartialProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReadAsyncPartialProxy, OnError), Z_Construct_UDelegateFunction_DiscordStorage_OnReadAsyncEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UReadAsyncPartialProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadAsyncPartialProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadAsyncPartialProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadAsyncPartialProxy_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadAsyncPartialProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadAsyncPartialProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadAsyncPartialProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReadAsyncPartialProxy_Statics::ClassParams = {
		&UReadAsyncPartialProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReadAsyncPartialProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UReadAsyncPartialProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReadAsyncPartialProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReadAsyncPartialProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReadAsyncPartialProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReadAsyncPartialProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReadAsyncPartialProxy, 818930916);
	template<> DISCORDSTORAGE_API UClass* StaticClass<UReadAsyncPartialProxy>()
	{
		return UReadAsyncPartialProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReadAsyncPartialProxy(Z_Construct_UClass_UReadAsyncPartialProxy, &UReadAsyncPartialProxy::StaticClass, TEXT("/Script/DiscordStorage"), TEXT("UReadAsyncPartialProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadAsyncPartialProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
