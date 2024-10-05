// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
struct FBPUniqueNetId;
struct FBPFriendInfo;
struct FBPOnlineRecentPlayer;
enum class EBlueprintResultSwitch : uint8;
#ifdef ADVANCEDSESSIONS_AdvancedFriendsLibrary_generated_h
#error "AdvancedFriendsLibrary.generated.h already included, missing '#pragma once' in AdvancedFriendsLibrary.h"
#endif
#define ADVANCEDSESSIONS_AdvancedFriendsLibrary_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedFriendsLibrary_h_14_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedFriendsLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFriend); \
	DECLARE_FUNCTION(execGetStoredFriendsList); \
	DECLARE_FUNCTION(execGetStoredRecentPlayersList); \
	DECLARE_FUNCTION(execIsAFriend); \
	DECLARE_FUNCTION(execSendSessionInviteToFriend); \
	DECLARE_FUNCTION(execSendSessionInviteToFriends);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedFriendsLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFriend); \
	DECLARE_FUNCTION(execGetStoredFriendsList); \
	DECLARE_FUNCTION(execGetStoredRecentPlayersList); \
	DECLARE_FUNCTION(execIsAFriend); \
	DECLARE_FUNCTION(execSendSessionInviteToFriend); \
	DECLARE_FUNCTION(execSendSessionInviteToFriends);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedFriendsLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedFriendsLibrary(); \
	friend struct Z_Construct_UClass_UAdvancedFriendsLibrary_Statics; \
public: \
	DECLARE_CLASS(UAdvancedFriendsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedFriendsLibrary)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedFriendsLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAdvancedFriendsLibrary(); \
	friend struct Z_Construct_UClass_UAdvancedFriendsLibrary_Statics; \
public: \
	DECLARE_CLASS(UAdvancedFriendsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedFriendsLibrary)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedFriendsLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedFriendsLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedFriendsLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedFriendsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedFriendsLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedFriendsLibrary(UAdvancedFriendsLibrary&&); \
	NO_API UAdvancedFriendsLibrary(const UAdvancedFriendsLibrary&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedFriendsLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedFriendsLibrary(UAdvancedFriendsLibrary&&); \
	NO_API UAdvancedFriendsLibrary(const UAdvancedFriendsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedFriendsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedFriendsLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAdvancedFriendsLibrary)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedFriendsLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedFriendsLibrary_h_12_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedFriendsLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedFriendsLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedFriendsLibrary_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedFriendsLibrary_h_14_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedFriendsLibrary_h_14_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedFriendsLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedFriendsLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedFriendsLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedFriendsLibrary_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedFriendsLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedFriendsLibrary_h_14_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedFriendsLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSESSIONS_API UClass* StaticClass<class UAdvancedFriendsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedFriendsLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
