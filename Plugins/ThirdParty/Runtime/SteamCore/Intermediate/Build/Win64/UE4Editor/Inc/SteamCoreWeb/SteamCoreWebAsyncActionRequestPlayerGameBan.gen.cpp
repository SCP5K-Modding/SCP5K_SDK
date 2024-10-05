// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionRequestPlayerGameBan.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionRequestPlayerGameBan() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionRequestPlayerGameBan::execRequestPlayerGameBanAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_reportID);
		P_GET_PROPERTY(FStrProperty,Z_Param_cheatDescription);
		P_GET_PROPERTY(FIntProperty,Z_Param_Duration);
		P_GET_UBOOL(Z_Param_bDelayBan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionRequestPlayerGameBan**)Z_Param__Result=USteamCoreWebAsyncActionRequestPlayerGameBan::RequestPlayerGameBanAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamID,Z_Param_AppID,Z_Param_reportID,Z_Param_cheatDescription,Z_Param_Duration,Z_Param_bDelayBan);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionRequestPlayerGameBan::StaticRegisterNativesUSteamCoreWebAsyncActionRequestPlayerGameBan()
	{
		UClass* Class = USteamCoreWebAsyncActionRequestPlayerGameBan::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestPlayerGameBanAsync", &USteamCoreWebAsyncActionRequestPlayerGameBan::execRequestPlayerGameBanAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics
	{
		struct SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString SteamID;
			int32 AppID;
			FString reportID;
			FString cheatDescription;
			int32 Duration;
			bool bDelayBan;
			USteamCoreWebAsyncActionRequestPlayerGameBan* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reportID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_reportID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cheatDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cheatDescription;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Duration;
		static void NewProp_bDelayBan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDelayBan;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_reportID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_reportID = { "reportID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, reportID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_reportID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_reportID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_cheatDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_cheatDescription = { "cheatDescription", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, cheatDescription), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_cheatDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_cheatDescription_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_bDelayBan_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms*)Obj)->bDelayBan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_bDelayBan = { "bDelayBan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_bDelayBan_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_reportID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_cheatDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_bDelayBan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionRequestPlayerGameBan.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan, nullptr, "RequestPlayerGameBanAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_NoRegister()
	{
		return USteamCoreWebAsyncActionRequestPlayerGameBan::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync, "RequestPlayerGameBanAsync" }, // 2976609290
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionRequestPlayerGameBan.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionRequestPlayerGameBan.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRequestPlayerGameBan>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::ClassParams = {
		&USteamCoreWebAsyncActionRequestPlayerGameBan::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionRequestPlayerGameBan, 2197958732);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionRequestPlayerGameBan>()
	{
		return USteamCoreWebAsyncActionRequestPlayerGameBan::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan(Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan, &USteamCoreWebAsyncActionRequestPlayerGameBan::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionRequestPlayerGameBan"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionRequestPlayerGameBan);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
