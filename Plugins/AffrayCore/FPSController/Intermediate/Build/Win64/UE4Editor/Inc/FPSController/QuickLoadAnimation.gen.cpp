// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/QuickLoadAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuickLoadAnimation() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FQuickLoadAnimation();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
class UScriptStruct* FQuickLoadAnimation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FQuickLoadAnimation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuickLoadAnimation, Z_Construct_UPackage__Script_FPSController(), TEXT("QuickLoadAnimation"), sizeof(FQuickLoadAnimation), Get_Z_Construct_UScriptStruct_FQuickLoadAnimation_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FQuickLoadAnimation>()
{
	return FQuickLoadAnimation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuickLoadAnimation(FQuickLoadAnimation::StaticStruct, TEXT("/Script/FPSController"), TEXT("QuickLoadAnimation"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFQuickLoadAnimation
{
	FScriptStruct_FPSController_StaticRegisterNativesFQuickLoadAnimation()
	{
		UScriptStruct::DeferCppStructOps<FQuickLoadAnimation>(FName(TEXT("QuickLoadAnimation")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFQuickLoadAnimation;
	struct Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuickLoadAnimation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuickLoadAnimation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::NewProp_Time_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuickLoadAnimation" },
		{ "ModuleRelativePath", "Public/QuickLoadAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuickLoadAnimation, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::NewProp_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuickLoadAnimation" },
		{ "ModuleRelativePath", "Public/QuickLoadAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuickLoadAnimation, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::NewProp_AmmoCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuickLoadAnimation" },
		{ "ModuleRelativePath", "Public/QuickLoadAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::NewProp_AmmoCount = { "AmmoCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuickLoadAnimation, AmmoCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::NewProp_AmmoCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::NewProp_AmmoCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::NewProp_AmmoCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"QuickLoadAnimation",
		sizeof(FQuickLoadAnimation),
		alignof(FQuickLoadAnimation),
		Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuickLoadAnimation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuickLoadAnimation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuickLoadAnimation"), sizeof(FQuickLoadAnimation), Get_Z_Construct_UScriptStruct_FQuickLoadAnimation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuickLoadAnimation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuickLoadAnimation_Hash() { return 1296187182U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
