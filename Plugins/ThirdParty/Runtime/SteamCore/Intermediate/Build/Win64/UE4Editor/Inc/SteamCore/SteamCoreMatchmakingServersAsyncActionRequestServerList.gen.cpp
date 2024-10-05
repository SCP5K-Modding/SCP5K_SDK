// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreMatchmakingServersAsyncActionRequestServerList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreMatchmakingServersAsyncActionRequestServerList() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGameServerItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UServerFilter_NoRegister();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleteDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execHandleCallback)
	{
		P_GET_STRUCT_REF(FGameServerItem,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execHandleServerListFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleServerListFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestFavoritesServerListAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
		P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestFavoritesServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestFriendsServerListAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
		P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestFriendsServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestHistoryServerListAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
		P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestHistoryServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestInternetServerListAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
		P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestInternetServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestLANServerListAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
		P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestLANServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestSpectatorServerListAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
		P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestSpectatorServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
		P_NATIVE_END;
	}
	void USteamCoreMatchmakingServersAsyncActionRequestServerList::StaticRegisterNativesUSteamCoreMatchmakingServersAsyncActionRequestServerList()
	{
		UClass* Class = USteamCoreMatchmakingServersAsyncActionRequestServerList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreMatchmakingServersAsyncActionRequestServerList::execHandleCallback },
			{ "HandleServerListFinished", &USteamCoreMatchmakingServersAsyncActionRequestServerList::execHandleServerListFinished },
			{ "RequestFavoritesServerListAsync", &USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestFavoritesServerListAsync },
			{ "RequestFriendsServerListAsync", &USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestFriendsServerListAsync },
			{ "RequestHistoryServerListAsync", &USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestHistoryServerListAsync },
			{ "RequestInternetServerListAsync", &USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestInternetServerListAsync },
			{ "RequestLANServerListAsync", &USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestLANServerListAsync },
			{ "RequestSpectatorServerListAsync", &USteamCoreMatchmakingServersAsyncActionRequestServerList::execRequestSpectatorServerListAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics
	{
		struct SteamCoreMatchmakingServersAsyncActionRequestServerList_eventHandleCallback_Parms
		{
			FGameServerItem Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FGameServerItem, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingServersAsyncActionRequestServerList.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingServersAsyncActionRequestServerList.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "HandleServerListFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics
	{
		struct SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms
		{
			UObject* WorldContextObject;
			int32 AppID;
			float Timeout;
			int32 MaxResults;
			bool bIgnoreNonResponsive;
			UServerFilter* ServerFilter;
			USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_ServerFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingServersAsyncActionRequestServerList.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestFavoritesServerListAsync", nullptr, nullptr, sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics
	{
		struct SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms
		{
			UObject* WorldContextObject;
			int32 AppID;
			float Timeout;
			int32 MaxResults;
			bool bIgnoreNonResponsive;
			UServerFilter* ServerFilter;
			USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_ServerFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingServersAsyncActionRequestServerList.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestFriendsServerListAsync", nullptr, nullptr, sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics
	{
		struct SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms
		{
			UObject* WorldContextObject;
			int32 AppID;
			float Timeout;
			int32 MaxResults;
			bool bIgnoreNonResponsive;
			UServerFilter* ServerFilter;
			USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_ServerFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingServersAsyncActionRequestServerList.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestHistoryServerListAsync", nullptr, nullptr, sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics
	{
		struct SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms
		{
			UObject* WorldContextObject;
			int32 AppID;
			float Timeout;
			int32 MaxResults;
			bool bIgnoreNonResponsive;
			UServerFilter* ServerFilter;
			USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_ServerFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingServersAsyncActionRequestServerList.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestInternetServerListAsync", nullptr, nullptr, sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics
	{
		struct SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms
		{
			UObject* WorldContextObject;
			int32 AppID;
			float Timeout;
			int32 MaxResults;
			bool bIgnoreNonResponsive;
			UServerFilter* ServerFilter;
			USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_ServerFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingServersAsyncActionRequestServerList.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestLANServerListAsync", nullptr, nullptr, sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics
	{
		struct SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms
		{
			UObject* WorldContextObject;
			int32 AppID;
			float Timeout;
			int32 MaxResults;
			bool bIgnoreNonResponsive;
			UServerFilter* ServerFilter;
			USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_MaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_ServerFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingServersAsyncActionRequestServerList.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestSpectatorServerListAsync", nullptr, nullptr, sizeof(SteamCoreMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister()
	{
		return USteamCoreMatchmakingServersAsyncActionRequestServerList::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRefreshCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRefreshCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback, "HandleCallback" }, // 368680621
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished, "HandleServerListFinished" }, // 141804695
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync, "RequestFavoritesServerListAsync" }, // 36814724
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync, "RequestFriendsServerListAsync" }, // 2108252692
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync, "RequestHistoryServerListAsync" }, // 88929862
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync, "RequestInternetServerListAsync" }, // 630722487
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync, "RequestLANServerListAsync" }, // 519448069
		{ &Z_Construct_UFunction_USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync, "RequestSpectatorServerListAsync" }, // 959163554
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreMatchmakingServersAsyncActionRequestServerList.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingServersAsyncActionRequestServerList.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreMatchmakingServersAsyncActionRequestServerList" },
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingServersAsyncActionRequestServerList.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreMatchmakingServersAsyncActionRequestServerList, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnServerUpdatedAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnRefreshCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreMatchmakingServersAsyncActionRequestServerList" },
		{ "ModuleRelativePath", "Public/SteamCoreMatchmakingServersAsyncActionRequestServerList.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnRefreshCompleted = { "OnRefreshCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreMatchmakingServersAsyncActionRequestServerList, OnRefreshCompleted), Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnRefreshCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnRefreshCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnRefreshCompleted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreMatchmakingServersAsyncActionRequestServerList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::ClassParams = {
		&USteamCoreMatchmakingServersAsyncActionRequestServerList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreMatchmakingServersAsyncActionRequestServerList, 1070448056);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreMatchmakingServersAsyncActionRequestServerList>()
	{
		return USteamCoreMatchmakingServersAsyncActionRequestServerList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList(Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList, &USteamCoreMatchmakingServersAsyncActionRequestServerList::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreMatchmakingServersAsyncActionRequestServerList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreMatchmakingServersAsyncActionRequestServerList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
