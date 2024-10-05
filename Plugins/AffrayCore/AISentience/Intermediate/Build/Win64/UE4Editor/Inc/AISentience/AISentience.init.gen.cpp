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
void EmptyLinkFunctionForGeneratedCodeAISentience_init() {}
	AISENTIENCE_API UFunction* Z_Construct_UDelegateFunction_AISentience_ShareInfoMCDelegate__DelegateSignature();
	AISENTIENCE_API UFunction* Z_Construct_UDelegateFunction_AISentience_ChangedSquadMCDelegate__DelegateSignature();
	AISENTIENCE_API UFunction* Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature();
	AISENTIENCE_API UFunction* Z_Construct_UDelegateFunction_AISentience_NavmeshTilesUpdated__DelegateSignature();
	AISENTIENCE_API UFunction* Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature();
	AISENTIENCE_API UFunction* Z_Construct_UDelegateFunction_AISentience_SAITargetUpdatedDelegate__DelegateSignature();
	AISENTIENCE_API UFunction* Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature();
	AISENTIENCE_API UFunction* Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AISentience()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AISentience_ShareInfoMCDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AISentience_ChangedSquadMCDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UDialogueComponent_DialogueMCDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AISentience_NavmeshTilesUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AISentience_SAITargetUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/AISentience",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x6A66F697,
				0xA8361ED2,
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
