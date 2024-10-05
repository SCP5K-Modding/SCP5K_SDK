// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreUGCAsyncActionDeleteItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreUGCAsyncActionDeleteItem() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUGCDeleteItemResult();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDeleteItemResultAsyncDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreUGCAsyncActionDeleteItem::execDeleteItemAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreUGCAsyncActionDeleteItem**)Z_Param__Result=USteamCoreUGCAsyncActionDeleteItem::DeleteItemAsync(Z_Param_WorldContextObject,Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreUGCAsyncActionDeleteItem::execHandleCallback)
	{
		P_GET_STRUCT_REF(FUGCDeleteItemResult,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	void USteamCoreUGCAsyncActionDeleteItem::StaticRegisterNativesUSteamCoreUGCAsyncActionDeleteItem()
	{
		UClass* Class = USteamCoreUGCAsyncActionDeleteItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteItemAsync", &USteamCoreUGCAsyncActionDeleteItem::execDeleteItemAsync },
			{ "HandleCallback", &USteamCoreUGCAsyncActionDeleteItem::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_DeleteItemAsync_Statics
	{
		struct SteamCoreUGCAsyncActionDeleteItem_eventDeleteItemAsync_Parms
		{
			UObject* WorldContextObject;
			FPublishedFileID PublishedFileID;
			USteamCoreUGCAsyncActionDeleteItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_DeleteItemAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUGCAsyncActionDeleteItem_eventDeleteItemAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_DeleteItemAsync_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUGCAsyncActionDeleteItem_eventDeleteItemAsync_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_DeleteItemAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUGCAsyncActionDeleteItem_eventDeleteItemAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_DeleteItemAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_DeleteItemAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_DeleteItemAsync_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_DeleteItemAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_DeleteItemAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreUGCAsyncActionDeleteItem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_DeleteItemAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem, nullptr, "DeleteItemAsync", nullptr, nullptr, sizeof(SteamCoreUGCAsyncActionDeleteItem_eventDeleteItemAsync_Parms), Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_DeleteItemAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_DeleteItemAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_DeleteItemAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_DeleteItemAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_DeleteItemAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_DeleteItemAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Statics
	{
		struct SteamCoreUGCAsyncActionDeleteItem_eventHandleCallback_Parms
		{
			FUGCDeleteItemResult Data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUGCAsyncActionDeleteItem_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FUGCDeleteItemResult, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreUGCAsyncActionDeleteItem_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreUGCAsyncActionDeleteItem_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreUGCAsyncActionDeleteItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreUGCAsyncActionDeleteItem_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_NoRegister()
	{
		return USteamCoreUGCAsyncActionDeleteItem::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_DeleteItemAsync, "DeleteItemAsync" }, // 3920366379
		{ &Z_Construct_UFunction_USteamCoreUGCAsyncActionDeleteItem_HandleCallback, "HandleCallback" }, // 2762543928
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreUGCAsyncActionDeleteItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreUGCAsyncActionDeleteItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_Statics::NewProp_OnCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreUGCAsyncActionDeleteItem" },
		{ "ModuleRelativePath", "Public/SteamCoreUGCAsyncActionDeleteItem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreUGCAsyncActionDeleteItem, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnDeleteItemResultAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUGCAsyncActionDeleteItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_Statics::ClassParams = {
		&USteamCoreUGCAsyncActionDeleteItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreUGCAsyncActionDeleteItem, 520993453);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreUGCAsyncActionDeleteItem>()
	{
		return USteamCoreUGCAsyncActionDeleteItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreUGCAsyncActionDeleteItem(Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem, &USteamCoreUGCAsyncActionDeleteItem::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreUGCAsyncActionDeleteItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreUGCAsyncActionDeleteItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
