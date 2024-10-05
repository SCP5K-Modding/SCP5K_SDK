// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayObjectives/Public/NumberObjective.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNumberObjective() {}
// Cross Module References
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UNumberObjective_NoRegister();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UNumberObjective();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UObjective();
	UPackage* Z_Construct_UPackage__Script_GameplayObjectives();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UNumberObjective::execAddAmount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAmount(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNumberObjective::execCreateNumberObjective)
	{
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FTextProperty,Z_Param_DisplayName);
		P_GET_PROPERTY(FTextProperty,Z_Param_Description);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewMaxValue);
		P_GET_UBOOL(Z_Param_UseTimer);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimerLength);
		P_GET_UBOOL(Z_Param_bShouldAutoActivateWithParent);
		P_GET_UBOOL(Z_Param_bMajorObjective);
		P_GET_UBOOL(Z_Param_bShouldStartChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNumberObjective**)Z_Param__Result=UNumberObjective::CreateNumberObjective(Z_Param_Outer,Z_Param_Name,Z_Param_DisplayName,Z_Param_Description,Z_Param_NewMaxValue,Z_Param_UseTimer,Z_Param_TimerLength,Z_Param_bShouldAutoActivateWithParent,Z_Param_bMajorObjective,Z_Param_bShouldStartChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNumberObjective::execGetCurrentValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNumberObjective::execGetMaxValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNumberObjective::execSetAmount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAmount(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNumberObjective::execSetMaxAmount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxAmount(Z_Param_Amount);
		P_NATIVE_END;
	}
	void UNumberObjective::StaticRegisterNativesUNumberObjective()
	{
		UClass* Class = UNumberObjective::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAmount", &UNumberObjective::execAddAmount },
			{ "CreateNumberObjective", &UNumberObjective::execCreateNumberObjective },
			{ "GetCurrentValue", &UNumberObjective::execGetCurrentValue },
			{ "GetMaxValue", &UNumberObjective::execGetMaxValue },
			{ "SetAmount", &UNumberObjective::execSetAmount },
			{ "SetMaxAmount", &UNumberObjective::execSetMaxAmount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNumberObjective_AddAmount_Statics
	{
		struct NumberObjective_eventAddAmount_Parms
		{
			int32 Amount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNumberObjective_AddAmount_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NumberObjective_eventAddAmount_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNumberObjective_AddAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberObjective_AddAmount_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNumberObjective_AddAmount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NumberObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNumberObjective_AddAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNumberObjective, nullptr, "AddAmount", nullptr, nullptr, sizeof(NumberObjective_eventAddAmount_Parms), Z_Construct_UFunction_UNumberObjective_AddAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberObjective_AddAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNumberObjective_AddAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberObjective_AddAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNumberObjective_AddAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNumberObjective_AddAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics
	{
		struct NumberObjective_eventCreateNumberObjective_Parms
		{
			UObject* Outer;
			FName Name;
			FText DisplayName;
			FText Description;
			int32 NewMaxValue;
			bool UseTimer;
			float TimerLength;
			bool bShouldAutoActivateWithParent;
			bool bMajorObjective;
			bool bShouldStartChildren;
			UNumberObjective* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewMaxValue;
		static void NewProp_UseTimer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseTimer;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimerLength;
		static void NewProp_bShouldAutoActivateWithParent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldAutoActivateWithParent;
		static void NewProp_bMajorObjective_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMajorObjective;
		static void NewProp_bShouldStartChildren_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldStartChildren;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NumberObjective_eventCreateNumberObjective_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NumberObjective_eventCreateNumberObjective_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NumberObjective_eventCreateNumberObjective_Parms, DisplayName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NumberObjective_eventCreateNumberObjective_Parms, Description), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_NewMaxValue = { "NewMaxValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NumberObjective_eventCreateNumberObjective_Parms, NewMaxValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_UseTimer_SetBit(void* Obj)
	{
		((NumberObjective_eventCreateNumberObjective_Parms*)Obj)->UseTimer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_UseTimer = { "UseTimer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NumberObjective_eventCreateNumberObjective_Parms), &Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_UseTimer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_TimerLength = { "TimerLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NumberObjective_eventCreateNumberObjective_Parms, TimerLength), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_bShouldAutoActivateWithParent_SetBit(void* Obj)
	{
		((NumberObjective_eventCreateNumberObjective_Parms*)Obj)->bShouldAutoActivateWithParent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_bShouldAutoActivateWithParent = { "bShouldAutoActivateWithParent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NumberObjective_eventCreateNumberObjective_Parms), &Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_bShouldAutoActivateWithParent_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_bMajorObjective_SetBit(void* Obj)
	{
		((NumberObjective_eventCreateNumberObjective_Parms*)Obj)->bMajorObjective = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_bMajorObjective = { "bMajorObjective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NumberObjective_eventCreateNumberObjective_Parms), &Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_bMajorObjective_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_bShouldStartChildren_SetBit(void* Obj)
	{
		((NumberObjective_eventCreateNumberObjective_Parms*)Obj)->bShouldStartChildren = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_bShouldStartChildren = { "bShouldStartChildren", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NumberObjective_eventCreateNumberObjective_Parms), &Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_bShouldStartChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NumberObjective_eventCreateNumberObjective_Parms, ReturnValue), Z_Construct_UClass_UNumberObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_NewMaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_UseTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_TimerLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_bShouldAutoActivateWithParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_bMajorObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_bShouldStartChildren,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NumberObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNumberObjective, nullptr, "CreateNumberObjective", nullptr, nullptr, sizeof(NumberObjective_eventCreateNumberObjective_Parms), Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNumberObjective_CreateNumberObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNumberObjective_CreateNumberObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNumberObjective_GetCurrentValue_Statics
	{
		struct NumberObjective_eventGetCurrentValue_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNumberObjective_GetCurrentValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NumberObjective_eventGetCurrentValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNumberObjective_GetCurrentValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberObjective_GetCurrentValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNumberObjective_GetCurrentValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NumberObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNumberObjective_GetCurrentValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNumberObjective, nullptr, "GetCurrentValue", nullptr, nullptr, sizeof(NumberObjective_eventGetCurrentValue_Parms), Z_Construct_UFunction_UNumberObjective_GetCurrentValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberObjective_GetCurrentValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNumberObjective_GetCurrentValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberObjective_GetCurrentValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNumberObjective_GetCurrentValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNumberObjective_GetCurrentValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNumberObjective_GetMaxValue_Statics
	{
		struct NumberObjective_eventGetMaxValue_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNumberObjective_GetMaxValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NumberObjective_eventGetMaxValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNumberObjective_GetMaxValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberObjective_GetMaxValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNumberObjective_GetMaxValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NumberObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNumberObjective_GetMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNumberObjective, nullptr, "GetMaxValue", nullptr, nullptr, sizeof(NumberObjective_eventGetMaxValue_Parms), Z_Construct_UFunction_UNumberObjective_GetMaxValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberObjective_GetMaxValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNumberObjective_GetMaxValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberObjective_GetMaxValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNumberObjective_GetMaxValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNumberObjective_GetMaxValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNumberObjective_SetAmount_Statics
	{
		struct NumberObjective_eventSetAmount_Parms
		{
			int32 Amount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNumberObjective_SetAmount_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NumberObjective_eventSetAmount_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNumberObjective_SetAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberObjective_SetAmount_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNumberObjective_SetAmount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NumberObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNumberObjective_SetAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNumberObjective, nullptr, "SetAmount", nullptr, nullptr, sizeof(NumberObjective_eventSetAmount_Parms), Z_Construct_UFunction_UNumberObjective_SetAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberObjective_SetAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNumberObjective_SetAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberObjective_SetAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNumberObjective_SetAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNumberObjective_SetAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNumberObjective_SetMaxAmount_Statics
	{
		struct NumberObjective_eventSetMaxAmount_Parms
		{
			int32 Amount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNumberObjective_SetMaxAmount_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NumberObjective_eventSetMaxAmount_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNumberObjective_SetMaxAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberObjective_SetMaxAmount_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNumberObjective_SetMaxAmount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NumberObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNumberObjective_SetMaxAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNumberObjective, nullptr, "SetMaxAmount", nullptr, nullptr, sizeof(NumberObjective_eventSetMaxAmount_Parms), Z_Construct_UFunction_UNumberObjective_SetMaxAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberObjective_SetMaxAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNumberObjective_SetMaxAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberObjective_SetMaxAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNumberObjective_SetMaxAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNumberObjective_SetMaxAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNumberObjective_NoRegister()
	{
		return UNumberObjective::StaticClass();
	}
	struct Z_Construct_UClass_UNumberObjective_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNumberObjective_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObjective,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayObjectives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNumberObjective_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNumberObjective_AddAmount, "AddAmount" }, // 1417183932
		{ &Z_Construct_UFunction_UNumberObjective_CreateNumberObjective, "CreateNumberObjective" }, // 2780628240
		{ &Z_Construct_UFunction_UNumberObjective_GetCurrentValue, "GetCurrentValue" }, // 2732398165
		{ &Z_Construct_UFunction_UNumberObjective_GetMaxValue, "GetMaxValue" }, // 1340094948
		{ &Z_Construct_UFunction_UNumberObjective_SetAmount, "SetAmount" }, // 785204055
		{ &Z_Construct_UFunction_UNumberObjective_SetMaxAmount, "SetMaxAmount" }, // 1477096270
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNumberObjective_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NumberObjective.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NumberObjective.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNumberObjective_Statics::NewProp_MaxValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NumberObjective" },
		{ "ModuleRelativePath", "Public/NumberObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNumberObjective_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNumberObjective, MaxValue), METADATA_PARAMS(Z_Construct_UClass_UNumberObjective_Statics::NewProp_MaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNumberObjective_Statics::NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNumberObjective_Statics::NewProp_CurrentValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NumberObjective" },
		{ "ModuleRelativePath", "Public/NumberObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNumberObjective_Statics::NewProp_CurrentValue = { "CurrentValue", "UpdateObjective", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNumberObjective, CurrentValue), METADATA_PARAMS(Z_Construct_UClass_UNumberObjective_Statics::NewProp_CurrentValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNumberObjective_Statics::NewProp_CurrentValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNumberObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNumberObjective_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNumberObjective_Statics::NewProp_CurrentValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNumberObjective_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNumberObjective>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNumberObjective_Statics::ClassParams = {
		&UNumberObjective::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNumberObjective_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNumberObjective_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNumberObjective_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNumberObjective_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNumberObjective()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNumberObjective_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNumberObjective, 3156923921);
	template<> GAMEPLAYOBJECTIVES_API UClass* StaticClass<UNumberObjective>()
	{
		return UNumberObjective::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNumberObjective(Z_Construct_UClass_UNumberObjective, &UNumberObjective::StaticClass, TEXT("/Script/GameplayObjectives"), TEXT("UNumberObjective"), false, nullptr, nullptr, nullptr);

	void UNumberObjective::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MaxValue(TEXT("MaxValue"));
		static const FName Name_CurrentValue(TEXT("CurrentValue"));

		const bool bIsValid = true
			&& Name_MaxValue == ClassReps[(int32)ENetFields_Private::MaxValue].Property->GetFName()
			&& Name_CurrentValue == ClassReps[(int32)ENetFields_Private::CurrentValue].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNumberObjective"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNumberObjective);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
