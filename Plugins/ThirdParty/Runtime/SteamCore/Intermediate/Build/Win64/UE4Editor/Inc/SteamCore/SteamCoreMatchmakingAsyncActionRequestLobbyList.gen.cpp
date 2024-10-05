// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreMatchmakingAsyncActionRequestLobbyList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreMatchmakingAsyncActionRequestLobbyList() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyMatchList();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreMatchmakingAsyncActionRequestLobbyList::execHandleCallback)
	{
		P_GET_STRUCT_REF(FLobbyMatchList,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingAsyncActionRequestLobbyList::execRequestLobbyListAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreMatchmakingAsyncActionRequestLobbyList**)Z_Param__Result=USteamCoreMatchmakingAsyncActionRequestLobbyList::RequestLobbyListAsync(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USteamCoreMatchmakingAsyncActionRequestLobbyList::StaticRegisterNativesUSteamCoreMatchmakingAsyncActionRequestLobbyList()
	{
		UClass* Class = USteamCoreMatchmakingAsyncActionRequestLobbyList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreMatchmakingAsyncActionRequestLobbyList::execHandleCallback },
			{ "RequestLobbyListAsync", &USteamCoreMatchmakingAsyncActionRequestLobbyList::execRequestLobbyListAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics
	{
		struct SteamCoreMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms
		{
			FLobbyMatchList Data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FLobbyMatchList, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingAsyncActionRequestLobbyList.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics
	{
		struct SteamCoreMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms
		{
			UObject* WorldContextObject;
			USteamCoreMatchmakingAsyncActionRequestLobbyList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingAsyncActionRequestLobbyList.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList, nullptr, "RequestLobbyListAsync", nullptr, nullptr, sizeof(SteamCoreMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_NoRegister()
	{
		return USteamCoreMatchmakingAsyncActionRequestLobbyList::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback, "HandleCallback" }, // 275044398
		{ &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync, "RequestLobbyListAsync" }, // 467492762
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreMatchmakingAsyncActionRequestLobbyList.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingAsyncActionRequestLobbyList.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::NewProp_OnCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreMatchmakingAsyncActionRequestLobbyList" },
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingAsyncActionRequestLobbyList.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreMatchmakingAsyncActionRequestLobbyList, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreMatchmakingAsyncActionRequestLobbyList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::ClassParams = {
		&USteamCoreMatchmakingAsyncActionRequestLobbyList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreMatchmakingAsyncActionRequestLobbyList, 1878623627);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreMatchmakingAsyncActionRequestLobbyList>()
	{
		return USteamCoreMatchmakingAsyncActionRequestLobbyList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList, &USteamCoreMatchmakingAsyncActionRequestLobbyList::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreMatchmakingAsyncActionRequestLobbyList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreMatchmakingAsyncActionRequestLobbyList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
