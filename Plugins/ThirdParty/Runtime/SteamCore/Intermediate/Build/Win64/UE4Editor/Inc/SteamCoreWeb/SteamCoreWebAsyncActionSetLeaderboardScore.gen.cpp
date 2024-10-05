// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionSetLeaderboardScore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionSetLeaderboardScore() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionSetLeaderboardScore::execSetLeaderboardScoreAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_leaderbordID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Score);
		P_GET_TARRAY(uint8,Z_Param_Details);
		P_GET_PROPERTY(FStrProperty,Z_Param_scoreMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionSetLeaderboardScore**)Z_Param__Result=USteamCoreWebAsyncActionSetLeaderboardScore::SetLeaderboardScoreAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID,Z_Param_leaderbordID,Z_Param_SteamID,Z_Param_Score,Z_Param_Details,Z_Param_scoreMethod);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionSetLeaderboardScore::StaticRegisterNativesUSteamCoreWebAsyncActionSetLeaderboardScore()
	{
		UClass* Class = USteamCoreWebAsyncActionSetLeaderboardScore::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetLeaderboardScoreAsync", &USteamCoreWebAsyncActionSetLeaderboardScore::execSetLeaderboardScoreAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics
	{
		struct SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			int32 AppID;
			int32 leaderbordID;
			FString SteamID;
			int32 Score;
			TArray<uint8> Details;
			FString scoreMethod;
			USteamCoreWebAsyncActionSetLeaderboardScore* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_leaderbordID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Score;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Details_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Details;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scoreMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_scoreMethod;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_leaderbordID = { "leaderbordID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, leaderbordID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, Score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Details_Inner = { "Details", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, Details), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_scoreMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_scoreMethod = { "scoreMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, scoreMethod), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_scoreMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_scoreMethod_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_leaderbordID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Details_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_Details,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_scoreMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionSetLeaderboardScore.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore, nullptr, "SetLeaderboardScoreAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionSetLeaderboardScore_eventSetLeaderboardScoreAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_NoRegister()
	{
		return USteamCoreWebAsyncActionSetLeaderboardScore::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync, "SetLeaderboardScoreAsync" }, // 680560510
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionSetLeaderboardScore.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionSetLeaderboardScore.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionSetLeaderboardScore>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_Statics::ClassParams = {
		&USteamCoreWebAsyncActionSetLeaderboardScore::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionSetLeaderboardScore, 3826152484);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionSetLeaderboardScore>()
	{
		return USteamCoreWebAsyncActionSetLeaderboardScore::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionSetLeaderboardScore(Z_Construct_UClass_USteamCoreWebAsyncActionSetLeaderboardScore, &USteamCoreWebAsyncActionSetLeaderboardScore::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionSetLeaderboardScore"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionSetLeaderboardScore);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
