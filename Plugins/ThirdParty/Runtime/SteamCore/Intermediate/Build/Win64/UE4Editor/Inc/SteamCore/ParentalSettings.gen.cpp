// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ParentalSettings.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParentalSettings() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UParentalSettings_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UParentalSettings();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamParentalFeature();
// End Cross Module References
	DEFINE_FUNCTION(UParentalSettings::execBIsAppBlocked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsAppBlocked(Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParentalSettings::execBIsAppInBlockList)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsAppInBlockList(Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParentalSettings::execBIsFeatureBlocked)
	{
		P_GET_ENUM(ESteamParentalFeature,Z_Param_Feature);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsFeatureBlocked(ESteamParentalFeature(Z_Param_Feature));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParentalSettings::execBIsFeatureInBlockList)
	{
		P_GET_ENUM(ESteamParentalFeature,Z_Param_Feature);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsFeatureInBlockList(ESteamParentalFeature(Z_Param_Feature));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParentalSettings::execBIsParentalLockEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsParentalLockEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParentalSettings::execBIsParentalLockLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsParentalLockLocked();
		P_NATIVE_END;
	}
	void UParentalSettings::StaticRegisterNativesUParentalSettings()
	{
		UClass* Class = UParentalSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BIsAppBlocked", &UParentalSettings::execBIsAppBlocked },
			{ "BIsAppInBlockList", &UParentalSettings::execBIsAppInBlockList },
			{ "BIsFeatureBlocked", &UParentalSettings::execBIsFeatureBlocked },
			{ "BIsFeatureInBlockList", &UParentalSettings::execBIsFeatureInBlockList },
			{ "BIsParentalLockEnabled", &UParentalSettings::execBIsParentalLockEnabled },
			{ "BIsParentalLockLocked", &UParentalSettings::execBIsParentalLockLocked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics
	{
		struct ParentalSettings_eventBIsAppBlocked_Parms
		{
			int32 AppID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParentalSettings_eventBIsAppBlocked_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ParentalSettings_eventBIsAppBlocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ParentalSettings_eventBIsAppBlocked_Parms), &Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ParentalSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParentalSettings, nullptr, "BIsAppBlocked", nullptr, nullptr, sizeof(ParentalSettings_eventBIsAppBlocked_Parms), Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParentalSettings_BIsAppBlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics
	{
		struct ParentalSettings_eventBIsAppInBlockList_Parms
		{
			int32 AppID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParentalSettings_eventBIsAppInBlockList_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ParentalSettings_eventBIsAppInBlockList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ParentalSettings_eventBIsAppInBlockList_Parms), &Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ParentalSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParentalSettings, nullptr, "BIsAppInBlockList", nullptr, nullptr, sizeof(ParentalSettings_eventBIsAppInBlockList_Parms), Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics
	{
		struct ParentalSettings_eventBIsFeatureBlocked_Parms
		{
			ESteamParentalFeature Feature;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Feature_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Feature;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::NewProp_Feature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::NewProp_Feature = { "Feature", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParentalSettings_eventBIsFeatureBlocked_Parms, Feature), Z_Construct_UEnum_SteamCore_ESteamParentalFeature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ParentalSettings_eventBIsFeatureBlocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ParentalSettings_eventBIsFeatureBlocked_Parms), &Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::NewProp_Feature_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::NewProp_Feature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ParentalSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParentalSettings, nullptr, "BIsFeatureBlocked", nullptr, nullptr, sizeof(ParentalSettings_eventBIsFeatureBlocked_Parms), Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics
	{
		struct ParentalSettings_eventBIsFeatureInBlockList_Parms
		{
			ESteamParentalFeature Feature;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Feature_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Feature;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::NewProp_Feature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::NewProp_Feature = { "Feature", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParentalSettings_eventBIsFeatureInBlockList_Parms, Feature), Z_Construct_UEnum_SteamCore_ESteamParentalFeature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ParentalSettings_eventBIsFeatureInBlockList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ParentalSettings_eventBIsFeatureInBlockList_Parms), &Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::NewProp_Feature_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::NewProp_Feature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ParentalSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParentalSettings, nullptr, "BIsFeatureInBlockList", nullptr, nullptr, sizeof(ParentalSettings_eventBIsFeatureInBlockList_Parms), Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics
	{
		struct ParentalSettings_eventBIsParentalLockEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ParentalSettings_eventBIsParentalLockEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ParentalSettings_eventBIsParentalLockEnabled_Parms), &Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ParentalSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParentalSettings, nullptr, "BIsParentalLockEnabled", nullptr, nullptr, sizeof(ParentalSettings_eventBIsParentalLockEnabled_Parms), Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics
	{
		struct ParentalSettings_eventBIsParentalLockLocked_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ParentalSettings_eventBIsParentalLockLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ParentalSettings_eventBIsParentalLockLocked_Parms), &Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ParentalSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParentalSettings, nullptr, "BIsParentalLockLocked", nullptr, nullptr, sizeof(ParentalSettings_eventBIsParentalLockLocked_Parms), Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UParentalSettings_NoRegister()
	{
		return UParentalSettings::StaticClass();
	}
	struct Z_Construct_UClass_UParentalSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParentalSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UParentalSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UParentalSettings_BIsAppBlocked, "BIsAppBlocked" }, // 3862086376
		{ &Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList, "BIsAppInBlockList" }, // 3408681547
		{ &Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked, "BIsFeatureBlocked" }, // 2047381898
		{ &Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList, "BIsFeatureInBlockList" }, // 422756132
		{ &Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled, "BIsParentalLockEnabled" }, // 4095165487
		{ &Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked, "BIsParentalLockLocked" }, // 2033233724
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentalSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ParentalSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ParentalSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParentalSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParentalSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParentalSettings_Statics::ClassParams = {
		&UParentalSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParentalSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParentalSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParentalSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParentalSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParentalSettings, 4232134108);
	template<> STEAMCORE_API UClass* StaticClass<UParentalSettings>()
	{
		return UParentalSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParentalSettings(Z_Construct_UClass_UParentalSettings, &UParentalSettings::StaticClass, TEXT("/Script/SteamCore"), TEXT("UParentalSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParentalSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
