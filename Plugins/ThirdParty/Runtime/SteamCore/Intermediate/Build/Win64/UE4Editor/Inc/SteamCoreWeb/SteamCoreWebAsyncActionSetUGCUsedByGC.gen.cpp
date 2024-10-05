// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionSetUGCUsedByGC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionSetUGCUsedByGC() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionSetUGCUsedByGC::execSetUGCUsedByGCAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_UGCID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_UBOOL(Z_Param_bUsed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionSetUGCUsedByGC**)Z_Param__Result=USteamCoreWebAsyncActionSetUGCUsedByGC::SetUGCUsedByGCAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamID,Z_Param_UGCID,Z_Param_AppID,Z_Param_bUsed);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionSetUGCUsedByGC::StaticRegisterNativesUSteamCoreWebAsyncActionSetUGCUsedByGC()
	{
		UClass* Class = USteamCoreWebAsyncActionSetUGCUsedByGC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetUGCUsedByGCAsync", &USteamCoreWebAsyncActionSetUGCUsedByGC::execSetUGCUsedByGCAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics
	{
		struct SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString SteamID;
			FString UGCID;
			int32 AppID;
			bool bUsed;
			USteamCoreWebAsyncActionSetUGCUsedByGC* ReturnValue;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UGCID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UGCID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static void NewProp_bUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsed;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_UGCID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_UGCID = { "UGCID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, UGCID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_UGCID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_UGCID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_bUsed_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms*)Obj)->bUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_bUsed = { "bUsed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_bUsed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_UGCID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_bUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionSetUGCUsedByGC.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC, nullptr, "SetUGCUsedByGCAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_NoRegister()
	{
		return USteamCoreWebAsyncActionSetUGCUsedByGC::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync, "SetUGCUsedByGCAsync" }, // 3669390985
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionSetUGCUsedByGC.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionSetUGCUsedByGC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionSetUGCUsedByGC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics::ClassParams = {
		&USteamCoreWebAsyncActionSetUGCUsedByGC::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionSetUGCUsedByGC, 3742435929);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionSetUGCUsedByGC>()
	{
		return USteamCoreWebAsyncActionSetUGCUsedByGC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC(Z_Construct_UClass_USteamCoreWebAsyncActionSetUGCUsedByGC, &USteamCoreWebAsyncActionSetUGCUsedByGC::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionSetUGCUsedByGC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionSetUGCUsedByGC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
