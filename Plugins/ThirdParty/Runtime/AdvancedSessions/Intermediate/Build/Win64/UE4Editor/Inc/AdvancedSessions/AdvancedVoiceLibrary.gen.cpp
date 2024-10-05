// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Public/AdvancedVoiceLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedVoiceLibrary() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedVoiceLibrary_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedVoiceLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
// End Cross Module References
	DEFINE_FUNCTION(UAdvancedVoiceLibrary::execGetNumLocalTalkers)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumLocalTalkers);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedVoiceLibrary::GetNumLocalTalkers(Z_Param_Out_NumLocalTalkers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedVoiceLibrary::execIsHeadsetPresent)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bHasHeadset);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocalPlayerNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedVoiceLibrary::IsHeadsetPresent(Z_Param_Out_bHasHeadset,Z_Param_LocalPlayerNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedVoiceLibrary::execIsLocalPlayerTalking)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_LocalPlayerNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAdvancedVoiceLibrary::IsLocalPlayerTalking(Z_Param_LocalPlayerNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedVoiceLibrary::execIsPlayerMuted)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_LocalUserNumChecking);
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAdvancedVoiceLibrary::IsPlayerMuted(Z_Param_LocalUserNumChecking,Z_Param_Out_UniqueNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedVoiceLibrary::execIsRemotePlayerTalking)
	{
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAdvancedVoiceLibrary::IsRemotePlayerTalking(Z_Param_Out_UniqueNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedVoiceLibrary::execMuteRemoteTalker)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_LocalUserNum);
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId);
		P_GET_UBOOL(Z_Param_bIsSystemWide);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAdvancedVoiceLibrary::MuteRemoteTalker(Z_Param_LocalUserNum,Z_Param_Out_UniqueNetId,Z_Param_bIsSystemWide);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedVoiceLibrary::execRegisterAllLocalTalkers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedVoiceLibrary::RegisterAllLocalTalkers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedVoiceLibrary::execRegisterLocalTalker)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_LocalPlayerNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAdvancedVoiceLibrary::RegisterLocalTalker(Z_Param_LocalPlayerNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedVoiceLibrary::execRegisterRemoteTalker)
	{
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAdvancedVoiceLibrary::RegisterRemoteTalker(Z_Param_Out_UniqueNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedVoiceLibrary::execRemoveAllRemoteTalkers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedVoiceLibrary::RemoveAllRemoteTalkers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedVoiceLibrary::execStartNetworkedVoice)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_LocalPlayerNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedVoiceLibrary::StartNetworkedVoice(Z_Param_LocalPlayerNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedVoiceLibrary::execStopNetworkedVoice)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_LocalPlayerNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedVoiceLibrary::StopNetworkedVoice(Z_Param_LocalPlayerNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedVoiceLibrary::execUnMuteRemoteTalker)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_LocalUserNum);
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId);
		P_GET_UBOOL(Z_Param_bIsSystemWide);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAdvancedVoiceLibrary::UnMuteRemoteTalker(Z_Param_LocalUserNum,Z_Param_Out_UniqueNetId,Z_Param_bIsSystemWide);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedVoiceLibrary::execUnRegisterAllLocalTalkers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedVoiceLibrary::UnRegisterAllLocalTalkers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedVoiceLibrary::execUnRegisterLocalTalker)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_LocalPlayerNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedVoiceLibrary::UnRegisterLocalTalker(Z_Param_LocalPlayerNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedVoiceLibrary::execUnRegisterRemoteTalker)
	{
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAdvancedVoiceLibrary::UnRegisterRemoteTalker(Z_Param_Out_UniqueNetId);
		P_NATIVE_END;
	}
	void UAdvancedVoiceLibrary::StaticRegisterNativesUAdvancedVoiceLibrary()
	{
		UClass* Class = UAdvancedVoiceLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNumLocalTalkers", &UAdvancedVoiceLibrary::execGetNumLocalTalkers },
			{ "IsHeadsetPresent", &UAdvancedVoiceLibrary::execIsHeadsetPresent },
			{ "IsLocalPlayerTalking", &UAdvancedVoiceLibrary::execIsLocalPlayerTalking },
			{ "IsPlayerMuted", &UAdvancedVoiceLibrary::execIsPlayerMuted },
			{ "IsRemotePlayerTalking", &UAdvancedVoiceLibrary::execIsRemotePlayerTalking },
			{ "MuteRemoteTalker", &UAdvancedVoiceLibrary::execMuteRemoteTalker },
			{ "RegisterAllLocalTalkers", &UAdvancedVoiceLibrary::execRegisterAllLocalTalkers },
			{ "RegisterLocalTalker", &UAdvancedVoiceLibrary::execRegisterLocalTalker },
			{ "RegisterRemoteTalker", &UAdvancedVoiceLibrary::execRegisterRemoteTalker },
			{ "RemoveAllRemoteTalkers", &UAdvancedVoiceLibrary::execRemoveAllRemoteTalkers },
			{ "StartNetworkedVoice", &UAdvancedVoiceLibrary::execStartNetworkedVoice },
			{ "StopNetworkedVoice", &UAdvancedVoiceLibrary::execStopNetworkedVoice },
			{ "UnMuteRemoteTalker", &UAdvancedVoiceLibrary::execUnMuteRemoteTalker },
			{ "UnRegisterAllLocalTalkers", &UAdvancedVoiceLibrary::execUnRegisterAllLocalTalkers },
			{ "UnRegisterLocalTalker", &UAdvancedVoiceLibrary::execUnRegisterLocalTalker },
			{ "UnRegisterRemoteTalker", &UAdvancedVoiceLibrary::execUnRegisterRemoteTalker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdvancedVoiceLibrary_GetNumLocalTalkers_Statics
	{
		struct AdvancedVoiceLibrary_eventGetNumLocalTalkers_Parms
		{
			int32 NumLocalTalkers;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLocalTalkers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_GetNumLocalTalkers_Statics::NewProp_NumLocalTalkers = { "NumLocalTalkers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedVoiceLibrary_eventGetNumLocalTalkers_Parms, NumLocalTalkers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedVoiceLibrary_GetNumLocalTalkers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_GetNumLocalTalkers_Statics::NewProp_NumLocalTalkers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedVoiceLibrary_GetNumLocalTalkers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdvancedVoiceLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedVoiceLibrary_GetNumLocalTalkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedVoiceLibrary, nullptr, "GetNumLocalTalkers", nullptr, nullptr, sizeof(AdvancedVoiceLibrary_eventGetNumLocalTalkers_Parms), Z_Construct_UFunction_UAdvancedVoiceLibrary_GetNumLocalTalkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_GetNumLocalTalkers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedVoiceLibrary_GetNumLocalTalkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_GetNumLocalTalkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_GetNumLocalTalkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedVoiceLibrary_GetNumLocalTalkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedVoiceLibrary_IsHeadsetPresent_Statics
	{
		struct AdvancedVoiceLibrary_eventIsHeadsetPresent_Parms
		{
			bool bHasHeadset;
			uint8 LocalPlayerNum;
		};
		static void NewProp_bHasHeadset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasHeadset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocalPlayerNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAdvancedVoiceLibrary_IsHeadsetPresent_Statics::NewProp_bHasHeadset_SetBit(void* Obj)
	{
		((AdvancedVoiceLibrary_eventIsHeadsetPresent_Parms*)Obj)->bHasHeadset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_IsHeadsetPresent_Statics::NewProp_bHasHeadset = { "bHasHeadset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedVoiceLibrary_eventIsHeadsetPresent_Parms), &Z_Construct_UFunction_UAdvancedVoiceLibrary_IsHeadsetPresent_Statics::NewProp_bHasHeadset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_IsHeadsetPresent_Statics::NewProp_LocalPlayerNum = { "LocalPlayerNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedVoiceLibrary_eventIsHeadsetPresent_Parms, LocalPlayerNum), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedVoiceLibrary_IsHeadsetPresent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_IsHeadsetPresent_Statics::NewProp_bHasHeadset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_IsHeadsetPresent_Statics::NewProp_LocalPlayerNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedVoiceLibrary_IsHeadsetPresent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdvancedVoiceLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedVoiceLibrary_IsHeadsetPresent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedVoiceLibrary, nullptr, "IsHeadsetPresent", nullptr, nullptr, sizeof(AdvancedVoiceLibrary_eventIsHeadsetPresent_Parms), Z_Construct_UFunction_UAdvancedVoiceLibrary_IsHeadsetPresent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsHeadsetPresent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsHeadsetPresent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsHeadsetPresent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_IsHeadsetPresent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedVoiceLibrary_IsHeadsetPresent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedVoiceLibrary_IsLocalPlayerTalking_Statics
	{
		struct AdvancedVoiceLibrary_eventIsLocalPlayerTalking_Parms
		{
			uint8 LocalPlayerNum;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocalPlayerNum;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_IsLocalPlayerTalking_Statics::NewProp_LocalPlayerNum = { "LocalPlayerNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedVoiceLibrary_eventIsLocalPlayerTalking_Parms, LocalPlayerNum), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvancedVoiceLibrary_IsLocalPlayerTalking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvancedVoiceLibrary_eventIsLocalPlayerTalking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_IsLocalPlayerTalking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedVoiceLibrary_eventIsLocalPlayerTalking_Parms), &Z_Construct_UFunction_UAdvancedVoiceLibrary_IsLocalPlayerTalking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedVoiceLibrary_IsLocalPlayerTalking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_IsLocalPlayerTalking_Statics::NewProp_LocalPlayerNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_IsLocalPlayerTalking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedVoiceLibrary_IsLocalPlayerTalking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdvancedVoiceLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedVoiceLibrary_IsLocalPlayerTalking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedVoiceLibrary, nullptr, "IsLocalPlayerTalking", nullptr, nullptr, sizeof(AdvancedVoiceLibrary_eventIsLocalPlayerTalking_Parms), Z_Construct_UFunction_UAdvancedVoiceLibrary_IsLocalPlayerTalking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsLocalPlayerTalking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsLocalPlayerTalking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsLocalPlayerTalking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_IsLocalPlayerTalking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedVoiceLibrary_IsLocalPlayerTalking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted_Statics
	{
		struct AdvancedVoiceLibrary_eventIsPlayerMuted_Parms
		{
			uint8 LocalUserNumChecking;
			FBPUniqueNetId UniqueNetId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocalUserNumChecking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted_Statics::NewProp_LocalUserNumChecking = { "LocalUserNumChecking", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedVoiceLibrary_eventIsPlayerMuted_Parms, LocalUserNumChecking), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted_Statics::NewProp_UniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedVoiceLibrary_eventIsPlayerMuted_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted_Statics::NewProp_UniqueNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted_Statics::NewProp_UniqueNetId_MetaData)) };
	void Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvancedVoiceLibrary_eventIsPlayerMuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedVoiceLibrary_eventIsPlayerMuted_Parms), &Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted_Statics::NewProp_LocalUserNumChecking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted_Statics::NewProp_UniqueNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdvancedVoiceLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedVoiceLibrary, nullptr, "IsPlayerMuted", nullptr, nullptr, sizeof(AdvancedVoiceLibrary_eventIsPlayerMuted_Parms), Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking_Statics
	{
		struct AdvancedVoiceLibrary_eventIsRemotePlayerTalking_Parms
		{
			FBPUniqueNetId UniqueNetId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking_Statics::NewProp_UniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedVoiceLibrary_eventIsRemotePlayerTalking_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking_Statics::NewProp_UniqueNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking_Statics::NewProp_UniqueNetId_MetaData)) };
	void Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvancedVoiceLibrary_eventIsRemotePlayerTalking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedVoiceLibrary_eventIsRemotePlayerTalking_Parms), &Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking_Statics::NewProp_UniqueNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdvancedVoiceLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedVoiceLibrary, nullptr, "IsRemotePlayerTalking", nullptr, nullptr, sizeof(AdvancedVoiceLibrary_eventIsRemotePlayerTalking_Parms), Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics
	{
		struct AdvancedVoiceLibrary_eventMuteRemoteTalker_Parms
		{
			uint8 LocalUserNum;
			FBPUniqueNetId UniqueNetId;
			bool bIsSystemWide;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocalUserNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static void NewProp_bIsSystemWide_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSystemWide;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedVoiceLibrary_eventMuteRemoteTalker_Parms, LocalUserNum), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::NewProp_UniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedVoiceLibrary_eventMuteRemoteTalker_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::NewProp_UniqueNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::NewProp_UniqueNetId_MetaData)) };
	void Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::NewProp_bIsSystemWide_SetBit(void* Obj)
	{
		((AdvancedVoiceLibrary_eventMuteRemoteTalker_Parms*)Obj)->bIsSystemWide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::NewProp_bIsSystemWide = { "bIsSystemWide", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedVoiceLibrary_eventMuteRemoteTalker_Parms), &Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::NewProp_bIsSystemWide_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvancedVoiceLibrary_eventMuteRemoteTalker_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedVoiceLibrary_eventMuteRemoteTalker_Parms), &Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::NewProp_LocalUserNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::NewProp_UniqueNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::NewProp_bIsSystemWide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdvancedVoiceLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedVoiceLibrary, nullptr, "MuteRemoteTalker", nullptr, nullptr, sizeof(AdvancedVoiceLibrary_eventMuteRemoteTalker_Parms), Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterAllLocalTalkers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterAllLocalTalkers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdvancedVoiceLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterAllLocalTalkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedVoiceLibrary, nullptr, "RegisterAllLocalTalkers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterAllLocalTalkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterAllLocalTalkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterAllLocalTalkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterAllLocalTalkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterLocalTalker_Statics
	{
		struct AdvancedVoiceLibrary_eventRegisterLocalTalker_Parms
		{
			uint8 LocalPlayerNum;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocalPlayerNum;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterLocalTalker_Statics::NewProp_LocalPlayerNum = { "LocalPlayerNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedVoiceLibrary_eventRegisterLocalTalker_Parms, LocalPlayerNum), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterLocalTalker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvancedVoiceLibrary_eventRegisterLocalTalker_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterLocalTalker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedVoiceLibrary_eventRegisterLocalTalker_Parms), &Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterLocalTalker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterLocalTalker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterLocalTalker_Statics::NewProp_LocalPlayerNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterLocalTalker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterLocalTalker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdvancedVoiceLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterLocalTalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedVoiceLibrary, nullptr, "RegisterLocalTalker", nullptr, nullptr, sizeof(AdvancedVoiceLibrary_eventRegisterLocalTalker_Parms), Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterLocalTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterLocalTalker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterLocalTalker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterLocalTalker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterLocalTalker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterLocalTalker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker_Statics
	{
		struct AdvancedVoiceLibrary_eventRegisterRemoteTalker_Parms
		{
			FBPUniqueNetId UniqueNetId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker_Statics::NewProp_UniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedVoiceLibrary_eventRegisterRemoteTalker_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker_Statics::NewProp_UniqueNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker_Statics::NewProp_UniqueNetId_MetaData)) };
	void Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvancedVoiceLibrary_eventRegisterRemoteTalker_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedVoiceLibrary_eventRegisterRemoteTalker_Parms), &Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker_Statics::NewProp_UniqueNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdvancedVoiceLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedVoiceLibrary, nullptr, "RegisterRemoteTalker", nullptr, nullptr, sizeof(AdvancedVoiceLibrary_eventRegisterRemoteTalker_Parms), Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedVoiceLibrary_RemoveAllRemoteTalkers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedVoiceLibrary_RemoveAllRemoteTalkers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdvancedVoiceLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedVoiceLibrary_RemoveAllRemoteTalkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedVoiceLibrary, nullptr, "RemoveAllRemoteTalkers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedVoiceLibrary_RemoveAllRemoteTalkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_RemoveAllRemoteTalkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_RemoveAllRemoteTalkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedVoiceLibrary_RemoveAllRemoteTalkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedVoiceLibrary_StartNetworkedVoice_Statics
	{
		struct AdvancedVoiceLibrary_eventStartNetworkedVoice_Parms
		{
			uint8 LocalPlayerNum;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocalPlayerNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_StartNetworkedVoice_Statics::NewProp_LocalPlayerNum = { "LocalPlayerNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedVoiceLibrary_eventStartNetworkedVoice_Parms, LocalPlayerNum), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedVoiceLibrary_StartNetworkedVoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_StartNetworkedVoice_Statics::NewProp_LocalPlayerNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedVoiceLibrary_StartNetworkedVoice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdvancedVoiceLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedVoiceLibrary_StartNetworkedVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedVoiceLibrary, nullptr, "StartNetworkedVoice", nullptr, nullptr, sizeof(AdvancedVoiceLibrary_eventStartNetworkedVoice_Parms), Z_Construct_UFunction_UAdvancedVoiceLibrary_StartNetworkedVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_StartNetworkedVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedVoiceLibrary_StartNetworkedVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_StartNetworkedVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_StartNetworkedVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedVoiceLibrary_StartNetworkedVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedVoiceLibrary_StopNetworkedVoice_Statics
	{
		struct AdvancedVoiceLibrary_eventStopNetworkedVoice_Parms
		{
			uint8 LocalPlayerNum;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocalPlayerNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_StopNetworkedVoice_Statics::NewProp_LocalPlayerNum = { "LocalPlayerNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedVoiceLibrary_eventStopNetworkedVoice_Parms, LocalPlayerNum), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedVoiceLibrary_StopNetworkedVoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_StopNetworkedVoice_Statics::NewProp_LocalPlayerNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedVoiceLibrary_StopNetworkedVoice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdvancedVoiceLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedVoiceLibrary_StopNetworkedVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedVoiceLibrary, nullptr, "StopNetworkedVoice", nullptr, nullptr, sizeof(AdvancedVoiceLibrary_eventStopNetworkedVoice_Parms), Z_Construct_UFunction_UAdvancedVoiceLibrary_StopNetworkedVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_StopNetworkedVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedVoiceLibrary_StopNetworkedVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_StopNetworkedVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_StopNetworkedVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedVoiceLibrary_StopNetworkedVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics
	{
		struct AdvancedVoiceLibrary_eventUnMuteRemoteTalker_Parms
		{
			uint8 LocalUserNum;
			FBPUniqueNetId UniqueNetId;
			bool bIsSystemWide;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocalUserNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static void NewProp_bIsSystemWide_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSystemWide;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedVoiceLibrary_eventUnMuteRemoteTalker_Parms, LocalUserNum), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::NewProp_UniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedVoiceLibrary_eventUnMuteRemoteTalker_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::NewProp_UniqueNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::NewProp_UniqueNetId_MetaData)) };
	void Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::NewProp_bIsSystemWide_SetBit(void* Obj)
	{
		((AdvancedVoiceLibrary_eventUnMuteRemoteTalker_Parms*)Obj)->bIsSystemWide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::NewProp_bIsSystemWide = { "bIsSystemWide", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedVoiceLibrary_eventUnMuteRemoteTalker_Parms), &Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::NewProp_bIsSystemWide_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvancedVoiceLibrary_eventUnMuteRemoteTalker_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedVoiceLibrary_eventUnMuteRemoteTalker_Parms), &Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::NewProp_LocalUserNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::NewProp_UniqueNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::NewProp_bIsSystemWide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdvancedVoiceLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedVoiceLibrary, nullptr, "UnMuteRemoteTalker", nullptr, nullptr, sizeof(AdvancedVoiceLibrary_eventUnMuteRemoteTalker_Parms), Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterAllLocalTalkers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterAllLocalTalkers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdvancedVoiceLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterAllLocalTalkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedVoiceLibrary, nullptr, "UnRegisterAllLocalTalkers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterAllLocalTalkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterAllLocalTalkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterAllLocalTalkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterAllLocalTalkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterLocalTalker_Statics
	{
		struct AdvancedVoiceLibrary_eventUnRegisterLocalTalker_Parms
		{
			uint8 LocalPlayerNum;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocalPlayerNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterLocalTalker_Statics::NewProp_LocalPlayerNum = { "LocalPlayerNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedVoiceLibrary_eventUnRegisterLocalTalker_Parms, LocalPlayerNum), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterLocalTalker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterLocalTalker_Statics::NewProp_LocalPlayerNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterLocalTalker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdvancedVoiceLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterLocalTalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedVoiceLibrary, nullptr, "UnRegisterLocalTalker", nullptr, nullptr, sizeof(AdvancedVoiceLibrary_eventUnRegisterLocalTalker_Parms), Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterLocalTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterLocalTalker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterLocalTalker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterLocalTalker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterLocalTalker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterLocalTalker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Statics
	{
		struct AdvancedVoiceLibrary_eventUnRegisterRemoteTalker_Parms
		{
			FBPUniqueNetId UniqueNetId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Statics::NewProp_UniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedVoiceLibrary_eventUnRegisterRemoteTalker_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Statics::NewProp_UniqueNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Statics::NewProp_UniqueNetId_MetaData)) };
	void Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AdvancedVoiceLibrary_eventUnRegisterRemoteTalker_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AdvancedVoiceLibrary_eventUnRegisterRemoteTalker_Parms), &Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Statics::NewProp_UniqueNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdvancedVoiceLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedVoiceLibrary, nullptr, "UnRegisterRemoteTalker", nullptr, nullptr, sizeof(AdvancedVoiceLibrary_eventUnRegisterRemoteTalker_Parms), Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedVoiceLibrary_NoRegister()
	{
		return UAdvancedVoiceLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAdvancedVoiceLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvancedVoiceLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvancedVoiceLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvancedVoiceLibrary_GetNumLocalTalkers, "GetNumLocalTalkers" }, // 668574255
		{ &Z_Construct_UFunction_UAdvancedVoiceLibrary_IsHeadsetPresent, "IsHeadsetPresent" }, // 2083936962
		{ &Z_Construct_UFunction_UAdvancedVoiceLibrary_IsLocalPlayerTalking, "IsLocalPlayerTalking" }, // 3464730731
		{ &Z_Construct_UFunction_UAdvancedVoiceLibrary_IsPlayerMuted, "IsPlayerMuted" }, // 3331507082
		{ &Z_Construct_UFunction_UAdvancedVoiceLibrary_IsRemotePlayerTalking, "IsRemotePlayerTalking" }, // 2898314644
		{ &Z_Construct_UFunction_UAdvancedVoiceLibrary_MuteRemoteTalker, "MuteRemoteTalker" }, // 3063859368
		{ &Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterAllLocalTalkers, "RegisterAllLocalTalkers" }, // 2602427380
		{ &Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterLocalTalker, "RegisterLocalTalker" }, // 2748806336
		{ &Z_Construct_UFunction_UAdvancedVoiceLibrary_RegisterRemoteTalker, "RegisterRemoteTalker" }, // 2447287377
		{ &Z_Construct_UFunction_UAdvancedVoiceLibrary_RemoveAllRemoteTalkers, "RemoveAllRemoteTalkers" }, // 3421960309
		{ &Z_Construct_UFunction_UAdvancedVoiceLibrary_StartNetworkedVoice, "StartNetworkedVoice" }, // 2772263784
		{ &Z_Construct_UFunction_UAdvancedVoiceLibrary_StopNetworkedVoice, "StopNetworkedVoice" }, // 4259337295
		{ &Z_Construct_UFunction_UAdvancedVoiceLibrary_UnMuteRemoteTalker, "UnMuteRemoteTalker" }, // 2090897593
		{ &Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterAllLocalTalkers, "UnRegisterAllLocalTalkers" }, // 114508575
		{ &Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterLocalTalker, "UnRegisterLocalTalker" }, // 2504092863
		{ &Z_Construct_UFunction_UAdvancedVoiceLibrary_UnRegisterRemoteTalker, "UnRegisterRemoteTalker" }, // 2952665206
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedVoiceLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AdvancedVoiceLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AdvancedVoiceLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvancedVoiceLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedVoiceLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedVoiceLibrary_Statics::ClassParams = {
		&UAdvancedVoiceLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvancedVoiceLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedVoiceLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvancedVoiceLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvancedVoiceLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedVoiceLibrary, 3582233793);
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UAdvancedVoiceLibrary>()
	{
		return UAdvancedVoiceLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedVoiceLibrary(Z_Construct_UClass_UAdvancedVoiceLibrary, &UAdvancedVoiceLibrary::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UAdvancedVoiceLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedVoiceLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
