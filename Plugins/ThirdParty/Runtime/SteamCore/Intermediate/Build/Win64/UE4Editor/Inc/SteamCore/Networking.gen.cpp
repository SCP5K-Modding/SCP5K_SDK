// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Networking.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworking() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UNetworking_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UNetworking();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamP2PSessionState();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamP2PSend();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionRequest__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionConnectFail__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UNetworking::execAcceptP2PSessionWithUser)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDRemote);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AcceptP2PSessionWithUser(Z_Param_SteamIDRemote);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetworking::execAllowP2PPacketRelay)
	{
		P_GET_UBOOL(Z_Param_bAllow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AllowP2PPacketRelay(Z_Param_bAllow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetworking::execCloseP2PchannelWithUser)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDRemote);
		P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CloseP2PchannelWithUser(Z_Param_SteamIDRemote,Z_Param_Channel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetworking::execCloseP2PSessionWithUser)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDRemote);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CloseP2PSessionWithUser(Z_Param_SteamIDRemote);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetworking::execGetP2PSessionState)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDRemote);
		P_GET_STRUCT_REF(FSteamP2PSessionState,Z_Param_Out_ConnectionState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetP2PSessionState(Z_Param_SteamIDRemote,Z_Param_Out_ConnectionState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetworking::execIsP2PPacketAvailable)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MessageSize);
		P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsP2PPacketAvailable(Z_Param_Out_MessageSize,Z_Param_Channel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetworking::execReadP2PPacket)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_OutSteamIdRemote);
		P_GET_PROPERTY(FIntProperty,Z_Param_MessageSize);
		P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReadP2PPacket(Z_Param_Out_Data,Z_Param_Out_OutSteamIdRemote,Z_Param_MessageSize,Z_Param_Channel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetworking::execSendP2PPacket)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDRemote);
		P_GET_TARRAY(uint8,Z_Param_Data);
		P_GET_ENUM(ESteamP2PSend,Z_Param_P2PSendType);
		P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendP2PPacket(Z_Param_SteamIDRemote,Z_Param_Data,ESteamP2PSend(Z_Param_P2PSendType),Z_Param_Channel);
		P_NATIVE_END;
	}
	void UNetworking::StaticRegisterNativesUNetworking()
	{
		UClass* Class = UNetworking::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcceptP2PSessionWithUser", &UNetworking::execAcceptP2PSessionWithUser },
			{ "AllowP2PPacketRelay", &UNetworking::execAllowP2PPacketRelay },
			{ "CloseP2PchannelWithUser", &UNetworking::execCloseP2PchannelWithUser },
			{ "CloseP2PSessionWithUser", &UNetworking::execCloseP2PSessionWithUser },
			{ "GetP2PSessionState", &UNetworking::execGetP2PSessionState },
			{ "IsP2PPacketAvailable", &UNetworking::execIsP2PPacketAvailable },
			{ "ReadP2PPacket", &UNetworking::execReadP2PPacket },
			{ "SendP2PPacket", &UNetworking::execSendP2PPacket },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics
	{
		struct Networking_eventAcceptP2PSessionWithUser_Parms
		{
			FSteamID SteamIDRemote;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDRemote;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::NewProp_SteamIDRemote = { "SteamIDRemote", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventAcceptP2PSessionWithUser_Parms, SteamIDRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Networking_eventAcceptP2PSessionWithUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Networking_eventAcceptP2PSessionWithUser_Parms), &Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::NewProp_SteamIDRemote,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Networking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworking, nullptr, "AcceptP2PSessionWithUser", nullptr, nullptr, sizeof(Networking_eventAcceptP2PSessionWithUser_Parms), Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics
	{
		struct Networking_eventAllowP2PPacketRelay_Parms
		{
			bool bAllow;
			bool ReturnValue;
		};
		static void NewProp_bAllow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::NewProp_bAllow_SetBit(void* Obj)
	{
		((Networking_eventAllowP2PPacketRelay_Parms*)Obj)->bAllow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::NewProp_bAllow = { "bAllow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Networking_eventAllowP2PPacketRelay_Parms), &Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::NewProp_bAllow_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Networking_eventAllowP2PPacketRelay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Networking_eventAllowP2PPacketRelay_Parms), &Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::NewProp_bAllow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Networking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworking, nullptr, "AllowP2PPacketRelay", nullptr, nullptr, sizeof(Networking_eventAllowP2PPacketRelay_Parms), Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics
	{
		struct Networking_eventCloseP2PchannelWithUser_Parms
		{
			FSteamID SteamIDRemote;
			int32 Channel;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDRemote;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Channel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::NewProp_SteamIDRemote = { "SteamIDRemote", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventCloseP2PchannelWithUser_Parms, SteamIDRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventCloseP2PchannelWithUser_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Networking_eventCloseP2PchannelWithUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Networking_eventCloseP2PchannelWithUser_Parms), &Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::NewProp_SteamIDRemote,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::NewProp_Channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Networking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworking, nullptr, "CloseP2PchannelWithUser", nullptr, nullptr, sizeof(Networking_eventCloseP2PchannelWithUser_Parms), Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics
	{
		struct Networking_eventCloseP2PSessionWithUser_Parms
		{
			FSteamID SteamIDRemote;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDRemote;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::NewProp_SteamIDRemote = { "SteamIDRemote", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventCloseP2PSessionWithUser_Parms, SteamIDRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Networking_eventCloseP2PSessionWithUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Networking_eventCloseP2PSessionWithUser_Parms), &Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::NewProp_SteamIDRemote,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Networking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworking, nullptr, "CloseP2PSessionWithUser", nullptr, nullptr, sizeof(Networking_eventCloseP2PSessionWithUser_Parms), Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics
	{
		struct Networking_eventGetP2PSessionState_Parms
		{
			FSteamID SteamIDRemote;
			FSteamP2PSessionState ConnectionState;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDRemote;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConnectionState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::NewProp_SteamIDRemote = { "SteamIDRemote", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventGetP2PSessionState_Parms, SteamIDRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::NewProp_ConnectionState = { "ConnectionState", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventGetP2PSessionState_Parms, ConnectionState), Z_Construct_UScriptStruct_FSteamP2PSessionState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Networking_eventGetP2PSessionState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Networking_eventGetP2PSessionState_Parms), &Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::NewProp_SteamIDRemote,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::NewProp_ConnectionState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Networking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworking, nullptr, "GetP2PSessionState", nullptr, nullptr, sizeof(Networking_eventGetP2PSessionState_Parms), Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworking_GetP2PSessionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics
	{
		struct Networking_eventIsP2PPacketAvailable_Parms
		{
			int32 MessageSize;
			int32 Channel;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MessageSize;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Channel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::NewProp_MessageSize = { "MessageSize", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventIsP2PPacketAvailable_Parms, MessageSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventIsP2PPacketAvailable_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Networking_eventIsP2PPacketAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Networking_eventIsP2PPacketAvailable_Parms), &Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::NewProp_MessageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::NewProp_Channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Networking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworking, nullptr, "IsP2PPacketAvailable", nullptr, nullptr, sizeof(Networking_eventIsP2PPacketAvailable_Parms), Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics
	{
		struct Networking_eventReadP2PPacket_Parms
		{
			TArray<uint8> Data;
			FSteamID OutSteamIdRemote;
			int32 MessageSize;
			int32 Channel;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutSteamIdRemote;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MessageSize;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Channel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventReadP2PPacket_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_OutSteamIdRemote = { "OutSteamIdRemote", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventReadP2PPacket_Parms, OutSteamIdRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_MessageSize = { "MessageSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventReadP2PPacket_Parms, MessageSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventReadP2PPacket_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Networking_eventReadP2PPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Networking_eventReadP2PPacket_Parms), &Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_OutSteamIdRemote,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_MessageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_Channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Networking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworking, nullptr, "ReadP2PPacket", nullptr, nullptr, sizeof(Networking_eventReadP2PPacket_Parms), Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworking_ReadP2PPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics
	{
		struct Networking_eventSendP2PPacket_Parms
		{
			FSteamID SteamIDRemote;
			TArray<uint8> Data;
			ESteamP2PSend P2PSendType;
			int32 Channel;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDRemote;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_P2PSendType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_P2PSendType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Channel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_SteamIDRemote = { "SteamIDRemote", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventSendP2PPacket_Parms, SteamIDRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventSendP2PPacket_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_P2PSendType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_P2PSendType = { "P2PSendType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventSendP2PPacket_Parms, P2PSendType), Z_Construct_UEnum_SteamCore_ESteamP2PSend, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventSendP2PPacket_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Networking_eventSendP2PPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Networking_eventSendP2PPacket_Parms), &Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_SteamIDRemote,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_P2PSendType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_P2PSendType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_Channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Networking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworking, nullptr, "SendP2PPacket", nullptr, nullptr, sizeof(Networking_eventSendP2PPacket_Parms), Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworking_SendP2PPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNetworking_NoRegister()
	{
		return UNetworking::StaticClass();
	}
	struct Z_Construct_UClass_UNetworking_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnP2PSessionRequestDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnP2PSessionRequestDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnP2PSessionConnectFailDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnP2PSessionConnectFailDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetworking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNetworking_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser, "AcceptP2PSessionWithUser" }, // 412239218
		{ &Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay, "AllowP2PPacketRelay" }, // 3647007433
		{ &Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser, "CloseP2PchannelWithUser" }, // 2549429122
		{ &Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser, "CloseP2PSessionWithUser" }, // 3446603439
		{ &Z_Construct_UFunction_UNetworking_GetP2PSessionState, "GetP2PSessionState" }, // 1886414532
		{ &Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable, "IsP2PPacketAvailable" }, // 247157103
		{ &Z_Construct_UFunction_UNetworking_ReadP2PPacket, "ReadP2PPacket" }, // 2852951078
		{ &Z_Construct_UFunction_UNetworking_SendP2PPacket, "SendP2PPacket" }, // 3721931461
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworking_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Networking.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Networking.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworking_Statics::NewProp_OnP2PSessionRequestDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/Networking.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNetworking_Statics::NewProp_OnP2PSessionRequestDelegate = { "OnP2PSessionRequestDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetworking, OnP2PSessionRequestDelegate), Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionRequest__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNetworking_Statics::NewProp_OnP2PSessionRequestDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworking_Statics::NewProp_OnP2PSessionRequestDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworking_Statics::NewProp_OnP2PSessionConnectFailDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/Networking.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNetworking_Statics::NewProp_OnP2PSessionConnectFailDelegate = { "OnP2PSessionConnectFailDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetworking, OnP2PSessionConnectFailDelegate), Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionConnectFail__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNetworking_Statics::NewProp_OnP2PSessionConnectFailDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworking_Statics::NewProp_OnP2PSessionConnectFailDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetworking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworking_Statics::NewProp_OnP2PSessionRequestDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworking_Statics::NewProp_OnP2PSessionConnectFailDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetworking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworking>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNetworking_Statics::ClassParams = {
		&UNetworking::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNetworking_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNetworking_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNetworking_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetworking()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNetworking_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNetworking, 3091554120);
	template<> STEAMCORE_API UClass* StaticClass<UNetworking>()
	{
		return UNetworking::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNetworking(Z_Construct_UClass_UNetworking, &UNetworking::StaticClass, TEXT("/Script/SteamCore"), TEXT("UNetworking"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworking);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
