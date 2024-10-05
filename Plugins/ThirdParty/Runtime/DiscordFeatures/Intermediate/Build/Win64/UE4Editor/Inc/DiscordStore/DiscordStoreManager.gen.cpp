// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordStore/Public/DiscordStoreManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordStoreManager() {}
// Cross Module References
	DISCORDSTORE_API UClass* Z_Construct_UClass_UDiscordStoreManager_NoRegister();
	DISCORDSTORE_API UClass* Z_Construct_UClass_UDiscordStoreManager();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordManager();
	UPackage* Z_Construct_UPackage__Script_DiscordStore();
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordEntitlement();
	DISCORDSTORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordSku();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordCore_NoRegister();
	DISCORDSTORE_API UFunction* Z_Construct_UDelegateFunction_DiscordStore_DiscordEntitlementEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UDiscordStoreManager::execCountEntitlements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CountEntitlements();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordStoreManager::execCountSkus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CountSkus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordStoreManager::execGetEntitlement)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_EntitlementId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordEntitlement*)Z_Param__Result=P_THIS->GetEntitlement(Z_Param_EntitlementId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordStoreManager::execGetEntitlementAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordEntitlement*)Z_Param__Result=P_THIS->GetEntitlementAt(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordStoreManager::execGetSku)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_SkuId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordSku*)Z_Param__Result=P_THIS->GetSku(Z_Param_SkuId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordStoreManager::execGetSkuAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordSku*)Z_Param__Result=P_THIS->GetSkuAt(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordStoreManager::execGetStoreManager)
	{
		P_GET_OBJECT(UDiscordCore,Z_Param_DiscordCore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDiscordStoreManager**)Z_Param__Result=UDiscordStoreManager::GetStoreManager(Z_Param_DiscordCore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordStoreManager::execHasSkuEntitlement)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_SkuId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasSkuEntitlement(Z_Param_SkuId);
		P_NATIVE_END;
	}
	void UDiscordStoreManager::StaticRegisterNativesUDiscordStoreManager()
	{
		UClass* Class = UDiscordStoreManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CountEntitlements", &UDiscordStoreManager::execCountEntitlements },
			{ "CountSkus", &UDiscordStoreManager::execCountSkus },
			{ "GetEntitlement", &UDiscordStoreManager::execGetEntitlement },
			{ "GetEntitlementAt", &UDiscordStoreManager::execGetEntitlementAt },
			{ "GetSku", &UDiscordStoreManager::execGetSku },
			{ "GetSkuAt", &UDiscordStoreManager::execGetSkuAt },
			{ "GetStoreManager", &UDiscordStoreManager::execGetStoreManager },
			{ "HasSkuEntitlement", &UDiscordStoreManager::execHasSkuEntitlement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiscordStoreManager_CountEntitlements_Statics
	{
		struct DiscordStoreManager_eventCountEntitlements_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDiscordStoreManager_CountEntitlements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStoreManager_eventCountEntitlements_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordStoreManager_CountEntitlements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStoreManager_CountEntitlements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStoreManager_CountEntitlements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordStoreManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordStoreManager_CountEntitlements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordStoreManager, nullptr, "CountEntitlements", nullptr, nullptr, sizeof(DiscordStoreManager_eventCountEntitlements_Parms), Z_Construct_UFunction_UDiscordStoreManager_CountEntitlements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStoreManager_CountEntitlements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordStoreManager_CountEntitlements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStoreManager_CountEntitlements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordStoreManager_CountEntitlements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordStoreManager_CountEntitlements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordStoreManager_CountSkus_Statics
	{
		struct DiscordStoreManager_eventCountSkus_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDiscordStoreManager_CountSkus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStoreManager_eventCountSkus_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordStoreManager_CountSkus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStoreManager_CountSkus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStoreManager_CountSkus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordStoreManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordStoreManager_CountSkus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordStoreManager, nullptr, "CountSkus", nullptr, nullptr, sizeof(DiscordStoreManager_eventCountSkus_Parms), Z_Construct_UFunction_UDiscordStoreManager_CountSkus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStoreManager_CountSkus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordStoreManager_CountSkus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStoreManager_CountSkus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordStoreManager_CountSkus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordStoreManager_CountSkus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordStoreManager_GetEntitlement_Statics
	{
		struct DiscordStoreManager_eventGetEntitlement_Parms
		{
			int64 EntitlementId;
			FDiscordEntitlement ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntitlementId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_EntitlementId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStoreManager_GetEntitlement_Statics::NewProp_EntitlementId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordStoreManager_GetEntitlement_Statics::NewProp_EntitlementId = { "EntitlementId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStoreManager_eventGetEntitlement_Parms, EntitlementId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordStoreManager_GetEntitlement_Statics::NewProp_EntitlementId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStoreManager_GetEntitlement_Statics::NewProp_EntitlementId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordStoreManager_GetEntitlement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStoreManager_eventGetEntitlement_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordEntitlement, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordStoreManager_GetEntitlement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStoreManager_GetEntitlement_Statics::NewProp_EntitlementId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStoreManager_GetEntitlement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStoreManager_GetEntitlement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordStoreManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordStoreManager_GetEntitlement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordStoreManager, nullptr, "GetEntitlement", nullptr, nullptr, sizeof(DiscordStoreManager_eventGetEntitlement_Parms), Z_Construct_UFunction_UDiscordStoreManager_GetEntitlement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStoreManager_GetEntitlement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordStoreManager_GetEntitlement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStoreManager_GetEntitlement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordStoreManager_GetEntitlement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordStoreManager_GetEntitlement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordStoreManager_GetEntitlementAt_Statics
	{
		struct DiscordStoreManager_eventGetEntitlementAt_Parms
		{
			int32 Index;
			FDiscordEntitlement ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStoreManager_GetEntitlementAt_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDiscordStoreManager_GetEntitlementAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStoreManager_eventGetEntitlementAt_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UDiscordStoreManager_GetEntitlementAt_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStoreManager_GetEntitlementAt_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordStoreManager_GetEntitlementAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStoreManager_eventGetEntitlementAt_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordEntitlement, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordStoreManager_GetEntitlementAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStoreManager_GetEntitlementAt_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStoreManager_GetEntitlementAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStoreManager_GetEntitlementAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordStoreManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordStoreManager_GetEntitlementAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordStoreManager, nullptr, "GetEntitlementAt", nullptr, nullptr, sizeof(DiscordStoreManager_eventGetEntitlementAt_Parms), Z_Construct_UFunction_UDiscordStoreManager_GetEntitlementAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStoreManager_GetEntitlementAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordStoreManager_GetEntitlementAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStoreManager_GetEntitlementAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordStoreManager_GetEntitlementAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordStoreManager_GetEntitlementAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordStoreManager_GetSku_Statics
	{
		struct DiscordStoreManager_eventGetSku_Parms
		{
			int64 SkuId;
			FDiscordSku ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkuId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_SkuId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStoreManager_GetSku_Statics::NewProp_SkuId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordStoreManager_GetSku_Statics::NewProp_SkuId = { "SkuId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStoreManager_eventGetSku_Parms, SkuId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordStoreManager_GetSku_Statics::NewProp_SkuId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStoreManager_GetSku_Statics::NewProp_SkuId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordStoreManager_GetSku_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStoreManager_eventGetSku_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordSku, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordStoreManager_GetSku_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStoreManager_GetSku_Statics::NewProp_SkuId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStoreManager_GetSku_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStoreManager_GetSku_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordStoreManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordStoreManager_GetSku_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordStoreManager, nullptr, "GetSku", nullptr, nullptr, sizeof(DiscordStoreManager_eventGetSku_Parms), Z_Construct_UFunction_UDiscordStoreManager_GetSku_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStoreManager_GetSku_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordStoreManager_GetSku_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStoreManager_GetSku_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordStoreManager_GetSku()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordStoreManager_GetSku_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordStoreManager_GetSkuAt_Statics
	{
		struct DiscordStoreManager_eventGetSkuAt_Parms
		{
			int32 Index;
			FDiscordSku ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStoreManager_GetSkuAt_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDiscordStoreManager_GetSkuAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStoreManager_eventGetSkuAt_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UDiscordStoreManager_GetSkuAt_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStoreManager_GetSkuAt_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordStoreManager_GetSkuAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStoreManager_eventGetSkuAt_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordSku, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordStoreManager_GetSkuAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStoreManager_GetSkuAt_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStoreManager_GetSkuAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStoreManager_GetSkuAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordStoreManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordStoreManager_GetSkuAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordStoreManager, nullptr, "GetSkuAt", nullptr, nullptr, sizeof(DiscordStoreManager_eventGetSkuAt_Parms), Z_Construct_UFunction_UDiscordStoreManager_GetSkuAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStoreManager_GetSkuAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordStoreManager_GetSkuAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStoreManager_GetSkuAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordStoreManager_GetSkuAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordStoreManager_GetSkuAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordStoreManager_GetStoreManager_Statics
	{
		struct DiscordStoreManager_eventGetStoreManager_Parms
		{
			const UDiscordCore* DiscordCore;
			UDiscordStoreManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscordCore_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DiscordCore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStoreManager_GetStoreManager_Statics::NewProp_DiscordCore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordStoreManager_GetStoreManager_Statics::NewProp_DiscordCore = { "DiscordCore", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStoreManager_eventGetStoreManager_Parms, DiscordCore), Z_Construct_UClass_UDiscordCore_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDiscordStoreManager_GetStoreManager_Statics::NewProp_DiscordCore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStoreManager_GetStoreManager_Statics::NewProp_DiscordCore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordStoreManager_GetStoreManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStoreManager_eventGetStoreManager_Parms, ReturnValue), Z_Construct_UClass_UDiscordStoreManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordStoreManager_GetStoreManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStoreManager_GetStoreManager_Statics::NewProp_DiscordCore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStoreManager_GetStoreManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStoreManager_GetStoreManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordStoreManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordStoreManager_GetStoreManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordStoreManager, nullptr, "GetStoreManager", nullptr, nullptr, sizeof(DiscordStoreManager_eventGetStoreManager_Parms), Z_Construct_UFunction_UDiscordStoreManager_GetStoreManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStoreManager_GetStoreManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordStoreManager_GetStoreManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStoreManager_GetStoreManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordStoreManager_GetStoreManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordStoreManager_GetStoreManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordStoreManager_HasSkuEntitlement_Statics
	{
		struct DiscordStoreManager_eventHasSkuEntitlement_Parms
		{
			int64 SkuId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkuId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_SkuId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStoreManager_HasSkuEntitlement_Statics::NewProp_SkuId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordStoreManager_HasSkuEntitlement_Statics::NewProp_SkuId = { "SkuId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStoreManager_eventHasSkuEntitlement_Parms, SkuId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordStoreManager_HasSkuEntitlement_Statics::NewProp_SkuId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStoreManager_HasSkuEntitlement_Statics::NewProp_SkuId_MetaData)) };
	void Z_Construct_UFunction_UDiscordStoreManager_HasSkuEntitlement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DiscordStoreManager_eventHasSkuEntitlement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDiscordStoreManager_HasSkuEntitlement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DiscordStoreManager_eventHasSkuEntitlement_Parms), &Z_Construct_UFunction_UDiscordStoreManager_HasSkuEntitlement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordStoreManager_HasSkuEntitlement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStoreManager_HasSkuEntitlement_Statics::NewProp_SkuId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStoreManager_HasSkuEntitlement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStoreManager_HasSkuEntitlement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordStoreManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordStoreManager_HasSkuEntitlement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordStoreManager, nullptr, "HasSkuEntitlement", nullptr, nullptr, sizeof(DiscordStoreManager_eventHasSkuEntitlement_Parms), Z_Construct_UFunction_UDiscordStoreManager_HasSkuEntitlement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStoreManager_HasSkuEntitlement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordStoreManager_HasSkuEntitlement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStoreManager_HasSkuEntitlement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordStoreManager_HasSkuEntitlement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordStoreManager_HasSkuEntitlement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDiscordStoreManager_NoRegister()
	{
		return UDiscordStoreManager::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordStoreManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEntitlementCreate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEntitlementCreate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEntitlementDelete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEntitlementDelete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordStoreManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDiscordManager,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordStore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiscordStoreManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordStoreManager_CountEntitlements, "CountEntitlements" }, // 4073486620
		{ &Z_Construct_UFunction_UDiscordStoreManager_CountSkus, "CountSkus" }, // 1458554962
		{ &Z_Construct_UFunction_UDiscordStoreManager_GetEntitlement, "GetEntitlement" }, // 57961304
		{ &Z_Construct_UFunction_UDiscordStoreManager_GetEntitlementAt, "GetEntitlementAt" }, // 928907264
		{ &Z_Construct_UFunction_UDiscordStoreManager_GetSku, "GetSku" }, // 614754328
		{ &Z_Construct_UFunction_UDiscordStoreManager_GetSkuAt, "GetSkuAt" }, // 4117748431
		{ &Z_Construct_UFunction_UDiscordStoreManager_GetStoreManager, "GetStoreManager" }, // 1160367274
		{ &Z_Construct_UFunction_UDiscordStoreManager_HasSkuEntitlement, "HasSkuEntitlement" }, // 2000697077
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordStoreManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DiscordStoreManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DiscordStoreManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordStoreManager_Statics::NewProp_OnEntitlementCreate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordStoreManager" },
		{ "ModuleRelativePath", "Public/DiscordStoreManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordStoreManager_Statics::NewProp_OnEntitlementCreate = { "OnEntitlementCreate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordStoreManager, OnEntitlementCreate), Z_Construct_UDelegateFunction_DiscordStore_DiscordEntitlementEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordStoreManager_Statics::NewProp_OnEntitlementCreate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordStoreManager_Statics::NewProp_OnEntitlementCreate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordStoreManager_Statics::NewProp_OnEntitlementDelete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordStoreManager" },
		{ "ModuleRelativePath", "Public/DiscordStoreManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordStoreManager_Statics::NewProp_OnEntitlementDelete = { "OnEntitlementDelete", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordStoreManager, OnEntitlementDelete), Z_Construct_UDelegateFunction_DiscordStore_DiscordEntitlementEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordStoreManager_Statics::NewProp_OnEntitlementDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordStoreManager_Statics::NewProp_OnEntitlementDelete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDiscordStoreManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordStoreManager_Statics::NewProp_OnEntitlementCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordStoreManager_Statics::NewProp_OnEntitlementDelete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordStoreManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordStoreManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiscordStoreManager_Statics::ClassParams = {
		&UDiscordStoreManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDiscordStoreManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordStoreManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDiscordStoreManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordStoreManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiscordStoreManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiscordStoreManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordStoreManager, 1173379653);
	template<> DISCORDSTORE_API UClass* StaticClass<UDiscordStoreManager>()
	{
		return UDiscordStoreManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordStoreManager(Z_Construct_UClass_UDiscordStoreManager, &UDiscordStoreManager::StaticClass, TEXT("/Script/DiscordStore"), TEXT("UDiscordStoreManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordStoreManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
