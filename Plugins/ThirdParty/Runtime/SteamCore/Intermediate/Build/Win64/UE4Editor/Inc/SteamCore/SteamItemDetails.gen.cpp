// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamItemDetails.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamItemDetails() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDetails();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemInstanceID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDef();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreItemFlags();
// End Cross Module References
class UScriptStruct* FSteamItemDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamItemDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamItemDetails, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamItemDetails"), sizeof(FSteamItemDetails), Get_Z_Construct_UScriptStruct_FSteamItemDetails_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamItemDetails>()
{
	return FSteamItemDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamItemDetails(FSteamItemDetails::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamItemDetails"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamItemDetails
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamItemDetails()
	{
		UScriptStruct::DeferCppStructOps<FSteamItemDetails>(FName(TEXT("SteamItemDetails")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamItemDetails;
	struct Z_Construct_UScriptStruct_FSteamItemDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Definition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamItemDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamItemDetails.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamItemDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_InstanceId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamItemDetails" },
		{ "ModuleRelativePath", "Public/SteamItemDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamItemDetails, InstanceId), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_InstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_InstanceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Definition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamItemDetails" },
		{ "ModuleRelativePath", "Public/SteamItemDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamItemDetails, Definition), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Definition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Definition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Quantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamItemDetails" },
		{ "ModuleRelativePath", "Public/SteamItemDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamItemDetails, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Quantity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamCoreItemFlags, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamItemDetails" },
		{ "ModuleRelativePath", "Public/SteamItemDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamItemDetails, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamItemDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_InstanceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Definition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamItemDetails_Statics::NewProp_Flags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamItemDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamItemDetails",
		sizeof(FSteamItemDetails),
		alignof(FSteamItemDetails),
		Z_Construct_UScriptStruct_FSteamItemDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamItemDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamItemDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamItemDetails"), sizeof(FSteamItemDetails), Get_Z_Construct_UScriptStruct_FSteamItemDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamItemDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamItemDetails_Hash() { return 1178089646U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
