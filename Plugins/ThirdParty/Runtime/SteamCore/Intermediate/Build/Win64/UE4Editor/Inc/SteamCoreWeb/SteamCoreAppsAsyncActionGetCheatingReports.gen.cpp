// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreAppsAsyncActionGetCheatingReports.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreAppsAsyncActionGetCheatingReports() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreAppsAsyncActionGetCheatingReports::execGetCheatingReportsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeBegin);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeEnd);
		P_GET_UBOOL(Z_Param_bIncludeReports);
		P_GET_UBOOL(Z_Param_bIncludeBans);
		P_GET_PROPERTY(FIntProperty,Z_Param_reportidMin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreAppsAsyncActionGetCheatingReports**)Z_Param__Result=USteamCoreAppsAsyncActionGetCheatingReports::GetCheatingReportsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID,Z_Param_timeBegin,Z_Param_timeEnd,Z_Param_bIncludeReports,Z_Param_bIncludeBans,Z_Param_reportidMin);
		P_NATIVE_END;
	}
	void USteamCoreAppsAsyncActionGetCheatingReports::StaticRegisterNativesUSteamCoreAppsAsyncActionGetCheatingReports()
	{
		UClass* Class = USteamCoreAppsAsyncActionGetCheatingReports::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCheatingReportsAsync", &USteamCoreAppsAsyncActionGetCheatingReports::execGetCheatingReportsAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics
	{
		struct SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			int32 AppID;
			int32 timeBegin;
			int32 timeEnd;
			bool bIncludeReports;
			bool bIncludeBans;
			int32 reportidMin;
			USteamCoreAppsAsyncActionGetCheatingReports* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeBegin;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeEnd;
		static void NewProp_bIncludeReports_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeReports;
		static void NewProp_bIncludeBans_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeBans;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_reportidMin;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_timeBegin = { "timeBegin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, timeBegin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_timeEnd = { "timeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, timeEnd), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports_SetBit(void* Obj)
	{
		((SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms*)Obj)->bIncludeReports = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports = { "bIncludeReports", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms), &Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans_SetBit(void* Obj)
	{
		((SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms*)Obj)->bIncludeBans = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans = { "bIncludeBans", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms), &Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_reportidMin = { "reportidMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, reportidMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_timeBegin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_timeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_reportidMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreAppsAsyncActionGetCheatingReports.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports, nullptr, "GetCheatingReportsAsync", nullptr, nullptr, sizeof(SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms), Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_NoRegister()
	{
		return USteamCoreAppsAsyncActionGetCheatingReports::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync, "GetCheatingReportsAsync" }, // 448761128
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreAppsAsyncActionGetCheatingReports.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreAppsAsyncActionGetCheatingReports.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreAppsAsyncActionGetCheatingReports>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_Statics::ClassParams = {
		&USteamCoreAppsAsyncActionGetCheatingReports::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreAppsAsyncActionGetCheatingReports, 398523870);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreAppsAsyncActionGetCheatingReports>()
	{
		return USteamCoreAppsAsyncActionGetCheatingReports::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreAppsAsyncActionGetCheatingReports(Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports, &USteamCoreAppsAsyncActionGetCheatingReports::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreAppsAsyncActionGetCheatingReports"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreAppsAsyncActionGetCheatingReports);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
