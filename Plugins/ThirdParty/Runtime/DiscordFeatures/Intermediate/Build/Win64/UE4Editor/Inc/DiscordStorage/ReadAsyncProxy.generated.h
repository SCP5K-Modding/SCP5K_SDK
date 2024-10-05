// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDiscordResult : uint8;
class UDiscordStorageManager;
class UReadAsyncProxy;
#ifdef DISCORDSTORAGE_ReadAsyncProxy_generated_h
#error "ReadAsyncProxy.generated.h already included, missing '#pragma once' in ReadAsyncProxy.h"
#endif
#define DISCORDSTORAGE_ReadAsyncProxy_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_ReadAsyncProxy_h_13_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_ReadAsyncProxy_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnResult); \
	DECLARE_FUNCTION(execReadAsync);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_ReadAsyncProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnResult); \
	DECLARE_FUNCTION(execReadAsync);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_ReadAsyncProxy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReadAsyncProxy(); \
	friend struct Z_Construct_UClass_UReadAsyncProxy_Statics; \
public: \
	DECLARE_CLASS(UReadAsyncProxy, UBaseStorageAsyncProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordStorage"), NO_API) \
	DECLARE_SERIALIZER(UReadAsyncProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_ReadAsyncProxy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUReadAsyncProxy(); \
	friend struct Z_Construct_UClass_UReadAsyncProxy_Statics; \
public: \
	DECLARE_CLASS(UReadAsyncProxy, UBaseStorageAsyncProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordStorage"), NO_API) \
	DECLARE_SERIALIZER(UReadAsyncProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_ReadAsyncProxy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadAsyncProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadAsyncProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadAsyncProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadAsyncProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadAsyncProxy(UReadAsyncProxy&&); \
	NO_API UReadAsyncProxy(const UReadAsyncProxy&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_ReadAsyncProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadAsyncProxy(UReadAsyncProxy&&); \
	NO_API UReadAsyncProxy(const UReadAsyncProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadAsyncProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadAsyncProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReadAsyncProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_ReadAsyncProxy_h_13_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_ReadAsyncProxy_h_11_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_ReadAsyncProxy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_ReadAsyncProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_ReadAsyncProxy_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_ReadAsyncProxy_h_13_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_ReadAsyncProxy_h_13_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_ReadAsyncProxy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_ReadAsyncProxy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_ReadAsyncProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_ReadAsyncProxy_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_ReadAsyncProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_ReadAsyncProxy_h_13_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_ReadAsyncProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDSTORAGE_API UClass* StaticClass<class UReadAsyncProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordStorage_Public_ReadAsyncProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
