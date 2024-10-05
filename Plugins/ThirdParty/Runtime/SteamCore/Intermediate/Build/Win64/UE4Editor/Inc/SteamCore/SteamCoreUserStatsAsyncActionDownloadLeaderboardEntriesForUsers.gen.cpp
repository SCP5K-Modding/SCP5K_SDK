// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboard();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::execDownloadLeaderboardEntriesForUsersAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
		P_GET_TARRAY(FSteamID,Z_Param_Users);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers**)Z_Param__Result=USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::DownloadLeaderboardEntriesForUsersAsync(Z_Param_WorldContextObject,Z_Param_SteamLeaderboard,Z_Param_Users);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::execHandleCallback)
	{
		P_GET_STRUCT_REF(FLeaderboardScoresDownloadedForUsers,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	void USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::StaticRegisterNativesUSteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers()
	{
		UClass* Class = USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DownloadLeaderboardEntriesForUsersAsync", &USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::execDownloadLeaderboardEntriesForUsersAsync },
			{ "HandleCallback", &USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics
	{
		struct SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventDownloadLeaderboardEntriesForUsersAsync_Parms
		{
			UObject* WorldContextObject;
			FSteamLeaderboard SteamLeaderboard;
			TArray<FSteamID> Users;
			USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Users_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Users;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventDownloadLeaderboardEntriesForUsersAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventDownloadLeaderboardEntriesForUsersAsync_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_Users_Inner = { "Users", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventDownloadLeaderboardEntriesForUsersAsync_Parms, Users), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventDownloadLeaderboardEntriesForUsersAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_SteamLeaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_Users_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_Users,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers, nullptr, "DownloadLeaderboardEntriesForUsersAsync", nullptr, nullptr, sizeof(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventDownloadLeaderboardEntriesForUsersAsync_Parms), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics
	{
		struct SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventHandleCallback_Parms
		{
			FLeaderboardScoresDownloadedForUsers Data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_NoRegister()
	{
		return USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync, "DownloadLeaderboardEntriesForUsersAsync" }, // 2376081148
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback, "HandleCallback" }, // 435398850
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::NewProp_OnCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers" },
		{ "ModuleRelativePath", "Public/SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::ClassParams = {
		&USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers, 1230632484);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers>()
	{
		return USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers, &USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
