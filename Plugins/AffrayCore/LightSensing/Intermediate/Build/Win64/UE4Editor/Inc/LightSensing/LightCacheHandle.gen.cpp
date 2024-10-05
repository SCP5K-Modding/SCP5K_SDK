// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightSensing/Public/LightCacheHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightCacheHandle() {}
// Cross Module References
	LIGHTSENSING_API UScriptStruct* Z_Construct_UScriptStruct_FLightCacheHandle();
	UPackage* Z_Construct_UPackage__Script_LightSensing();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LIGHTSENSING_API UFunction* Z_Construct_UDelegateFunction_LightSensing_LightHandleUpdatedDelegate__DelegateSignature();
// End Cross Module References
class UScriptStruct* FLightCacheHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIGHTSENSING_API uint32 Get_Z_Construct_UScriptStruct_FLightCacheHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightCacheHandle, Z_Construct_UPackage__Script_LightSensing(), TEXT("LightCacheHandle"), sizeof(FLightCacheHandle), Get_Z_Construct_UScriptStruct_FLightCacheHandle_Hash());
	}
	return Singleton;
}
template<> LIGHTSENSING_API UScriptStruct* StaticStruct<FLightCacheHandle>()
{
	return FLightCacheHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLightCacheHandle(FLightCacheHandle::StaticStruct, TEXT("/Script/LightSensing"), TEXT("LightCacheHandle"), false, nullptr, nullptr);
static struct FScriptStruct_LightSensing_StaticRegisterNativesFLightCacheHandle
{
	FScriptStruct_LightSensing_StaticRegisterNativesFLightCacheHandle()
	{
		UScriptStruct::DeferCppStructOps<FLightCacheHandle>(FName(TEXT("LightCacheHandle")));
	}
} ScriptStruct_LightSensing_StaticRegisterNativesFLightCacheHandle;
	struct Z_Construct_UScriptStruct_FLightCacheHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteOnZeroUsers_MetaData[];
#endif
		static void NewProp_bDeleteOnZeroUsers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteOnZeroUsers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLightHandleUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLightHandleUpdated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightCacheHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LightCacheHandle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightCacheHandle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_LastIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightCacheHandle" },
		{ "ModuleRelativePath", "Public/LightCacheHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_LastIntensity = { "LastIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightCacheHandle, LastIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_LastIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_LastIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_CurrentIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightCacheHandle" },
		{ "ModuleRelativePath", "Public/LightCacheHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_CurrentIntensity = { "CurrentIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightCacheHandle, CurrentIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_CurrentIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_CurrentIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_Subject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightCacheHandle" },
		{ "ModuleRelativePath", "Public/LightCacheHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightCacheHandle, Subject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_Subject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_Subject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_bDeleteOnZeroUsers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightCacheHandle" },
		{ "ModuleRelativePath", "Public/LightCacheHandle.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_bDeleteOnZeroUsers_SetBit(void* Obj)
	{
		((FLightCacheHandle*)Obj)->bDeleteOnZeroUsers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_bDeleteOnZeroUsers = { "bDeleteOnZeroUsers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLightCacheHandle), &Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_bDeleteOnZeroUsers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_bDeleteOnZeroUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_bDeleteOnZeroUsers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_OnLightHandleUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LightCacheHandle" },
		{ "ModuleRelativePath", "Public/LightCacheHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_OnLightHandleUpdated = { "OnLightHandleUpdated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightCacheHandle, OnLightHandleUpdated), Z_Construct_UDelegateFunction_LightSensing_LightHandleUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_OnLightHandleUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_OnLightHandleUpdated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLightCacheHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_LastIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_CurrentIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_bDeleteOnZeroUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightCacheHandle_Statics::NewProp_OnLightHandleUpdated,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightCacheHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LightSensing,
		nullptr,
		&NewStructOps,
		"LightCacheHandle",
		sizeof(FLightCacheHandle),
		alignof(FLightCacheHandle),
		Z_Construct_UScriptStruct_FLightCacheHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightCacheHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLightCacheHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightCacheHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLightCacheHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLightCacheHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LightSensing();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LightCacheHandle"), sizeof(FLightCacheHandle), Get_Z_Construct_UScriptStruct_FLightCacheHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLightCacheHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLightCacheHandle_Hash() { return 956670682U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
