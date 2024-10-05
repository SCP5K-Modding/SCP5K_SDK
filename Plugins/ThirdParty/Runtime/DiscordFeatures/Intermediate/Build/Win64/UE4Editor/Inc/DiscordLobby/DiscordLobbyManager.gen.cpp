// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordLobby/Public/DiscordLobbyManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordLobbyManager() {}
// Cross Module References
	DISCORDLOBBY_API UClass* Z_Construct_UClass_UDiscordLobbyManager_NoRegister();
	DISCORDLOBBY_API UClass* Z_Construct_UClass_UDiscordLobbyManager();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordManager();
	UPackage* Z_Construct_UPackage__Script_DiscordLobby();
	DISCORDLOBBY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordLobby();
	DISCORDLOBBY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordLobbyTransaction();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordCore_NoRegister();
	DISCORDLOBBY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordLobbyMemberTransaction();
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordUser();
	DISCORDLOBBY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordLobbySearchQuery();
	DISCORDLOBBY_API UFunction* Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyUpdateEvent__DelegateSignature();
	DISCORDLOBBY_API UFunction* Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature();
	DISCORDLOBBY_API UFunction* Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyMemberEvent__DelegateSignature();
	DISCORDLOBBY_API UFunction* Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyMessageEvent__DelegateSignature();
	DISCORDLOBBY_API UFunction* Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbySpeakingEvent__DelegateSignature();
	DISCORDLOBBY_API UFunction* Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UDiscordLobbyManager::execConnectNetwork)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_LobbyId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectNetwork(Z_Param_LobbyId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyManager::execDisconnectNetwork)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_LobbyId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisconnectNetwork(Z_Param_LobbyId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyManager::execFlushNetwork)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlushNetwork();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyManager::execGetLobby)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_LobbyId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordLobby*)Z_Param__Result=P_THIS->GetLobby(Z_Param_LobbyId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyManager::execGetLobbyActivitySecret)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_LobbyId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLobbyActivitySecret(Z_Param_LobbyId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyManager::execGetLobbyCreateTransaction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordLobbyTransaction*)Z_Param__Result=P_THIS->GetLobbyCreateTransaction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyManager::execGetLobbyId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetLobbyId(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyManager::execGetLobbyManager)
	{
		P_GET_OBJECT(UDiscordCore,Z_Param_DiscordCore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDiscordLobbyManager**)Z_Param__Result=UDiscordLobbyManager::GetLobbyManager(Z_Param_DiscordCore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyManager::execGetLobbyMetadataKey)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_LobbyId);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLobbyMetadataKey(Z_Param_LobbyId,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyManager::execGetLobbyMetadataValue)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_LobbyId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLobbyMetadataValue(Z_Param_LobbyId,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyManager::execGetLobbyUpdateTransaction)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_LobbyId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordLobbyTransaction*)Z_Param__Result=P_THIS->GetLobbyUpdateTransaction(Z_Param_LobbyId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyManager::execGetMemberMetadataKey)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_LobbyId);
		P_GET_PROPERTY(FInt64Property,Z_Param_UserId);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMemberMetadataKey(Z_Param_LobbyId,Z_Param_UserId,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyManager::execGetMemberMetadataValue)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_LobbyId);
		P_GET_PROPERTY(FInt64Property,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMemberMetadataValue(Z_Param_LobbyId,Z_Param_UserId,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyManager::execGetMemberUpdateTransaction)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_LobbyId);
		P_GET_PROPERTY(FInt64Property,Z_Param_MemberId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordLobbyMemberTransaction*)Z_Param__Result=P_THIS->GetMemberUpdateTransaction(Z_Param_LobbyId,Z_Param_MemberId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyManager::execGetMemberUser)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_LobbyId);
		P_GET_PROPERTY(FInt64Property,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordUser*)Z_Param__Result=P_THIS->GetMemberUser(Z_Param_LobbyId,Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyManager::execGetMemberUserId)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_LobbyId);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetMemberUserId(Z_Param_LobbyId,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyManager::execGetSearchQuery)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordLobbySearchQuery*)Z_Param__Result=P_THIS->GetSearchQuery();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyManager::execLobbyCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->LobbyCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyManager::execLobbyMetadataCount)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_LobbyId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->LobbyMetadataCount(Z_Param_LobbyId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyManager::execMemberCount)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_LobbyId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->MemberCount(Z_Param_LobbyId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyManager::execMemberMetadataCount)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_LobbyId);
		P_GET_PROPERTY(FInt64Property,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->MemberMetadataCount(Z_Param_LobbyId,Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyManager::execOpenNetworkChannel)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_LobbyId);
		P_GET_PROPERTY(FByteProperty,Z_Param_ChannelId);
		P_GET_UBOOL(Z_Param_bReliable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenNetworkChannel(Z_Param_LobbyId,Z_Param_ChannelId,Z_Param_bReliable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyManager::execSendNetworkMessage)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_LobbyId);
		P_GET_PROPERTY(FInt64Property,Z_Param_UserId);
		P_GET_PROPERTY(FByteProperty,Z_Param_ChannelId);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendNetworkMessage(Z_Param_LobbyId,Z_Param_UserId,Z_Param_ChannelId,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	void UDiscordLobbyManager::StaticRegisterNativesUDiscordLobbyManager()
	{
		UClass* Class = UDiscordLobbyManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectNetwork", &UDiscordLobbyManager::execConnectNetwork },
			{ "DisconnectNetwork", &UDiscordLobbyManager::execDisconnectNetwork },
			{ "FlushNetwork", &UDiscordLobbyManager::execFlushNetwork },
			{ "GetLobby", &UDiscordLobbyManager::execGetLobby },
			{ "GetLobbyActivitySecret", &UDiscordLobbyManager::execGetLobbyActivitySecret },
			{ "GetLobbyCreateTransaction", &UDiscordLobbyManager::execGetLobbyCreateTransaction },
			{ "GetLobbyId", &UDiscordLobbyManager::execGetLobbyId },
			{ "GetLobbyManager", &UDiscordLobbyManager::execGetLobbyManager },
			{ "GetLobbyMetadataKey", &UDiscordLobbyManager::execGetLobbyMetadataKey },
			{ "GetLobbyMetadataValue", &UDiscordLobbyManager::execGetLobbyMetadataValue },
			{ "GetLobbyUpdateTransaction", &UDiscordLobbyManager::execGetLobbyUpdateTransaction },
			{ "GetMemberMetadataKey", &UDiscordLobbyManager::execGetMemberMetadataKey },
			{ "GetMemberMetadataValue", &UDiscordLobbyManager::execGetMemberMetadataValue },
			{ "GetMemberUpdateTransaction", &UDiscordLobbyManager::execGetMemberUpdateTransaction },
			{ "GetMemberUser", &UDiscordLobbyManager::execGetMemberUser },
			{ "GetMemberUserId", &UDiscordLobbyManager::execGetMemberUserId },
			{ "GetSearchQuery", &UDiscordLobbyManager::execGetSearchQuery },
			{ "LobbyCount", &UDiscordLobbyManager::execLobbyCount },
			{ "LobbyMetadataCount", &UDiscordLobbyManager::execLobbyMetadataCount },
			{ "MemberCount", &UDiscordLobbyManager::execMemberCount },
			{ "MemberMetadataCount", &UDiscordLobbyManager::execMemberMetadataCount },
			{ "OpenNetworkChannel", &UDiscordLobbyManager::execOpenNetworkChannel },
			{ "SendNetworkMessage", &UDiscordLobbyManager::execSendNetworkMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_ConnectNetwork_Statics
	{
		struct DiscordLobbyManager_eventConnectNetwork_Parms
		{
			int64 LobbyId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LobbyId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_ConnectNetwork_Statics::NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_ConnectNetwork_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventConnectNetwork_Parms, LobbyId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_ConnectNetwork_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_ConnectNetwork_Statics::NewProp_LobbyId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyManager_ConnectNetwork_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_ConnectNetwork_Statics::NewProp_LobbyId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_ConnectNetwork_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_ConnectNetwork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "ConnectNetwork", nullptr, nullptr, sizeof(DiscordLobbyManager_eventConnectNetwork_Parms), Z_Construct_UFunction_UDiscordLobbyManager_ConnectNetwork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_ConnectNetwork_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_ConnectNetwork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_ConnectNetwork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_ConnectNetwork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_ConnectNetwork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_DisconnectNetwork_Statics
	{
		struct DiscordLobbyManager_eventDisconnectNetwork_Parms
		{
			int64 LobbyId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LobbyId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_DisconnectNetwork_Statics::NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_DisconnectNetwork_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventDisconnectNetwork_Parms, LobbyId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_DisconnectNetwork_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_DisconnectNetwork_Statics::NewProp_LobbyId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyManager_DisconnectNetwork_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_DisconnectNetwork_Statics::NewProp_LobbyId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_DisconnectNetwork_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_DisconnectNetwork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "DisconnectNetwork", nullptr, nullptr, sizeof(DiscordLobbyManager_eventDisconnectNetwork_Parms), Z_Construct_UFunction_UDiscordLobbyManager_DisconnectNetwork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_DisconnectNetwork_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_DisconnectNetwork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_DisconnectNetwork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_DisconnectNetwork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_DisconnectNetwork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_FlushNetwork_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_FlushNetwork_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_FlushNetwork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "FlushNetwork", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_FlushNetwork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_FlushNetwork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_FlushNetwork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_FlushNetwork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_GetLobby_Statics
	{
		struct DiscordLobbyManager_eventGetLobby_Parms
		{
			int64 LobbyId;
			FDiscordLobby ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LobbyId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetLobby_Statics::NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobby_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetLobby_Parms, LobbyId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetLobby_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobby_Statics::NewProp_LobbyId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetLobby_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordLobby, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyManager_GetLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetLobby_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "GetLobby", nullptr, nullptr, sizeof(DiscordLobbyManager_eventGetLobby_Parms), Z_Construct_UFunction_UDiscordLobbyManager_GetLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_GetLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_GetLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyActivitySecret_Statics
	{
		struct DiscordLobbyManager_eventGetLobbyActivitySecret_Parms
		{
			int64 LobbyId;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LobbyId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyActivitySecret_Statics::NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyActivitySecret_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetLobbyActivitySecret_Parms, LobbyId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyActivitySecret_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyActivitySecret_Statics::NewProp_LobbyId_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyActivitySecret_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetLobbyActivitySecret_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyActivitySecret_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyActivitySecret_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyActivitySecret_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyActivitySecret_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyActivitySecret_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "GetLobbyActivitySecret", nullptr, nullptr, sizeof(DiscordLobbyManager_eventGetLobbyActivitySecret_Parms), Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyActivitySecret_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyActivitySecret_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyActivitySecret_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyActivitySecret_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyActivitySecret()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyActivitySecret_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyCreateTransaction_Statics
	{
		struct DiscordLobbyManager_eventGetLobbyCreateTransaction_Parms
		{
			FDiscordLobbyTransaction ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyCreateTransaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetLobbyCreateTransaction_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordLobbyTransaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyCreateTransaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyCreateTransaction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyCreateTransaction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyCreateTransaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "GetLobbyCreateTransaction", nullptr, nullptr, sizeof(DiscordLobbyManager_eventGetLobbyCreateTransaction_Parms), Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyCreateTransaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyCreateTransaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyCreateTransaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyCreateTransaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyCreateTransaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyCreateTransaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyId_Statics
	{
		struct DiscordLobbyManager_eventGetLobbyId_Parms
		{
			int32 Index;
			int64 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyId_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetLobbyId_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyId_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyId_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetLobbyId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "GetLobbyId", nullptr, nullptr, sizeof(DiscordLobbyManager_eventGetLobbyId_Parms), Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyManager_Statics
	{
		struct DiscordLobbyManager_eventGetLobbyManager_Parms
		{
			UDiscordCore* DiscordCore;
			UDiscordLobbyManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DiscordCore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyManager_Statics::NewProp_DiscordCore = { "DiscordCore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetLobbyManager_Parms, DiscordCore), Z_Construct_UClass_UDiscordCore_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetLobbyManager_Parms, ReturnValue), Z_Construct_UClass_UDiscordLobbyManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyManager_Statics::NewProp_DiscordCore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "GetLobbyManager", nullptr, nullptr, sizeof(DiscordLobbyManager_eventGetLobbyManager_Parms), Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey_Statics
	{
		struct DiscordLobbyManager_eventGetLobbyMetadataKey_Parms
		{
			int64 LobbyId;
			int32 Index;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey_Statics::NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetLobbyMetadataKey_Parms, LobbyId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetLobbyMetadataKey_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetLobbyMetadataKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "GetLobbyMetadataKey", nullptr, nullptr, sizeof(DiscordLobbyManager_eventGetLobbyMetadataKey_Parms), Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue_Statics
	{
		struct DiscordLobbyManager_eventGetLobbyMetadataValue_Parms
		{
			int64 LobbyId;
			FString Key;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue_Statics::NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetLobbyMetadataValue_Parms, LobbyId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetLobbyMetadataValue_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetLobbyMetadataValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "GetLobbyMetadataValue", nullptr, nullptr, sizeof(DiscordLobbyManager_eventGetLobbyMetadataValue_Parms), Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyUpdateTransaction_Statics
	{
		struct DiscordLobbyManager_eventGetLobbyUpdateTransaction_Parms
		{
			int64 LobbyId;
			FDiscordLobbyTransaction ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LobbyId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyUpdateTransaction_Statics::NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyUpdateTransaction_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetLobbyUpdateTransaction_Parms, LobbyId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyUpdateTransaction_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyUpdateTransaction_Statics::NewProp_LobbyId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyUpdateTransaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetLobbyUpdateTransaction_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordLobbyTransaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyUpdateTransaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyUpdateTransaction_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyUpdateTransaction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyUpdateTransaction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyUpdateTransaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "GetLobbyUpdateTransaction", nullptr, nullptr, sizeof(DiscordLobbyManager_eventGetLobbyUpdateTransaction_Parms), Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyUpdateTransaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyUpdateTransaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyUpdateTransaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyUpdateTransaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyUpdateTransaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyUpdateTransaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics
	{
		struct DiscordLobbyManager_eventGetMemberMetadataKey_Parms
		{
			int64 LobbyId;
			int64 UserId;
			int32 Index;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetMemberMetadataKey_Parms, LobbyId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetMemberMetadataKey_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetMemberMetadataKey_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetMemberMetadataKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "GetMemberMetadataKey", nullptr, nullptr, sizeof(DiscordLobbyManager_eventGetMemberMetadataKey_Parms), Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics
	{
		struct DiscordLobbyManager_eventGetMemberMetadataValue_Parms
		{
			int64 LobbyId;
			int64 UserId;
			FString Key;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetMemberMetadataValue_Parms, LobbyId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetMemberMetadataValue_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetMemberMetadataValue_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetMemberMetadataValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "GetMemberMetadataValue", nullptr, nullptr, sizeof(DiscordLobbyManager_eventGetMemberMetadataValue_Parms), Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction_Statics
	{
		struct DiscordLobbyManager_eventGetMemberUpdateTransaction_Parms
		{
			int64 LobbyId;
			int64 MemberId;
			FDiscordLobbyMemberTransaction ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_MemberId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction_Statics::NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetMemberUpdateTransaction_Parms, LobbyId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction_Statics::NewProp_MemberId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction_Statics::NewProp_MemberId = { "MemberId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetMemberUpdateTransaction_Parms, MemberId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction_Statics::NewProp_MemberId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction_Statics::NewProp_MemberId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetMemberUpdateTransaction_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordLobbyMemberTransaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction_Statics::NewProp_MemberId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "GetMemberUpdateTransaction", nullptr, nullptr, sizeof(DiscordLobbyManager_eventGetMemberUpdateTransaction_Parms), Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser_Statics
	{
		struct DiscordLobbyManager_eventGetMemberUser_Parms
		{
			int64 LobbyId;
			int64 UserId;
			FDiscordUser ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LobbyId;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser_Statics::NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetMemberUser_Parms, LobbyId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetMemberUser_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetMemberUser_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordUser, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "GetMemberUser", nullptr, nullptr, sizeof(DiscordLobbyManager_eventGetMemberUser_Parms), Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId_Statics
	{
		struct DiscordLobbyManager_eventGetMemberUserId_Parms
		{
			int64 LobbyId;
			int32 Index;
			int64 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId_Statics::NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetMemberUserId_Parms, LobbyId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetMemberUserId_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetMemberUserId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "GetMemberUserId", nullptr, nullptr, sizeof(DiscordLobbyManager_eventGetMemberUserId_Parms), Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_GetSearchQuery_Statics
	{
		struct DiscordLobbyManager_eventGetSearchQuery_Parms
		{
			FDiscordLobbySearchQuery ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_GetSearchQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventGetSearchQuery_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordLobbySearchQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyManager_GetSearchQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_GetSearchQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_GetSearchQuery_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_GetSearchQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "GetSearchQuery", nullptr, nullptr, sizeof(DiscordLobbyManager_eventGetSearchQuery_Parms), Z_Construct_UFunction_UDiscordLobbyManager_GetSearchQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetSearchQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_GetSearchQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_GetSearchQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_GetSearchQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_GetSearchQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_LobbyCount_Statics
	{
		struct DiscordLobbyManager_eventLobbyCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_LobbyCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventLobbyCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyManager_LobbyCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_LobbyCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_LobbyCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_LobbyCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "LobbyCount", nullptr, nullptr, sizeof(DiscordLobbyManager_eventLobbyCount_Parms), Z_Construct_UFunction_UDiscordLobbyManager_LobbyCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_LobbyCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_LobbyCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_LobbyCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_LobbyCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_LobbyCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_LobbyMetadataCount_Statics
	{
		struct DiscordLobbyManager_eventLobbyMetadataCount_Parms
		{
			int64 LobbyId;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LobbyId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_LobbyMetadataCount_Statics::NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_LobbyMetadataCount_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventLobbyMetadataCount_Parms, LobbyId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_LobbyMetadataCount_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_LobbyMetadataCount_Statics::NewProp_LobbyId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_LobbyMetadataCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventLobbyMetadataCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyManager_LobbyMetadataCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_LobbyMetadataCount_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_LobbyMetadataCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_LobbyMetadataCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_LobbyMetadataCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "LobbyMetadataCount", nullptr, nullptr, sizeof(DiscordLobbyManager_eventLobbyMetadataCount_Parms), Z_Construct_UFunction_UDiscordLobbyManager_LobbyMetadataCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_LobbyMetadataCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_LobbyMetadataCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_LobbyMetadataCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_LobbyMetadataCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_LobbyMetadataCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_MemberCount_Statics
	{
		struct DiscordLobbyManager_eventMemberCount_Parms
		{
			int64 LobbyId;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LobbyId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_MemberCount_Statics::NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_MemberCount_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventMemberCount_Parms, LobbyId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_MemberCount_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_MemberCount_Statics::NewProp_LobbyId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_MemberCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventMemberCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyManager_MemberCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_MemberCount_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_MemberCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_MemberCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_MemberCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "MemberCount", nullptr, nullptr, sizeof(DiscordLobbyManager_eventMemberCount_Parms), Z_Construct_UFunction_UDiscordLobbyManager_MemberCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_MemberCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_MemberCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_MemberCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_MemberCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_MemberCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount_Statics
	{
		struct DiscordLobbyManager_eventMemberMetadataCount_Parms
		{
			int64 LobbyId;
			int64 UserId;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount_Statics::NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventMemberMetadataCount_Parms, LobbyId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventMemberMetadataCount_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventMemberMetadataCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "MemberMetadataCount", nullptr, nullptr, sizeof(DiscordLobbyManager_eventMemberMetadataCount_Parms), Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics
	{
		struct DiscordLobbyManager_eventOpenNetworkChannel_Parms
		{
			int64 LobbyId;
			uint8 ChannelId;
			bool bReliable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChannelId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReliable_MetaData[];
#endif
		static void NewProp_bReliable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReliable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventOpenNetworkChannel_Parms, LobbyId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::NewProp_ChannelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventOpenNetworkChannel_Parms, ChannelId), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::NewProp_ChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::NewProp_ChannelId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::NewProp_bReliable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::NewProp_bReliable_SetBit(void* Obj)
	{
		((DiscordLobbyManager_eventOpenNetworkChannel_Parms*)Obj)->bReliable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::NewProp_bReliable = { "bReliable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DiscordLobbyManager_eventOpenNetworkChannel_Parms), &Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::NewProp_bReliable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::NewProp_bReliable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::NewProp_bReliable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::NewProp_ChannelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::NewProp_bReliable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "OpenNetworkChannel", nullptr, nullptr, sizeof(DiscordLobbyManager_eventOpenNetworkChannel_Parms), Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics
	{
		struct DiscordLobbyManager_eventSendNetworkMessage_Parms
		{
			int64 LobbyId;
			int64 UserId;
			uint8 ChannelId;
			TArray<uint8> Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChannelId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventSendNetworkMessage_Parms, LobbyId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventSendNetworkMessage_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::NewProp_ChannelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventSendNetworkMessage_Parms, ChannelId), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::NewProp_ChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::NewProp_ChannelId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyManager_eventSendNetworkMessage_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::NewProp_ChannelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyManager, nullptr, "SendNetworkMessage", nullptr, nullptr, sizeof(DiscordLobbyManager_eventSendNetworkMessage_Parms), Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDiscordLobbyManager_NoRegister()
	{
		return UDiscordLobbyManager::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordLobbyManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLobbyUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLobbyDelete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyDelete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMemberConnect_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMemberConnect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMemberUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMemberUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMemberDisconnect_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMemberDisconnect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLobbyMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSpeaking_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpeaking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNetworkMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNetworkMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordLobbyManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDiscordManager,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordLobby,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiscordLobbyManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordLobbyManager_ConnectNetwork, "ConnectNetwork" }, // 3035906067
		{ &Z_Construct_UFunction_UDiscordLobbyManager_DisconnectNetwork, "DisconnectNetwork" }, // 1730224252
		{ &Z_Construct_UFunction_UDiscordLobbyManager_FlushNetwork, "FlushNetwork" }, // 3403251144
		{ &Z_Construct_UFunction_UDiscordLobbyManager_GetLobby, "GetLobby" }, // 4098259661
		{ &Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyActivitySecret, "GetLobbyActivitySecret" }, // 2825086395
		{ &Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyCreateTransaction, "GetLobbyCreateTransaction" }, // 2603993635
		{ &Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyId, "GetLobbyId" }, // 3292518807
		{ &Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyManager, "GetLobbyManager" }, // 1846758851
		{ &Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataKey, "GetLobbyMetadataKey" }, // 2189204575
		{ &Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyMetadataValue, "GetLobbyMetadataValue" }, // 3482402919
		{ &Z_Construct_UFunction_UDiscordLobbyManager_GetLobbyUpdateTransaction, "GetLobbyUpdateTransaction" }, // 4034687718
		{ &Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataKey, "GetMemberMetadataKey" }, // 3762818242
		{ &Z_Construct_UFunction_UDiscordLobbyManager_GetMemberMetadataValue, "GetMemberMetadataValue" }, // 1908767898
		{ &Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUpdateTransaction, "GetMemberUpdateTransaction" }, // 3795297963
		{ &Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUser, "GetMemberUser" }, // 1097002146
		{ &Z_Construct_UFunction_UDiscordLobbyManager_GetMemberUserId, "GetMemberUserId" }, // 3692592319
		{ &Z_Construct_UFunction_UDiscordLobbyManager_GetSearchQuery, "GetSearchQuery" }, // 1839635792
		{ &Z_Construct_UFunction_UDiscordLobbyManager_LobbyCount, "LobbyCount" }, // 2411288412
		{ &Z_Construct_UFunction_UDiscordLobbyManager_LobbyMetadataCount, "LobbyMetadataCount" }, // 1983145946
		{ &Z_Construct_UFunction_UDiscordLobbyManager_MemberCount, "MemberCount" }, // 465445858
		{ &Z_Construct_UFunction_UDiscordLobbyManager_MemberMetadataCount, "MemberMetadataCount" }, // 2813812928
		{ &Z_Construct_UFunction_UDiscordLobbyManager_OpenNetworkChannel, "OpenNetworkChannel" }, // 4256735626
		{ &Z_Construct_UFunction_UDiscordLobbyManager_SendNetworkMessage, "SendNetworkMessage" }, // 3206830657
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordLobbyManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DiscordLobbyManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnLobbyUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordLobbyManager" },
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnLobbyUpdate = { "OnLobbyUpdate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordLobbyManager, OnLobbyUpdate), Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyUpdateEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnLobbyUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnLobbyUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnLobbyDelete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordLobbyManager" },
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnLobbyDelete = { "OnLobbyDelete", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordLobbyManager, OnLobbyDelete), Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyDeleteEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnLobbyDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnLobbyDelete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnMemberConnect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordLobbyManager" },
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnMemberConnect = { "OnMemberConnect", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordLobbyManager, OnMemberConnect), Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyMemberEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnMemberConnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnMemberConnect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnMemberUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordLobbyManager" },
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnMemberUpdate = { "OnMemberUpdate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordLobbyManager, OnMemberUpdate), Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyMemberEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnMemberUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnMemberUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnMemberDisconnect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordLobbyManager" },
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnMemberDisconnect = { "OnMemberDisconnect", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordLobbyManager, OnMemberDisconnect), Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyMemberEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnMemberDisconnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnMemberDisconnect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnLobbyMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordLobbyManager" },
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnLobbyMessage = { "OnLobbyMessage", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordLobbyManager, OnLobbyMessage), Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyMessageEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnLobbyMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnLobbyMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnSpeaking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordLobbyManager" },
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnSpeaking = { "OnSpeaking", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordLobbyManager, OnSpeaking), Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbySpeakingEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnSpeaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnSpeaking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnNetworkMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordLobbyManager" },
		{ "ModuleRelativePath", "Public/DiscordLobbyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnNetworkMessage = { "OnNetworkMessage", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordLobbyManager, OnNetworkMessage), Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnNetworkMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnNetworkMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDiscordLobbyManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnLobbyUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnLobbyDelete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnMemberConnect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnMemberUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnMemberDisconnect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnLobbyMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnSpeaking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordLobbyManager_Statics::NewProp_OnNetworkMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordLobbyManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordLobbyManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiscordLobbyManager_Statics::ClassParams = {
		&UDiscordLobbyManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDiscordLobbyManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordLobbyManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDiscordLobbyManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordLobbyManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiscordLobbyManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiscordLobbyManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordLobbyManager, 1600900235);
	template<> DISCORDLOBBY_API UClass* StaticClass<UDiscordLobbyManager>()
	{
		return UDiscordLobbyManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordLobbyManager(Z_Construct_UClass_UDiscordLobbyManager, &UDiscordLobbyManager::StaticClass, TEXT("/Script/DiscordLobby"), TEXT("UDiscordLobbyManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordLobbyManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
