// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUint64;
enum class EDiscordCoreCreationFlags : uint8;
class UDiscordCore;
#ifdef DISCORDCORE_DiscordCore_generated_h
#error "DiscordCore.generated.h already included, missing '#pragma once' in DiscordCore.h"
#endif
#define DISCORDCORE_DiscordCore_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordCore_h_15_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordCore_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBlueprint_GetApplicationId); \
	DECLARE_FUNCTION(execCreateDiscordCore); \
	DECLARE_FUNCTION(execGetTimeSinceEpoch); \
	DECLARE_FUNCTION(execSetLogHook); \
	DECLARE_FUNCTION(execStringToUint64); \
	DECLARE_FUNCTION(execUint64ToString);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordCore_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBlueprint_GetApplicationId); \
	DECLARE_FUNCTION(execCreateDiscordCore); \
	DECLARE_FUNCTION(execGetTimeSinceEpoch); \
	DECLARE_FUNCTION(execSetLogHook); \
	DECLARE_FUNCTION(execStringToUint64); \
	DECLARE_FUNCTION(execUint64ToString);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordCore_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDiscordCore(); \
	friend struct Z_Construct_UClass_UDiscordCore_Statics; \
public: \
	DECLARE_CLASS(UDiscordCore, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordCore"), NO_API) \
	DECLARE_SERIALIZER(UDiscordCore)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordCore_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDiscordCore(); \
	friend struct Z_Construct_UClass_UDiscordCore_Statics; \
public: \
	DECLARE_CLASS(UDiscordCore, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordCore"), NO_API) \
	DECLARE_SERIALIZER(UDiscordCore)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordCore_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiscordCore(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiscordCore) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordCore); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordCore(UDiscordCore&&); \
	NO_API UDiscordCore(const UDiscordCore&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordCore_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordCore(UDiscordCore&&); \
	NO_API UDiscordCore(const UDiscordCore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordCore); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDiscordCore)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordCore_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NetworkManager() { return STRUCT_OFFSET(UDiscordCore, NetworkManager); } \
	FORCEINLINE static uint32 __PPO__AchievementManager() { return STRUCT_OFFSET(UDiscordCore, AchievementManager); } \
	FORCEINLINE static uint32 __PPO__ActivityManager() { return STRUCT_OFFSET(UDiscordCore, ActivityManager); } \
	FORCEINLINE static uint32 __PPO__ApplicationManager() { return STRUCT_OFFSET(UDiscordCore, ApplicationManager); } \
	FORCEINLINE static uint32 __PPO__VoiceManager() { return STRUCT_OFFSET(UDiscordCore, VoiceManager); } \
	FORCEINLINE static uint32 __PPO__ImageManager() { return STRUCT_OFFSET(UDiscordCore, ImageManager); } \
	FORCEINLINE static uint32 __PPO__LobbyManager() { return STRUCT_OFFSET(UDiscordCore, LobbyManager); } \
	FORCEINLINE static uint32 __PPO__OverlayManager() { return STRUCT_OFFSET(UDiscordCore, OverlayManager); } \
	FORCEINLINE static uint32 __PPO__RelationshipManager() { return STRUCT_OFFSET(UDiscordCore, RelationshipManager); } \
	FORCEINLINE static uint32 __PPO__StorageManager() { return STRUCT_OFFSET(UDiscordCore, StorageManager); } \
	FORCEINLINE static uint32 __PPO__StoreManager() { return STRUCT_OFFSET(UDiscordCore, StoreManager); } \
	FORCEINLINE static uint32 __PPO__UserManager() { return STRUCT_OFFSET(UDiscordCore, UserManager); }


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordCore_h_13_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordCore_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordCore_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordCore_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordCore_h_15_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordCore_h_15_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordCore_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordCore_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordCore_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordCore_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordCore_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordCore_h_15_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordCore_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDCORE_API UClass* StaticClass<class UDiscordCore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordCore_Public_DiscordCore_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
