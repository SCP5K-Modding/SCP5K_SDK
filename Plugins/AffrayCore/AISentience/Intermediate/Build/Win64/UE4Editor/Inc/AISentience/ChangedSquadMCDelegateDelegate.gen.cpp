// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/ChangedSquadMCDelegateDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChangedSquadMCDelegateDelegate() {}
// Cross Module References
	AISENTIENCE_API UFunction* Z_Construct_UDelegateFunction_AISentience_ChangedSquadMCDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AISentience_ChangedSquadMCDelegate__DelegateSignature_Statics
	{
		struct _Script_AISentience_eventChangedSquadMCDelegate_Parms
		{
			FGuid PreviousSquadID;
			FGuid NewSquadID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousSquadID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewSquadID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AISentience_ChangedSquadMCDelegate__DelegateSignature_Statics::NewProp_PreviousSquadID = { "PreviousSquadID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AISentience_eventChangedSquadMCDelegate_Parms, PreviousSquadID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AISentience_ChangedSquadMCDelegate__DelegateSignature_Statics::NewProp_NewSquadID = { "NewSquadID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AISentience_eventChangedSquadMCDelegate_Parms, NewSquadID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AISentience_ChangedSquadMCDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AISentience_ChangedSquadMCDelegate__DelegateSignature_Statics::NewProp_PreviousSquadID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AISentience_ChangedSquadMCDelegate__DelegateSignature_Statics::NewProp_NewSquadID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AISentience_ChangedSquadMCDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChangedSquadMCDelegateDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AISentience_ChangedSquadMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AISentience, nullptr, "ChangedSquadMCDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AISentience_eventChangedSquadMCDelegate_Parms), Z_Construct_UDelegateFunction_AISentience_ChangedSquadMCDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AISentience_ChangedSquadMCDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AISentience_ChangedSquadMCDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AISentience_ChangedSquadMCDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AISentience_ChangedSquadMCDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AISentience_ChangedSquadMCDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
