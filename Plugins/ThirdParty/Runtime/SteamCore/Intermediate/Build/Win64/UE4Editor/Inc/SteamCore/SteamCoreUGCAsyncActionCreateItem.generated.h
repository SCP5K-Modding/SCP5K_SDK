// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class ESteamWorkshopFileType : uint8;
class USteamCoreUGCAsyncActionCreateItem;
struct FCreateItemResult;
#ifdef STEAMCORE_SteamCoreUGCAsyncActionCreateItem_generated_h
#error "SteamCoreUGCAsyncActionCreateItem.generated.h already included, missing '#pragma once' in SteamCoreUGCAsyncActionCreateItem.h"
#endif
#define STEAMCORE_SteamCoreUGCAsyncActionCreateItem_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamCoreUGCAsyncActionCreateItem_h_14_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamCoreUGCAsyncActionCreateItem_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateItemAsync); \
	DECLARE_FUNCTION(execHandleCallback);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamCoreUGCAsyncActionCreateItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateItemAsync); \
	DECLARE_FUNCTION(execHandleCallback);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamCoreUGCAsyncActionCreateItem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionCreateItem(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionCreateItem_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionCreateItem, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionCreateItem)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamCoreUGCAsyncActionCreateItem_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionCreateItem(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionCreateItem_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionCreateItem, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionCreateItem)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamCoreUGCAsyncActionCreateItem_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionCreateItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionCreateItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionCreateItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionCreateItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionCreateItem(USteamCoreUGCAsyncActionCreateItem&&); \
	NO_API USteamCoreUGCAsyncActionCreateItem(const USteamCoreUGCAsyncActionCreateItem&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamCoreUGCAsyncActionCreateItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionCreateItem(USteamCoreUGCAsyncActionCreateItem&&); \
	NO_API USteamCoreUGCAsyncActionCreateItem(const USteamCoreUGCAsyncActionCreateItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionCreateItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionCreateItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionCreateItem)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamCoreUGCAsyncActionCreateItem_h_14_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamCoreUGCAsyncActionCreateItem_h_12_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamCoreUGCAsyncActionCreateItem_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamCoreUGCAsyncActionCreateItem_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamCoreUGCAsyncActionCreateItem_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamCoreUGCAsyncActionCreateItem_h_14_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamCoreUGCAsyncActionCreateItem_h_14_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamCoreUGCAsyncActionCreateItem_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamCoreUGCAsyncActionCreateItem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamCoreUGCAsyncActionCreateItem_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamCoreUGCAsyncActionCreateItem_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamCoreUGCAsyncActionCreateItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamCoreUGCAsyncActionCreateItem_h_14_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamCoreUGCAsyncActionCreateItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUGCAsyncActionCreateItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamCoreUGCAsyncActionCreateItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
