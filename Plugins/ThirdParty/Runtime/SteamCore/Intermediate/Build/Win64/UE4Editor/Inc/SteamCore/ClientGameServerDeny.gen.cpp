// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ClientGameServerDeny.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGameServerDeny() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FClientGameServerDeny();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamDenyReason();
// End Cross Module References
class UScriptStruct* FClientGameServerDeny::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FClientGameServerDeny_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGameServerDeny, Z_Construct_UPackage__Script_SteamCore(), TEXT("ClientGameServerDeny"), sizeof(FClientGameServerDeny), Get_Z_Construct_UScriptStruct_FClientGameServerDeny_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FClientGameServerDeny>()
{
	return FClientGameServerDeny::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGameServerDeny(FClientGameServerDeny::StaticStruct, TEXT("/Script/SteamCore"), TEXT("ClientGameServerDeny"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFClientGameServerDeny
{
	FScriptStruct_SteamCore_StaticRegisterNativesFClientGameServerDeny()
	{
		UScriptStruct::DeferCppStructOps<FClientGameServerDeny>(FName(TEXT("ClientGameServerDeny")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFClientGameServerDeny;
	struct Z_Construct_UScriptStruct_FClientGameServerDeny_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameServerIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameServerPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BSecure_MetaData[];
#endif
		static void NewProp_BSecure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BSecure;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGameServerDeny.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGameServerDeny>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_AppID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGameServerDeny" },
		{ "ModuleRelativePath", "Public/ClientGameServerDeny.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGameServerDeny, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_AppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerIP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGameServerDeny" },
		{ "ModuleRelativePath", "Public/ClientGameServerDeny.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGameServerDeny, GameServerIP), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerPort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGameServerDeny" },
		{ "ModuleRelativePath", "Public/ClientGameServerDeny.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGameServerDeny, GameServerPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_BSecure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGameServerDeny" },
		{ "ModuleRelativePath", "Public/ClientGameServerDeny.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_BSecure_SetBit(void* Obj)
	{
		((FClientGameServerDeny*)Obj)->BSecure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_BSecure = { "BSecure", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FClientGameServerDeny), &Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_BSecure_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_BSecure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_BSecure_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGameServerDeny" },
		{ "ModuleRelativePath", "Public/ClientGameServerDeny.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGameServerDeny, Reason), Z_Construct_UEnum_SteamCore_ESteamDenyReason, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_BSecure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"ClientGameServerDeny",
		sizeof(FClientGameServerDeny),
		alignof(FClientGameServerDeny),
		Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGameServerDeny()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGameServerDeny_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGameServerDeny"), sizeof(FClientGameServerDeny), Get_Z_Construct_UScriptStruct_FClientGameServerDeny_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGameServerDeny_Hash() { return 4038968113U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
