// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/Computer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputer() {}
// Cross Module References
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FComputer();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FComputerAccount();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FComputer>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FComputer cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FComputer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern USERINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FComputer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputer, Z_Construct_UPackage__Script_UserInterface(), TEXT("Computer"), sizeof(FComputer), Get_Z_Construct_UScriptStruct_FComputer_Hash());
	}
	return Singleton;
}
template<> USERINTERFACE_API UScriptStruct* StaticStruct<FComputer>()
{
	return FComputer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComputer(FComputer::StaticStruct, TEXT("/Script/UserInterface"), TEXT("Computer"), false, nullptr, nullptr);
static struct FScriptStruct_UserInterface_StaticRegisterNativesFComputer
{
	FScriptStruct_UserInterface_StaticRegisterNativesFComputer()
	{
		UScriptStruct::DeferCppStructOps<FComputer>(FName(TEXT("Computer")));
	}
} ScriptStruct_UserInterface_StaticRegisterNativesFComputer;
	struct Z_Construct_UScriptStruct_FComputer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Accounts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Accounts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Accounts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowGuestAccount_MetaData[];
#endif
		static void NewProp_bShowGuestAccount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowGuestAccount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowOS_MetaData[];
#endif
		static void NewProp_ShowOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowOS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowTime_MetaData[];
#endif
		static void NewProp_ShowTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TimeZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BackgroundTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncorrectPasswordTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_IncorrectPasswordTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncorrectPasswordVideo_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_IncorrectPasswordVideo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Computer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComputer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputer>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComputer_Statics::NewProp_Accounts_Inner = { "Accounts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FComputerAccount, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputer_Statics::NewProp_Accounts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Computer" },
		{ "ModuleRelativePath", "Public/Computer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComputer_Statics::NewProp_Accounts = { "Accounts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComputer, Accounts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputer_Statics::NewProp_Accounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputer_Statics::NewProp_Accounts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputer_Statics::NewProp_bShowGuestAccount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Computer" },
		{ "ModuleRelativePath", "Public/Computer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FComputer_Statics::NewProp_bShowGuestAccount_SetBit(void* Obj)
	{
		((FComputer*)Obj)->bShowGuestAccount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComputer_Statics::NewProp_bShowGuestAccount = { "bShowGuestAccount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FComputer), &Z_Construct_UScriptStruct_FComputer_Statics::NewProp_bShowGuestAccount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputer_Statics::NewProp_bShowGuestAccount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputer_Statics::NewProp_bShowGuestAccount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputer_Statics::NewProp_ShowOS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Computer" },
		{ "ModuleRelativePath", "Public/Computer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FComputer_Statics::NewProp_ShowOS_SetBit(void* Obj)
	{
		((FComputer*)Obj)->ShowOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComputer_Statics::NewProp_ShowOS = { "ShowOS", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FComputer), &Z_Construct_UScriptStruct_FComputer_Statics::NewProp_ShowOS_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputer_Statics::NewProp_ShowOS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputer_Statics::NewProp_ShowOS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputer_Statics::NewProp_ShowTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Computer" },
		{ "ModuleRelativePath", "Public/Computer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FComputer_Statics::NewProp_ShowTime_SetBit(void* Obj)
	{
		((FComputer*)Obj)->ShowTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComputer_Statics::NewProp_ShowTime = { "ShowTime", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FComputer), &Z_Construct_UScriptStruct_FComputer_Statics::NewProp_ShowTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputer_Statics::NewProp_ShowTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputer_Statics::NewProp_ShowTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputer_Statics::NewProp_TimeZone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Computer" },
		{ "ModuleRelativePath", "Public/Computer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComputer_Statics::NewProp_TimeZone = { "TimeZone", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComputer, TimeZone), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputer_Statics::NewProp_TimeZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputer_Statics::NewProp_TimeZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputer_Statics::NewProp_BackgroundTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Computer" },
		{ "ModuleRelativePath", "Public/Computer.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FComputer_Statics::NewProp_BackgroundTexture = { "BackgroundTexture", nullptr, (EPropertyFlags)0x0014040000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComputer, BackgroundTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputer_Statics::NewProp_BackgroundTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputer_Statics::NewProp_BackgroundTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputer_Statics::NewProp_IncorrectPasswordTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Computer" },
		{ "ModuleRelativePath", "Public/Computer.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FComputer_Statics::NewProp_IncorrectPasswordTexture = { "IncorrectPasswordTexture", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComputer, IncorrectPasswordTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputer_Statics::NewProp_IncorrectPasswordTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputer_Statics::NewProp_IncorrectPasswordTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputer_Statics::NewProp_IncorrectPasswordVideo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Computer" },
		{ "ModuleRelativePath", "Public/Computer.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FComputer_Statics::NewProp_IncorrectPasswordVideo = { "IncorrectPasswordVideo", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComputer, IncorrectPasswordVideo), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputer_Statics::NewProp_IncorrectPasswordVideo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputer_Statics::NewProp_IncorrectPasswordVideo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputer_Statics::NewProp_Accounts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputer_Statics::NewProp_Accounts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputer_Statics::NewProp_bShowGuestAccount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputer_Statics::NewProp_ShowOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputer_Statics::NewProp_ShowTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputer_Statics::NewProp_TimeZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputer_Statics::NewProp_BackgroundTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputer_Statics::NewProp_IncorrectPasswordTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputer_Statics::NewProp_IncorrectPasswordVideo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Computer",
		sizeof(FComputer),
		alignof(FComputer),
		Z_Construct_UScriptStruct_FComputer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComputer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComputer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComputer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Computer"), sizeof(FComputer), Get_Z_Construct_UScriptStruct_FComputer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComputer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComputer_Hash() { return 3441952442U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
