// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamID;
enum class ESteamBeginAuthSessionResult : uint8;
struct FSteamTicketHandle;
enum class ESteamVoiceResult : uint8;
enum class ESteamUserHasLicenseForAppResult : uint8;
#ifdef STEAMCORE_User_generated_h
#error "User.generated.h already included, missing '#pragma once' in User.h"
#endif
#define STEAMCORE_User_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_User_h_26_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_User_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAdvertiseGame); \
	DECLARE_FUNCTION(execBeginAuthSession); \
	DECLARE_FUNCTION(execBIsBehindNAT); \
	DECLARE_FUNCTION(execBIsPhoneIdentifying); \
	DECLARE_FUNCTION(execBIsPhoneRequiringVerification); \
	DECLARE_FUNCTION(execBIsPhoneVerified); \
	DECLARE_FUNCTION(execBIsTwoFactorEnabled); \
	DECLARE_FUNCTION(execBLoggedOn); \
	DECLARE_FUNCTION(execCancelAuthTicket); \
	DECLARE_FUNCTION(execDecompressVoice); \
	DECLARE_FUNCTION(execEndAuthSession); \
	DECLARE_FUNCTION(execGetAuthSessionTicket); \
	DECLARE_FUNCTION(execGetAvailableVoice); \
	DECLARE_FUNCTION(execGetEncryptedAppTicket); \
	DECLARE_FUNCTION(execGetGameBadgeLevel); \
	DECLARE_FUNCTION(execGetPlayerSteamLevel); \
	DECLARE_FUNCTION(execGetSteamID); \
	DECLARE_FUNCTION(execGetSteamID_Pure); \
	DECLARE_FUNCTION(execGetVoice); \
	DECLARE_FUNCTION(execGetVoiceOptimalSampleRate); \
	DECLARE_FUNCTION(execRequestEncryptedAppTicket); \
	DECLARE_FUNCTION(execRequestStoreAuthURL); \
	DECLARE_FUNCTION(execStartVoiceRecording); \
	DECLARE_FUNCTION(execStopVoiceRecording); \
	DECLARE_FUNCTION(execUserHasLicenseForApp);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_User_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdvertiseGame); \
	DECLARE_FUNCTION(execBeginAuthSession); \
	DECLARE_FUNCTION(execBIsBehindNAT); \
	DECLARE_FUNCTION(execBIsPhoneIdentifying); \
	DECLARE_FUNCTION(execBIsPhoneRequiringVerification); \
	DECLARE_FUNCTION(execBIsPhoneVerified); \
	DECLARE_FUNCTION(execBIsTwoFactorEnabled); \
	DECLARE_FUNCTION(execBLoggedOn); \
	DECLARE_FUNCTION(execCancelAuthTicket); \
	DECLARE_FUNCTION(execDecompressVoice); \
	DECLARE_FUNCTION(execEndAuthSession); \
	DECLARE_FUNCTION(execGetAuthSessionTicket); \
	DECLARE_FUNCTION(execGetAvailableVoice); \
	DECLARE_FUNCTION(execGetEncryptedAppTicket); \
	DECLARE_FUNCTION(execGetGameBadgeLevel); \
	DECLARE_FUNCTION(execGetPlayerSteamLevel); \
	DECLARE_FUNCTION(execGetSteamID); \
	DECLARE_FUNCTION(execGetSteamID_Pure); \
	DECLARE_FUNCTION(execGetVoice); \
	DECLARE_FUNCTION(execGetVoiceOptimalSampleRate); \
	DECLARE_FUNCTION(execRequestEncryptedAppTicket); \
	DECLARE_FUNCTION(execRequestStoreAuthURL); \
	DECLARE_FUNCTION(execStartVoiceRecording); \
	DECLARE_FUNCTION(execStopVoiceRecording); \
	DECLARE_FUNCTION(execUserHasLicenseForApp);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_User_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUser(); \
	friend struct Z_Construct_UClass_UUser_Statics; \
public: \
	DECLARE_CLASS(UUser, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UUser)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_User_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUUser(); \
	friend struct Z_Construct_UClass_UUser_Statics; \
public: \
	DECLARE_CLASS(UUser, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UUser)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_User_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUser(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUser(UUser&&); \
	NO_API UUser(const UUser&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_User_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUser(UUser&&); \
	NO_API UUser(const UUser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUser)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_User_h_26_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_User_h_24_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_User_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_User_h_26_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_User_h_26_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_User_h_26_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_User_h_26_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_User_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_User_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_User_h_26_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_User_h_26_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_User_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_User_h_26_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_User_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UUser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_User_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
