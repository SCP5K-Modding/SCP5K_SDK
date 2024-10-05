// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreUserStatsAsyncActionDownloadLeaderboardEntries() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboard();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::execDownloadLeaderboardEntriesAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
		P_GET_ENUM(ESteamLeaderboardDataRequest,Z_Param_Request);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeStart);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries**)Z_Param__Result=USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::DownloadLeaderboardEntriesAsync(Z_Param_WorldContextObject,Z_Param_SteamLeaderboard,ESteamLeaderboardDataRequest(Z_Param_Request),Z_Param_RangeStart,Z_Param_RangeEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::execHandleCallback)
	{
		P_GET_STRUCT_REF(FLeaderboardScoresDownloaded,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	void USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::StaticRegisterNativesUSteamCoreUserStatsAsyncActionDownloadLeaderboardEntries()
	{
		UClass* Class = USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DownloadLeaderboardEntriesAsync", &USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::execDownloadLeaderboardEntriesAsync },
			{ "HandleCallback", &USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics
	{
		struct SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms
		{
			UObject* WorldContextObject;
			FSteamLeaderboard SteamLeaderboard;
			ESteamLeaderboardDataRequest Request;
			int32 RangeStart;
			int32 RangeEnd;
			USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Request_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RangeStart;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RangeEnd;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_Request_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms, Request), Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms, RangeStart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms, RangeEnd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_SteamLeaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_Request_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_RangeStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_RangeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries, nullptr, "DownloadLeaderboardEntriesAsync", nullptr, nullptr, sizeof(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics
	{
		struct SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventHandleCallback_Parms
		{
			FLeaderboardScoresDownloaded Data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_NoRegister()
	{
		return USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync, "DownloadLeaderboardEntriesAsync" }, // 113955339
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback, "HandleCallback" }, // 1470803207
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::NewProp_OnCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries" },
		{ "ModuleRelativePath", "Public/SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::ClassParams = {
		&USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries, 490268780);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries>()
	{
		return USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries, &USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
