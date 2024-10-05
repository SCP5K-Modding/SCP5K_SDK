// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionGetPublisherAppOwnership.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionGetPublisherAppOwnership() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetPublisherAppOwnership::execGetPublisherAppOwnershipAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetPublisherAppOwnership**)Z_Param__Result=USteamCoreWebAsyncActionGetPublisherAppOwnership::GetPublisherAppOwnershipAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamID);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetPublisherAppOwnership::StaticRegisterNativesUSteamCoreWebAsyncActionGetPublisherAppOwnership()
	{
		UClass* Class = USteamCoreWebAsyncActionGetPublisherAppOwnership::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPublisherAppOwnershipAsync", &USteamCoreWebAsyncActionGetPublisherAppOwnership::execGetPublisherAppOwnershipAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString SteamID;
			USteamCoreWebAsyncActionGetPublisherAppOwnership* ReturnValue;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionGetPublisherAppOwnership.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership, nullptr, "GetPublisherAppOwnershipAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionGetPublisherAppOwnership_eventGetPublisherAppOwnershipAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_NoRegister()
	{
		return USteamCoreWebAsyncActionGetPublisherAppOwnership::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync, "GetPublisherAppOwnershipAsync" }, // 3993736596
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionGetPublisherAppOwnership.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionGetPublisherAppOwnership.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetPublisherAppOwnership>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetPublisherAppOwnership::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionGetPublisherAppOwnership, 1107523854);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetPublisherAppOwnership>()
	{
		return USteamCoreWebAsyncActionGetPublisherAppOwnership::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership(Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnership, &USteamCoreWebAsyncActionGetPublisherAppOwnership::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionGetPublisherAppOwnership"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetPublisherAppOwnership);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
