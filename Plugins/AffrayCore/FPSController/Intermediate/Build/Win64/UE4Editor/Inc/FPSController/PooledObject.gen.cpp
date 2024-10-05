// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/PooledObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePooledObject() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FPooledObject();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FPooledObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FPooledObject_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPooledObject, Z_Construct_UPackage__Script_FPSController(), TEXT("PooledObject"), sizeof(FPooledObject), Get_Z_Construct_UScriptStruct_FPooledObject_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FPooledObject>()
{
	return FPooledObject::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPooledObject(FPooledObject::StaticStruct, TEXT("/Script/FPSController"), TEXT("PooledObject"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFPooledObject
{
	FScriptStruct_FPSController_StaticRegisterNativesFPooledObject()
	{
		UScriptStruct::DeferCppStructOps<FPooledObject>(FName(TEXT("PooledObject")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFPooledObject;
	struct Z_Construct_UScriptStruct_FPooledObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActorTickWasEnabled_MetaData[];
#endif
		static void NewProp_bActorTickWasEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActorTickWasEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPooledObject_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PooledObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPooledObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPooledObject>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPooledObject_Statics::NewProp_bActorTickWasEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PooledObject" },
		{ "ModuleRelativePath", "Public/PooledObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPooledObject_Statics::NewProp_bActorTickWasEnabled_SetBit(void* Obj)
	{
		((FPooledObject*)Obj)->bActorTickWasEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPooledObject_Statics::NewProp_bActorTickWasEnabled = { "bActorTickWasEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPooledObject), &Z_Construct_UScriptStruct_FPooledObject_Statics::NewProp_bActorTickWasEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPooledObject_Statics::NewProp_bActorTickWasEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPooledObject_Statics::NewProp_bActorTickWasEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPooledObject_Statics::NewProp_Object_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PooledObject" },
		{ "ModuleRelativePath", "Public/PooledObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPooledObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPooledObject, Object), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPooledObject_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPooledObject_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPooledObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPooledObject_Statics::NewProp_bActorTickWasEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPooledObject_Statics::NewProp_Object,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPooledObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"PooledObject",
		sizeof(FPooledObject),
		alignof(FPooledObject),
		Z_Construct_UScriptStruct_FPooledObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPooledObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPooledObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPooledObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPooledObject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPooledObject_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PooledObject"), sizeof(FPooledObject), Get_Z_Construct_UScriptStruct_FPooledObject_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPooledObject_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPooledObject_Hash() { return 2776498871U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
