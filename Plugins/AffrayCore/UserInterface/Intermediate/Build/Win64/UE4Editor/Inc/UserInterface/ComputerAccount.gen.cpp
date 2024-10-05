// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/ComputerAccount.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputerAccount() {}
// Cross Module References
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FComputerAccount();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FFile();
// End Cross Module References
class UScriptStruct* FComputerAccount::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern USERINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FComputerAccount_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputerAccount, Z_Construct_UPackage__Script_UserInterface(), TEXT("ComputerAccount"), sizeof(FComputerAccount), Get_Z_Construct_UScriptStruct_FComputerAccount_Hash());
	}
	return Singleton;
}
template<> USERINTERFACE_API UScriptStruct* StaticStruct<FComputerAccount>()
{
	return FComputerAccount::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComputerAccount(FComputerAccount::StaticStruct, TEXT("/Script/UserInterface"), TEXT("ComputerAccount"), false, nullptr, nullptr);
static struct FScriptStruct_UserInterface_StaticRegisterNativesFComputerAccount
{
	FScriptStruct_UserInterface_StaticRegisterNativesFComputerAccount()
	{
		UScriptStruct::DeferCppStructOps<FComputerAccount>(FName(TEXT("ComputerAccount")));
	}
} ScriptStruct_UserInterface_StaticRegisterNativesFComputerAccount;
	struct Z_Construct_UScriptStruct_FComputerAccount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FirstName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LastName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Rank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Files_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Files_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Files;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputerAccount_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ComputerAccount.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComputerAccount_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputerAccount>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Username_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ComputerAccount" },
		{ "ModuleRelativePath", "Public/ComputerAccount.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComputerAccount, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Email_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ComputerAccount" },
		{ "ModuleRelativePath", "Public/ComputerAccount.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComputerAccount, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_FirstName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ComputerAccount" },
		{ "ModuleRelativePath", "Public/ComputerAccount.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_FirstName = { "FirstName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComputerAccount, FirstName), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_FirstName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_FirstName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_LastName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ComputerAccount" },
		{ "ModuleRelativePath", "Public/ComputerAccount.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_LastName = { "LastName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComputerAccount, LastName), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_LastName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_LastName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Rank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ComputerAccount" },
		{ "ModuleRelativePath", "Public/ComputerAccount.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComputerAccount, Rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Rank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Password_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ComputerAccount" },
		{ "ModuleRelativePath", "Public/ComputerAccount.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComputerAccount, Password), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Password_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFile, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Files_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ComputerAccount" },
		{ "ModuleRelativePath", "Public/ComputerAccount.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComputerAccount, Files), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Files_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Files_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputerAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_FirstName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_LastName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Files_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputerAccount_Statics::NewProp_Files,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputerAccount_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
		nullptr,
		&NewStructOps,
		"ComputerAccount",
		sizeof(FComputerAccount),
		alignof(FComputerAccount),
		Z_Construct_UScriptStruct_FComputerAccount_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputerAccount_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComputerAccount_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputerAccount_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComputerAccount()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComputerAccount_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComputerAccount"), sizeof(FComputerAccount), Get_Z_Construct_UScriptStruct_FComputerAccount_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComputerAccount_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComputerAccount_Hash() { return 3432947121U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
