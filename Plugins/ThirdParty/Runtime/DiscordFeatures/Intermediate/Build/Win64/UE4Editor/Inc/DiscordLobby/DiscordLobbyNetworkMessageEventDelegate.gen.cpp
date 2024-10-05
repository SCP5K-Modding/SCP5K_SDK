// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordLobby/Public/DiscordLobbyNetworkMessageEventDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordLobbyNetworkMessageEventDelegate() {}
// Cross Module References
	DISCORDLOBBY_API UFunction* Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DiscordLobby();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics
	{
		struct _Script_DiscordLobby_eventDiscordLobbyNetworkMessageEvent_Parms
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::NewProp_LobbyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordLobby_eventDiscordLobbyNetworkMessageEvent_Parms, LobbyId), METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordLobby_eventDiscordLobbyNetworkMessageEvent_Parms, UserId), METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::NewProp_ChannelId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordLobby_eventDiscordLobbyNetworkMessageEvent_Parms, ChannelId), nullptr, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::NewProp_ChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::NewProp_ChannelId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DiscordLobby_eventDiscordLobbyNetworkMessageEvent_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::NewProp_ChannelId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyNetworkMessageEventDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DiscordLobby, nullptr, "DiscordLobbyNetworkMessageEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_DiscordLobby_eventDiscordLobbyNetworkMessageEvent_Parms), Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyNetworkMessageEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
