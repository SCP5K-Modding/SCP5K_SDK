// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionGetGlobalStatsForGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionGetGlobalStatsForGame() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetGlobalStatsForGame::execGetGlobalStatsForGameAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_TARRAY(FString,Z_Param_Names);
		P_GET_PROPERTY(FIntProperty,Z_Param_startDate);
		P_GET_PROPERTY(FIntProperty,Z_Param_endDate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetGlobalStatsForGame**)Z_Param__Result=USteamCoreWebAsyncActionGetGlobalStatsForGame::GetGlobalStatsForGameAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Names,Z_Param_startDate,Z_Param_endDate);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetGlobalStatsForGame::StaticRegisterNativesUSteamCoreWebAsyncActionGetGlobalStatsForGame()
	{
		UClass* Class = USteamCoreWebAsyncActionGetGlobalStatsForGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGlobalStatsForGameAsync", &USteamCoreWebAsyncActionGetGlobalStatsForGame::execGetGlobalStatsForGameAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms
		{
			UObject* WorldContextObject;
			int32 AppID;
			TArray<FString> Names;
			int32 startDate;
			int32 endDate;
			USteamCoreWebAsyncActionGetGlobalStatsForGame* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Names_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_startDate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_endDate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_startDate = { "startDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms, startDate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_endDate = { "endDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms, endDate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_Names_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_Names,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_startDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_endDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionGetGlobalStatsForGame.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame, nullptr, "GetGlobalStatsForGameAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionGetGlobalStatsForGame_eventGetGlobalStatsForGameAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_NoRegister()
	{
		return USteamCoreWebAsyncActionGetGlobalStatsForGame::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync, "GetGlobalStatsForGameAsync" }, // 1232876938
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionGetGlobalStatsForGame.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionGetGlobalStatsForGame.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetGlobalStatsForGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetGlobalStatsForGame::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionGetGlobalStatsForGame, 2644832498);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetGlobalStatsForGame>()
	{
		return USteamCoreWebAsyncActionGetGlobalStatsForGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame(Z_Construct_UClass_USteamCoreWebAsyncActionGetGlobalStatsForGame, &USteamCoreWebAsyncActionGetGlobalStatsForGame::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionGetGlobalStatsForGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetGlobalStatsForGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
