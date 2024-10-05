// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDiscordImageManager;
struct FDiscordImageHandle;
class UImageFetchProxy;
enum class EDiscordResult : uint8;
#ifdef DISCORDIMAGE_ImageFetchProxy_generated_h
#error "ImageFetchProxy.generated.h already included, missing '#pragma once' in ImageFetchProxy.h"
#endif
#define DISCORDIMAGE_ImageFetchProxy_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_ImageFetchProxy_h_14_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_ImageFetchProxy_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFetch); \
	DECLARE_FUNCTION(execOnResultInternal);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_ImageFetchProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFetch); \
	DECLARE_FUNCTION(execOnResultInternal);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_ImageFetchProxy_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImageFetchProxy(); \
	friend struct Z_Construct_UClass_UImageFetchProxy_Statics; \
public: \
	DECLARE_CLASS(UImageFetchProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordImage"), NO_API) \
	DECLARE_SERIALIZER(UImageFetchProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_ImageFetchProxy_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUImageFetchProxy(); \
	friend struct Z_Construct_UClass_UImageFetchProxy_Statics; \
public: \
	DECLARE_CLASS(UImageFetchProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordImage"), NO_API) \
	DECLARE_SERIALIZER(UImageFetchProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_ImageFetchProxy_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImageFetchProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageFetchProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageFetchProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageFetchProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageFetchProxy(UImageFetchProxy&&); \
	NO_API UImageFetchProxy(const UImageFetchProxy&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_ImageFetchProxy_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageFetchProxy(UImageFetchProxy&&); \
	NO_API UImageFetchProxy(const UImageFetchProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageFetchProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageFetchProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UImageFetchProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_ImageFetchProxy_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Manager() { return STRUCT_OFFSET(UImageFetchProxy, Manager); }


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_ImageFetchProxy_h_12_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_ImageFetchProxy_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_ImageFetchProxy_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_ImageFetchProxy_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_ImageFetchProxy_h_14_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_ImageFetchProxy_h_14_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_ImageFetchProxy_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_ImageFetchProxy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_ImageFetchProxy_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_ImageFetchProxy_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_ImageFetchProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_ImageFetchProxy_h_14_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_ImageFetchProxy_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDIMAGE_API UClass* StaticClass<class UImageFetchProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_ImageFetchProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
