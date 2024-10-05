// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPUniqueNetId;
enum class EBPTextFilteringContext : uint8;
enum class EBlueprintAsyncResultSwitch : uint8;
enum class SteamAvatarSize : uint8;
class UTexture2D;
enum class EBlueprintResultSwitch : uint8;
struct FBPSteamGroupInfo;
enum class ESteamUserOverlayType : uint8;
#ifdef ADVANCEDSTEAMSESSIONS_AdvancedSteamFriendsLibrary_generated_h
#error "AdvancedSteamFriendsLibrary.generated.h already included, missing '#pragma once' in AdvancedSteamFriendsLibrary.h"
#endif
#define ADVANCEDSTEAMSESSIONS_AdvancedSteamFriendsLibrary_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_AdvancedSteamFriendsLibrary_h_17_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_AdvancedSteamFriendsLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateSteamIDFromString); \
	DECLARE_FUNCTION(execFilterText); \
	DECLARE_FUNCTION(execGetFriendSteamLevel); \
	DECLARE_FUNCTION(execGetLocalSteamIDFromSteam); \
	DECLARE_FUNCTION(execGetSteamFriendAvatar); \
	DECLARE_FUNCTION(execGetSteamFriendGamePlayed); \
	DECLARE_FUNCTION(execGetSteamGroups); \
	DECLARE_FUNCTION(execGetSteamPersonaName); \
	DECLARE_FUNCTION(execInitTextFiltering); \
	DECLARE_FUNCTION(execIsOverlayEnabled); \
	DECLARE_FUNCTION(execIsSteamInBigPictureMode); \
	DECLARE_FUNCTION(execOpenSteamUserOverlay); \
	DECLARE_FUNCTION(execRequestSteamFriendInfo);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_AdvancedSteamFriendsLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateSteamIDFromString); \
	DECLARE_FUNCTION(execFilterText); \
	DECLARE_FUNCTION(execGetFriendSteamLevel); \
	DECLARE_FUNCTION(execGetLocalSteamIDFromSteam); \
	DECLARE_FUNCTION(execGetSteamFriendAvatar); \
	DECLARE_FUNCTION(execGetSteamFriendGamePlayed); \
	DECLARE_FUNCTION(execGetSteamGroups); \
	DECLARE_FUNCTION(execGetSteamPersonaName); \
	DECLARE_FUNCTION(execInitTextFiltering); \
	DECLARE_FUNCTION(execIsOverlayEnabled); \
	DECLARE_FUNCTION(execIsSteamInBigPictureMode); \
	DECLARE_FUNCTION(execOpenSteamUserOverlay); \
	DECLARE_FUNCTION(execRequestSteamFriendInfo);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_AdvancedSteamFriendsLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedSteamFriendsLibrary(); \
	friend struct Z_Construct_UClass_UAdvancedSteamFriendsLibrary_Statics; \
public: \
	DECLARE_CLASS(UAdvancedSteamFriendsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSteamSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedSteamFriendsLibrary)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_AdvancedSteamFriendsLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAdvancedSteamFriendsLibrary(); \
	friend struct Z_Construct_UClass_UAdvancedSteamFriendsLibrary_Statics; \
public: \
	DECLARE_CLASS(UAdvancedSteamFriendsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSteamSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedSteamFriendsLibrary)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_AdvancedSteamFriendsLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedSteamFriendsLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedSteamFriendsLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedSteamFriendsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedSteamFriendsLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedSteamFriendsLibrary(UAdvancedSteamFriendsLibrary&&); \
	NO_API UAdvancedSteamFriendsLibrary(const UAdvancedSteamFriendsLibrary&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_AdvancedSteamFriendsLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedSteamFriendsLibrary(UAdvancedSteamFriendsLibrary&&); \
	NO_API UAdvancedSteamFriendsLibrary(const UAdvancedSteamFriendsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedSteamFriendsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedSteamFriendsLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAdvancedSteamFriendsLibrary)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_AdvancedSteamFriendsLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_AdvancedSteamFriendsLibrary_h_15_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_AdvancedSteamFriendsLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_AdvancedSteamFriendsLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_AdvancedSteamFriendsLibrary_h_17_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_AdvancedSteamFriendsLibrary_h_17_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_AdvancedSteamFriendsLibrary_h_17_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_AdvancedSteamFriendsLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_AdvancedSteamFriendsLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_AdvancedSteamFriendsLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_AdvancedSteamFriendsLibrary_h_17_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_AdvancedSteamFriendsLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_AdvancedSteamFriendsLibrary_h_17_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_AdvancedSteamFriendsLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSTEAMSESSIONS_API UClass* StaticClass<class UAdvancedSteamFriendsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSteamSessions_Source_AdvancedSteamSessions_Public_AdvancedSteamFriendsLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
