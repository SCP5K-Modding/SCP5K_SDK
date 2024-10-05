// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/GamepadTextInputDismissed.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamepadTextInputDismissed() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGamepadTextInputDismissed();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FGamepadTextInputDismissed::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGamepadTextInputDismissed, Z_Construct_UPackage__Script_SteamCore(), TEXT("GamepadTextInputDismissed"), sizeof(FGamepadTextInputDismissed), Get_Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGamepadTextInputDismissed>()
{
	return FGamepadTextInputDismissed::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGamepadTextInputDismissed(FGamepadTextInputDismissed::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GamepadTextInputDismissed"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGamepadTextInputDismissed
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGamepadTextInputDismissed()
	{
		UScriptStruct::DeferCppStructOps<FGamepadTextInputDismissed>(FName(TEXT("GamepadTextInputDismissed")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGamepadTextInputDismissed;
	struct Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubmitted_MetaData[];
#endif
		static void NewProp_bSubmitted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubmitted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubmittedText_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubmittedText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GamepadTextInputDismissed.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGamepadTextInputDismissed>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GamepadTextInputDismissed" },
		{ "ModuleRelativePath", "Public/GamepadTextInputDismissed.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted_SetBit(void* Obj)
	{
		((FGamepadTextInputDismissed*)Obj)->bSubmitted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted = { "bSubmitted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGamepadTextInputDismissed), &Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_SubmittedText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GamepadTextInputDismissed" },
		{ "ModuleRelativePath", "Public/GamepadTextInputDismissed.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_SubmittedText = { "SubmittedText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamepadTextInputDismissed, SubmittedText), METADATA_PARAMS(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_SubmittedText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_SubmittedText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_SubmittedText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GamepadTextInputDismissed",
		sizeof(FGamepadTextInputDismissed),
		alignof(FGamepadTextInputDismissed),
		Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGamepadTextInputDismissed()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GamepadTextInputDismissed"), sizeof(FGamepadTextInputDismissed), Get_Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Hash() { return 3995373973U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
