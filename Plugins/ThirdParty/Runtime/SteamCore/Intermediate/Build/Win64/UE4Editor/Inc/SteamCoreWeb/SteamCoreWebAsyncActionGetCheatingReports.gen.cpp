// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionGetCheatingReports.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionGetCheatingReports() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetCheatingReports::execGetCheatingReportsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeEnd);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeBegin);
		P_GET_PROPERTY(FStrProperty,Z_Param_reportidMin);
		P_GET_UBOOL(Z_Param_bIncludeReports);
		P_GET_UBOOL(Z_Param_bIncludeBans);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetCheatingReports**)Z_Param__Result=USteamCoreWebAsyncActionGetCheatingReports::GetCheatingReportsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID,Z_Param_timeEnd,Z_Param_timeBegin,Z_Param_reportidMin,Z_Param_bIncludeReports,Z_Param_bIncludeBans,Z_Param_SteamID);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetCheatingReports::StaticRegisterNativesUSteamCoreWebAsyncActionGetCheatingReports()
	{
		UClass* Class = USteamCoreWebAsyncActionGetCheatingReports::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCheatingReportsAsync", &USteamCoreWebAsyncActionGetCheatingReports::execGetCheatingReportsAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			int32 AppID;
			int32 timeEnd;
			int32 timeBegin;
			FString reportidMin;
			bool bIncludeReports;
			bool bIncludeBans;
			FString SteamID;
			USteamCoreWebAsyncActionGetCheatingReports* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeEnd;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeBegin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reportidMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_reportidMin;
		static void NewProp_bIncludeReports_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeReports;
		static void NewProp_bIncludeBans_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeBans;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_timeEnd = { "timeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, timeEnd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_timeBegin = { "timeBegin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, timeBegin), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_reportidMin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_reportidMin = { "reportidMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, reportidMin), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_reportidMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_reportidMin_MetaData)) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms*)Obj)->bIncludeReports = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports = { "bIncludeReports", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms*)Obj)->bIncludeBans = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans = { "bIncludeBans", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_timeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_timeBegin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_reportidMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionGetCheatingReports.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports, nullptr, "GetCheatingReportsAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_NoRegister()
	{
		return USteamCoreWebAsyncActionGetCheatingReports::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync, "GetCheatingReportsAsync" }, // 2563913275
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionGetCheatingReports.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionGetCheatingReports.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetCheatingReports>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetCheatingReports::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionGetCheatingReports, 4022360790);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetCheatingReports>()
	{
		return USteamCoreWebAsyncActionGetCheatingReports::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionGetCheatingReports(Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports, &USteamCoreWebAsyncActionGetCheatingReports::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionGetCheatingReports"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetCheatingReports);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
