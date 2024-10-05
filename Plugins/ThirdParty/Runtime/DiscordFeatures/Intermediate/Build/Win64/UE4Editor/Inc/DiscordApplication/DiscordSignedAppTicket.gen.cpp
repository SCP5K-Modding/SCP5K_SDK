// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordApplication/Public/DiscordSignedAppTicket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordSignedAppTicket() {}
// Cross Module References
	DISCORDAPPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordSignedAppTicket();
	UPackage* Z_Construct_UPackage__Script_DiscordApplication();
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordUser();
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordEntitlement();
// End Cross Module References
class UScriptStruct* FDiscordSignedAppTicket::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDAPPLICATION_API uint32 Get_Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordSignedAppTicket, Z_Construct_UPackage__Script_DiscordApplication(), TEXT("DiscordSignedAppTicket"), sizeof(FDiscordSignedAppTicket), Get_Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Hash());
	}
	return Singleton;
}
template<> DISCORDAPPLICATION_API UScriptStruct* StaticStruct<FDiscordSignedAppTicket>()
{
	return FDiscordSignedAppTicket::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordSignedAppTicket(FDiscordSignedAppTicket::StaticStruct, TEXT("/Script/DiscordApplication"), TEXT("DiscordSignedAppTicket"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordApplication_StaticRegisterNativesFDiscordSignedAppTicket
{
	FScriptStruct_DiscordApplication_StaticRegisterNativesFDiscordSignedAppTicket()
	{
		UScriptStruct::DeferCppStructOps<FDiscordSignedAppTicket>(FName(TEXT("DiscordSignedAppTicket")));
	}
} ScriptStruct_DiscordApplication_StaticRegisterNativesFDiscordSignedAppTicket;
	struct Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ApplicationId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entitlements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entitlements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Entitlements;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Timestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordSignedAppTicket.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordSignedAppTicket>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewProp_ApplicationId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSignedAppTicket" },
		{ "ModuleRelativePath", "Public/DiscordSignedAppTicket.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewProp_ApplicationId = { "ApplicationId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordSignedAppTicket, ApplicationId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewProp_ApplicationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewProp_ApplicationId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewProp_User_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSignedAppTicket" },
		{ "ModuleRelativePath", "Public/DiscordSignedAppTicket.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordSignedAppTicket, User), Z_Construct_UScriptStruct_FDiscordUser, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewProp_User_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewProp_User_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewProp_Entitlements_Inner = { "Entitlements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDiscordEntitlement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewProp_Entitlements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSignedAppTicket" },
		{ "ModuleRelativePath", "Public/DiscordSignedAppTicket.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewProp_Entitlements = { "Entitlements", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordSignedAppTicket, Entitlements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewProp_Entitlements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewProp_Entitlements_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewProp_Timestamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSignedAppTicket" },
		{ "ModuleRelativePath", "Public/DiscordSignedAppTicket.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordSignedAppTicket, Timestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewProp_Timestamp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewProp_ApplicationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewProp_Entitlements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewProp_Entitlements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::NewProp_Timestamp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordApplication,
		nullptr,
		&NewStructOps,
		"DiscordSignedAppTicket",
		sizeof(FDiscordSignedAppTicket),
		alignof(FDiscordSignedAppTicket),
		Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordSignedAppTicket()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordApplication();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordSignedAppTicket"), sizeof(FDiscordSignedAppTicket), Get_Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordSignedAppTicket_Hash() { return 1618755600U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
