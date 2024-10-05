// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordNetwork/Public/DiscordNetworkManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordNetworkManager() {}
// Cross Module References
	DISCORDNETWORK_API UClass* Z_Construct_UClass_UDiscordNetworkManager_NoRegister();
	DISCORDNETWORK_API UClass* Z_Construct_UClass_UDiscordNetworkManager();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordManager();
	UPackage* Z_Construct_UPackage__Script_DiscordNetwork();
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUint64();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordOperationBranching();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordResult();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordCore_NoRegister();
	DISCORDNETWORK_API UFunction* Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature();
	DISCORDNETWORK_API UFunction* Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnRouteUpdate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UDiscordNetworkManager::execBlueprint_CloseChannel)
	{
		P_GET_STRUCT(FUint64,Z_Param_PeerId);
		P_GET_PROPERTY(FByteProperty,Z_Param_ChannelId);
		P_GET_ENUM_REF(EDiscordOperationBranching,Z_Param_Out_Exec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDiscordResult*)Z_Param__Result=P_THIS->Blueprint_CloseChannel(Z_Param_PeerId,Z_Param_ChannelId,(EDiscordOperationBranching&)(Z_Param_Out_Exec));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordNetworkManager::execBlueprint_ClosePeer)
	{
		P_GET_STRUCT(FUint64,Z_Param_PeerId);
		P_GET_ENUM_REF(EDiscordOperationBranching,Z_Param_Out_Exec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDiscordResult*)Z_Param__Result=P_THIS->Blueprint_ClosePeer(Z_Param_PeerId,(EDiscordOperationBranching&)(Z_Param_Out_Exec));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordNetworkManager::execBlueprint_GetPeerId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUint64*)Z_Param__Result=P_THIS->Blueprint_GetPeerId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordNetworkManager::execBlueprint_OpenChannel)
	{
		P_GET_STRUCT(FUint64,Z_Param_PeerId);
		P_GET_PROPERTY(FByteProperty,Z_Param_ChannelId);
		P_GET_UBOOL(Z_Param_bReliable);
		P_GET_ENUM_REF(EDiscordOperationBranching,Z_Param_Out_Exec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDiscordResult*)Z_Param__Result=P_THIS->Blueprint_OpenChannel(Z_Param_PeerId,Z_Param_ChannelId,Z_Param_bReliable,(EDiscordOperationBranching&)(Z_Param_Out_Exec));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordNetworkManager::execBlueprint_OpenPeer)
	{
		P_GET_STRUCT(FUint64,Z_Param_PeerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Route);
		P_GET_ENUM_REF(EDiscordOperationBranching,Z_Param_Out_Exec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDiscordResult*)Z_Param__Result=P_THIS->Blueprint_OpenPeer(Z_Param_PeerId,Z_Param_Route,(EDiscordOperationBranching&)(Z_Param_Out_Exec));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordNetworkManager::execBlueprint_SendMessage)
	{
		P_GET_STRUCT(FUint64,Z_Param_PeerId);
		P_GET_PROPERTY(FByteProperty,Z_Param_ChannelId);
		P_GET_TARRAY(uint8,Z_Param_Data);
		P_GET_ENUM_REF(EDiscordOperationBranching,Z_Param_Out_Exec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDiscordResult*)Z_Param__Result=P_THIS->Blueprint_SendMessage(Z_Param_PeerId,Z_Param_ChannelId,Z_Param_Data,(EDiscordOperationBranching&)(Z_Param_Out_Exec));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordNetworkManager::execBlueprint_UpdatePeer)
	{
		P_GET_STRUCT(FUint64,Z_Param_PeerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Route);
		P_GET_ENUM_REF(EDiscordOperationBranching,Z_Param_Out_Exec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDiscordResult*)Z_Param__Result=P_THIS->Blueprint_UpdatePeer(Z_Param_PeerId,Z_Param_Route,(EDiscordOperationBranching&)(Z_Param_Out_Exec));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordNetworkManager::execGetNetworkManager)
	{
		P_GET_OBJECT(UDiscordCore,Z_Param_DiscordCore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDiscordNetworkManager**)Z_Param__Result=UDiscordNetworkManager::GetNetworkManager(Z_Param_DiscordCore);
		P_NATIVE_END;
	}
	void UDiscordNetworkManager::StaticRegisterNativesUDiscordNetworkManager()
	{
		UClass* Class = UDiscordNetworkManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Blueprint_CloseChannel", &UDiscordNetworkManager::execBlueprint_CloseChannel },
			{ "Blueprint_ClosePeer", &UDiscordNetworkManager::execBlueprint_ClosePeer },
			{ "Blueprint_GetPeerId", &UDiscordNetworkManager::execBlueprint_GetPeerId },
			{ "Blueprint_OpenChannel", &UDiscordNetworkManager::execBlueprint_OpenChannel },
			{ "Blueprint_OpenPeer", &UDiscordNetworkManager::execBlueprint_OpenPeer },
			{ "Blueprint_SendMessage", &UDiscordNetworkManager::execBlueprint_SendMessage },
			{ "Blueprint_UpdatePeer", &UDiscordNetworkManager::execBlueprint_UpdatePeer },
			{ "GetNetworkManager", &UDiscordNetworkManager::execGetNetworkManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics
	{
		struct DiscordNetworkManager_eventBlueprint_CloseChannel_Parms
		{
			FUint64 PeerId;
			uint8 ChannelId;
			EDiscordOperationBranching Exec;
			EDiscordResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PeerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChannelId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Exec_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Exec;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::NewProp_PeerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::NewProp_PeerId = { "PeerId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_CloseChannel_Parms, PeerId), Z_Construct_UScriptStruct_FUint64, METADATA_PARAMS(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::NewProp_PeerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::NewProp_PeerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::NewProp_ChannelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_CloseChannel_Parms, ChannelId), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::NewProp_ChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::NewProp_ChannelId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::NewProp_Exec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::NewProp_Exec = { "Exec", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_CloseChannel_Parms, Exec), Z_Construct_UEnum_DiscordCore_EDiscordOperationBranching, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_CloseChannel_Parms, ReturnValue), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::NewProp_PeerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::NewProp_ChannelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::NewProp_Exec_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::NewProp_Exec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordNetworkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordNetworkManager, nullptr, "Blueprint_CloseChannel", nullptr, nullptr, sizeof(DiscordNetworkManager_eventBlueprint_CloseChannel_Parms), Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer_Statics
	{
		struct DiscordNetworkManager_eventBlueprint_ClosePeer_Parms
		{
			FUint64 PeerId;
			EDiscordOperationBranching Exec;
			EDiscordResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PeerId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Exec_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Exec;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer_Statics::NewProp_PeerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer_Statics::NewProp_PeerId = { "PeerId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_ClosePeer_Parms, PeerId), Z_Construct_UScriptStruct_FUint64, METADATA_PARAMS(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer_Statics::NewProp_PeerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer_Statics::NewProp_PeerId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer_Statics::NewProp_Exec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer_Statics::NewProp_Exec = { "Exec", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_ClosePeer_Parms, Exec), Z_Construct_UEnum_DiscordCore_EDiscordOperationBranching, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_ClosePeer_Parms, ReturnValue), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer_Statics::NewProp_PeerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer_Statics::NewProp_Exec_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer_Statics::NewProp_Exec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordNetworkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordNetworkManager, nullptr, "Blueprint_ClosePeer", nullptr, nullptr, sizeof(DiscordNetworkManager_eventBlueprint_ClosePeer_Parms), Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_GetPeerId_Statics
	{
		struct DiscordNetworkManager_eventBlueprint_GetPeerId_Parms
		{
			FUint64 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_GetPeerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_GetPeerId_Parms, ReturnValue), Z_Construct_UScriptStruct_FUint64, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_GetPeerId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_GetPeerId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_GetPeerId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordNetworkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_GetPeerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordNetworkManager, nullptr, "Blueprint_GetPeerId", nullptr, nullptr, sizeof(DiscordNetworkManager_eventBlueprint_GetPeerId_Parms), Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_GetPeerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_GetPeerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_GetPeerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_GetPeerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_GetPeerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_GetPeerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics
	{
		struct DiscordNetworkManager_eventBlueprint_OpenChannel_Parms
		{
			FUint64 PeerId;
			uint8 ChannelId;
			bool bReliable;
			EDiscordOperationBranching Exec;
			EDiscordResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PeerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChannelId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReliable_MetaData[];
#endif
		static void NewProp_bReliable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReliable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Exec_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Exec;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_PeerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_PeerId = { "PeerId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_OpenChannel_Parms, PeerId), Z_Construct_UScriptStruct_FUint64, METADATA_PARAMS(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_PeerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_PeerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_ChannelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_OpenChannel_Parms, ChannelId), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_ChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_ChannelId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_bReliable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_bReliable_SetBit(void* Obj)
	{
		((DiscordNetworkManager_eventBlueprint_OpenChannel_Parms*)Obj)->bReliable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_bReliable = { "bReliable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DiscordNetworkManager_eventBlueprint_OpenChannel_Parms), &Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_bReliable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_bReliable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_bReliable_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_Exec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_Exec = { "Exec", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_OpenChannel_Parms, Exec), Z_Construct_UEnum_DiscordCore_EDiscordOperationBranching, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_OpenChannel_Parms, ReturnValue), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_PeerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_ChannelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_bReliable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_Exec_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_Exec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordNetworkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordNetworkManager, nullptr, "Blueprint_OpenChannel", nullptr, nullptr, sizeof(DiscordNetworkManager_eventBlueprint_OpenChannel_Parms), Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics
	{
		struct DiscordNetworkManager_eventBlueprint_OpenPeer_Parms
		{
			FUint64 PeerId;
			FString Route;
			EDiscordOperationBranching Exec;
			EDiscordResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PeerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Route_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Route;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Exec_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Exec;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::NewProp_PeerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::NewProp_PeerId = { "PeerId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_OpenPeer_Parms, PeerId), Z_Construct_UScriptStruct_FUint64, METADATA_PARAMS(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::NewProp_PeerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::NewProp_PeerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::NewProp_Route_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::NewProp_Route = { "Route", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_OpenPeer_Parms, Route), METADATA_PARAMS(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::NewProp_Route_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::NewProp_Route_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::NewProp_Exec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::NewProp_Exec = { "Exec", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_OpenPeer_Parms, Exec), Z_Construct_UEnum_DiscordCore_EDiscordOperationBranching, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_OpenPeer_Parms, ReturnValue), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::NewProp_PeerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::NewProp_Route,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::NewProp_Exec_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::NewProp_Exec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordNetworkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordNetworkManager, nullptr, "Blueprint_OpenPeer", nullptr, nullptr, sizeof(DiscordNetworkManager_eventBlueprint_OpenPeer_Parms), Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics
	{
		struct DiscordNetworkManager_eventBlueprint_SendMessage_Parms
		{
			FUint64 PeerId;
			uint8 ChannelId;
			TArray<uint8> Data;
			EDiscordOperationBranching Exec;
			EDiscordResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PeerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChannelId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Exec_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Exec;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::NewProp_PeerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::NewProp_PeerId = { "PeerId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_SendMessage_Parms, PeerId), Z_Construct_UScriptStruct_FUint64, METADATA_PARAMS(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::NewProp_PeerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::NewProp_PeerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::NewProp_ChannelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_SendMessage_Parms, ChannelId), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::NewProp_ChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::NewProp_ChannelId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_SendMessage_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::NewProp_Exec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::NewProp_Exec = { "Exec", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_SendMessage_Parms, Exec), Z_Construct_UEnum_DiscordCore_EDiscordOperationBranching, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_SendMessage_Parms, ReturnValue), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::NewProp_PeerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::NewProp_ChannelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::NewProp_Exec_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::NewProp_Exec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordNetworkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordNetworkManager, nullptr, "Blueprint_SendMessage", nullptr, nullptr, sizeof(DiscordNetworkManager_eventBlueprint_SendMessage_Parms), Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics
	{
		struct DiscordNetworkManager_eventBlueprint_UpdatePeer_Parms
		{
			FUint64 PeerId;
			FString Route;
			EDiscordOperationBranching Exec;
			EDiscordResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PeerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Route_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Route;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Exec_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Exec;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::NewProp_PeerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::NewProp_PeerId = { "PeerId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_UpdatePeer_Parms, PeerId), Z_Construct_UScriptStruct_FUint64, METADATA_PARAMS(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::NewProp_PeerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::NewProp_PeerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::NewProp_Route_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::NewProp_Route = { "Route", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_UpdatePeer_Parms, Route), METADATA_PARAMS(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::NewProp_Route_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::NewProp_Route_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::NewProp_Exec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::NewProp_Exec = { "Exec", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_UpdatePeer_Parms, Exec), Z_Construct_UEnum_DiscordCore_EDiscordOperationBranching, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventBlueprint_UpdatePeer_Parms, ReturnValue), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::NewProp_PeerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::NewProp_Route,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::NewProp_Exec_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::NewProp_Exec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordNetworkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordNetworkManager, nullptr, "Blueprint_UpdatePeer", nullptr, nullptr, sizeof(DiscordNetworkManager_eventBlueprint_UpdatePeer_Parms), Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordNetworkManager_GetNetworkManager_Statics
	{
		struct DiscordNetworkManager_eventGetNetworkManager_Parms
		{
			const UDiscordCore* DiscordCore;
			UDiscordNetworkManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordNetworkManager_GetNetworkManager_Statics::NewProp_DiscordCore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_GetNetworkManager_Statics::NewProp_DiscordCore = { "DiscordCore", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventGetNetworkManager_Parms, DiscordCore), Z_Construct_UClass_UDiscordCore_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDiscordNetworkManager_GetNetworkManager_Statics::NewProp_DiscordCore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_GetNetworkManager_Statics::NewProp_DiscordCore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordNetworkManager_GetNetworkManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordNetworkManager_eventGetNetworkManager_Parms, ReturnValue), Z_Construct_UClass_UDiscordNetworkManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordNetworkManager_GetNetworkManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_GetNetworkManager_Statics::NewProp_DiscordCore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordNetworkManager_GetNetworkManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordNetworkManager_GetNetworkManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordNetworkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordNetworkManager_GetNetworkManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordNetworkManager, nullptr, "GetNetworkManager", nullptr, nullptr, sizeof(DiscordNetworkManager_eventGetNetworkManager_Parms), Z_Construct_UFunction_UDiscordNetworkManager_GetNetworkManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_GetNetworkManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordNetworkManager_GetNetworkManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordNetworkManager_GetNetworkManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordNetworkManager_GetNetworkManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordNetworkManager_GetNetworkManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDiscordNetworkManager_NoRegister()
	{
		return UDiscordNetworkManager::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordNetworkManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRouteUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRouteUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordNetworkManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDiscordManager,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordNetwork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiscordNetworkManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_CloseChannel, "Blueprint_CloseChannel" }, // 1494055302
		{ &Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_ClosePeer, "Blueprint_ClosePeer" }, // 2719629340
		{ &Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_GetPeerId, "Blueprint_GetPeerId" }, // 2563907388
		{ &Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenChannel, "Blueprint_OpenChannel" }, // 3004966812
		{ &Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_OpenPeer, "Blueprint_OpenPeer" }, // 1744373788
		{ &Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_SendMessage, "Blueprint_SendMessage" }, // 1149603534
		{ &Z_Construct_UFunction_UDiscordNetworkManager_Blueprint_UpdatePeer, "Blueprint_UpdatePeer" }, // 108843076
		{ &Z_Construct_UFunction_UDiscordNetworkManager_GetNetworkManager, "GetNetworkManager" }, // 1859779964
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordNetworkManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DiscordNetworkManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DiscordNetworkManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordNetworkManager_Statics::NewProp_OnMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordNetworkManager" },
		{ "ModuleRelativePath", "Public/DiscordNetworkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordNetworkManager_Statics::NewProp_OnMessage = { "OnMessage", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordNetworkManager, OnMessage), Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnMessage__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordNetworkManager_Statics::NewProp_OnMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordNetworkManager_Statics::NewProp_OnMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordNetworkManager_Statics::NewProp_OnRouteUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordNetworkManager" },
		{ "ModuleRelativePath", "Public/DiscordNetworkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordNetworkManager_Statics::NewProp_OnRouteUpdate = { "OnRouteUpdate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordNetworkManager, OnRouteUpdate), Z_Construct_UDelegateFunction_DiscordNetwork_DiscordOnRouteUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordNetworkManager_Statics::NewProp_OnRouteUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordNetworkManager_Statics::NewProp_OnRouteUpdate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDiscordNetworkManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordNetworkManager_Statics::NewProp_OnMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordNetworkManager_Statics::NewProp_OnRouteUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordNetworkManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordNetworkManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiscordNetworkManager_Statics::ClassParams = {
		&UDiscordNetworkManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDiscordNetworkManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordNetworkManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDiscordNetworkManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordNetworkManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiscordNetworkManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiscordNetworkManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordNetworkManager, 2311893643);
	template<> DISCORDNETWORK_API UClass* StaticClass<UDiscordNetworkManager>()
	{
		return UDiscordNetworkManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordNetworkManager(Z_Construct_UClass_UDiscordNetworkManager, &UDiscordNetworkManager::StaticClass, TEXT("/Script/DiscordNetwork"), TEXT("UDiscordNetworkManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordNetworkManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
