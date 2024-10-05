// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/PlayerHealthUpdatedDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHealthUpdatedDelegate() {}
// Cross Module References
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_PlayerHealthUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UserInterface_PlayerHealthUpdated__DelegateSignature_Statics
	{
		struct _Script_UserInterface_eventPlayerHealthUpdated_Parms
		{
			int32 PlayerID;
			float Health;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UserInterface_PlayerHealthUpdated__DelegateSignature_Statics::NewProp_PlayerID = { "PlayerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UserInterface_eventPlayerHealthUpdated_Parms, PlayerID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UserInterface_PlayerHealthUpdated__DelegateSignature_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UserInterface_eventPlayerHealthUpdated_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UserInterface_PlayerHealthUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UserInterface_PlayerHealthUpdated__DelegateSignature_Statics::NewProp_PlayerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UserInterface_PlayerHealthUpdated__DelegateSignature_Statics::NewProp_Health,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UserInterface_PlayerHealthUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerHealthUpdatedDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UserInterface_PlayerHealthUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UserInterface, nullptr, "PlayerHealthUpdated__DelegateSignature", nullptr, nullptr, sizeof(_Script_UserInterface_eventPlayerHealthUpdated_Parms), Z_Construct_UDelegateFunction_UserInterface_PlayerHealthUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UserInterface_PlayerHealthUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UserInterface_PlayerHealthUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UserInterface_PlayerHealthUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UserInterface_PlayerHealthUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UserInterface_PlayerHealthUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
