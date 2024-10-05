// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSessionPropertyKeyPair;
class UObject;
class APlayerController;
struct FBPUniqueNetId;
enum class EBlueprintResultSwitch : uint8;
struct FBlueprintSessionResult;
enum class ESessionSettingSearchResult : uint8;
enum class EBPOnlineSessionState : uint8;
class APlayerState;
enum class EOnlineComparisonOpRedux : uint8;
struct FSessionsSearchSetting;
#ifdef ADVANCEDSESSIONS_AdvancedSessionsLibrary_generated_h
#error "AdvancedSessionsLibrary.generated.h already included, missing '#pragma once' in AdvancedSessionsLibrary.h"
#endif
#define ADVANCEDSESSIONS_AdvancedSessionsLibrary_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedSessionsLibrary_h_20_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedSessionsLibrary_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddOrModifyExtraSettings); \
	DECLARE_FUNCTION(execBanPlayer); \
	DECLARE_FUNCTION(execEqualEqual_UNetIDUnetID); \
	DECLARE_FUNCTION(execFindSessionPropertyByName); \
	DECLARE_FUNCTION(execFindSessionPropertyIndexByName); \
	DECLARE_FUNCTION(execGetCurrentSessionID_AsString); \
	DECLARE_FUNCTION(execGetCurrentUniqueBuildID); \
	DECLARE_FUNCTION(execGetExtraSettings); \
	DECLARE_FUNCTION(execGetNetPlayerIndex); \
	DECLARE_FUNCTION(execGetNumberOfNetworkPlayers); \
	DECLARE_FUNCTION(execGetPlayerName); \
	DECLARE_FUNCTION(execGetSessionID_AsString); \
	DECLARE_FUNCTION(execGetSessionPropertyBool); \
	DECLARE_FUNCTION(execGetSessionPropertyByte); \
	DECLARE_FUNCTION(execGetSessionPropertyFloat); \
	DECLARE_FUNCTION(execGetSessionPropertyInt); \
	DECLARE_FUNCTION(execGetSessionPropertyKey); \
	DECLARE_FUNCTION(execGetSessionPropertyString); \
	DECLARE_FUNCTION(execGetSessionSettings); \
	DECLARE_FUNCTION(execGetSessionState); \
	DECLARE_FUNCTION(execGetUniqueBuildID); \
	DECLARE_FUNCTION(execGetUniqueNetID); \
	DECLARE_FUNCTION(execGetUniqueNetIDFromPlayerState); \
	DECLARE_FUNCTION(execHasOnlineSubsystem); \
	DECLARE_FUNCTION(execIsPlayerInSession); \
	DECLARE_FUNCTION(execIsValidSession); \
	DECLARE_FUNCTION(execIsValidUniqueNetID); \
	DECLARE_FUNCTION(execKickPlayer); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyBool); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyByte); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyFloat); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyInt); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyString); \
	DECLARE_FUNCTION(execMakeLiteralSessionSearchProperty); \
	DECLARE_FUNCTION(execSetPlayerName); \
	DECLARE_FUNCTION(execUniqueNetIdToString);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedSessionsLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddOrModifyExtraSettings); \
	DECLARE_FUNCTION(execBanPlayer); \
	DECLARE_FUNCTION(execEqualEqual_UNetIDUnetID); \
	DECLARE_FUNCTION(execFindSessionPropertyByName); \
	DECLARE_FUNCTION(execFindSessionPropertyIndexByName); \
	DECLARE_FUNCTION(execGetCurrentSessionID_AsString); \
	DECLARE_FUNCTION(execGetCurrentUniqueBuildID); \
	DECLARE_FUNCTION(execGetExtraSettings); \
	DECLARE_FUNCTION(execGetNetPlayerIndex); \
	DECLARE_FUNCTION(execGetNumberOfNetworkPlayers); \
	DECLARE_FUNCTION(execGetPlayerName); \
	DECLARE_FUNCTION(execGetSessionID_AsString); \
	DECLARE_FUNCTION(execGetSessionPropertyBool); \
	DECLARE_FUNCTION(execGetSessionPropertyByte); \
	DECLARE_FUNCTION(execGetSessionPropertyFloat); \
	DECLARE_FUNCTION(execGetSessionPropertyInt); \
	DECLARE_FUNCTION(execGetSessionPropertyKey); \
	DECLARE_FUNCTION(execGetSessionPropertyString); \
	DECLARE_FUNCTION(execGetSessionSettings); \
	DECLARE_FUNCTION(execGetSessionState); \
	DECLARE_FUNCTION(execGetUniqueBuildID); \
	DECLARE_FUNCTION(execGetUniqueNetID); \
	DECLARE_FUNCTION(execGetUniqueNetIDFromPlayerState); \
	DECLARE_FUNCTION(execHasOnlineSubsystem); \
	DECLARE_FUNCTION(execIsPlayerInSession); \
	DECLARE_FUNCTION(execIsValidSession); \
	DECLARE_FUNCTION(execIsValidUniqueNetID); \
	DECLARE_FUNCTION(execKickPlayer); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyBool); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyByte); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyFloat); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyInt); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyString); \
	DECLARE_FUNCTION(execMakeLiteralSessionSearchProperty); \
	DECLARE_FUNCTION(execSetPlayerName); \
	DECLARE_FUNCTION(execUniqueNetIdToString);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedSessionsLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedSessionsLibrary(); \
	friend struct Z_Construct_UClass_UAdvancedSessionsLibrary_Statics; \
public: \
	DECLARE_CLASS(UAdvancedSessionsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedSessionsLibrary)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedSessionsLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAdvancedSessionsLibrary(); \
	friend struct Z_Construct_UClass_UAdvancedSessionsLibrary_Statics; \
public: \
	DECLARE_CLASS(UAdvancedSessionsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedSessionsLibrary)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedSessionsLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedSessionsLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedSessionsLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedSessionsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedSessionsLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedSessionsLibrary(UAdvancedSessionsLibrary&&); \
	NO_API UAdvancedSessionsLibrary(const UAdvancedSessionsLibrary&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedSessionsLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedSessionsLibrary(UAdvancedSessionsLibrary&&); \
	NO_API UAdvancedSessionsLibrary(const UAdvancedSessionsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedSessionsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedSessionsLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAdvancedSessionsLibrary)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedSessionsLibrary_h_20_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedSessionsLibrary_h_18_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedSessionsLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedSessionsLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedSessionsLibrary_h_20_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedSessionsLibrary_h_20_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedSessionsLibrary_h_20_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedSessionsLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedSessionsLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedSessionsLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedSessionsLibrary_h_20_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedSessionsLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedSessionsLibrary_h_20_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedSessionsLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSESSIONS_API UClass* StaticClass<class UAdvancedSessionsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedSessionsLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
