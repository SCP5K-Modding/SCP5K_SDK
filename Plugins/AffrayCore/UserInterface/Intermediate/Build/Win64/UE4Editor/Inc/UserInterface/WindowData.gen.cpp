// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/WindowData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowData() {}
// Cross Module References
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FWindowData();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FComputerAccount();
// End Cross Module References
class UScriptStruct* FWindowData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern USERINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FWindowData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWindowData, Z_Construct_UPackage__Script_UserInterface(), TEXT("WindowData"), sizeof(FWindowData), Get_Z_Construct_UScriptStruct_FWindowData_Hash());
	}
	return Singleton;
}
template<> USERINTERFACE_API UScriptStruct* StaticStruct<FWindowData>()
{
	return FWindowData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWindowData(FWindowData::StaticStruct, TEXT("/Script/UserInterface"), TEXT("WindowData"), false, nullptr, nullptr);
static struct FScriptStruct_UserInterface_StaticRegisterNativesFWindowData
{
	FScriptStruct_UserInterface_StaticRegisterNativesFWindowData()
	{
		UScriptStruct::DeferCppStructOps<FWindowData>(FName(TEXT("WindowData")));
	}
} ScriptStruct_UserInterface_StaticRegisterNativesFWindowData;
	struct Z_Construct_UScriptStruct_FWindowData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Account_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Account;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WindowData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWindowData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWindowData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowData_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WindowData" },
		{ "ModuleRelativePath", "Public/WindowData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWindowData_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWindowData, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowData_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowData_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowData_Statics::NewProp_Account_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WindowData" },
		{ "ModuleRelativePath", "Public/WindowData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWindowData_Statics::NewProp_Account = { "Account", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWindowData, Account), Z_Construct_UScriptStruct_FComputerAccount, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowData_Statics::NewProp_Account_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowData_Statics::NewProp_Account_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWindowData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowData_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowData_Statics::NewProp_Account,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWindowData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
		nullptr,
		&NewStructOps,
		"WindowData",
		sizeof(FWindowData),
		alignof(FWindowData),
		Z_Construct_UScriptStruct_FWindowData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWindowData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWindowData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WindowData"), sizeof(FWindowData), Get_Z_Construct_UScriptStruct_FWindowData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWindowData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWindowData_Hash() { return 1712442102U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
