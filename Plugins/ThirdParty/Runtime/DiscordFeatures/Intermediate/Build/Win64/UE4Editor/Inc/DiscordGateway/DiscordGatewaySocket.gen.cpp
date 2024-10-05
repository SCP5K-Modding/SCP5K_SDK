// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordGateway/Public/DiscordGatewaySocket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordGatewaySocket() {}
// Cross Module References
	DISCORDGATEWAY_API UClass* Z_Construct_UClass_UDiscordGatewaySocket_NoRegister();
	DISCORDGATEWAY_API UClass* Z_Construct_UClass_UDiscordGatewaySocket();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DiscordGateway();
	DISCORDGATEWAY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties();
	DISCORDGATEWAY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayShard();
	DISCORDGATEWAY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate();
	DISCORDGATEWAY_API UEnum* Z_Construct_UEnum_DiscordGateway_EDiscordGatewayIntents();
// End Cross Module References
	DEFINE_FUNCTION(UDiscordGatewaySocket::execCloseConnection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseConnection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordGatewaySocket::execIsConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordGatewaySocket::execSendCommand)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Op);
		P_GET_PROPERTY(FStrProperty,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendCommand(Z_Param_Op,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordGatewaySocket::execSendIdentifyCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Token);
		P_GET_STRUCT_REF(FDiscordGatewayIdentifyProperties,Z_Param_Out_Properties);
		P_GET_STRUCT_REF(FDiscordGatewayShard,Z_Param_Out_Shard);
		P_GET_STRUCT_REF(FDiscordGatewayStatusUpdate,Z_Param_Out_Presence);
		P_GET_TARRAY_REF(EDiscordGatewayIntents,Z_Param_Out_Intents);
		P_GET_PROPERTY(FIntProperty,Z_Param_LargeThreshold);
		P_GET_UBOOL(Z_Param_bGuildSubscriptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendIdentifyCommand(Z_Param_Token,Z_Param_Out_Properties,Z_Param_Out_Shard,Z_Param_Out_Presence,Z_Param_Out_Intents,Z_Param_LargeThreshold,Z_Param_bGuildSubscriptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordGatewaySocket::execSendRaw)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendRaw(Z_Param_Data);
		P_NATIVE_END;
	}
	void UDiscordGatewaySocket::StaticRegisterNativesUDiscordGatewaySocket()
	{
		UClass* Class = UDiscordGatewaySocket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseConnection", &UDiscordGatewaySocket::execCloseConnection },
			{ "IsConnected", &UDiscordGatewaySocket::execIsConnected },
			{ "SendCommand", &UDiscordGatewaySocket::execSendCommand },
			{ "SendIdentifyCommand", &UDiscordGatewaySocket::execSendIdentifyCommand },
			{ "SendRaw", &UDiscordGatewaySocket::execSendRaw },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiscordGatewaySocket_CloseConnection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordGatewaySocket_CloseConnection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordGatewaySocket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordGatewaySocket_CloseConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordGatewaySocket, nullptr, "CloseConnection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordGatewaySocket_CloseConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordGatewaySocket_CloseConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordGatewaySocket_CloseConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordGatewaySocket_CloseConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordGatewaySocket_IsConnected_Statics
	{
		struct DiscordGatewaySocket_eventIsConnected_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDiscordGatewaySocket_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DiscordGatewaySocket_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDiscordGatewaySocket_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DiscordGatewaySocket_eventIsConnected_Parms), &Z_Construct_UFunction_UDiscordGatewaySocket_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordGatewaySocket_IsConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordGatewaySocket_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordGatewaySocket_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordGatewaySocket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordGatewaySocket_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordGatewaySocket, nullptr, "IsConnected", nullptr, nullptr, sizeof(DiscordGatewaySocket_eventIsConnected_Parms), Z_Construct_UFunction_UDiscordGatewaySocket_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordGatewaySocket_IsConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordGatewaySocket_IsConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordGatewaySocket_IsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordGatewaySocket_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordGatewaySocket_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordGatewaySocket_SendCommand_Statics
	{
		struct DiscordGatewaySocket_eventSendCommand_Parms
		{
			int32 Op;
			FString Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Op_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Op;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordGatewaySocket_SendCommand_Statics::NewProp_Op_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDiscordGatewaySocket_SendCommand_Statics::NewProp_Op = { "Op", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordGatewaySocket_eventSendCommand_Parms, Op), METADATA_PARAMS(Z_Construct_UFunction_UDiscordGatewaySocket_SendCommand_Statics::NewProp_Op_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordGatewaySocket_SendCommand_Statics::NewProp_Op_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordGatewaySocket_SendCommand_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordGatewaySocket_SendCommand_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordGatewaySocket_eventSendCommand_Parms, Data), METADATA_PARAMS(Z_Construct_UFunction_UDiscordGatewaySocket_SendCommand_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordGatewaySocket_SendCommand_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordGatewaySocket_SendCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordGatewaySocket_SendCommand_Statics::NewProp_Op,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordGatewaySocket_SendCommand_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordGatewaySocket_SendCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordGatewaySocket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordGatewaySocket_SendCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordGatewaySocket, nullptr, "SendCommand", nullptr, nullptr, sizeof(DiscordGatewaySocket_eventSendCommand_Parms), Z_Construct_UFunction_UDiscordGatewaySocket_SendCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordGatewaySocket_SendCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordGatewaySocket_SendCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordGatewaySocket_SendCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordGatewaySocket_SendCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordGatewaySocket_SendCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics
	{
		struct DiscordGatewaySocket_eventSendIdentifyCommand_Parms
		{
			FString Token;
			FDiscordGatewayIdentifyProperties Properties;
			FDiscordGatewayShard Shard;
			FDiscordGatewayStatusUpdate Presence;
			TArray<EDiscordGatewayIntents> Intents;
			int32 LargeThreshold;
			bool bGuildSubscriptions;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Token;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Properties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Shard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Presence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Presence;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Intents_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Intents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Intents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LargeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LargeThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGuildSubscriptions_MetaData[];
#endif
		static void NewProp_bGuildSubscriptions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGuildSubscriptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordGatewaySocket_eventSendIdentifyCommand_Parms, Token), METADATA_PARAMS(Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Token_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Properties_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordGatewaySocket_eventSendIdentifyCommand_Parms, Properties), Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties, METADATA_PARAMS(Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Properties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Shard_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Shard = { "Shard", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordGatewaySocket_eventSendIdentifyCommand_Parms, Shard), Z_Construct_UScriptStruct_FDiscordGatewayShard, METADATA_PARAMS(Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Shard_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Shard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Presence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Presence = { "Presence", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordGatewaySocket_eventSendIdentifyCommand_Parms, Presence), Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate, METADATA_PARAMS(Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Presence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Presence_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Intents_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Intents_Inner = { "Intents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DiscordGateway_EDiscordGatewayIntents, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Intents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Intents = { "Intents", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordGatewaySocket_eventSendIdentifyCommand_Parms, Intents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Intents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Intents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_LargeThreshold_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_LargeThreshold = { "LargeThreshold", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordGatewaySocket_eventSendIdentifyCommand_Parms, LargeThreshold), METADATA_PARAMS(Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_LargeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_LargeThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_bGuildSubscriptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_bGuildSubscriptions_SetBit(void* Obj)
	{
		((DiscordGatewaySocket_eventSendIdentifyCommand_Parms*)Obj)->bGuildSubscriptions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_bGuildSubscriptions = { "bGuildSubscriptions", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DiscordGatewaySocket_eventSendIdentifyCommand_Parms), &Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_bGuildSubscriptions_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_bGuildSubscriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_bGuildSubscriptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Properties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Shard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Presence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Intents_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Intents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_Intents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_LargeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::NewProp_bGuildSubscriptions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordGatewaySocket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordGatewaySocket, nullptr, "SendIdentifyCommand", nullptr, nullptr, sizeof(DiscordGatewaySocket_eventSendIdentifyCommand_Parms), Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordGatewaySocket_SendRaw_Statics
	{
		struct DiscordGatewaySocket_eventSendRaw_Parms
		{
			FString Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordGatewaySocket_SendRaw_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordGatewaySocket_SendRaw_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordGatewaySocket_eventSendRaw_Parms, Data), METADATA_PARAMS(Z_Construct_UFunction_UDiscordGatewaySocket_SendRaw_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordGatewaySocket_SendRaw_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordGatewaySocket_SendRaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordGatewaySocket_SendRaw_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordGatewaySocket_SendRaw_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordGatewaySocket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordGatewaySocket_SendRaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordGatewaySocket, nullptr, "SendRaw", nullptr, nullptr, sizeof(DiscordGatewaySocket_eventSendRaw_Parms), Z_Construct_UFunction_UDiscordGatewaySocket_SendRaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordGatewaySocket_SendRaw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordGatewaySocket_SendRaw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordGatewaySocket_SendRaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordGatewaySocket_SendRaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordGatewaySocket_SendRaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDiscordGatewaySocket_NoRegister()
	{
		return UDiscordGatewaySocket::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordGatewaySocket_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordGatewaySocket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordGateway,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiscordGatewaySocket_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordGatewaySocket_CloseConnection, "CloseConnection" }, // 1914752102
		{ &Z_Construct_UFunction_UDiscordGatewaySocket_IsConnected, "IsConnected" }, // 524810505
		{ &Z_Construct_UFunction_UDiscordGatewaySocket_SendCommand, "SendCommand" }, // 894516052
		{ &Z_Construct_UFunction_UDiscordGatewaySocket_SendIdentifyCommand, "SendIdentifyCommand" }, // 3627963020
		{ &Z_Construct_UFunction_UDiscordGatewaySocket_SendRaw, "SendRaw" }, // 1483296456
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordGatewaySocket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DiscordGatewaySocket.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DiscordGatewaySocket.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordGatewaySocket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordGatewaySocket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiscordGatewaySocket_Statics::ClassParams = {
		&UDiscordGatewaySocket::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDiscordGatewaySocket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordGatewaySocket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiscordGatewaySocket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiscordGatewaySocket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordGatewaySocket, 940234021);
	template<> DISCORDGATEWAY_API UClass* StaticClass<UDiscordGatewaySocket>()
	{
		return UDiscordGatewaySocket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordGatewaySocket(Z_Construct_UClass_UDiscordGatewaySocket, &UDiscordGatewaySocket::StaticClass, TEXT("/Script/DiscordGateway"), TEXT("UDiscordGatewaySocket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordGatewaySocket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
