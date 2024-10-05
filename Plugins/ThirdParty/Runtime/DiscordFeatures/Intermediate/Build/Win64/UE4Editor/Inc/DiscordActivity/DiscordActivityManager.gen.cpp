// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordActivity/Public/DiscordActivityManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordActivityManager() {}
// Cross Module References
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_UDiscordActivityManager_NoRegister();
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_UDiscordActivityManager();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordManager();
	UPackage* Z_Construct_UPackage__Script_DiscordActivity();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordCore_NoRegister();
	DISCORDACTIVITY_API UFunction* Z_Construct_UDelegateFunction_DiscordActivity_OnActivityJoin__DelegateSignature();
	DISCORDACTIVITY_API UFunction* Z_Construct_UDelegateFunction_DiscordActivity_OnActivitySpectate__DelegateSignature();
	DISCORDACTIVITY_API UFunction* Z_Construct_UDelegateFunction_DiscordActivity_OnActivityJoinRequest__DelegateSignature();
	DISCORDACTIVITY_API UFunction* Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UDiscordActivityManager::execGetActivityManager)
	{
		P_GET_OBJECT(UDiscordCore,Z_Param_DiscordCore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDiscordActivityManager**)Z_Param__Result=UDiscordActivityManager::GetActivityManager(Z_Param_DiscordCore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordActivityManager::execRegisterCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Command);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterCommand(Z_Param_Command);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordActivityManager::execRegisterSteam)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterSteam(Z_Param_SteamID);
		P_NATIVE_END;
	}
	void UDiscordActivityManager::StaticRegisterNativesUDiscordActivityManager()
	{
		UClass* Class = UDiscordActivityManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActivityManager", &UDiscordActivityManager::execGetActivityManager },
			{ "RegisterCommand", &UDiscordActivityManager::execRegisterCommand },
			{ "RegisterSteam", &UDiscordActivityManager::execRegisterSteam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiscordActivityManager_GetActivityManager_Statics
	{
		struct DiscordActivityManager_eventGetActivityManager_Parms
		{
			UDiscordCore* DiscordCore;
			UDiscordActivityManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DiscordCore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordActivityManager_GetActivityManager_Statics::NewProp_DiscordCore = { "DiscordCore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordActivityManager_eventGetActivityManager_Parms, DiscordCore), Z_Construct_UClass_UDiscordCore_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordActivityManager_GetActivityManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordActivityManager_eventGetActivityManager_Parms, ReturnValue), Z_Construct_UClass_UDiscordActivityManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordActivityManager_GetActivityManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordActivityManager_GetActivityManager_Statics::NewProp_DiscordCore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordActivityManager_GetActivityManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordActivityManager_GetActivityManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordActivityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordActivityManager_GetActivityManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordActivityManager, nullptr, "GetActivityManager", nullptr, nullptr, sizeof(DiscordActivityManager_eventGetActivityManager_Parms), Z_Construct_UFunction_UDiscordActivityManager_GetActivityManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordActivityManager_GetActivityManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordActivityManager_GetActivityManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordActivityManager_GetActivityManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordActivityManager_GetActivityManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordActivityManager_GetActivityManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordActivityManager_RegisterCommand_Statics
	{
		struct DiscordActivityManager_eventRegisterCommand_Parms
		{
			FString Command;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Command;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordActivityManager_RegisterCommand_Statics::NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordActivityManager_RegisterCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordActivityManager_eventRegisterCommand_Parms, Command), METADATA_PARAMS(Z_Construct_UFunction_UDiscordActivityManager_RegisterCommand_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordActivityManager_RegisterCommand_Statics::NewProp_Command_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordActivityManager_RegisterCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordActivityManager_RegisterCommand_Statics::NewProp_Command,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordActivityManager_RegisterCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordActivityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordActivityManager_RegisterCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordActivityManager, nullptr, "RegisterCommand", nullptr, nullptr, sizeof(DiscordActivityManager_eventRegisterCommand_Parms), Z_Construct_UFunction_UDiscordActivityManager_RegisterCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordActivityManager_RegisterCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordActivityManager_RegisterCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordActivityManager_RegisterCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordActivityManager_RegisterCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordActivityManager_RegisterCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordActivityManager_RegisterSteam_Statics
	{
		struct DiscordActivityManager_eventRegisterSteam_Parms
		{
			int64 SteamID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordActivityManager_RegisterSteam_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordActivityManager_RegisterSteam_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordActivityManager_eventRegisterSteam_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UDiscordActivityManager_RegisterSteam_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordActivityManager_RegisterSteam_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordActivityManager_RegisterSteam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordActivityManager_RegisterSteam_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordActivityManager_RegisterSteam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordActivityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordActivityManager_RegisterSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordActivityManager, nullptr, "RegisterSteam", nullptr, nullptr, sizeof(DiscordActivityManager_eventRegisterSteam_Parms), Z_Construct_UFunction_UDiscordActivityManager_RegisterSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordActivityManager_RegisterSteam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordActivityManager_RegisterSteam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordActivityManager_RegisterSteam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordActivityManager_RegisterSteam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordActivityManager_RegisterSteam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDiscordActivityManager_NoRegister()
	{
		return UDiscordActivityManager::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordActivityManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActivityJoin_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActivityJoin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActivitySpectate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActivitySpectate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActivityJoinRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActivityJoinRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActivityInvite_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActivityInvite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordActivityManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDiscordManager,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordActivity,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiscordActivityManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordActivityManager_GetActivityManager, "GetActivityManager" }, // 189530465
		{ &Z_Construct_UFunction_UDiscordActivityManager_RegisterCommand, "RegisterCommand" }, // 54665606
		{ &Z_Construct_UFunction_UDiscordActivityManager_RegisterSteam, "RegisterSteam" }, // 1459931254
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordActivityManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DiscordActivityManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DiscordActivityManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordActivityManager_Statics::NewProp_OnActivityJoin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivityManager" },
		{ "ModuleRelativePath", "Public/DiscordActivityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordActivityManager_Statics::NewProp_OnActivityJoin = { "OnActivityJoin", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordActivityManager, OnActivityJoin), Z_Construct_UDelegateFunction_DiscordActivity_OnActivityJoin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordActivityManager_Statics::NewProp_OnActivityJoin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordActivityManager_Statics::NewProp_OnActivityJoin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordActivityManager_Statics::NewProp_OnActivitySpectate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivityManager" },
		{ "ModuleRelativePath", "Public/DiscordActivityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordActivityManager_Statics::NewProp_OnActivitySpectate = { "OnActivitySpectate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordActivityManager, OnActivitySpectate), Z_Construct_UDelegateFunction_DiscordActivity_OnActivitySpectate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordActivityManager_Statics::NewProp_OnActivitySpectate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordActivityManager_Statics::NewProp_OnActivitySpectate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordActivityManager_Statics::NewProp_OnActivityJoinRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivityManager" },
		{ "ModuleRelativePath", "Public/DiscordActivityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordActivityManager_Statics::NewProp_OnActivityJoinRequest = { "OnActivityJoinRequest", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordActivityManager, OnActivityJoinRequest), Z_Construct_UDelegateFunction_DiscordActivity_OnActivityJoinRequest__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordActivityManager_Statics::NewProp_OnActivityJoinRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordActivityManager_Statics::NewProp_OnActivityJoinRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordActivityManager_Statics::NewProp_OnActivityInvite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivityManager" },
		{ "ModuleRelativePath", "Public/DiscordActivityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordActivityManager_Statics::NewProp_OnActivityInvite = { "OnActivityInvite", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordActivityManager, OnActivityInvite), Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordActivityManager_Statics::NewProp_OnActivityInvite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordActivityManager_Statics::NewProp_OnActivityInvite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDiscordActivityManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordActivityManager_Statics::NewProp_OnActivityJoin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordActivityManager_Statics::NewProp_OnActivitySpectate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordActivityManager_Statics::NewProp_OnActivityJoinRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordActivityManager_Statics::NewProp_OnActivityInvite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordActivityManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordActivityManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiscordActivityManager_Statics::ClassParams = {
		&UDiscordActivityManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDiscordActivityManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordActivityManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDiscordActivityManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordActivityManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiscordActivityManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiscordActivityManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordActivityManager, 329887285);
	template<> DISCORDACTIVITY_API UClass* StaticClass<UDiscordActivityManager>()
	{
		return UDiscordActivityManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordActivityManager(Z_Construct_UClass_UDiscordActivityManager, &UDiscordActivityManager::StaticClass, TEXT("/Script/DiscordActivity"), TEXT("UDiscordActivityManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordActivityManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
