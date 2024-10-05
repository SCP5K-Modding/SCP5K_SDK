// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/Date.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDate() {}
// Cross Module References
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FDate();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
// End Cross Module References
class UScriptStruct* FDate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern USERINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FDate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDate, Z_Construct_UPackage__Script_UserInterface(), TEXT("Date"), sizeof(FDate), Get_Z_Construct_UScriptStruct_FDate_Hash());
	}
	return Singleton;
}
template<> USERINTERFACE_API UScriptStruct* StaticStruct<FDate>()
{
	return FDate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDate(FDate::StaticStruct, TEXT("/Script/UserInterface"), TEXT("Date"), false, nullptr, nullptr);
static struct FScriptStruct_UserInterface_StaticRegisterNativesFDate
{
	FScriptStruct_UserInterface_StaticRegisterNativesFDate()
	{
		UScriptStruct::DeferCppStructOps<FDate>(FName(TEXT("Date")));
	}
} ScriptStruct_UserInterface_StaticRegisterNativesFDate;
	struct Z_Construct_UScriptStruct_FDate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Year_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Year;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Month_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Month;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Day_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Day;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Date.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDate_Statics::NewProp_Year_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Date" },
		{ "ModuleRelativePath", "Public/Date.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDate_Statics::NewProp_Year = { "Year", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDate, Year), METADATA_PARAMS(Z_Construct_UScriptStruct_FDate_Statics::NewProp_Year_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDate_Statics::NewProp_Year_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDate_Statics::NewProp_Month_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Date" },
		{ "ModuleRelativePath", "Public/Date.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDate_Statics::NewProp_Month = { "Month", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDate, Month), METADATA_PARAMS(Z_Construct_UScriptStruct_FDate_Statics::NewProp_Month_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDate_Statics::NewProp_Month_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDate_Statics::NewProp_Day_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Date" },
		{ "ModuleRelativePath", "Public/Date.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDate_Statics::NewProp_Day = { "Day", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDate, Day), METADATA_PARAMS(Z_Construct_UScriptStruct_FDate_Statics::NewProp_Day_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDate_Statics::NewProp_Day_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDate_Statics::NewProp_Year,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDate_Statics::NewProp_Month,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDate_Statics::NewProp_Day,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
		nullptr,
		&NewStructOps,
		"Date",
		sizeof(FDate),
		alignof(FDate),
		Z_Construct_UScriptStruct_FDate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Date"), sizeof(FDate), Get_Z_Construct_UScriptStruct_FDate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDate_Hash() { return 1721466916U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
