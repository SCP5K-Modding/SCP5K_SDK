// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/JournalEntryLoadedDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJournalEntryLoadedDelegate() {}
// Cross Module References
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_JournalEntryLoaded__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	USERINTERFACE_API UClass* Z_Construct_UClass_UJournalEntry_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UserInterface_JournalEntryLoaded__DelegateSignature_Statics
	{
		struct _Script_UserInterface_eventJournalEntryLoaded_Parms
		{
			UJournalEntry* JournalEntry;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JournalEntry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UserInterface_JournalEntryLoaded__DelegateSignature_Statics::NewProp_JournalEntry = { "JournalEntry", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UserInterface_eventJournalEntryLoaded_Parms, JournalEntry), Z_Construct_UClass_UJournalEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UserInterface_JournalEntryLoaded__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UserInterface_JournalEntryLoaded__DelegateSignature_Statics::NewProp_JournalEntry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UserInterface_JournalEntryLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/JournalEntryLoadedDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UserInterface_JournalEntryLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UserInterface, nullptr, "JournalEntryLoaded__DelegateSignature", nullptr, nullptr, sizeof(_Script_UserInterface_eventJournalEntryLoaded_Parms), Z_Construct_UDelegateFunction_UserInterface_JournalEntryLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UserInterface_JournalEntryLoaded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UserInterface_JournalEntryLoaded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UserInterface_JournalEntryLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UserInterface_JournalEntryLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UserInterface_JournalEntryLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
