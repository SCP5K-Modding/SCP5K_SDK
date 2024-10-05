// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreUserStatsAsyncActionUploadLeaderboardScore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreUserStatsAsyncActionUploadLeaderboardScore() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoreUploaded();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboard();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionUploadLeaderboardScore::execHandleCallback)
	{
		P_GET_STRUCT_REF(FLeaderboardScoreUploaded,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionUploadLeaderboardScore::execUploadLeaderboardScoreAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
		P_GET_ENUM(ESteamLeaderboardUploadScoreMethod,Z_Param_UploadScoreMethod);
		P_GET_PROPERTY(FIntProperty,Z_Param_Score);
		P_GET_TARRAY(int32,Z_Param_ScoreDetails);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreUserStatsAsyncActionUploadLeaderboardScore**)Z_Param__Result=USteamCoreUserStatsAsyncActionUploadLeaderboardScore::UploadLeaderboardScoreAsync(Z_Param_WorldContextObject,Z_Param_SteamLeaderboard,ESteamLeaderboardUploadScoreMethod(Z_Param_UploadScoreMethod),Z_Param_Score,Z_Param_ScoreDetails);
		P_NATIVE_END;
	}
	void USteamCoreUserStatsAsyncActionUploadLeaderboardScore::StaticRegisterNativesUSteamCoreUserStatsAsyncActionUploadLeaderboardScore()
	{
		UClass* Class = USteamCoreUserStatsAsyncActionUploadLeaderboardScore::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreUserStatsAsyncActionUploadLeaderboardScore::execHandleCallback },
			{ "UploadLeaderboardScoreAsync", &USteamCoreUserStatsAsyncActionUploadLeaderboardScore::execUploadLeaderboardScoreAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics
	{
		struct SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventHandleCallback_Parms
		{
			FLeaderboardScoreUploaded Data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoreUploaded, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreUserStatsAsyncActionUploadLeaderboardScore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics
	{
		struct SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms
		{
			UObject* WorldContextObject;
			FSteamLeaderboard SteamLeaderboard;
			ESteamLeaderboardUploadScoreMethod UploadScoreMethod;
			int32 Score;
			TArray<int32> ScoreDetails;
			USteamCoreUserStatsAsyncActionUploadLeaderboardScore* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UploadScoreMethod_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UploadScoreMethod;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Score;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScoreDetails_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScoreDetails;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_UploadScoreMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_UploadScoreMethod = { "UploadScoreMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms, UploadScoreMethod), Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms, Score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_ScoreDetails_Inner = { "ScoreDetails", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_ScoreDetails = { "ScoreDetails", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms, ScoreDetails), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_SteamLeaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_UploadScoreMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_UploadScoreMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_ScoreDetails_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_ScoreDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreUserStatsAsyncActionUploadLeaderboardScore.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore, nullptr, "UploadLeaderboardScoreAsync", nullptr, nullptr, sizeof(SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_NoRegister()
	{
		return USteamCoreUserStatsAsyncActionUploadLeaderboardScore::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics
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
	UObject* (*const Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback, "HandleCallback" }, // 1380808119
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync, "UploadLeaderboardScoreAsync" }, // 2853719054
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreUserStatsAsyncActionUploadLeaderboardScore.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreUserStatsAsyncActionUploadLeaderboardScore.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::NewProp_OnCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreUserStatsAsyncActionUploadLeaderboardScore" },
		{ "ModuleRelativePath", "Public/SteamCoreUserStatsAsyncActionUploadLeaderboardScore.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreUserStatsAsyncActionUploadLeaderboardScore, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUserStatsAsyncActionUploadLeaderboardScore>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::ClassParams = {
		&USteamCoreUserStatsAsyncActionUploadLeaderboardScore::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreUserStatsAsyncActionUploadLeaderboardScore, 4200334716);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreUserStatsAsyncActionUploadLeaderboardScore>()
	{
		return USteamCoreUserStatsAsyncActionUploadLeaderboardScore::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore(Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore, &USteamCoreUserStatsAsyncActionUploadLeaderboardScore::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreUserStatsAsyncActionUploadLeaderboardScore"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreUserStatsAsyncActionUploadLeaderboardScore);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
