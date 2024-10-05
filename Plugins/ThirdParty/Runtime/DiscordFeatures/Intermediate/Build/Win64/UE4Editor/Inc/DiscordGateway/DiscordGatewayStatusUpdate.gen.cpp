// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordGateway/Public/DiscordGatewayStatusUpdate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordGatewayStatusUpdate() {}
// Cross Module References
	DISCORDGATEWAY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate();
	UPackage* Z_Construct_UPackage__Script_DiscordGateway();
	DISCORDGATEWAY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayActivity();
// End Cross Module References
class UScriptStruct* FDiscordGatewayStatusUpdate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDGATEWAY_API uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate, Z_Construct_UPackage__Script_DiscordGateway(), TEXT("DiscordGatewayStatusUpdate"), sizeof(FDiscordGatewayStatusUpdate), Get_Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Hash());
	}
	return Singleton;
}
template<> DISCORDGATEWAY_API UScriptStruct* StaticStruct<FDiscordGatewayStatusUpdate>()
{
	return FDiscordGatewayStatusUpdate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordGatewayStatusUpdate(FDiscordGatewayStatusUpdate::StaticStruct, TEXT("/Script/DiscordGateway"), TEXT("DiscordGatewayStatusUpdate"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayStatusUpdate
{
	FScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayStatusUpdate()
	{
		UScriptStruct::DeferCppStructOps<FDiscordGatewayStatusUpdate>(FName(TEXT("DiscordGatewayStatusUpdate")));
	}
} ScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayStatusUpdate;
	struct Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Since_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Since;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Activities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Activities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Activities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAfk_MetaData[];
#endif
		static void NewProp_bAfk_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAfk;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordGatewayStatusUpdate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordGatewayStatusUpdate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_Since_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayStatusUpdate" },
		{ "ModuleRelativePath", "Public/DiscordGatewayStatusUpdate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_Since = { "Since", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayStatusUpdate, Since), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_Since_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_Since_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_Activities_Inner = { "Activities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDiscordGatewayActivity, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_Activities_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayStatusUpdate" },
		{ "ModuleRelativePath", "Public/DiscordGatewayStatusUpdate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_Activities = { "Activities", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayStatusUpdate, Activities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_Activities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_Activities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayStatusUpdate" },
		{ "ModuleRelativePath", "Public/DiscordGatewayStatusUpdate.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayStatusUpdate, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_bAfk_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayStatusUpdate" },
		{ "ModuleRelativePath", "Public/DiscordGatewayStatusUpdate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_bAfk_SetBit(void* Obj)
	{
		((FDiscordGatewayStatusUpdate*)Obj)->bAfk = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_bAfk = { "bAfk", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDiscordGatewayStatusUpdate), &Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_bAfk_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_bAfk_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_bAfk_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_Since,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_Activities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_Activities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::NewProp_bAfk,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordGateway,
		nullptr,
		&NewStructOps,
		"DiscordGatewayStatusUpdate",
		sizeof(FDiscordGatewayStatusUpdate),
		alignof(FDiscordGatewayStatusUpdate),
		Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordGateway();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordGatewayStatusUpdate"), sizeof(FDiscordGatewayStatusUpdate), Get_Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayStatusUpdate_Hash() { return 1088416567U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
