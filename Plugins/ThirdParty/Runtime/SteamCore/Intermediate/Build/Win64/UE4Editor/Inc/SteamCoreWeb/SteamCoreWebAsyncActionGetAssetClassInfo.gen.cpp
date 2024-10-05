// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionGetAssetClassInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionGetAssetClassInfo() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetAssetClassInfo::execGetAssetClassInfoAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_GET_PROPERTY(FIntProperty,Z_Param_classCount);
		P_GET_PROPERTY(FStrProperty,Z_Param_classID);
		P_GET_PROPERTY(FStrProperty,Z_Param_InstanceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetAssetClassInfo**)Z_Param__Result=USteamCoreWebAsyncActionGetAssetClassInfo::GetAssetClassInfoAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID,Z_Param_Language,Z_Param_classCount,Z_Param_classID,Z_Param_InstanceId);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetAssetClassInfo::StaticRegisterNativesUSteamCoreWebAsyncActionGetAssetClassInfo()
	{
		UClass* Class = USteamCoreWebAsyncActionGetAssetClassInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssetClassInfoAsync", &USteamCoreWebAsyncActionGetAssetClassInfo::execGetAssetClassInfoAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			int32 AppID;
			FString Language;
			int32 classCount;
			FString classID;
			FString InstanceId;
			USteamCoreWebAsyncActionGetAssetClassInfo* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_classCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_classID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_classID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstanceId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_classCount = { "classCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, classCount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_classID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_classID = { "classID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, classID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_classID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_classID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_InstanceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, InstanceId), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_InstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_InstanceId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_classCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_classID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_InstanceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionGetAssetClassInfo.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo, nullptr, "GetAssetClassInfoAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionGetAssetClassInfo_eventGetAssetClassInfoAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_NoRegister()
	{
		return USteamCoreWebAsyncActionGetAssetClassInfo::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync, "GetAssetClassInfoAsync" }, // 1430910694
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionGetAssetClassInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionGetAssetClassInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetAssetClassInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetAssetClassInfo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionGetAssetClassInfo, 3095638792);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetAssetClassInfo>()
	{
		return USteamCoreWebAsyncActionGetAssetClassInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionGetAssetClassInfo(Z_Construct_UClass_USteamCoreWebAsyncActionGetAssetClassInfo, &USteamCoreWebAsyncActionGetAssetClassInfo::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionGetAssetClassInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetAssetClassInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
