// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDiscordImageHandle;
enum class EDiscordResult : uint8;
struct FDiscordImageDimensions;
class UDiscordCore;
class UDiscordImageManager;
class UTexture2D;
#ifdef DISCORDIMAGE_DiscordImageManager_generated_h
#error "DiscordImageManager.generated.h already included, missing '#pragma once' in DiscordImageManager.h"
#endif
#define DISCORDIMAGE_DiscordImageManager_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_DiscordImageManager_h_15_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_DiscordImageManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetData); \
	DECLARE_FUNCTION(execGetDimensions); \
	DECLARE_FUNCTION(execGetImageManager); \
	DECLARE_FUNCTION(execGetTexture);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_DiscordImageManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetData); \
	DECLARE_FUNCTION(execGetDimensions); \
	DECLARE_FUNCTION(execGetImageManager); \
	DECLARE_FUNCTION(execGetTexture);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_DiscordImageManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDiscordImageManager(); \
	friend struct Z_Construct_UClass_UDiscordImageManager_Statics; \
public: \
	DECLARE_CLASS(UDiscordImageManager, UDiscordManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordImage"), NO_API) \
	DECLARE_SERIALIZER(UDiscordImageManager)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_DiscordImageManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDiscordImageManager(); \
	friend struct Z_Construct_UClass_UDiscordImageManager_Statics; \
public: \
	DECLARE_CLASS(UDiscordImageManager, UDiscordManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordImage"), NO_API) \
	DECLARE_SERIALIZER(UDiscordImageManager)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_DiscordImageManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiscordImageManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiscordImageManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordImageManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordImageManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordImageManager(UDiscordImageManager&&); \
	NO_API UDiscordImageManager(const UDiscordImageManager&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_DiscordImageManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordImageManager(UDiscordImageManager&&); \
	NO_API UDiscordImageManager(const UDiscordImageManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordImageManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordImageManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDiscordImageManager)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_DiscordImageManager_h_15_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_DiscordImageManager_h_13_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_DiscordImageManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_DiscordImageManager_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_DiscordImageManager_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_DiscordImageManager_h_15_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_DiscordImageManager_h_15_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_DiscordImageManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_DiscordImageManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_DiscordImageManager_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_DiscordImageManager_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_DiscordImageManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_DiscordImageManager_h_15_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_DiscordImageManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDIMAGE_API UClass* StaticClass<class UDiscordImageManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordImage_Public_DiscordImageManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
