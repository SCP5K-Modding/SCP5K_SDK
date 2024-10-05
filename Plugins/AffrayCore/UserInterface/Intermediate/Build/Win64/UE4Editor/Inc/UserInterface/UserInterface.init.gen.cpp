// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserInterface_init() {}
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_OnWidgetActivationChanged__DelegateSignature();
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature();
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_AddNotifier__DelegateSignature();
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_AudioSettingsUpdated__DelegateSignature();
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_HUDVisibility__DelegateSignature();
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_JournalEntryLoaded__DelegateSignature();
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_OnJournalEntryAdded__DelegateSignature();
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UJournalSubsystem_OnJournalUpdated__DelegateSignature();
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_OnJournalEntryRemoved__DelegateSignature();
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_OnJournalUpdated__DelegateSignature();
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_PlayerHealthUpdated__DelegateSignature();
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_PlayerUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UserInterface()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UserInterface_OnWidgetActivationChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UserInterface_AddNotifier__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UserInterface_AudioSettingsUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UserInterface_HUDVisibility__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UserInterface_JournalEntryLoaded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UserInterface_OnJournalEntryAdded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UJournalSubsystem_OnJournalUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UserInterface_OnJournalEntryRemoved__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UserInterface_OnJournalUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UserInterface_PlayerHealthUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UserInterface_PlayerUpdated__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/UserInterface",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x56298049,
				0xF69127E4,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
