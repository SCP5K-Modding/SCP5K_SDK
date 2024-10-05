// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionFindOrCreateLeaderboard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionFindOrCreateLeaderboard() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionFindOrCreateLeaderboard::execFindOrCreateLeaderboardAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_SortMethod);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayType);
		P_GET_UBOOL(Z_Param_bCreateIfNotFound);
		P_GET_UBOOL(Z_Param_bOnlyTrustedWrites);
		P_GET_UBOOL(Z_Param_bOnlyFriendsReads);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionFindOrCreateLeaderboard**)Z_Param__Result=USteamCoreWebAsyncActionFindOrCreateLeaderboard::FindOrCreateLeaderboardAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID,Z_Param_Name,Z_Param_SortMethod,Z_Param_DisplayType,Z_Param_bCreateIfNotFound,Z_Param_bOnlyTrustedWrites,Z_Param_bOnlyFriendsReads);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionFindOrCreateLeaderboard::StaticRegisterNativesUSteamCoreWebAsyncActionFindOrCreateLeaderboard()
	{
		UClass* Class = USteamCoreWebAsyncActionFindOrCreateLeaderboard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindOrCreateLeaderboardAsync", &USteamCoreWebAsyncActionFindOrCreateLeaderboard::execFindOrCreateLeaderboardAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics
	{
		struct SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			int32 AppID;
			FString Name;
			FString SortMethod;
			FString DisplayType;
			bool bCreateIfNotFound;
			bool bOnlyTrustedWrites;
			bool bOnlyFriendsReads;
			USteamCoreWebAsyncActionFindOrCreateLeaderboard* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SortMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayType;
		static void NewProp_bCreateIfNotFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateIfNotFound;
		static void NewProp_bOnlyTrustedWrites_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyTrustedWrites;
		static void NewProp_bOnlyFriendsReads_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyFriendsReads;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_SortMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, SortMethod), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_SortMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_SortMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_DisplayType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_DisplayType = { "DisplayType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, DisplayType), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_DisplayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_DisplayType_MetaData)) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bCreateIfNotFound_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms*)Obj)->bCreateIfNotFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bCreateIfNotFound = { "bCreateIfNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bCreateIfNotFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyTrustedWrites_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms*)Obj)->bOnlyTrustedWrites = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyTrustedWrites = { "bOnlyTrustedWrites", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyTrustedWrites_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyFriendsReads_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms*)Obj)->bOnlyFriendsReads = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyFriendsReads = { "bOnlyFriendsReads", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyFriendsReads_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_SortMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_DisplayType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bCreateIfNotFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyTrustedWrites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_bOnlyFriendsReads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionFindOrCreateLeaderboard.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard, nullptr, "FindOrCreateLeaderboardAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_NoRegister()
	{
		return USteamCoreWebAsyncActionFindOrCreateLeaderboard::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync, "FindOrCreateLeaderboardAsync" }, // 3482846016
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionFindOrCreateLeaderboard.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionFindOrCreateLeaderboard.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionFindOrCreateLeaderboard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_Statics::ClassParams = {
		&USteamCoreWebAsyncActionFindOrCreateLeaderboard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionFindOrCreateLeaderboard, 2282943829);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionFindOrCreateLeaderboard>()
	{
		return USteamCoreWebAsyncActionFindOrCreateLeaderboard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard(Z_Construct_UClass_USteamCoreWebAsyncActionFindOrCreateLeaderboard, &USteamCoreWebAsyncActionFindOrCreateLeaderboard::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionFindOrCreateLeaderboard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionFindOrCreateLeaderboard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
