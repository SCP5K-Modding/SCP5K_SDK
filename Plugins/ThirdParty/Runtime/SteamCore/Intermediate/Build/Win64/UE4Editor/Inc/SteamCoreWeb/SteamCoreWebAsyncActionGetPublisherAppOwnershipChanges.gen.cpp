// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionGetPublisherAppOwnershipChanges() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::execGetPublisherAppOwnershipChangesAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_packageRowVersion);
		P_GET_PROPERTY(FStrProperty,Z_Param_cdkeyRowVersion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges**)Z_Param__Result=USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::GetPublisherAppOwnershipChangesAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_packageRowVersion,Z_Param_cdkeyRowVersion);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::StaticRegisterNativesUSteamCoreWebAsyncActionGetPublisherAppOwnershipChanges()
	{
		UClass* Class = USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPublisherAppOwnershipChangesAsync", &USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::execGetPublisherAppOwnershipChangesAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString packageRowVersion;
			FString cdkeyRowVersion;
			USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packageRowVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_packageRowVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cdkeyRowVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cdkeyRowVersion;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_packageRowVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_packageRowVersion = { "packageRowVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms, packageRowVersion), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_packageRowVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_packageRowVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_cdkeyRowVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_cdkeyRowVersion = { "cdkeyRowVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms, cdkeyRowVersion), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_cdkeyRowVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_cdkeyRowVersion_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_packageRowVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_cdkeyRowVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges, nullptr, "GetPublisherAppOwnershipChangesAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_eventGetPublisherAppOwnershipChangesAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_NoRegister()
	{
		return USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync, "GetPublisherAppOwnershipChangesAsync" }, // 2562526900
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges, 1378601791);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges>()
	{
		return USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges(Z_Construct_UClass_USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges, &USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
