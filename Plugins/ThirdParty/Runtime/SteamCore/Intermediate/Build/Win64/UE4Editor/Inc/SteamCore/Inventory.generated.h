// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamInventoryResult;
struct FSteamItemDef;
struct FSteamID;
struct FSteamItemInstanceID;
struct FSteamItemDetails;
enum class ESteamResult : uint8;
struct FSteamInventoryUpdateHandle;
#ifdef STEAMCORE_Inventory_generated_h
#error "Inventory.generated.h already included, missing '#pragma once' in Inventory.h"
#endif
#define STEAMCORE_Inventory_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Inventory_h_24_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Inventory_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddPromoItem); \
	DECLARE_FUNCTION(execAddPromoItems); \
	DECLARE_FUNCTION(execCheckResultSteamID); \
	DECLARE_FUNCTION(execConsumeItem); \
	DECLARE_FUNCTION(execDeserializeResult); \
	DECLARE_FUNCTION(execDestroyResult); \
	DECLARE_FUNCTION(execExchangeItems); \
	DECLARE_FUNCTION(execGenerateItems); \
	DECLARE_FUNCTION(execGetAllItems); \
	DECLARE_FUNCTION(execGetEligiblePromoItemDefinitionIDs); \
	DECLARE_FUNCTION(execGetItemDefinitionIDs); \
	DECLARE_FUNCTION(execGetItemDefinitionProperty); \
	DECLARE_FUNCTION(execGetItemPrice); \
	DECLARE_FUNCTION(execGetItemsByID); \
	DECLARE_FUNCTION(execGetItemsWithPrices); \
	DECLARE_FUNCTION(execGetNumItemsWithPrices); \
	DECLARE_FUNCTION(execGetResultItemProperty); \
	DECLARE_FUNCTION(execGetResultItems); \
	DECLARE_FUNCTION(execGetResultStatus); \
	DECLARE_FUNCTION(execGetResultTimestamp); \
	DECLARE_FUNCTION(execGrantPromoItems); \
	DECLARE_FUNCTION(execLoadItemDefinitions); \
	DECLARE_FUNCTION(execRemoveProperty); \
	DECLARE_FUNCTION(execRequestEligiblePromoItemDefinitionsIDs); \
	DECLARE_FUNCTION(execRequestPrices); \
	DECLARE_FUNCTION(execSerializeResult); \
	DECLARE_FUNCTION(execSetPropertyBool); \
	DECLARE_FUNCTION(execSetPropertyFloat); \
	DECLARE_FUNCTION(execSetPropertyInt); \
	DECLARE_FUNCTION(execSetPropertyString); \
	DECLARE_FUNCTION(execStartPurchase); \
	DECLARE_FUNCTION(execStartUpdateProperties); \
	DECLARE_FUNCTION(execSubmitUpdateProperties); \
	DECLARE_FUNCTION(execTransferItemQuantity); \
	DECLARE_FUNCTION(execTriggerItemDrop);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Inventory_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddPromoItem); \
	DECLARE_FUNCTION(execAddPromoItems); \
	DECLARE_FUNCTION(execCheckResultSteamID); \
	DECLARE_FUNCTION(execConsumeItem); \
	DECLARE_FUNCTION(execDeserializeResult); \
	DECLARE_FUNCTION(execDestroyResult); \
	DECLARE_FUNCTION(execExchangeItems); \
	DECLARE_FUNCTION(execGenerateItems); \
	DECLARE_FUNCTION(execGetAllItems); \
	DECLARE_FUNCTION(execGetEligiblePromoItemDefinitionIDs); \
	DECLARE_FUNCTION(execGetItemDefinitionIDs); \
	DECLARE_FUNCTION(execGetItemDefinitionProperty); \
	DECLARE_FUNCTION(execGetItemPrice); \
	DECLARE_FUNCTION(execGetItemsByID); \
	DECLARE_FUNCTION(execGetItemsWithPrices); \
	DECLARE_FUNCTION(execGetNumItemsWithPrices); \
	DECLARE_FUNCTION(execGetResultItemProperty); \
	DECLARE_FUNCTION(execGetResultItems); \
	DECLARE_FUNCTION(execGetResultStatus); \
	DECLARE_FUNCTION(execGetResultTimestamp); \
	DECLARE_FUNCTION(execGrantPromoItems); \
	DECLARE_FUNCTION(execLoadItemDefinitions); \
	DECLARE_FUNCTION(execRemoveProperty); \
	DECLARE_FUNCTION(execRequestEligiblePromoItemDefinitionsIDs); \
	DECLARE_FUNCTION(execRequestPrices); \
	DECLARE_FUNCTION(execSerializeResult); \
	DECLARE_FUNCTION(execSetPropertyBool); \
	DECLARE_FUNCTION(execSetPropertyFloat); \
	DECLARE_FUNCTION(execSetPropertyInt); \
	DECLARE_FUNCTION(execSetPropertyString); \
	DECLARE_FUNCTION(execStartPurchase); \
	DECLARE_FUNCTION(execStartUpdateProperties); \
	DECLARE_FUNCTION(execSubmitUpdateProperties); \
	DECLARE_FUNCTION(execTransferItemQuantity); \
	DECLARE_FUNCTION(execTriggerItemDrop);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Inventory_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UInventory)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Inventory_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UInventory)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Inventory_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Inventory_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventory)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Inventory_h_24_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Inventory_h_22_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Inventory_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Inventory_h_24_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Inventory_h_24_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Inventory_h_24_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Inventory_h_24_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Inventory_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Inventory_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Inventory_h_24_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Inventory_h_24_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Inventory_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Inventory_h_24_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Inventory_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UInventory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Inventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
