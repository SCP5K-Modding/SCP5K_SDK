// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightSensing/Public/LightCache.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightCache() {}
// Cross Module References
	LIGHTSENSING_API UScriptStruct* Z_Construct_UScriptStruct_FLightCache();
	UPackage* Z_Construct_UPackage__Script_LightSensing();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FLightCache::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIGHTSENSING_API uint32 Get_Z_Construct_UScriptStruct_FLightCache_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightCache, Z_Construct_UPackage__Script_LightSensing(), TEXT("LightCache"), sizeof(FLightCache), Get_Z_Construct_UScriptStruct_FLightCache_Hash());
	}
	return Singleton;
}
template<> LIGHTSENSING_API UScriptStruct* StaticStruct<FLightCache>()
{
	return FLightCache::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLightCache(FLightCache::StaticStruct, TEXT("/Script/LightSensing"), TEXT("LightCache"), false, nullptr, nullptr);
static struct FScriptStruct_LightSensing_StaticRegisterNativesFLightCache
{
	FScriptStruct_LightSensing_StaticRegisterNativesFLightCache()
	{
		UScriptStruct::DeferCppStructOps<FLightCache>(FName(TEXT("LightCache")));
	}
} ScriptStruct_LightSensing_StaticRegisterNativesFLightCache;
	struct Z_Construct_UScriptStruct_FLightCache_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Light_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Light;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightCache_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LightCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLightCache_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightCache>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightCache_Statics::NewProp_Intensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightCache" },
		{ "ModuleRelativePath", "Public/LightCache.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightCache_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightCache, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightCache_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightCache_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightCache_Statics::NewProp_position_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightCache" },
		{ "ModuleRelativePath", "Public/LightCache.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLightCache_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightCache, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightCache_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightCache_Statics::NewProp_position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightCache_Statics::NewProp_Light_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightCache" },
		{ "ModuleRelativePath", "Public/LightCache.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLightCache_Statics::NewProp_Light = { "Light", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightCache, Light), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightCache_Statics::NewProp_Light_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightCache_Statics::NewProp_Light_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightCache_Statics::NewProp_InitialTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightCache" },
		{ "ModuleRelativePath", "Public/LightCache.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightCache_Statics::NewProp_InitialTime = { "InitialTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightCache, InitialTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightCache_Statics::NewProp_InitialTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightCache_Statics::NewProp_InitialTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLightCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightCache_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightCache_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightCache_Statics::NewProp_Light,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightCache_Statics::NewProp_InitialTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightCache_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LightSensing,
		nullptr,
		&NewStructOps,
		"LightCache",
		sizeof(FLightCache),
		alignof(FLightCache),
		Z_Construct_UScriptStruct_FLightCache_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightCache_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLightCache_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightCache_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLightCache()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLightCache_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LightSensing();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LightCache"), sizeof(FLightCache), Get_Z_Construct_UScriptStruct_FLightCache_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLightCache_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLightCache_Hash() { return 3517453967U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
