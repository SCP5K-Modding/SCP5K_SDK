// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordLobby/Public/DiscordLobbyLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordLobbyLibrary() {}
// Cross Module References
	DISCORDLOBBY_API UClass* Z_Construct_UClass_UDiscordLobbyLibrary_NoRegister();
	DISCORDLOBBY_API UClass* Z_Construct_UClass_UDiscordLobbyLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DiscordLobby();
	DISCORDLOBBY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordLobbyTransaction();
	DISCORDLOBBY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordLobbySearchQuery();
	DISCORDLOBBY_API UEnum* Z_Construct_UEnum_DiscordLobby_EDiscordLobbySearchDistance();
	DISCORDLOBBY_API UEnum* Z_Construct_UEnum_DiscordLobby_EDiscordLobbySearchComparison();
	DISCORDLOBBY_API UEnum* Z_Construct_UEnum_DiscordLobby_EDiscordLobbySearchCast();
	DISCORDLOBBY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordLobbyMemberTransaction();
	DISCORDLOBBY_API UEnum* Z_Construct_UEnum_DiscordLobby_EDiscordLobbyType();
// End Cross Module References
	DEFINE_FUNCTION(UDiscordLobbyLibrary::execDeleteMetadata)
	{
		P_GET_STRUCT_REF(FDiscordLobbyTransaction,Z_Param_Out_Transaction);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordLobbyTransaction*)Z_Param__Result=UDiscordLobbyLibrary::DeleteMetadata(Z_Param_Out_Transaction,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyLibrary::execDistance)
	{
		P_GET_STRUCT_REF(FDiscordLobbySearchQuery,Z_Param_Out_SearchQuery);
		P_GET_ENUM(EDiscordLobbySearchDistance,Z_Param_NewDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordLobbySearchQuery*)Z_Param__Result=UDiscordLobbyLibrary::Distance(Z_Param_Out_SearchQuery,EDiscordLobbySearchDistance(Z_Param_NewDistance));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyLibrary::execFilter)
	{
		P_GET_STRUCT_REF(FDiscordLobbySearchQuery,Z_Param_Out_SearchQuery);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_ENUM(EDiscordLobbySearchComparison,Z_Param_Comparison);
		P_GET_ENUM(EDiscordLobbySearchCast,Z_Param_Cast);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordLobbySearchQuery*)Z_Param__Result=UDiscordLobbyLibrary::Filter(Z_Param_Out_SearchQuery,Z_Param_Key,EDiscordLobbySearchComparison(Z_Param_Comparison),EDiscordLobbySearchCast(Z_Param_Cast),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyLibrary::execLimit)
	{
		P_GET_STRUCT_REF(FDiscordLobbySearchQuery,Z_Param_Out_SearchQuery);
		P_GET_PROPERTY(FInt64Property,Z_Param_NewLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordLobbySearchQuery*)Z_Param__Result=UDiscordLobbyLibrary::Limit(Z_Param_Out_SearchQuery,Z_Param_NewLimit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyLibrary::execMember_DeleteMetadata)
	{
		P_GET_STRUCT_REF(FDiscordLobbyMemberTransaction,Z_Param_Out_Transaction);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordLobbyMemberTransaction*)Z_Param__Result=UDiscordLobbyLibrary::Member_DeleteMetadata(Z_Param_Out_Transaction,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyLibrary::execMember_SetMetadata)
	{
		P_GET_STRUCT_REF(FDiscordLobbyMemberTransaction,Z_Param_Out_Transaction);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordLobbyMemberTransaction*)Z_Param__Result=UDiscordLobbyLibrary::Member_SetMetadata(Z_Param_Out_Transaction,Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyLibrary::execSetCapacity)
	{
		P_GET_STRUCT_REF(FDiscordLobbyTransaction,Z_Param_Out_Transaction);
		P_GET_PROPERTY(FInt64Property,Z_Param_Capacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordLobbyTransaction*)Z_Param__Result=UDiscordLobbyLibrary::SetCapacity(Z_Param_Out_Transaction,Z_Param_Capacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyLibrary::execSetLobbyTransactionProperties)
	{
		P_GET_STRUCT_REF(FDiscordLobbyTransaction,Z_Param_Out_Transaction);
		P_GET_ENUM(EDiscordLobbyType,Z_Param_Type);
		P_GET_TMAP(FString,FString,Z_Param_MetaData);
		P_GET_PROPERTY(FInt64Property,Z_Param_UserId);
		P_GET_PROPERTY(FInt64Property,Z_Param_Capacity);
		P_GET_UBOOL(Z_Param_bLocked);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordLobbyTransaction*)Z_Param__Result=UDiscordLobbyLibrary::SetLobbyTransactionProperties(Z_Param_Out_Transaction,EDiscordLobbyType(Z_Param_Type),Z_Param_MetaData,Z_Param_UserId,Z_Param_Capacity,Z_Param_bLocked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyLibrary::execSetLocked)
	{
		P_GET_STRUCT_REF(FDiscordLobbyTransaction,Z_Param_Out_Transaction);
		P_GET_UBOOL(Z_Param_bLocked);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordLobbyTransaction*)Z_Param__Result=UDiscordLobbyLibrary::SetLocked(Z_Param_Out_Transaction,Z_Param_bLocked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyLibrary::execSetMetadata)
	{
		P_GET_STRUCT_REF(FDiscordLobbyTransaction,Z_Param_Out_Transaction);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordLobbyTransaction*)Z_Param__Result=UDiscordLobbyLibrary::SetMetadata(Z_Param_Out_Transaction,Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyLibrary::execSetOwner)
	{
		P_GET_STRUCT_REF(FDiscordLobbyTransaction,Z_Param_Out_Transaction);
		P_GET_PROPERTY(FInt64Property,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordLobbyTransaction*)Z_Param__Result=UDiscordLobbyLibrary::SetOwner(Z_Param_Out_Transaction,Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyLibrary::execSetType)
	{
		P_GET_STRUCT_REF(FDiscordLobbyTransaction,Z_Param_Out_Transaction);
		P_GET_ENUM(EDiscordLobbyType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordLobbyTransaction*)Z_Param__Result=UDiscordLobbyLibrary::SetType(Z_Param_Out_Transaction,EDiscordLobbyType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordLobbyLibrary::execSort)
	{
		P_GET_STRUCT_REF(FDiscordLobbySearchQuery,Z_Param_Out_SearchQuery);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_ENUM(EDiscordLobbySearchCast,Z_Param_Cast);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordLobbySearchQuery*)Z_Param__Result=UDiscordLobbyLibrary::Sort(Z_Param_Out_SearchQuery,Z_Param_Key,EDiscordLobbySearchCast(Z_Param_Cast),Z_Param_Value);
		P_NATIVE_END;
	}
	void UDiscordLobbyLibrary::StaticRegisterNativesUDiscordLobbyLibrary()
	{
		UClass* Class = UDiscordLobbyLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteMetadata", &UDiscordLobbyLibrary::execDeleteMetadata },
			{ "Distance", &UDiscordLobbyLibrary::execDistance },
			{ "Filter", &UDiscordLobbyLibrary::execFilter },
			{ "Limit", &UDiscordLobbyLibrary::execLimit },
			{ "Member_DeleteMetadata", &UDiscordLobbyLibrary::execMember_DeleteMetadata },
			{ "Member_SetMetadata", &UDiscordLobbyLibrary::execMember_SetMetadata },
			{ "SetCapacity", &UDiscordLobbyLibrary::execSetCapacity },
			{ "SetLobbyTransactionProperties", &UDiscordLobbyLibrary::execSetLobbyTransactionProperties },
			{ "SetLocked", &UDiscordLobbyLibrary::execSetLocked },
			{ "SetMetadata", &UDiscordLobbyLibrary::execSetMetadata },
			{ "SetOwner", &UDiscordLobbyLibrary::execSetOwner },
			{ "SetType", &UDiscordLobbyLibrary::execSetType },
			{ "Sort", &UDiscordLobbyLibrary::execSort },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiscordLobbyLibrary_DeleteMetadata_Statics
	{
		struct DiscordLobbyLibrary_eventDeleteMetadata_Parms
		{
			FDiscordLobbyTransaction Transaction;
			FString Key;
			FDiscordLobbyTransaction ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_DeleteMetadata_Statics::NewProp_Transaction = { "Transaction", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventDeleteMetadata_Parms, Transaction), Z_Construct_UScriptStruct_FDiscordLobbyTransaction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_DeleteMetadata_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_DeleteMetadata_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventDeleteMetadata_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_DeleteMetadata_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_DeleteMetadata_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_DeleteMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventDeleteMetadata_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordLobbyTransaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyLibrary_DeleteMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_DeleteMetadata_Statics::NewProp_Transaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_DeleteMetadata_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_DeleteMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_DeleteMetadata_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyLibrary_DeleteMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyLibrary, nullptr, "DeleteMetadata", nullptr, nullptr, sizeof(DiscordLobbyLibrary_eventDeleteMetadata_Parms), Z_Construct_UFunction_UDiscordLobbyLibrary_DeleteMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_DeleteMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_DeleteMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_DeleteMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyLibrary_DeleteMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyLibrary_DeleteMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyLibrary_Distance_Statics
	{
		struct DiscordLobbyLibrary_eventDistance_Parms
		{
			FDiscordLobbySearchQuery SearchQuery;
			EDiscordLobbySearchDistance NewDistance;
			FDiscordLobbySearchQuery ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchQuery;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewDistance_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewDistance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Distance_Statics::NewProp_SearchQuery = { "SearchQuery", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventDistance_Parms, SearchQuery), Z_Construct_UScriptStruct_FDiscordLobbySearchQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Distance_Statics::NewProp_NewDistance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_Distance_Statics::NewProp_NewDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Distance_Statics::NewProp_NewDistance = { "NewDistance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventDistance_Parms, NewDistance), Z_Construct_UEnum_DiscordLobby_EDiscordLobbySearchDistance, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_Distance_Statics::NewProp_NewDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Distance_Statics::NewProp_NewDistance_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Distance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventDistance_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordLobbySearchQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyLibrary_Distance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Distance_Statics::NewProp_SearchQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Distance_Statics::NewProp_NewDistance_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Distance_Statics::NewProp_NewDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Distance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_Distance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyLibrary_Distance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyLibrary, nullptr, "Distance", nullptr, nullptr, sizeof(DiscordLobbyLibrary_eventDistance_Parms), Z_Construct_UFunction_UDiscordLobbyLibrary_Distance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Distance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_Distance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Distance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyLibrary_Distance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyLibrary_Distance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics
	{
		struct DiscordLobbyLibrary_eventFilter_Parms
		{
			FDiscordLobbySearchQuery SearchQuery;
			FString Key;
			EDiscordLobbySearchComparison Comparison;
			EDiscordLobbySearchCast Cast;
			FString Value;
			FDiscordLobbySearchQuery ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchQuery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Comparison;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Cast_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cast_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Cast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_SearchQuery = { "SearchQuery", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventFilter_Parms, SearchQuery), Z_Construct_UScriptStruct_FDiscordLobbySearchQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventFilter_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Comparison_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventFilter_Parms, Comparison), Z_Construct_UEnum_DiscordLobby_EDiscordLobbySearchComparison, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Comparison_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Comparison_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Cast_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Cast_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Cast = { "Cast", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventFilter_Parms, Cast), Z_Construct_UEnum_DiscordLobby_EDiscordLobbySearchCast, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Cast_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Cast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventFilter_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventFilter_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordLobbySearchQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_SearchQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Comparison_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Comparison,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Cast_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Cast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyLibrary, nullptr, "Filter", nullptr, nullptr, sizeof(DiscordLobbyLibrary_eventFilter_Parms), Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyLibrary_Filter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyLibrary_Filter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyLibrary_Limit_Statics
	{
		struct DiscordLobbyLibrary_eventLimit_Parms
		{
			FDiscordLobbySearchQuery SearchQuery;
			int64 NewLimit;
			FDiscordLobbySearchQuery ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchQuery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_NewLimit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Limit_Statics::NewProp_SearchQuery = { "SearchQuery", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventLimit_Parms, SearchQuery), Z_Construct_UScriptStruct_FDiscordLobbySearchQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_Limit_Statics::NewProp_NewLimit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Limit_Statics::NewProp_NewLimit = { "NewLimit", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventLimit_Parms, NewLimit), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_Limit_Statics::NewProp_NewLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Limit_Statics::NewProp_NewLimit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Limit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventLimit_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordLobbySearchQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyLibrary_Limit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Limit_Statics::NewProp_SearchQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Limit_Statics::NewProp_NewLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Limit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_Limit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyLibrary_Limit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyLibrary, nullptr, "Limit", nullptr, nullptr, sizeof(DiscordLobbyLibrary_eventLimit_Parms), Z_Construct_UFunction_UDiscordLobbyLibrary_Limit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Limit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_Limit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Limit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyLibrary_Limit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyLibrary_Limit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyLibrary_Member_DeleteMetadata_Statics
	{
		struct DiscordLobbyLibrary_eventMember_DeleteMetadata_Parms
		{
			FDiscordLobbyMemberTransaction Transaction;
			FString Key;
			FDiscordLobbyMemberTransaction ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Member_DeleteMetadata_Statics::NewProp_Transaction = { "Transaction", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventMember_DeleteMetadata_Parms, Transaction), Z_Construct_UScriptStruct_FDiscordLobbyMemberTransaction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_Member_DeleteMetadata_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Member_DeleteMetadata_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventMember_DeleteMetadata_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_Member_DeleteMetadata_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Member_DeleteMetadata_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Member_DeleteMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventMember_DeleteMetadata_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordLobbyMemberTransaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyLibrary_Member_DeleteMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Member_DeleteMetadata_Statics::NewProp_Transaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Member_DeleteMetadata_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Member_DeleteMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_Member_DeleteMetadata_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyLibrary_Member_DeleteMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyLibrary, nullptr, "Member_DeleteMetadata", nullptr, nullptr, sizeof(DiscordLobbyLibrary_eventMember_DeleteMetadata_Parms), Z_Construct_UFunction_UDiscordLobbyLibrary_Member_DeleteMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Member_DeleteMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_Member_DeleteMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Member_DeleteMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyLibrary_Member_DeleteMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyLibrary_Member_DeleteMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics
	{
		struct DiscordLobbyLibrary_eventMember_SetMetadata_Parms
		{
			FDiscordLobbyMemberTransaction Transaction;
			FString Key;
			FString Value;
			FDiscordLobbyMemberTransaction ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics::NewProp_Transaction = { "Transaction", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventMember_SetMetadata_Parms, Transaction), Z_Construct_UScriptStruct_FDiscordLobbyMemberTransaction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventMember_SetMetadata_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventMember_SetMetadata_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventMember_SetMetadata_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordLobbyMemberTransaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics::NewProp_Transaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyLibrary, nullptr, "Member_SetMetadata", nullptr, nullptr, sizeof(DiscordLobbyLibrary_eventMember_SetMetadata_Parms), Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyLibrary_SetCapacity_Statics
	{
		struct DiscordLobbyLibrary_eventSetCapacity_Parms
		{
			FDiscordLobbyTransaction Transaction;
			int64 Capacity;
			FDiscordLobbyTransaction ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Capacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Capacity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetCapacity_Statics::NewProp_Transaction = { "Transaction", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSetCapacity_Parms, Transaction), Z_Construct_UScriptStruct_FDiscordLobbyTransaction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_SetCapacity_Statics::NewProp_Capacity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetCapacity_Statics::NewProp_Capacity = { "Capacity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSetCapacity_Parms, Capacity), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_SetCapacity_Statics::NewProp_Capacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetCapacity_Statics::NewProp_Capacity_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetCapacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSetCapacity_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordLobbyTransaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyLibrary_SetCapacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetCapacity_Statics::NewProp_Transaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetCapacity_Statics::NewProp_Capacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetCapacity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_SetCapacity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyLibrary, nullptr, "SetCapacity", nullptr, nullptr, sizeof(DiscordLobbyLibrary_eventSetCapacity_Parms), Z_Construct_UFunction_UDiscordLobbyLibrary_SetCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetCapacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_SetCapacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetCapacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyLibrary_SetCapacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyLibrary_SetCapacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics
	{
		struct DiscordLobbyLibrary_eventSetLobbyTransactionProperties_Parms
		{
			FDiscordLobbyTransaction Transaction;
			EDiscordLobbyType Type;
			TMap<FString,FString> MetaData;
			int64 UserId;
			int64 Capacity;
			bool bLocked;
			FDiscordLobbyTransaction ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transaction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MetaData_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MetaData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Capacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Capacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocked;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_Transaction = { "Transaction", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSetLobbyTransactionProperties_Parms, Transaction), Z_Construct_UScriptStruct_FDiscordLobbyTransaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSetLobbyTransactionProperties_Parms, Type), Z_Construct_UEnum_DiscordLobby_EDiscordLobbyType, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_MetaData_ValueProp = { "MetaData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_MetaData_Key_KeyProp = { "MetaData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSetLobbyTransactionProperties_Parms, MetaData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_MetaData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSetLobbyTransactionProperties_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_Capacity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_Capacity = { "Capacity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSetLobbyTransactionProperties_Parms, Capacity), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_Capacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_Capacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_bLocked_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((DiscordLobbyLibrary_eventSetLobbyTransactionProperties_Parms*)Obj)->bLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DiscordLobbyLibrary_eventSetLobbyTransactionProperties_Parms), &Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_bLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_bLocked_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSetLobbyTransactionProperties_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordLobbyTransaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_Transaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_MetaData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_MetaData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_Capacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_bLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyLibrary, nullptr, "SetLobbyTransactionProperties", nullptr, nullptr, sizeof(DiscordLobbyLibrary_eventSetLobbyTransactionProperties_Parms), Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyLibrary_SetLocked_Statics
	{
		struct DiscordLobbyLibrary_eventSetLocked_Parms
		{
			FDiscordLobbyTransaction Transaction;
			bool bLocked;
			FDiscordLobbyTransaction ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocked;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetLocked_Statics::NewProp_Transaction = { "Transaction", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSetLocked_Parms, Transaction), Z_Construct_UScriptStruct_FDiscordLobbyTransaction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_SetLocked_Statics::NewProp_bLocked_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDiscordLobbyLibrary_SetLocked_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((DiscordLobbyLibrary_eventSetLocked_Parms*)Obj)->bLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetLocked_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DiscordLobbyLibrary_eventSetLocked_Parms), &Z_Construct_UFunction_UDiscordLobbyLibrary_SetLocked_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_SetLocked_Statics::NewProp_bLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetLocked_Statics::NewProp_bLocked_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSetLocked_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordLobbyTransaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyLibrary_SetLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetLocked_Statics::NewProp_Transaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetLocked_Statics::NewProp_bLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_SetLocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyLibrary, nullptr, "SetLocked", nullptr, nullptr, sizeof(DiscordLobbyLibrary_eventSetLocked_Parms), Z_Construct_UFunction_UDiscordLobbyLibrary_SetLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_SetLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyLibrary_SetLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyLibrary_SetLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics
	{
		struct DiscordLobbyLibrary_eventSetMetadata_Parms
		{
			FDiscordLobbyTransaction Transaction;
			FString Key;
			FString Value;
			FDiscordLobbyTransaction ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics::NewProp_Transaction = { "Transaction", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSetMetadata_Parms, Transaction), Z_Construct_UScriptStruct_FDiscordLobbyTransaction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSetMetadata_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSetMetadata_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSetMetadata_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordLobbyTransaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics::NewProp_Transaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyLibrary, nullptr, "SetMetadata", nullptr, nullptr, sizeof(DiscordLobbyLibrary_eventSetMetadata_Parms), Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyLibrary_SetOwner_Statics
	{
		struct DiscordLobbyLibrary_eventSetOwner_Parms
		{
			FDiscordLobbyTransaction Transaction;
			int64 UserId;
			FDiscordLobbyTransaction ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetOwner_Statics::NewProp_Transaction = { "Transaction", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSetOwner_Parms, Transaction), Z_Construct_UScriptStruct_FDiscordLobbyTransaction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_SetOwner_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetOwner_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSetOwner_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_SetOwner_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetOwner_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSetOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordLobbyTransaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyLibrary_SetOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetOwner_Statics::NewProp_Transaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetOwner_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_SetOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyLibrary, nullptr, "SetOwner", nullptr, nullptr, sizeof(DiscordLobbyLibrary_eventSetOwner_Parms), Z_Construct_UFunction_UDiscordLobbyLibrary_SetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_SetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyLibrary_SetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyLibrary_SetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyLibrary_SetType_Statics
	{
		struct DiscordLobbyLibrary_eventSetType_Parms
		{
			FDiscordLobbyTransaction Transaction;
			EDiscordLobbyType Type;
			FDiscordLobbyTransaction ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transaction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetType_Statics::NewProp_Transaction = { "Transaction", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSetType_Parms, Transaction), Z_Construct_UScriptStruct_FDiscordLobbyTransaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_SetType_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSetType_Parms, Type), Z_Construct_UEnum_DiscordLobby_EDiscordLobbyType, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_SetType_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetType_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSetType_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordLobbyTransaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyLibrary_SetType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetType_Statics::NewProp_Transaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetType_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetType_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_SetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_SetType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyLibrary_SetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyLibrary, nullptr, "SetType", nullptr, nullptr, sizeof(DiscordLobbyLibrary_eventSetType_Parms), Z_Construct_UFunction_UDiscordLobbyLibrary_SetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_SetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_SetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyLibrary_SetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyLibrary_SetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics
	{
		struct DiscordLobbyLibrary_eventSort_Parms
		{
			FDiscordLobbySearchQuery SearchQuery;
			FString Key;
			EDiscordLobbySearchCast Cast;
			FString Value;
			FDiscordLobbySearchQuery ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchQuery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Cast_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cast_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Cast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::NewProp_SearchQuery = { "SearchQuery", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSort_Parms, SearchQuery), Z_Construct_UScriptStruct_FDiscordLobbySearchQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSort_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::NewProp_Cast_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::NewProp_Cast_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::NewProp_Cast = { "Cast", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSort_Parms, Cast), Z_Construct_UEnum_DiscordLobby_EDiscordLobbySearchCast, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::NewProp_Cast_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::NewProp_Cast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSort_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordLobbyLibrary_eventSort_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordLobbySearchQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::NewProp_SearchQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::NewProp_Cast_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::NewProp_Cast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordLobbyLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordLobbyLibrary, nullptr, "Sort", nullptr, nullptr, sizeof(DiscordLobbyLibrary_eventSort_Parms), Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordLobbyLibrary_Sort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordLobbyLibrary_Sort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDiscordLobbyLibrary_NoRegister()
	{
		return UDiscordLobbyLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordLobbyLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordLobbyLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordLobby,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiscordLobbyLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordLobbyLibrary_DeleteMetadata, "DeleteMetadata" }, // 2808221415
		{ &Z_Construct_UFunction_UDiscordLobbyLibrary_Distance, "Distance" }, // 1089335659
		{ &Z_Construct_UFunction_UDiscordLobbyLibrary_Filter, "Filter" }, // 3756327319
		{ &Z_Construct_UFunction_UDiscordLobbyLibrary_Limit, "Limit" }, // 3261966994
		{ &Z_Construct_UFunction_UDiscordLobbyLibrary_Member_DeleteMetadata, "Member_DeleteMetadata" }, // 338640585
		{ &Z_Construct_UFunction_UDiscordLobbyLibrary_Member_SetMetadata, "Member_SetMetadata" }, // 1644858710
		{ &Z_Construct_UFunction_UDiscordLobbyLibrary_SetCapacity, "SetCapacity" }, // 3382559640
		{ &Z_Construct_UFunction_UDiscordLobbyLibrary_SetLobbyTransactionProperties, "SetLobbyTransactionProperties" }, // 327415381
		{ &Z_Construct_UFunction_UDiscordLobbyLibrary_SetLocked, "SetLocked" }, // 2626238985
		{ &Z_Construct_UFunction_UDiscordLobbyLibrary_SetMetadata, "SetMetadata" }, // 2534099869
		{ &Z_Construct_UFunction_UDiscordLobbyLibrary_SetOwner, "SetOwner" }, // 3537004584
		{ &Z_Construct_UFunction_UDiscordLobbyLibrary_SetType, "SetType" }, // 3367574111
		{ &Z_Construct_UFunction_UDiscordLobbyLibrary_Sort, "Sort" }, // 2056546397
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordLobbyLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DiscordLobbyLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DiscordLobbyLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordLobbyLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordLobbyLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiscordLobbyLibrary_Statics::ClassParams = {
		&UDiscordLobbyLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDiscordLobbyLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordLobbyLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiscordLobbyLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiscordLobbyLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordLobbyLibrary, 678346785);
	template<> DISCORDLOBBY_API UClass* StaticClass<UDiscordLobbyLibrary>()
	{
		return UDiscordLobbyLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordLobbyLibrary(Z_Construct_UClass_UDiscordLobbyLibrary, &UDiscordLobbyLibrary::StaticClass, TEXT("/Script/DiscordLobby"), TEXT("UDiscordLobbyLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordLobbyLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
