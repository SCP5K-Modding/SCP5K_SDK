// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordVoice/Public/DiscordVoiceManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordVoiceManager() {}
// Cross Module References
	DISCORDVOICE_API UClass* Z_Construct_UClass_UDiscordVoiceManager_NoRegister();
	DISCORDVOICE_API UClass* Z_Construct_UClass_UDiscordVoiceManager();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordManager();
	UPackage* Z_Construct_UPackage__Script_DiscordVoice();
	DISCORDVOICE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordInputMode();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordCore_NoRegister();
	DISCORDVOICE_API UFunction* Z_Construct_UDelegateFunction_DiscordVoice_DiscordOnVoiceSettingsUpdate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UDiscordVoiceManager::execGetInputMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordInputMode*)Z_Param__Result=P_THIS->GetInputMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordVoiceManager::execGetLocalVolume)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetLocalVolume(Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordVoiceManager::execGetVoiceManager)
	{
		P_GET_OBJECT(UDiscordCore,Z_Param_DiscordCore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDiscordVoiceManager**)Z_Param__Result=UDiscordVoiceManager::GetVoiceManager(Z_Param_DiscordCore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordVoiceManager::execIsLocalMute)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocalMute(Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordVoiceManager::execIsSelfDeaf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSelfDeaf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordVoiceManager::execIsSelfMute)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSelfMute();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordVoiceManager::execOnVoiceSettingsUpdateInternal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVoiceSettingsUpdateInternal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordVoiceManager::execSetLocalMute)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_UserId);
		P_GET_UBOOL(Z_Param_bMute);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalMute(Z_Param_UserId,Z_Param_bMute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordVoiceManager::execSetLocalVolume)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_UserId);
		P_GET_PROPERTY(FByteProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalVolume(Z_Param_UserId,Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordVoiceManager::execSetSelfDeaf)
	{
		P_GET_UBOOL(Z_Param_bDeaf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelfDeaf(Z_Param_bDeaf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordVoiceManager::execSetSelfMute)
	{
		P_GET_UBOOL(Z_Param_bMute);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelfMute(Z_Param_bMute);
		P_NATIVE_END;
	}
	void UDiscordVoiceManager::StaticRegisterNativesUDiscordVoiceManager()
	{
		UClass* Class = UDiscordVoiceManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInputMode", &UDiscordVoiceManager::execGetInputMode },
			{ "GetLocalVolume", &UDiscordVoiceManager::execGetLocalVolume },
			{ "GetVoiceManager", &UDiscordVoiceManager::execGetVoiceManager },
			{ "IsLocalMute", &UDiscordVoiceManager::execIsLocalMute },
			{ "IsSelfDeaf", &UDiscordVoiceManager::execIsSelfDeaf },
			{ "IsSelfMute", &UDiscordVoiceManager::execIsSelfMute },
			{ "OnVoiceSettingsUpdateInternal", &UDiscordVoiceManager::execOnVoiceSettingsUpdateInternal },
			{ "SetLocalMute", &UDiscordVoiceManager::execSetLocalMute },
			{ "SetLocalVolume", &UDiscordVoiceManager::execSetLocalVolume },
			{ "SetSelfDeaf", &UDiscordVoiceManager::execSetSelfDeaf },
			{ "SetSelfMute", &UDiscordVoiceManager::execSetSelfMute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiscordVoiceManager_GetInputMode_Statics
	{
		struct DiscordVoiceManager_eventGetInputMode_Parms
		{
			FDiscordInputMode ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordVoiceManager_GetInputMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordVoiceManager_eventGetInputMode_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordInputMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordVoiceManager_GetInputMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordVoiceManager_GetInputMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordVoiceManager_GetInputMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordVoiceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordVoiceManager_GetInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordVoiceManager, nullptr, "GetInputMode", nullptr, nullptr, sizeof(DiscordVoiceManager_eventGetInputMode_Parms), Z_Construct_UFunction_UDiscordVoiceManager_GetInputMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_GetInputMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordVoiceManager_GetInputMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_GetInputMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordVoiceManager_GetInputMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordVoiceManager_GetInputMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordVoiceManager_GetLocalVolume_Statics
	{
		struct DiscordVoiceManager_eventGetLocalVolume_Parms
		{
			int64 UserId;
			uint8 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordVoiceManager_GetLocalVolume_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordVoiceManager_GetLocalVolume_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordVoiceManager_eventGetLocalVolume_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordVoiceManager_GetLocalVolume_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_GetLocalVolume_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordVoiceManager_GetLocalVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordVoiceManager_eventGetLocalVolume_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordVoiceManager_GetLocalVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordVoiceManager_GetLocalVolume_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordVoiceManager_GetLocalVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordVoiceManager_GetLocalVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordVoiceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordVoiceManager_GetLocalVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordVoiceManager, nullptr, "GetLocalVolume", nullptr, nullptr, sizeof(DiscordVoiceManager_eventGetLocalVolume_Parms), Z_Construct_UFunction_UDiscordVoiceManager_GetLocalVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_GetLocalVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordVoiceManager_GetLocalVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_GetLocalVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordVoiceManager_GetLocalVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordVoiceManager_GetLocalVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordVoiceManager_GetVoiceManager_Statics
	{
		struct DiscordVoiceManager_eventGetVoiceManager_Parms
		{
			UDiscordCore* DiscordCore;
			UDiscordVoiceManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DiscordCore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordVoiceManager_GetVoiceManager_Statics::NewProp_DiscordCore = { "DiscordCore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordVoiceManager_eventGetVoiceManager_Parms, DiscordCore), Z_Construct_UClass_UDiscordCore_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordVoiceManager_GetVoiceManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordVoiceManager_eventGetVoiceManager_Parms, ReturnValue), Z_Construct_UClass_UDiscordVoiceManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordVoiceManager_GetVoiceManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordVoiceManager_GetVoiceManager_Statics::NewProp_DiscordCore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordVoiceManager_GetVoiceManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordVoiceManager_GetVoiceManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordVoiceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordVoiceManager_GetVoiceManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordVoiceManager, nullptr, "GetVoiceManager", nullptr, nullptr, sizeof(DiscordVoiceManager_eventGetVoiceManager_Parms), Z_Construct_UFunction_UDiscordVoiceManager_GetVoiceManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_GetVoiceManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordVoiceManager_GetVoiceManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_GetVoiceManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordVoiceManager_GetVoiceManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordVoiceManager_GetVoiceManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordVoiceManager_IsLocalMute_Statics
	{
		struct DiscordVoiceManager_eventIsLocalMute_Parms
		{
			int64 UserId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_UserId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordVoiceManager_IsLocalMute_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordVoiceManager_IsLocalMute_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordVoiceManager_eventIsLocalMute_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordVoiceManager_IsLocalMute_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_IsLocalMute_Statics::NewProp_UserId_MetaData)) };
	void Z_Construct_UFunction_UDiscordVoiceManager_IsLocalMute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DiscordVoiceManager_eventIsLocalMute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDiscordVoiceManager_IsLocalMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DiscordVoiceManager_eventIsLocalMute_Parms), &Z_Construct_UFunction_UDiscordVoiceManager_IsLocalMute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordVoiceManager_IsLocalMute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordVoiceManager_IsLocalMute_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordVoiceManager_IsLocalMute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordVoiceManager_IsLocalMute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordVoiceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordVoiceManager_IsLocalMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordVoiceManager, nullptr, "IsLocalMute", nullptr, nullptr, sizeof(DiscordVoiceManager_eventIsLocalMute_Parms), Z_Construct_UFunction_UDiscordVoiceManager_IsLocalMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_IsLocalMute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordVoiceManager_IsLocalMute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_IsLocalMute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordVoiceManager_IsLocalMute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordVoiceManager_IsLocalMute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordVoiceManager_IsSelfDeaf_Statics
	{
		struct DiscordVoiceManager_eventIsSelfDeaf_Parms
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
	void Z_Construct_UFunction_UDiscordVoiceManager_IsSelfDeaf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DiscordVoiceManager_eventIsSelfDeaf_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDiscordVoiceManager_IsSelfDeaf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DiscordVoiceManager_eventIsSelfDeaf_Parms), &Z_Construct_UFunction_UDiscordVoiceManager_IsSelfDeaf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordVoiceManager_IsSelfDeaf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordVoiceManager_IsSelfDeaf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordVoiceManager_IsSelfDeaf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordVoiceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordVoiceManager_IsSelfDeaf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordVoiceManager, nullptr, "IsSelfDeaf", nullptr, nullptr, sizeof(DiscordVoiceManager_eventIsSelfDeaf_Parms), Z_Construct_UFunction_UDiscordVoiceManager_IsSelfDeaf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_IsSelfDeaf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordVoiceManager_IsSelfDeaf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_IsSelfDeaf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordVoiceManager_IsSelfDeaf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordVoiceManager_IsSelfDeaf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordVoiceManager_IsSelfMute_Statics
	{
		struct DiscordVoiceManager_eventIsSelfMute_Parms
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
	void Z_Construct_UFunction_UDiscordVoiceManager_IsSelfMute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DiscordVoiceManager_eventIsSelfMute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDiscordVoiceManager_IsSelfMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DiscordVoiceManager_eventIsSelfMute_Parms), &Z_Construct_UFunction_UDiscordVoiceManager_IsSelfMute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordVoiceManager_IsSelfMute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordVoiceManager_IsSelfMute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordVoiceManager_IsSelfMute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordVoiceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordVoiceManager_IsSelfMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordVoiceManager, nullptr, "IsSelfMute", nullptr, nullptr, sizeof(DiscordVoiceManager_eventIsSelfMute_Parms), Z_Construct_UFunction_UDiscordVoiceManager_IsSelfMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_IsSelfMute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordVoiceManager_IsSelfMute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_IsSelfMute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordVoiceManager_IsSelfMute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordVoiceManager_IsSelfMute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordVoiceManager_OnVoiceSettingsUpdateInternal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordVoiceManager_OnVoiceSettingsUpdateInternal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordVoiceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordVoiceManager_OnVoiceSettingsUpdateInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordVoiceManager, nullptr, "OnVoiceSettingsUpdateInternal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordVoiceManager_OnVoiceSettingsUpdateInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_OnVoiceSettingsUpdateInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordVoiceManager_OnVoiceSettingsUpdateInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordVoiceManager_OnVoiceSettingsUpdateInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute_Statics
	{
		struct DiscordVoiceManager_eventSetLocalMute_Parms
		{
			int64 UserId;
			bool bMute;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMute_MetaData[];
#endif
		static void NewProp_bMute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordVoiceManager_eventSetLocalMute_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute_Statics::NewProp_bMute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute_Statics::NewProp_bMute_SetBit(void* Obj)
	{
		((DiscordVoiceManager_eventSetLocalMute_Parms*)Obj)->bMute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute_Statics::NewProp_bMute = { "bMute", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DiscordVoiceManager_eventSetLocalMute_Parms), &Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute_Statics::NewProp_bMute_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute_Statics::NewProp_bMute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute_Statics::NewProp_bMute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute_Statics::NewProp_bMute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordVoiceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordVoiceManager, nullptr, "SetLocalMute", nullptr, nullptr, sizeof(DiscordVoiceManager_eventSetLocalMute_Parms), Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordVoiceManager_SetLocalVolume_Statics
	{
		struct DiscordVoiceManager_eventSetLocalVolume_Parms
		{
			int64 UserId;
			uint8 Volume;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordVoiceManager_SetLocalVolume_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordVoiceManager_SetLocalVolume_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordVoiceManager_eventSetLocalVolume_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordVoiceManager_SetLocalVolume_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_SetLocalVolume_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordVoiceManager_SetLocalVolume_Statics::NewProp_Volume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordVoiceManager_SetLocalVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordVoiceManager_eventSetLocalVolume_Parms, Volume), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UDiscordVoiceManager_SetLocalVolume_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_SetLocalVolume_Statics::NewProp_Volume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordVoiceManager_SetLocalVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordVoiceManager_SetLocalVolume_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordVoiceManager_SetLocalVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordVoiceManager_SetLocalVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordVoiceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordVoiceManager_SetLocalVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordVoiceManager, nullptr, "SetLocalVolume", nullptr, nullptr, sizeof(DiscordVoiceManager_eventSetLocalVolume_Parms), Z_Construct_UFunction_UDiscordVoiceManager_SetLocalVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_SetLocalVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordVoiceManager_SetLocalVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_SetLocalVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordVoiceManager_SetLocalVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordVoiceManager_SetLocalVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordVoiceManager_SetSelfDeaf_Statics
	{
		struct DiscordVoiceManager_eventSetSelfDeaf_Parms
		{
			bool bDeaf;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeaf_MetaData[];
#endif
		static void NewProp_bDeaf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeaf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordVoiceManager_SetSelfDeaf_Statics::NewProp_bDeaf_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDiscordVoiceManager_SetSelfDeaf_Statics::NewProp_bDeaf_SetBit(void* Obj)
	{
		((DiscordVoiceManager_eventSetSelfDeaf_Parms*)Obj)->bDeaf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDiscordVoiceManager_SetSelfDeaf_Statics::NewProp_bDeaf = { "bDeaf", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DiscordVoiceManager_eventSetSelfDeaf_Parms), &Z_Construct_UFunction_UDiscordVoiceManager_SetSelfDeaf_Statics::NewProp_bDeaf_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDiscordVoiceManager_SetSelfDeaf_Statics::NewProp_bDeaf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_SetSelfDeaf_Statics::NewProp_bDeaf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordVoiceManager_SetSelfDeaf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordVoiceManager_SetSelfDeaf_Statics::NewProp_bDeaf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordVoiceManager_SetSelfDeaf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordVoiceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordVoiceManager_SetSelfDeaf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordVoiceManager, nullptr, "SetSelfDeaf", nullptr, nullptr, sizeof(DiscordVoiceManager_eventSetSelfDeaf_Parms), Z_Construct_UFunction_UDiscordVoiceManager_SetSelfDeaf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_SetSelfDeaf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordVoiceManager_SetSelfDeaf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_SetSelfDeaf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordVoiceManager_SetSelfDeaf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordVoiceManager_SetSelfDeaf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordVoiceManager_SetSelfMute_Statics
	{
		struct DiscordVoiceManager_eventSetSelfMute_Parms
		{
			bool bMute;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMute_MetaData[];
#endif
		static void NewProp_bMute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordVoiceManager_SetSelfMute_Statics::NewProp_bMute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDiscordVoiceManager_SetSelfMute_Statics::NewProp_bMute_SetBit(void* Obj)
	{
		((DiscordVoiceManager_eventSetSelfMute_Parms*)Obj)->bMute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDiscordVoiceManager_SetSelfMute_Statics::NewProp_bMute = { "bMute", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DiscordVoiceManager_eventSetSelfMute_Parms), &Z_Construct_UFunction_UDiscordVoiceManager_SetSelfMute_Statics::NewProp_bMute_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDiscordVoiceManager_SetSelfMute_Statics::NewProp_bMute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_SetSelfMute_Statics::NewProp_bMute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordVoiceManager_SetSelfMute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordVoiceManager_SetSelfMute_Statics::NewProp_bMute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordVoiceManager_SetSelfMute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordVoiceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordVoiceManager_SetSelfMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordVoiceManager, nullptr, "SetSelfMute", nullptr, nullptr, sizeof(DiscordVoiceManager_eventSetSelfMute_Parms), Z_Construct_UFunction_UDiscordVoiceManager_SetSelfMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_SetSelfMute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordVoiceManager_SetSelfMute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordVoiceManager_SetSelfMute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordVoiceManager_SetSelfMute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordVoiceManager_SetSelfMute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDiscordVoiceManager_NoRegister()
	{
		return UDiscordVoiceManager::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordVoiceManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnVoiceSettingsUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVoiceSettingsUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordVoiceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDiscordManager,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordVoice,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiscordVoiceManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordVoiceManager_GetInputMode, "GetInputMode" }, // 2262164141
		{ &Z_Construct_UFunction_UDiscordVoiceManager_GetLocalVolume, "GetLocalVolume" }, // 852635626
		{ &Z_Construct_UFunction_UDiscordVoiceManager_GetVoiceManager, "GetVoiceManager" }, // 3045875674
		{ &Z_Construct_UFunction_UDiscordVoiceManager_IsLocalMute, "IsLocalMute" }, // 3279759569
		{ &Z_Construct_UFunction_UDiscordVoiceManager_IsSelfDeaf, "IsSelfDeaf" }, // 278888191
		{ &Z_Construct_UFunction_UDiscordVoiceManager_IsSelfMute, "IsSelfMute" }, // 1209173779
		{ &Z_Construct_UFunction_UDiscordVoiceManager_OnVoiceSettingsUpdateInternal, "OnVoiceSettingsUpdateInternal" }, // 2896404456
		{ &Z_Construct_UFunction_UDiscordVoiceManager_SetLocalMute, "SetLocalMute" }, // 1633052737
		{ &Z_Construct_UFunction_UDiscordVoiceManager_SetLocalVolume, "SetLocalVolume" }, // 2352850360
		{ &Z_Construct_UFunction_UDiscordVoiceManager_SetSelfDeaf, "SetSelfDeaf" }, // 727573971
		{ &Z_Construct_UFunction_UDiscordVoiceManager_SetSelfMute, "SetSelfMute" }, // 261134536
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordVoiceManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DiscordVoiceManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DiscordVoiceManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordVoiceManager_Statics::NewProp_OnVoiceSettingsUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordVoiceManager" },
		{ "ModuleRelativePath", "Public/DiscordVoiceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordVoiceManager_Statics::NewProp_OnVoiceSettingsUpdate = { "OnVoiceSettingsUpdate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordVoiceManager, OnVoiceSettingsUpdate), Z_Construct_UDelegateFunction_DiscordVoice_DiscordOnVoiceSettingsUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordVoiceManager_Statics::NewProp_OnVoiceSettingsUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordVoiceManager_Statics::NewProp_OnVoiceSettingsUpdate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDiscordVoiceManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordVoiceManager_Statics::NewProp_OnVoiceSettingsUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordVoiceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordVoiceManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiscordVoiceManager_Statics::ClassParams = {
		&UDiscordVoiceManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDiscordVoiceManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordVoiceManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDiscordVoiceManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordVoiceManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiscordVoiceManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiscordVoiceManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordVoiceManager, 1751970450);
	template<> DISCORDVOICE_API UClass* StaticClass<UDiscordVoiceManager>()
	{
		return UDiscordVoiceManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordVoiceManager(Z_Construct_UClass_UDiscordVoiceManager, &UDiscordVoiceManager::StaticClass, TEXT("/Script/DiscordVoice"), TEXT("UDiscordVoiceManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordVoiceManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
