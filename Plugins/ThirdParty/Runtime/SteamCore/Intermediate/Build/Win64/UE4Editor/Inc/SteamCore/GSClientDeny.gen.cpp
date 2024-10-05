// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/GSClientDeny.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSClientDeny() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGSClientDeny();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamDenyReason();
// End Cross Module References
class UScriptStruct* FGSClientDeny::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGSClientDeny_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSClientDeny, Z_Construct_UPackage__Script_SteamCore(), TEXT("GSClientDeny"), sizeof(FGSClientDeny), Get_Z_Construct_UScriptStruct_FGSClientDeny_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGSClientDeny>()
{
	return FGSClientDeny::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGSClientDeny(FGSClientDeny::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GSClientDeny"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGSClientDeny
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGSClientDeny()
	{
		UScriptStruct::DeferCppStructOps<FGSClientDeny>(FName(TEXT("GSClientDeny")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGSClientDeny;
	struct Z_Construct_UScriptStruct_FGSClientDeny_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DenyReason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DenyReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DenyReason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OptionalText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientDeny_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GSClientDeny.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSClientDeny>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_SteamID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GSClientDeny" },
		{ "ModuleRelativePath", "Public/GSClientDeny.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSClientDeny, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GSClientDeny" },
		{ "ModuleRelativePath", "Public/GSClientDeny.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason = { "DenyReason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSClientDeny, DenyReason), Z_Construct_UEnum_SteamCore_ESteamDenyReason, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_OptionalText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GSClientDeny" },
		{ "ModuleRelativePath", "Public/GSClientDeny.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_OptionalText = { "OptionalText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSClientDeny, OptionalText), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_OptionalText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_OptionalText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSClientDeny_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_OptionalText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSClientDeny_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GSClientDeny",
		sizeof(FGSClientDeny),
		alignof(FGSClientDeny),
		Z_Construct_UScriptStruct_FGSClientDeny_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientDeny_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientDeny_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientDeny_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSClientDeny()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGSClientDeny_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GSClientDeny"), sizeof(FGSClientDeny), Get_Z_Construct_UScriptStruct_FGSClientDeny_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGSClientDeny_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGSClientDeny_Hash() { return 3283420962U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
