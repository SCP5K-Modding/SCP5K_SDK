// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebSteamGameServerStats.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSteamGameServerStats() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamGameServerStats_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamGameServerStats();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebSteamGameServerStats::execGetGameServerPlayerStatsForGame)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_RangeStart);
		P_GET_PROPERTY(FStrProperty,Z_Param_RangeEnd);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGameServerPlayerStatsForGame(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_GameID,Z_Param_AppID,Z_Param_RangeStart,Z_Param_RangeEnd,Z_Param_MaxResults);
		P_NATIVE_END;
	}
	void UWebSteamGameServerStats::StaticRegisterNativesUWebSteamGameServerStats()
	{
		UClass* Class = UWebSteamGameServerStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameServerPlayerStatsForGame", &UWebSteamGameServerStats::execGetGameServerPlayerStatsForGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics
	{
		struct WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString GameID;
			int32 AppID;
			FString RangeStart;
			FString RangeEnd;
			int32 MaxResults;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RangeStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangeEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RangeEnd;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_GameID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, GameID), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_GameID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_RangeStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, RangeStart), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_RangeStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_RangeStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_RangeEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, RangeEnd), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_RangeEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_RangeEnd_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_GameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_RangeStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_RangeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_MaxResults,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamGameServerStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamGameServerStats, nullptr, "GetGameServerPlayerStatsForGame", nullptr, nullptr, sizeof(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms), Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSteamGameServerStats_NoRegister()
	{
		return UWebSteamGameServerStats::StaticClass();
	}
	struct Z_Construct_UClass_UWebSteamGameServerStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSteamGameServerStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSteamGameServerStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame, "GetGameServerPlayerStatsForGame" }, // 1087308513
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSteamGameServerStats_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebSteamGameServerStats.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebSteamGameServerStats.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSteamGameServerStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSteamGameServerStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebSteamGameServerStats_Statics::ClassParams = {
		&UWebSteamGameServerStats::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebSteamGameServerStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamGameServerStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSteamGameServerStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebSteamGameServerStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSteamGameServerStats, 1302936688);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebSteamGameServerStats>()
	{
		return UWebSteamGameServerStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSteamGameServerStats(Z_Construct_UClass_UWebSteamGameServerStats, &UWebSteamGameServerStats::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebSteamGameServerStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSteamGameServerStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
