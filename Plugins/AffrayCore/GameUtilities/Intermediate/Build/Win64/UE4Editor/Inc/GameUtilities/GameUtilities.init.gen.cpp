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
void EmptyLinkFunctionForGeneratedCodeGameUtilities_init() {}
	GAMEUTILITIES_API UFunction* Z_Construct_UDelegateFunction_GameUtilities_OnAudioSettingsUpdated__DelegateSignature();
	GAMEUTILITIES_API UFunction* Z_Construct_UDelegateFunction_GameUtilities_OnGameplaySettingsUpdated__DelegateSignature();
	GAMEUTILITIES_API UFunction* Z_Construct_UDelegateFunction_GameUtilities_OnHUDElementsUpdated__DelegateSignature();
	GAMEUTILITIES_API UFunction* Z_Construct_UDelegateFunction_GameUtilities_OnRequestUpdate__DelegateSignature();
	GAMEUTILITIES_API UFunction* Z_Construct_UDelegateFunction_GameUtilities_OnUISettingsUpdated__DelegateSignature();
	GAMEUTILITIES_API UFunction* Z_Construct_UDelegateFunction_GameUtilities_OnVideoSettingsUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameUtilities()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GameUtilities_OnAudioSettingsUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GameUtilities_OnGameplaySettingsUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GameUtilities_OnHUDElementsUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GameUtilities_OnRequestUpdate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GameUtilities_OnUISettingsUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GameUtilities_OnVideoSettingsUpdated__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/GameUtilities",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x6C2824ED,
				0x25F69ABF,
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
