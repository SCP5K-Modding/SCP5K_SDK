// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreUserStatsAsyncActionFindOrCreateLeaderboard() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::execFindOrCreateLeaderboardAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
		P_GET_ENUM(ESteamLeaderboardSortMethod,Z_Param_SortMethod);
		P_GET_ENUM(ESteamLeaderboardDisplayType,Z_Param_DisplayType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard**)Z_Param__Result=USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::FindOrCreateLeaderboardAsync(Z_Param_WorldContextObject,Z_Param_LeaderboardName,ESteamLeaderboardSortMethod(Z_Param_SortMethod),ESteamLeaderboardDisplayType(Z_Param_DisplayType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::execHandleCallback)
	{
		P_GET_STRUCT_REF(FFindOrCreateLeaderboardData,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	void USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::StaticRegisterNativesUSteamCoreUserStatsAsyncActionFindOrCreateLeaderboard()
	{
		UClass* Class = USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindOrCreateLeaderboardAsync", &USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::execFindOrCreateLeaderboardAsync },
			{ "HandleCallback", &USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics
	{
		struct SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms
		{
			UObject* WorldContextObject;
			FString LeaderboardName;
			ESteamLeaderboardSortMethod SortMethod;
			ESteamLeaderboardDisplayType DisplayType;
			USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortMethod_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SortMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DisplayType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DisplayType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_LeaderboardName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, LeaderboardName), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_LeaderboardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_LeaderboardName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, SortMethod), Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_DisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_DisplayType = { "DisplayType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, DisplayType), Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_LeaderboardName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_SortMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_SortMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_DisplayType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_DisplayType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard, nullptr, "FindOrCreateLeaderboardAsync", nullptr, nullptr, sizeof(SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics
	{
		struct SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventHandleCallback_Parms
		{
			FFindOrCreateLeaderboardData Data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_NoRegister()
	{
		return USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync, "FindOrCreateLeaderboardAsync" }, // 1424799808
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback, "HandleCallback" }, // 3605237576
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::NewProp_OnCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard" },
		{ "ModuleRelativePath", "Public/SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::ClassParams = {
		&USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard, 3754469153);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard>()
	{
		return USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard(Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard, &USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
