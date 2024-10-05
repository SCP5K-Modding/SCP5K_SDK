// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionGetHistoryCommandDetails.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionGetHistoryCommandDetails() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetHistoryCommandDetails::execGetHistoryCommandDetailsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Command);
		P_GET_PROPERTY(FStrProperty,Z_Param_contextID);
		P_GET_PROPERTY(FStrProperty,Z_Param_arguments);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetHistoryCommandDetails**)Z_Param__Result=USteamCoreWebAsyncActionGetHistoryCommandDetails::GetHistoryCommandDetailsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID,Z_Param_SteamID,Z_Param_Command,Z_Param_contextID,Z_Param_arguments);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetHistoryCommandDetails::StaticRegisterNativesUSteamCoreWebAsyncActionGetHistoryCommandDetails()
	{
		UClass* Class = USteamCoreWebAsyncActionGetHistoryCommandDetails::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHistoryCommandDetailsAsync", &USteamCoreWebAsyncActionGetHistoryCommandDetails::execGetHistoryCommandDetailsAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			int32 AppID;
			FString SteamID;
			FString Command;
			FString contextID;
			FString arguments;
			USteamCoreWebAsyncActionGetHistoryCommandDetails* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Command;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_contextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_contextID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_arguments;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, Command), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_Command_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_contextID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_contextID = { "contextID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, contextID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_contextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_contextID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_arguments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_arguments = { "arguments", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, arguments), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_arguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_arguments_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_Command,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_contextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_arguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionGetHistoryCommandDetails.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails, nullptr, "GetHistoryCommandDetailsAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionGetHistoryCommandDetails_eventGetHistoryCommandDetailsAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_NoRegister()
	{
		return USteamCoreWebAsyncActionGetHistoryCommandDetails::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync, "GetHistoryCommandDetailsAsync" }, // 2696349653
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionGetHistoryCommandDetails.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionGetHistoryCommandDetails.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetHistoryCommandDetails>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetHistoryCommandDetails::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionGetHistoryCommandDetails, 1475765235);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetHistoryCommandDetails>()
	{
		return USteamCoreWebAsyncActionGetHistoryCommandDetails::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails(Z_Construct_UClass_USteamCoreWebAsyncActionGetHistoryCommandDetails, &USteamCoreWebAsyncActionGetHistoryCommandDetails::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionGetHistoryCommandDetails"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetHistoryCommandDetails);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
