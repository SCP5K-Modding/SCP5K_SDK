// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/Tracking.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTracking() {}
// Cross Module References
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FTracking();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FTracking::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern USERINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FTracking_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTracking, Z_Construct_UPackage__Script_UserInterface(), TEXT("Tracking"), sizeof(FTracking), Get_Z_Construct_UScriptStruct_FTracking_Hash());
	}
	return Singleton;
}
template<> USERINTERFACE_API UScriptStruct* StaticStruct<FTracking>()
{
	return FTracking::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTracking(FTracking::StaticStruct, TEXT("/Script/UserInterface"), TEXT("Tracking"), false, nullptr, nullptr);
static struct FScriptStruct_UserInterface_StaticRegisterNativesFTracking
{
	FScriptStruct_UserInterface_StaticRegisterNativesFTracking()
	{
		UScriptStruct::DeferCppStructOps<FTracking>(FName(TEXT("Tracking")));
	}
} ScriptStruct_UserInterface_StaticRegisterNativesFTracking;
	struct Z_Construct_UScriptStruct_FTracking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowTracking_MetaData[];
#endif
		static void NewProp_bAllowTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowTracking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackingLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDistanceToTarget_MetaData[];
#endif
		static void NewProp_bShowDistanceToTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDistanceToTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TrackingIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTracking_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Tracking.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTracking_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTracking>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTracking_Statics::NewProp_bAllowTracking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Tracking" },
		{ "ModuleRelativePath", "Public/Tracking.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTracking_Statics::NewProp_bAllowTracking_SetBit(void* Obj)
	{
		((FTracking*)Obj)->bAllowTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTracking_Statics::NewProp_bAllowTracking = { "bAllowTracking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTracking), &Z_Construct_UScriptStruct_FTracking_Statics::NewProp_bAllowTracking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTracking_Statics::NewProp_bAllowTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracking_Statics::NewProp_bAllowTracking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTracking_Statics::NewProp_TrackingLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Tracking" },
		{ "ModuleRelativePath", "Public/Tracking.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTracking_Statics::NewProp_TrackingLocation = { "TrackingLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTracking, TrackingLocation), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FTracking_Statics::NewProp_TrackingLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracking_Statics::NewProp_TrackingLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTracking_Statics::NewProp_bShowDistanceToTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Tracking" },
		{ "ModuleRelativePath", "Public/Tracking.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTracking_Statics::NewProp_bShowDistanceToTarget_SetBit(void* Obj)
	{
		((FTracking*)Obj)->bShowDistanceToTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTracking_Statics::NewProp_bShowDistanceToTarget = { "bShowDistanceToTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTracking), &Z_Construct_UScriptStruct_FTracking_Statics::NewProp_bShowDistanceToTarget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTracking_Statics::NewProp_bShowDistanceToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracking_Statics::NewProp_bShowDistanceToTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTracking_Statics::NewProp_TrackingIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Tracking" },
		{ "ModuleRelativePath", "Public/Tracking.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FTracking_Statics::NewProp_TrackingIcon = { "TrackingIcon", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTracking, TrackingIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTracking_Statics::NewProp_TrackingIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracking_Statics::NewProp_TrackingIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracking_Statics::NewProp_bAllowTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracking_Statics::NewProp_TrackingLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracking_Statics::NewProp_bShowDistanceToTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracking_Statics::NewProp_TrackingIcon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTracking_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
		nullptr,
		&NewStructOps,
		"Tracking",
		sizeof(FTracking),
		alignof(FTracking),
		Z_Construct_UScriptStruct_FTracking_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracking_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTracking_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracking_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTracking()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTracking_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Tracking"), sizeof(FTracking), Get_Z_Construct_UScriptStruct_FTracking_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTracking_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTracking_Hash() { return 1554941737U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
