// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Inventory.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventory() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UInventory();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDef();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemInstanceID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDetails();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryResultReady__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryDefinitionUpdate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryFullUpdate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UInventory::execAddPromoItem)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
		P_GET_STRUCT(FSteamItemDef,Z_Param_ItemDef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::AddPromoItem(Z_Param_Out_Result,Z_Param_ItemDef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execAddPromoItems)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_OutResult);
		P_GET_TARRAY(FSteamItemDef,Z_Param_ItemDefs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::AddPromoItems(Z_Param_Out_OutResult,Z_Param_ItemDefs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execCheckResultSteamID)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDExpected);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::CheckResultSteamID(Z_Param_Handle,Z_Param_SteamIDExpected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execConsumeItem)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemConsume);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::ConsumeItem(Z_Param_Out_Result,Z_Param_ItemConsume,Z_Param_Quantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execDeserializeResult)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
		P_GET_TARRAY(uint8,Z_Param_Buffer);
		P_GET_UBOOL(Z_Param_bReservedMustBeFalse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::DeserializeResult(Z_Param_Out_Result,Z_Param_Buffer,Z_Param_bReservedMustBeFalse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execDestroyResult)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInventory::DestroyResult(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execExchangeItems)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
		P_GET_TARRAY(FSteamItemDef,Z_Param_ArrayGenerate);
		P_GET_TARRAY(int32,Z_Param_ArrayGenerateQuantity);
		P_GET_TARRAY(FSteamItemInstanceID,Z_Param_ArrayDestroy);
		P_GET_TARRAY(int32,Z_Param_ArrayDestroyQuantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::ExchangeItems(Z_Param_Out_Result,Z_Param_ArrayGenerate,Z_Param_ArrayGenerateQuantity,Z_Param_ArrayDestroy,Z_Param_ArrayDestroyQuantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGenerateItems)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
		P_GET_TARRAY(FSteamItemDef,Z_Param_ItemDefs);
		P_GET_TARRAY(int32,Z_Param_Quantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::GenerateItems(Z_Param_Out_Result,Z_Param_ItemDefs,Z_Param_Quantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetAllItems)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::GetAllItems(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetEligiblePromoItemDefinitionIDs)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_GET_TARRAY_REF(FSteamItemDef,Z_Param_Out_ItemDefs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::GetEligiblePromoItemDefinitionIDs(Z_Param_SteamID,Z_Param_Out_ItemDefs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetItemDefinitionIDs)
	{
		P_GET_TARRAY_REF(FSteamItemDef,Z_Param_Out_ItemDefs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::GetItemDefinitionIDs(Z_Param_Out_ItemDefs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetItemDefinitionProperty)
	{
		P_GET_STRUCT(FSteamItemDef,Z_Param_ItemDef);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::GetItemDefinitionProperty(Z_Param_ItemDef,Z_Param_PropertyName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetItemPrice)
	{
		P_GET_STRUCT(FSteamItemDef,Z_Param_ItemDef);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Price);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BasePrice);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::GetItemPrice(Z_Param_ItemDef,Z_Param_Out_Price,Z_Param_Out_BasePrice);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetItemsByID)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_InventoryResult);
		P_GET_TARRAY(FSteamItemInstanceID,Z_Param_InstanceIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::GetItemsByID(Z_Param_Out_InventoryResult,Z_Param_InstanceIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetItemsWithPrices)
	{
		P_GET_TARRAY_REF(FSteamItemDef,Z_Param_Out_ItemDefs);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Prices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_BasePrices);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::GetItemsWithPrices(Z_Param_Out_ItemDefs,Z_Param_Out_Prices,Z_Param_Out_BasePrices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetNumItemsWithPrices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UInventory::GetNumItemsWithPrices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetResultItemProperty)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::GetResultItemProperty(Z_Param_Handle,Z_Param_ItemIndex,Z_Param_PropertyName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetResultItems)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
		P_GET_TARRAY_REF(FSteamItemDetails,Z_Param_Out_Items);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::GetResultItems(Z_Param_Handle,Z_Param_Out_Items);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetResultStatus)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamResult*)Z_Param__Result=UInventory::GetResultStatus(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetResultTimestamp)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UInventory::GetResultTimestamp(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGrantPromoItems)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::GrantPromoItems(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execLoadItemDefinitions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::LoadItemDefinitions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execRemoveProperty)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemId);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::RemoveProperty(Z_Param_Handle,Z_Param_ItemId,Z_Param_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execRequestEligiblePromoItemDefinitionsIDs)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestEligiblePromoItemDefinitionsIDs(FOnRequestEligiblePromoItemDefinitionsIDs(Z_Param_Out_Callback),Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execRequestPrices)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestPrices(FOnSteamInventoryRequestPricesResult(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execSerializeResult)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_Handle);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::SerializeResult(Z_Param_Handle,Z_Param_Out_Buffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execSetPropertyBool)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemId);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::SetPropertyBool(Z_Param_Handle,Z_Param_ItemId,Z_Param_PropertyName,Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execSetPropertyFloat)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemId);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::SetPropertyFloat(Z_Param_Handle,Z_Param_ItemId,Z_Param_PropertyName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execSetPropertyInt)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemId);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::SetPropertyInt(Z_Param_Handle,Z_Param_ItemId,Z_Param_PropertyName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execSetPropertyString)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemId);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::SetPropertyString(Z_Param_Handle,Z_Param_ItemId,Z_Param_PropertyName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execStartPurchase)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_TARRAY(FSteamItemDef,Z_Param_ItemDefs);
		P_GET_TARRAY(int32,Z_Param_Quantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartPurchase(FOnSteamInventoryStartPurchaseResult(Z_Param_Out_Callback),Z_Param_ItemDefs,Z_Param_Quantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execStartUpdateProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamInventoryUpdateHandle*)Z_Param__Result=UInventory::StartUpdateProperties();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execSubmitUpdateProperties)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_ResultHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::SubmitUpdateProperties(Z_Param_Handle,Z_Param_Out_ResultHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execTransferItemQuantity)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemIDSource);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_ItemIDDest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::TransferItemQuantity(Z_Param_Out_Result,Z_Param_ItemIDSource,Z_Param_Quantity,Z_Param_ItemIDDest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execTriggerItemDrop)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_Result);
		P_GET_STRUCT(FSteamItemDef,Z_Param_ListDefinition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::TriggerItemDrop(Z_Param_Out_Result,Z_Param_ListDefinition);
		P_NATIVE_END;
	}
	void UInventory::StaticRegisterNativesUInventory()
	{
		UClass* Class = UInventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPromoItem", &UInventory::execAddPromoItem },
			{ "AddPromoItems", &UInventory::execAddPromoItems },
			{ "CheckResultSteamID", &UInventory::execCheckResultSteamID },
			{ "ConsumeItem", &UInventory::execConsumeItem },
			{ "DeserializeResult", &UInventory::execDeserializeResult },
			{ "DestroyResult", &UInventory::execDestroyResult },
			{ "ExchangeItems", &UInventory::execExchangeItems },
			{ "GenerateItems", &UInventory::execGenerateItems },
			{ "GetAllItems", &UInventory::execGetAllItems },
			{ "GetEligiblePromoItemDefinitionIDs", &UInventory::execGetEligiblePromoItemDefinitionIDs },
			{ "GetItemDefinitionIDs", &UInventory::execGetItemDefinitionIDs },
			{ "GetItemDefinitionProperty", &UInventory::execGetItemDefinitionProperty },
			{ "GetItemPrice", &UInventory::execGetItemPrice },
			{ "GetItemsByID", &UInventory::execGetItemsByID },
			{ "GetItemsWithPrices", &UInventory::execGetItemsWithPrices },
			{ "GetNumItemsWithPrices", &UInventory::execGetNumItemsWithPrices },
			{ "GetResultItemProperty", &UInventory::execGetResultItemProperty },
			{ "GetResultItems", &UInventory::execGetResultItems },
			{ "GetResultStatus", &UInventory::execGetResultStatus },
			{ "GetResultTimestamp", &UInventory::execGetResultTimestamp },
			{ "GrantPromoItems", &UInventory::execGrantPromoItems },
			{ "LoadItemDefinitions", &UInventory::execLoadItemDefinitions },
			{ "RemoveProperty", &UInventory::execRemoveProperty },
			{ "RequestEligiblePromoItemDefinitionsIDs", &UInventory::execRequestEligiblePromoItemDefinitionsIDs },
			{ "RequestPrices", &UInventory::execRequestPrices },
			{ "SerializeResult", &UInventory::execSerializeResult },
			{ "SetPropertyBool", &UInventory::execSetPropertyBool },
			{ "SetPropertyFloat", &UInventory::execSetPropertyFloat },
			{ "SetPropertyInt", &UInventory::execSetPropertyInt },
			{ "SetPropertyString", &UInventory::execSetPropertyString },
			{ "StartPurchase", &UInventory::execStartPurchase },
			{ "StartUpdateProperties", &UInventory::execStartUpdateProperties },
			{ "SubmitUpdateProperties", &UInventory::execSubmitUpdateProperties },
			{ "TransferItemQuantity", &UInventory::execTransferItemQuantity },
			{ "TriggerItemDrop", &UInventory::execTriggerItemDrop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventory_AddPromoItem_Statics
	{
		struct Inventory_eventAddPromoItem_Parms
		{
			FSteamInventoryResult Result;
			FSteamItemDef ItemDef;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemDef;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventAddPromoItem_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventAddPromoItem_Parms, ItemDef), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventAddPromoItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventAddPromoItem_Parms), &Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_AddPromoItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_ItemDef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_AddPromoItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_AddPromoItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "AddPromoItem", nullptr, nullptr, sizeof(Inventory_eventAddPromoItem_Parms), Z_Construct_UFunction_UInventory_AddPromoItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddPromoItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_AddPromoItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddPromoItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_AddPromoItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_AddPromoItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_AddPromoItems_Statics
	{
		struct Inventory_eventAddPromoItems_Parms
		{
			FSteamInventoryResult OutResult;
			TArray<FSteamItemDef> ItemDefs;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventAddPromoItems_Parms, OutResult), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventAddPromoItems_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventAddPromoItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventAddPromoItems_Parms), &Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_AddPromoItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_OutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_ItemDefs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_ItemDefs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_AddPromoItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_AddPromoItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "AddPromoItems", nullptr, nullptr, sizeof(Inventory_eventAddPromoItems_Parms), Z_Construct_UFunction_UInventory_AddPromoItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddPromoItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_AddPromoItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddPromoItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_AddPromoItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_AddPromoItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics
	{
		struct Inventory_eventCheckResultSteamID_Parms
		{
			FSteamInventoryResult Handle;
			FSteamID SteamIDExpected;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDExpected;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventCheckResultSteamID_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_SteamIDExpected = { "SteamIDExpected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventCheckResultSteamID_Parms, SteamIDExpected), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventCheckResultSteamID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventCheckResultSteamID_Parms), &Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_SteamIDExpected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "CheckResultSteamID", nullptr, nullptr, sizeof(Inventory_eventCheckResultSteamID_Parms), Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_CheckResultSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_ConsumeItem_Statics
	{
		struct Inventory_eventConsumeItem_Parms
		{
			FSteamInventoryResult Result;
			FSteamItemInstanceID ItemConsume;
			int32 Quantity;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemConsume;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventConsumeItem_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_ItemConsume = { "ItemConsume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventConsumeItem_Parms, ItemConsume), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventConsumeItem_Parms, Quantity), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventConsumeItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventConsumeItem_Parms), &Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_ConsumeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_ItemConsume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_ConsumeItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_ConsumeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "ConsumeItem", nullptr, nullptr, sizeof(Inventory_eventConsumeItem_Parms), Z_Construct_UFunction_UInventory_ConsumeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_ConsumeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_ConsumeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_ConsumeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_ConsumeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_ConsumeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_DeserializeResult_Statics
	{
		struct Inventory_eventDeserializeResult_Parms
		{
			FSteamInventoryResult Result;
			TArray<uint8> Buffer;
			bool bReservedMustBeFalse;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static void NewProp_bReservedMustBeFalse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReservedMustBeFalse;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventDeserializeResult_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventDeserializeResult_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_bReservedMustBeFalse_SetBit(void* Obj)
	{
		((Inventory_eventDeserializeResult_Parms*)Obj)->bReservedMustBeFalse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_bReservedMustBeFalse = { "bReservedMustBeFalse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventDeserializeResult_Parms), &Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_bReservedMustBeFalse_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventDeserializeResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventDeserializeResult_Parms), &Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_DeserializeResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_Buffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_Buffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_bReservedMustBeFalse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_DeserializeResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_DeserializeResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "DeserializeResult", nullptr, nullptr, sizeof(Inventory_eventDeserializeResult_Parms), Z_Construct_UFunction_UInventory_DeserializeResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_DeserializeResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_DeserializeResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_DeserializeResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_DeserializeResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_DeserializeResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_DestroyResult_Statics
	{
		struct Inventory_eventDestroyResult_Parms
		{
			FSteamInventoryResult Handle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_DestroyResult_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventDestroyResult_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_DestroyResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_DestroyResult_Statics::NewProp_Handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_DestroyResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_DestroyResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "DestroyResult", nullptr, nullptr, sizeof(Inventory_eventDestroyResult_Parms), Z_Construct_UFunction_UInventory_DestroyResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_DestroyResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_DestroyResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_DestroyResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_DestroyResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_DestroyResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_ExchangeItems_Statics
	{
		struct Inventory_eventExchangeItems_Parms
		{
			FSteamInventoryResult Result;
			TArray<FSteamItemDef> ArrayGenerate;
			TArray<int32> ArrayGenerateQuantity;
			TArray<FSteamItemInstanceID> ArrayDestroy;
			TArray<int32> ArrayDestroyQuantity;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArrayGenerate_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayGenerate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArrayGenerateQuantity_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayGenerateQuantity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArrayDestroy_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayDestroy;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArrayDestroyQuantity_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayDestroyQuantity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventExchangeItems_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayGenerate_Inner = { "ArrayGenerate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayGenerate = { "ArrayGenerate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventExchangeItems_Parms, ArrayGenerate), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayGenerateQuantity_Inner = { "ArrayGenerateQuantity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayGenerateQuantity = { "ArrayGenerateQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventExchangeItems_Parms, ArrayGenerateQuantity), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayDestroy_Inner = { "ArrayDestroy", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayDestroy = { "ArrayDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventExchangeItems_Parms, ArrayDestroy), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayDestroyQuantity_Inner = { "ArrayDestroyQuantity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayDestroyQuantity = { "ArrayDestroyQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventExchangeItems_Parms, ArrayDestroyQuantity), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventExchangeItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventExchangeItems_Parms), &Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_ExchangeItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayGenerate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayGenerate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayGenerateQuantity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayGenerateQuantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayDestroy_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayDestroyQuantity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ArrayDestroyQuantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_ExchangeItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "ExchangeItems", nullptr, nullptr, sizeof(Inventory_eventExchangeItems_Parms), Z_Construct_UFunction_UInventory_ExchangeItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_ExchangeItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_ExchangeItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_ExchangeItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_ExchangeItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_ExchangeItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GenerateItems_Statics
	{
		struct Inventory_eventGenerateItems_Parms
		{
			FSteamInventoryResult Result;
			TArray<FSteamItemDef> ItemDefs;
			TArray<int32> Quantity;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Quantity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGenerateItems_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGenerateItems_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_Quantity_Inner = { "Quantity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGenerateItems_Parms, Quantity), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventGenerateItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventGenerateItems_Parms), &Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GenerateItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_ItemDefs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_ItemDefs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_Quantity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GenerateItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GenerateItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GenerateItems", nullptr, nullptr, sizeof(Inventory_eventGenerateItems_Parms), Z_Construct_UFunction_UInventory_GenerateItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GenerateItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GenerateItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GenerateItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GenerateItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GenerateItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetAllItems_Statics
	{
		struct Inventory_eventGetAllItems_Parms
		{
			FSteamInventoryResult Handle;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetAllItems_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetAllItems_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_GetAllItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventGetAllItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetAllItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventGetAllItems_Parms), &Z_Construct_UFunction_UInventory_GetAllItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetAllItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetAllItems_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetAllItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetAllItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetAllItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetAllItems", nullptr, nullptr, sizeof(Inventory_eventGetAllItems_Parms), Z_Construct_UFunction_UInventory_GetAllItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetAllItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetAllItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetAllItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetAllItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetAllItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics
	{
		struct Inventory_eventGetEligiblePromoItemDefinitionIDs_Parms
		{
			FSteamID SteamID;
			TArray<FSteamItemDef> ItemDefs;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetEligiblePromoItemDefinitionIDs_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetEligiblePromoItemDefinitionIDs_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventGetEligiblePromoItemDefinitionIDs_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventGetEligiblePromoItemDefinitionIDs_Parms), &Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ItemDefs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ItemDefs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetEligiblePromoItemDefinitionIDs", nullptr, nullptr, sizeof(Inventory_eventGetEligiblePromoItemDefinitionIDs_Parms), Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics
	{
		struct Inventory_eventGetItemDefinitionIDs_Parms
		{
			TArray<FSteamItemDef> ItemDefs;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemDefinitionIDs_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventGetItemDefinitionIDs_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventGetItemDefinitionIDs_Parms), &Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_ItemDefs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_ItemDefs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemDefinitionIDs", nullptr, nullptr, sizeof(Inventory_eventGetItemDefinitionIDs_Parms), Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetItemDefinitionIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics
	{
		struct Inventory_eventGetItemDefinitionProperty_Parms
		{
			FSteamItemDef ItemDef;
			FString PropertyName;
			FString Value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemDef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemDefinitionProperty_Parms, ItemDef), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemDefinitionProperty_Parms, PropertyName), METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_PropertyName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemDefinitionProperty_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventGetItemDefinitionProperty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventGetItemDefinitionProperty_Parms), &Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_ItemDef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemDefinitionProperty", nullptr, nullptr, sizeof(Inventory_eventGetItemDefinitionProperty_Parms), Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetItemDefinitionProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetItemPrice_Statics
	{
		struct Inventory_eventGetItemPrice_Parms
		{
			FSteamItemDef ItemDef;
			int32 Price;
			int32 BasePrice;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemDef;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Price;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BasePrice;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemPrice_Parms, ItemDef), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemPrice_Parms, Price), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_BasePrice = { "BasePrice", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemPrice_Parms, BasePrice), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventGetItemPrice_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventGetItemPrice_Parms), &Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemPrice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_ItemDef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_Price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_BasePrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetItemPrice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemPrice", nullptr, nullptr, sizeof(Inventory_eventGetItemPrice_Parms), Z_Construct_UFunction_UInventory_GetItemPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemPrice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetItemPrice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemPrice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetItemPrice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetItemPrice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetItemsByID_Statics
	{
		struct Inventory_eventGetItemsByID_Parms
		{
			FSteamInventoryResult InventoryResult;
			TArray<FSteamItemInstanceID> InstanceIDs;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InventoryResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstanceIDs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_InventoryResult = { "InventoryResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemsByID_Parms, InventoryResult), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_InstanceIDs_Inner = { "InstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_InstanceIDs = { "InstanceIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemsByID_Parms, InstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventGetItemsByID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventGetItemsByID_Parms), &Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemsByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_InventoryResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_InstanceIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_InstanceIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetItemsByID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemsByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemsByID", nullptr, nullptr, sizeof(Inventory_eventGetItemsByID_Parms), Z_Construct_UFunction_UInventory_GetItemsByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemsByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetItemsByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemsByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetItemsByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetItemsByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics
	{
		struct Inventory_eventGetItemsWithPrices_Parms
		{
			TArray<FSteamItemDef> ItemDefs;
			TArray<int32> Prices;
			TArray<int32> BasePrices;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Prices_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Prices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BasePrices_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BasePrices;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemsWithPrices_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_Prices_Inner = { "Prices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_Prices = { "Prices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemsWithPrices_Parms, Prices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_BasePrices_Inner = { "BasePrices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_BasePrices = { "BasePrices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemsWithPrices_Parms, BasePrices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventGetItemsWithPrices_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventGetItemsWithPrices_Parms), &Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_ItemDefs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_ItemDefs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_Prices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_Prices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_BasePrices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_BasePrices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemsWithPrices", nullptr, nullptr, sizeof(Inventory_eventGetItemsWithPrices_Parms), Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetItemsWithPrices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics
	{
		struct Inventory_eventGetNumItemsWithPrices_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetNumItemsWithPrices_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetNumItemsWithPrices", nullptr, nullptr, sizeof(Inventory_eventGetNumItemsWithPrices_Parms), Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetNumItemsWithPrices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics
	{
		struct Inventory_eventGetResultItemProperty_Parms
		{
			FSteamInventoryResult Handle;
			int32 ItemIndex;
			FString PropertyName;
			FString Value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetResultItemProperty_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetResultItemProperty_Parms, ItemIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetResultItemProperty_Parms, PropertyName), METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_PropertyName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetResultItemProperty_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventGetResultItemProperty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventGetResultItemProperty_Parms), &Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_ItemIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetResultItemProperty", nullptr, nullptr, sizeof(Inventory_eventGetResultItemProperty_Parms), Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetResultItemProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetResultItems_Statics
	{
		struct Inventory_eventGetResultItems_Parms
		{
			FSteamInventoryResult Handle;
			TArray<FSteamItemDetails> Items;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetResultItems_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDetails, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetResultItems_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventGetResultItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventGetResultItems_Parms), &Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetResultItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetResultItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetResultItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetResultItems", nullptr, nullptr, sizeof(Inventory_eventGetResultItems_Parms), Z_Construct_UFunction_UInventory_GetResultItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetResultItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetResultItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetResultItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetResultStatus_Statics
	{
		struct Inventory_eventGetResultStatus_Parms
		{
			FSteamInventoryResult Handle;
			ESteamResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetResultStatus_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetResultStatus_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventory_GetResultStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInventory_GetResultStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetResultStatus_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetResultStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultStatus_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetResultStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetResultStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetResultStatus", nullptr, nullptr, sizeof(Inventory_eventGetResultStatus_Parms), Z_Construct_UFunction_UInventory_GetResultStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetResultStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetResultStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetResultStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics
	{
		struct Inventory_eventGetResultTimestamp_Parms
		{
			FSteamInventoryResult Handle;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetResultTimestamp_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetResultTimestamp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetResultTimestamp", nullptr, nullptr, sizeof(Inventory_eventGetResultTimestamp_Parms), Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetResultTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GrantPromoItems_Statics
	{
		struct Inventory_eventGrantPromoItems_Parms
		{
			FSteamInventoryResult Result;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGrantPromoItems_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventGrantPromoItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventGrantPromoItems_Parms), &Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GrantPromoItems", nullptr, nullptr, sizeof(Inventory_eventGrantPromoItems_Parms), Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GrantPromoItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics
	{
		struct Inventory_eventLoadItemDefinitions_Parms
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
	void Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventLoadItemDefinitions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventLoadItemDefinitions_Parms), &Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "LoadItemDefinitions", nullptr, nullptr, sizeof(Inventory_eventLoadItemDefinitions_Parms), Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_LoadItemDefinitions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_RemoveProperty_Statics
	{
		struct Inventory_eventRemoveProperty_Parms
		{
			FSteamInventoryUpdateHandle Handle;
			FSteamItemInstanceID ItemId;
			FString PropertyName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventRemoveProperty_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventRemoveProperty_Parms, ItemId), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventRemoveProperty_Parms, PropertyName), METADATA_PARAMS(Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_PropertyName_MetaData)) };
	void Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventRemoveProperty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventRemoveProperty_Parms), &Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RemoveProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_RemoveProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RemoveProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RemoveProperty", nullptr, nullptr, sizeof(Inventory_eventRemoveProperty_Parms), Z_Construct_UFunction_UInventory_RemoveProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RemoveProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_RemoveProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RemoveProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_RemoveProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_RemoveProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics
	{
		struct Inventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms
		{
			FScriptDelegate Callback;
			FSteamID SteamID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RequestEligiblePromoItemDefinitionsIDs", nullptr, nullptr, sizeof(Inventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms), Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_RequestPrices_Statics
	{
		struct Inventory_eventRequestPrices_Parms
		{
			FScriptDelegate Callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_RequestPrices_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInventory_RequestPrices_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventRequestPrices_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UInventory_RequestPrices_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestPrices_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RequestPrices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestPrices_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_RequestPrices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RequestPrices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RequestPrices", nullptr, nullptr, sizeof(Inventory_eventRequestPrices_Parms), Z_Construct_UFunction_UInventory_RequestPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestPrices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_RequestPrices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestPrices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_RequestPrices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_RequestPrices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_SerializeResult_Statics
	{
		struct Inventory_eventSerializeResult_Parms
		{
			FSteamInventoryResult Handle;
			TArray<uint8> Buffer;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSerializeResult_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSerializeResult_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventSerializeResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventSerializeResult_Parms), &Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_SerializeResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_Buffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_Buffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_SerializeResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_SerializeResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "SerializeResult", nullptr, nullptr, sizeof(Inventory_eventSerializeResult_Parms), Z_Construct_UFunction_UInventory_SerializeResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SerializeResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_SerializeResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SerializeResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_SerializeResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_SerializeResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_SetPropertyBool_Statics
	{
		struct Inventory_eventSetPropertyBool_Parms
		{
			FSteamInventoryUpdateHandle Handle;
			FSteamItemInstanceID ItemId;
			FString PropertyName;
			bool bValue;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static void NewProp_bValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyBool_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyBool_Parms, ItemId), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyBool_Parms, PropertyName), METADATA_PARAMS(Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_PropertyName_MetaData)) };
	void Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((Inventory_eventSetPropertyBool_Parms*)Obj)->bValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventSetPropertyBool_Parms), &Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventSetPropertyBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventSetPropertyBool_Parms), &Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_bValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "SetPropertyBool", nullptr, nullptr, sizeof(Inventory_eventSetPropertyBool_Parms), Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_SetPropertyBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics
	{
		struct Inventory_eventSetPropertyFloat_Parms
		{
			FSteamInventoryUpdateHandle Handle;
			FSteamItemInstanceID ItemId;
			FString PropertyName;
			float Value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyFloat_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyFloat_Parms, ItemId), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyFloat_Parms, PropertyName), METADATA_PARAMS(Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_PropertyName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventSetPropertyFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventSetPropertyFloat_Parms), &Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "SetPropertyFloat", nullptr, nullptr, sizeof(Inventory_eventSetPropertyFloat_Parms), Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_SetPropertyFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_SetPropertyInt_Statics
	{
		struct Inventory_eventSetPropertyInt_Parms
		{
			FSteamInventoryUpdateHandle Handle;
			FSteamItemInstanceID ItemId;
			FString PropertyName;
			int32 Value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyInt_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyInt_Parms, ItemId), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyInt_Parms, PropertyName), METADATA_PARAMS(Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_PropertyName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyInt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventSetPropertyInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventSetPropertyInt_Parms), &Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "SetPropertyInt", nullptr, nullptr, sizeof(Inventory_eventSetPropertyInt_Parms), Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_SetPropertyInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_SetPropertyString_Statics
	{
		struct Inventory_eventSetPropertyString_Parms
		{
			FSteamInventoryUpdateHandle Handle;
			FSteamItemInstanceID ItemId;
			FString PropertyName;
			FString Value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyString_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyString_Parms, ItemId), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyString_Parms, PropertyName), METADATA_PARAMS(Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyString_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventSetPropertyString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventSetPropertyString_Parms), &Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_SetPropertyString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_SetPropertyString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_SetPropertyString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "SetPropertyString", nullptr, nullptr, sizeof(Inventory_eventSetPropertyString_Parms), Z_Construct_UFunction_UInventory_SetPropertyString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_SetPropertyString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_SetPropertyString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_SetPropertyString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_StartPurchase_Statics
	{
		struct Inventory_eventStartPurchase_Parms
		{
			FScriptDelegate Callback;
			TArray<FSteamItemDef> ItemDefs;
			TArray<int32> Quantity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemDefs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDefs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemDefs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Quantity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventStartPurchase_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_ItemDefs_Inner = { "ItemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_ItemDefs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_ItemDefs = { "ItemDefs", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventStartPurchase_Parms, ItemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_ItemDefs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_ItemDefs_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_Quantity_Inner = { "Quantity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventStartPurchase_Parms, Quantity), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_Quantity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_StartPurchase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_ItemDefs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_ItemDefs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_Quantity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_Quantity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_StartPurchase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_StartPurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "StartPurchase", nullptr, nullptr, sizeof(Inventory_eventStartPurchase_Parms), Z_Construct_UFunction_UInventory_StartPurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_StartPurchase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_StartPurchase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_StartPurchase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_StartPurchase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_StartPurchase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics
	{
		struct Inventory_eventStartUpdateProperties_Parms
		{
			FSteamInventoryUpdateHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventStartUpdateProperties_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "StartUpdateProperties", nullptr, nullptr, sizeof(Inventory_eventStartUpdateProperties_Parms), Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_StartUpdateProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics
	{
		struct Inventory_eventSubmitUpdateProperties_Parms
		{
			FSteamInventoryUpdateHandle Handle;
			FSteamInventoryResult ResultHandle;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSubmitUpdateProperties_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_ResultHandle = { "ResultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSubmitUpdateProperties_Parms, ResultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventSubmitUpdateProperties_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventSubmitUpdateProperties_Parms), &Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_ResultHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "SubmitUpdateProperties", nullptr, nullptr, sizeof(Inventory_eventSubmitUpdateProperties_Parms), Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_SubmitUpdateProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics
	{
		struct Inventory_eventTransferItemQuantity_Parms
		{
			FSteamInventoryResult Result;
			FSteamItemInstanceID ItemIDSource;
			int32 Quantity;
			FSteamItemInstanceID ItemIDDest;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemIDSource;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemIDDest;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventTransferItemQuantity_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_ItemIDSource = { "ItemIDSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventTransferItemQuantity_Parms, ItemIDSource), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventTransferItemQuantity_Parms, Quantity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_ItemIDDest = { "ItemIDDest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventTransferItemQuantity_Parms, ItemIDDest), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventTransferItemQuantity_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventTransferItemQuantity_Parms), &Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_ItemIDSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_ItemIDDest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "TransferItemQuantity", nullptr, nullptr, sizeof(Inventory_eventTransferItemQuantity_Parms), Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_TransferItemQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics
	{
		struct Inventory_eventTriggerItemDrop_Parms
		{
			FSteamInventoryResult Result;
			FSteamItemDef ListDefinition;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ListDefinition;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventTriggerItemDrop_Parms, Result), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_ListDefinition = { "ListDefinition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventTriggerItemDrop_Parms, ListDefinition), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventTriggerItemDrop_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventTriggerItemDrop_Parms), &Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_ListDefinition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "TriggerItemDrop", nullptr, nullptr, sizeof(Inventory_eventTriggerItemDrop_Parms), Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_TriggerItemDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventory_NoRegister()
	{
		return UInventory::StaticClass();
	}
	struct Z_Construct_UClass_UInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryResultReady_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryResultReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryDefinitionUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryDefinitionUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryFullUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryFullUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryStartPurchaseResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryStartPurchaseResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryRequestPricesResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryRequestPricesResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryEligiblePromoItemDefIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryEligiblePromoItemDefIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventory_AddPromoItem, "AddPromoItem" }, // 3490371197
		{ &Z_Construct_UFunction_UInventory_AddPromoItems, "AddPromoItems" }, // 641767664
		{ &Z_Construct_UFunction_UInventory_CheckResultSteamID, "CheckResultSteamID" }, // 577732879
		{ &Z_Construct_UFunction_UInventory_ConsumeItem, "ConsumeItem" }, // 3497112858
		{ &Z_Construct_UFunction_UInventory_DeserializeResult, "DeserializeResult" }, // 1945146607
		{ &Z_Construct_UFunction_UInventory_DestroyResult, "DestroyResult" }, // 650637501
		{ &Z_Construct_UFunction_UInventory_ExchangeItems, "ExchangeItems" }, // 3638735508
		{ &Z_Construct_UFunction_UInventory_GenerateItems, "GenerateItems" }, // 2256063514
		{ &Z_Construct_UFunction_UInventory_GetAllItems, "GetAllItems" }, // 2525249962
		{ &Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs, "GetEligiblePromoItemDefinitionIDs" }, // 2759431448
		{ &Z_Construct_UFunction_UInventory_GetItemDefinitionIDs, "GetItemDefinitionIDs" }, // 1880068124
		{ &Z_Construct_UFunction_UInventory_GetItemDefinitionProperty, "GetItemDefinitionProperty" }, // 1050019692
		{ &Z_Construct_UFunction_UInventory_GetItemPrice, "GetItemPrice" }, // 1256018399
		{ &Z_Construct_UFunction_UInventory_GetItemsByID, "GetItemsByID" }, // 3019957497
		{ &Z_Construct_UFunction_UInventory_GetItemsWithPrices, "GetItemsWithPrices" }, // 1214102119
		{ &Z_Construct_UFunction_UInventory_GetNumItemsWithPrices, "GetNumItemsWithPrices" }, // 4194162476
		{ &Z_Construct_UFunction_UInventory_GetResultItemProperty, "GetResultItemProperty" }, // 3453412184
		{ &Z_Construct_UFunction_UInventory_GetResultItems, "GetResultItems" }, // 636863221
		{ &Z_Construct_UFunction_UInventory_GetResultStatus, "GetResultStatus" }, // 1001040695
		{ &Z_Construct_UFunction_UInventory_GetResultTimestamp, "GetResultTimestamp" }, // 3199357658
		{ &Z_Construct_UFunction_UInventory_GrantPromoItems, "GrantPromoItems" }, // 762909583
		{ &Z_Construct_UFunction_UInventory_LoadItemDefinitions, "LoadItemDefinitions" }, // 3333481359
		{ &Z_Construct_UFunction_UInventory_RemoveProperty, "RemoveProperty" }, // 1595382552
		{ &Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs, "RequestEligiblePromoItemDefinitionsIDs" }, // 608678815
		{ &Z_Construct_UFunction_UInventory_RequestPrices, "RequestPrices" }, // 621349978
		{ &Z_Construct_UFunction_UInventory_SerializeResult, "SerializeResult" }, // 1165491657
		{ &Z_Construct_UFunction_UInventory_SetPropertyBool, "SetPropertyBool" }, // 462590957
		{ &Z_Construct_UFunction_UInventory_SetPropertyFloat, "SetPropertyFloat" }, // 1399220306
		{ &Z_Construct_UFunction_UInventory_SetPropertyInt, "SetPropertyInt" }, // 499558701
		{ &Z_Construct_UFunction_UInventory_SetPropertyString, "SetPropertyString" }, // 1447144011
		{ &Z_Construct_UFunction_UInventory_StartPurchase, "StartPurchase" }, // 2829067453
		{ &Z_Construct_UFunction_UInventory_StartUpdateProperties, "StartUpdateProperties" }, // 3194309578
		{ &Z_Construct_UFunction_UInventory_SubmitUpdateProperties, "SubmitUpdateProperties" }, // 3644358371
		{ &Z_Construct_UFunction_UInventory_TransferItemQuantity, "TransferItemQuantity" }, // 398764077
		{ &Z_Construct_UFunction_UInventory_TriggerItemDrop, "TriggerItemDrop" }, // 2642269165
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Inventory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryResultReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryResultReady = { "SteamInventoryResultReady", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventory, SteamInventoryResultReady), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryResultReady__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryResultReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryResultReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryDefinitionUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryDefinitionUpdate = { "SteamInventoryDefinitionUpdate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventory, SteamInventoryDefinitionUpdate), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryDefinitionUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryDefinitionUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryDefinitionUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryFullUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryFullUpdate = { "SteamInventoryFullUpdate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventory, SteamInventoryFullUpdate), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryFullUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryFullUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryFullUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryStartPurchaseResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryStartPurchaseResult = { "SteamInventoryStartPurchaseResult", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventory, SteamInventoryStartPurchaseResult), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryStartPurchaseResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryStartPurchaseResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryRequestPricesResultDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryRequestPricesResultDelegate = { "SteamInventoryRequestPricesResultDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventory, SteamInventoryRequestPricesResultDelegate), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryRequestPricesResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryRequestPricesResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryEligiblePromoItemDefIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryEligiblePromoItemDefIDs = { "SteamInventoryEligiblePromoItemDefIDs", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventory, SteamInventoryEligiblePromoItemDefIDs), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryEligiblePromoItemDefIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryEligiblePromoItemDefIDs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryResultReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryDefinitionUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryFullUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryStartPurchaseResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryRequestPricesResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryEligiblePromoItemDefIDs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventory_Statics::ClassParams = {
		&UInventory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventory, 1466508949);
	template<> STEAMCORE_API UClass* StaticClass<UInventory>()
	{
		return UInventory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventory(Z_Construct_UClass_UInventory, &UInventory::StaticClass, TEXT("/Script/SteamCore"), TEXT("UInventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
