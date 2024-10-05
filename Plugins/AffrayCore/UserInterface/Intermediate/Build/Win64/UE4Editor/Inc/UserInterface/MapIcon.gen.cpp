// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/MapIcon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapIcon() {}
// Cross Module References
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FMapIcon();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
// End Cross Module References
class UScriptStruct* FMapIcon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern USERINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FMapIcon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapIcon, Z_Construct_UPackage__Script_UserInterface(), TEXT("MapIcon"), sizeof(FMapIcon), Get_Z_Construct_UScriptStruct_FMapIcon_Hash());
	}
	return Singleton;
}
template<> USERINTERFACE_API UScriptStruct* StaticStruct<FMapIcon>()
{
	return FMapIcon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMapIcon(FMapIcon::StaticStruct, TEXT("/Script/UserInterface"), TEXT("MapIcon"), false, nullptr, nullptr);
static struct FScriptStruct_UserInterface_StaticRegisterNativesFMapIcon
{
	FScriptStruct_UserInterface_StaticRegisterNativesFMapIcon()
	{
		UScriptStruct::DeferCppStructOps<FMapIcon>(FName(TEXT("MapIcon")));
	}
} ScriptStruct_UserInterface_StaticRegisterNativesFMapIcon;
	struct Z_Construct_UScriptStruct_FMapIcon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapIcon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MapIcon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapIcon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapIcon>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapIcon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
		nullptr,
		&NewStructOps,
		"MapIcon",
		sizeof(FMapIcon),
		alignof(FMapIcon),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapIcon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapIcon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapIcon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMapIcon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MapIcon"), sizeof(FMapIcon), Get_Z_Construct_UScriptStruct_FMapIcon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMapIcon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMapIcon_Hash() { return 2504146853U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
