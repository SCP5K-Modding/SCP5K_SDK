// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordRelationship/Public/DiscordRelationshipManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordRelationshipManager() {}
// Cross Module References
	DISCORDRELATIONSHIP_API UClass* Z_Construct_UClass_UDiscordRelationshipManager_NoRegister();
	DISCORDRELATIONSHIP_API UClass* Z_Construct_UClass_UDiscordRelationshipManager();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordManager();
	UPackage* Z_Construct_UPackage__Script_DiscordRelationship();
	DISCORDRELATIONSHIP_API UFunction* Z_Construct_UDelegateFunction_DiscordRelationship_DiscordFilterFunction__DelegateSignature();
	DISCORDRELATIONSHIP_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordRelationship();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordCore_NoRegister();
	DISCORDRELATIONSHIP_API UFunction* Z_Construct_UDelegateFunction_DiscordRelationship_OnRelationshipRefreshed__DelegateSignature();
	DISCORDRELATIONSHIP_API UFunction* Z_Construct_UDelegateFunction_DiscordRelationship_OnRelationshipUpdate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UDiscordRelationshipManager::execCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Count();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordRelationshipManager::execFilter)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_FilterFunction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Filter(FDiscordFilterFunction(Z_Param_Out_FilterFunction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordRelationshipManager::execGet)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordRelationship*)Z_Param__Result=P_THIS->Get(Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordRelationshipManager::execGetAt)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordRelationship*)Z_Param__Result=P_THIS->GetAt(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordRelationshipManager::execGetRelationshipManager)
	{
		P_GET_OBJECT(UDiscordCore,Z_Param_DiscordCore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDiscordRelationshipManager**)Z_Param__Result=UDiscordRelationshipManager::GetRelationshipManager(Z_Param_DiscordCore);
		P_NATIVE_END;
	}
	void UDiscordRelationshipManager::StaticRegisterNativesUDiscordRelationshipManager()
	{
		UClass* Class = UDiscordRelationshipManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Count", &UDiscordRelationshipManager::execCount },
			{ "Filter", &UDiscordRelationshipManager::execFilter },
			{ "Get", &UDiscordRelationshipManager::execGet },
			{ "GetAt", &UDiscordRelationshipManager::execGetAt },
			{ "GetRelationshipManager", &UDiscordRelationshipManager::execGetRelationshipManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiscordRelationshipManager_Count_Statics
	{
		struct DiscordRelationshipManager_eventCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDiscordRelationshipManager_Count_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordRelationshipManager_eventCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordRelationshipManager_Count_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordRelationshipManager_Count_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRelationshipManager_Count_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordRelationshipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordRelationshipManager_Count_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRelationshipManager, nullptr, "Count", nullptr, nullptr, sizeof(DiscordRelationshipManager_eventCount_Parms), Z_Construct_UFunction_UDiscordRelationshipManager_Count_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRelationshipManager_Count_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordRelationshipManager_Count_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRelationshipManager_Count_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordRelationshipManager_Count()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordRelationshipManager_Count_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordRelationshipManager_Filter_Statics
	{
		struct DiscordRelationshipManager_eventFilter_Parms
		{
			FScriptDelegate FilterFunction;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_FilterFunction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRelationshipManager_Filter_Statics::NewProp_FilterFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UDiscordRelationshipManager_Filter_Statics::NewProp_FilterFunction = { "FilterFunction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordRelationshipManager_eventFilter_Parms, FilterFunction), Z_Construct_UDelegateFunction_DiscordRelationship_DiscordFilterFunction__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UDiscordRelationshipManager_Filter_Statics::NewProp_FilterFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRelationshipManager_Filter_Statics::NewProp_FilterFunction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordRelationshipManager_Filter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordRelationshipManager_Filter_Statics::NewProp_FilterFunction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRelationshipManager_Filter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordRelationshipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordRelationshipManager_Filter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRelationshipManager, nullptr, "Filter", nullptr, nullptr, sizeof(DiscordRelationshipManager_eventFilter_Parms), Z_Construct_UFunction_UDiscordRelationshipManager_Filter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRelationshipManager_Filter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordRelationshipManager_Filter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRelationshipManager_Filter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordRelationshipManager_Filter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordRelationshipManager_Filter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordRelationshipManager_Get_Statics
	{
		struct DiscordRelationshipManager_eventGet_Parms
		{
			int64 UserId;
			FDiscordRelationship ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRelationshipManager_Get_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordRelationshipManager_Get_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordRelationshipManager_eventGet_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordRelationshipManager_Get_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRelationshipManager_Get_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordRelationshipManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordRelationshipManager_eventGet_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordRelationship, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordRelationshipManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordRelationshipManager_Get_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordRelationshipManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRelationshipManager_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordRelationshipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordRelationshipManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRelationshipManager, nullptr, "Get", nullptr, nullptr, sizeof(DiscordRelationshipManager_eventGet_Parms), Z_Construct_UFunction_UDiscordRelationshipManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRelationshipManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordRelationshipManager_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRelationshipManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordRelationshipManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordRelationshipManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordRelationshipManager_GetAt_Statics
	{
		struct DiscordRelationshipManager_eventGetAt_Parms
		{
			int64 Index;
			FDiscordRelationship ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRelationshipManager_GetAt_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordRelationshipManager_GetAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordRelationshipManager_eventGetAt_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UDiscordRelationshipManager_GetAt_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRelationshipManager_GetAt_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordRelationshipManager_GetAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordRelationshipManager_eventGetAt_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordRelationship, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordRelationshipManager_GetAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordRelationshipManager_GetAt_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordRelationshipManager_GetAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRelationshipManager_GetAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordRelationshipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordRelationshipManager_GetAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRelationshipManager, nullptr, "GetAt", nullptr, nullptr, sizeof(DiscordRelationshipManager_eventGetAt_Parms), Z_Construct_UFunction_UDiscordRelationshipManager_GetAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRelationshipManager_GetAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordRelationshipManager_GetAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRelationshipManager_GetAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordRelationshipManager_GetAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordRelationshipManager_GetAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordRelationshipManager_GetRelationshipManager_Statics
	{
		struct DiscordRelationshipManager_eventGetRelationshipManager_Parms
		{
			UDiscordCore* DiscordCore;
			UDiscordRelationshipManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DiscordCore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordRelationshipManager_GetRelationshipManager_Statics::NewProp_DiscordCore = { "DiscordCore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordRelationshipManager_eventGetRelationshipManager_Parms, DiscordCore), Z_Construct_UClass_UDiscordCore_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordRelationshipManager_GetRelationshipManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordRelationshipManager_eventGetRelationshipManager_Parms, ReturnValue), Z_Construct_UClass_UDiscordRelationshipManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordRelationshipManager_GetRelationshipManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordRelationshipManager_GetRelationshipManager_Statics::NewProp_DiscordCore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordRelationshipManager_GetRelationshipManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordRelationshipManager_GetRelationshipManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordRelationshipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordRelationshipManager_GetRelationshipManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordRelationshipManager, nullptr, "GetRelationshipManager", nullptr, nullptr, sizeof(DiscordRelationshipManager_eventGetRelationshipManager_Parms), Z_Construct_UFunction_UDiscordRelationshipManager_GetRelationshipManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRelationshipManager_GetRelationshipManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordRelationshipManager_GetRelationshipManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordRelationshipManager_GetRelationshipManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordRelationshipManager_GetRelationshipManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordRelationshipManager_GetRelationshipManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDiscordRelationshipManager_NoRegister()
	{
		return UDiscordRelationshipManager::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordRelationshipManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRelationshipRefreshed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRelationshipRefreshed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRelationshipUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRelationshipUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordRelationshipManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDiscordManager,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordRelationship,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiscordRelationshipManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordRelationshipManager_Count, "Count" }, // 1806491923
		{ &Z_Construct_UFunction_UDiscordRelationshipManager_Filter, "Filter" }, // 3019113760
		{ &Z_Construct_UFunction_UDiscordRelationshipManager_Get, "Get" }, // 584052511
		{ &Z_Construct_UFunction_UDiscordRelationshipManager_GetAt, "GetAt" }, // 3113992180
		{ &Z_Construct_UFunction_UDiscordRelationshipManager_GetRelationshipManager, "GetRelationshipManager" }, // 3285260178
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordRelationshipManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DiscordRelationshipManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DiscordRelationshipManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordRelationshipManager_Statics::NewProp_OnRelationshipRefreshed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordRelationshipManager" },
		{ "ModuleRelativePath", "Public/DiscordRelationshipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordRelationshipManager_Statics::NewProp_OnRelationshipRefreshed = { "OnRelationshipRefreshed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordRelationshipManager, OnRelationshipRefreshed), Z_Construct_UDelegateFunction_DiscordRelationship_OnRelationshipRefreshed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordRelationshipManager_Statics::NewProp_OnRelationshipRefreshed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordRelationshipManager_Statics::NewProp_OnRelationshipRefreshed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordRelationshipManager_Statics::NewProp_OnRelationshipUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordRelationshipManager" },
		{ "ModuleRelativePath", "Public/DiscordRelationshipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordRelationshipManager_Statics::NewProp_OnRelationshipUpdate = { "OnRelationshipUpdate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordRelationshipManager, OnRelationshipUpdate), Z_Construct_UDelegateFunction_DiscordRelationship_OnRelationshipUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordRelationshipManager_Statics::NewProp_OnRelationshipUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordRelationshipManager_Statics::NewProp_OnRelationshipUpdate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDiscordRelationshipManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordRelationshipManager_Statics::NewProp_OnRelationshipRefreshed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordRelationshipManager_Statics::NewProp_OnRelationshipUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordRelationshipManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordRelationshipManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiscordRelationshipManager_Statics::ClassParams = {
		&UDiscordRelationshipManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDiscordRelationshipManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordRelationshipManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDiscordRelationshipManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordRelationshipManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiscordRelationshipManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiscordRelationshipManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordRelationshipManager, 718449228);
	template<> DISCORDRELATIONSHIP_API UClass* StaticClass<UDiscordRelationshipManager>()
	{
		return UDiscordRelationshipManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordRelationshipManager(Z_Construct_UClass_UDiscordRelationshipManager, &UDiscordRelationshipManager::StaticClass, TEXT("/Script/DiscordRelationship"), TEXT("UDiscordRelationshipManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordRelationshipManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
