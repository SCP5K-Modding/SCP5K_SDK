// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordGateway/Public/DiscordGatewayIdentifyProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordGatewayIdentifyProperties() {}
// Cross Module References
	DISCORDGATEWAY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties();
	UPackage* Z_Construct_UPackage__Script_DiscordGateway();
// End Cross Module References
class UScriptStruct* FDiscordGatewayIdentifyProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDGATEWAY_API uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties, Z_Construct_UPackage__Script_DiscordGateway(), TEXT("DiscordGatewayIdentifyProperties"), sizeof(FDiscordGatewayIdentifyProperties), Get_Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Hash());
	}
	return Singleton;
}
template<> DISCORDGATEWAY_API UScriptStruct* StaticStruct<FDiscordGatewayIdentifyProperties>()
{
	return FDiscordGatewayIdentifyProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordGatewayIdentifyProperties(FDiscordGatewayIdentifyProperties::StaticStruct, TEXT("/Script/DiscordGateway"), TEXT("DiscordGatewayIdentifyProperties"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayIdentifyProperties
{
	FScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayIdentifyProperties()
	{
		UScriptStruct::DeferCppStructOps<FDiscordGatewayIdentifyProperties>(FName(TEXT("DiscordGatewayIdentifyProperties")));
	}
} ScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayIdentifyProperties;
	struct Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Browser_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Browser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Device_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordGatewayIdentifyProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordGatewayIdentifyProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::NewProp_OS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayIdentifyProperties" },
		{ "ModuleRelativePath", "Public/DiscordGatewayIdentifyProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::NewProp_OS = { "OS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayIdentifyProperties, OS), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::NewProp_OS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::NewProp_OS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::NewProp_Browser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayIdentifyProperties" },
		{ "ModuleRelativePath", "Public/DiscordGatewayIdentifyProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::NewProp_Browser = { "Browser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayIdentifyProperties, Browser), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::NewProp_Browser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::NewProp_Browser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::NewProp_Device_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayIdentifyProperties" },
		{ "ModuleRelativePath", "Public/DiscordGatewayIdentifyProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::NewProp_Device = { "Device", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayIdentifyProperties, Device), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::NewProp_Device_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::NewProp_Device_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::NewProp_OS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::NewProp_Browser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::NewProp_Device,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordGateway,
		nullptr,
		&NewStructOps,
		"DiscordGatewayIdentifyProperties",
		sizeof(FDiscordGatewayIdentifyProperties),
		alignof(FDiscordGatewayIdentifyProperties),
		Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordGateway();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordGatewayIdentifyProperties"), sizeof(FDiscordGatewayIdentifyProperties), Get_Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayIdentifyProperties_Hash() { return 1728152305U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
