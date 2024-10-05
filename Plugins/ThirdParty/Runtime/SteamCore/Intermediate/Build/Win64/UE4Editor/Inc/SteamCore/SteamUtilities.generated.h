// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamInventoryUpdateHandle;
struct FPublishedFileID;
struct FSteamGameID;
struct FSteamID;
struct FSteamTicketHandle;
struct FSteamUGCHandle;
class UObject;
class UServerFilter;
enum class ESteamCoreIdentical : uint8;
struct FDateTime;
enum class ESteamAccountType : uint8;
struct FSteamSessionSetting;
struct FHostPingData;
class APlayerState;
enum class ESteamCoreValid : uint8;
struct FSteamSessionSearchSetting;
enum class ESteamComparisonOp : uint8;
struct FSteamItemInstanceID;
#ifdef STEAMCORE_SteamUtilities_generated_h
#error "SteamUtilities.generated.h already included, missing '#pragma once' in SteamUtilities.h"
#endif
#define STEAMCORE_SteamUtilities_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamUtilities_h_29_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamUtilities_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_BytesToString); \
	DECLARE_FUNCTION(execBP_StringToBytes); \
	DECLARE_FUNCTION(execBreakInventoryUpdateHandle); \
	DECLARE_FUNCTION(execBreakPublishedFileID); \
	DECLARE_FUNCTION(execBreakSteamGameID); \
	DECLARE_FUNCTION(execBreakSteamID); \
	DECLARE_FUNCTION(execBreakTicketHandle); \
	DECLARE_FUNCTION(execBreakUGCHandle); \
	DECLARE_FUNCTION(execCancelQuery); \
	DECLARE_FUNCTION(execConstructServerFilter); \
	DECLARE_FUNCTION(execEncryptString); \
	DECLARE_FUNCTION(execEqual); \
	DECLARE_FUNCTION(execEqual_Exec); \
	DECLARE_FUNCTION(execFromUnixTimestamp); \
	DECLARE_FUNCTION(execGetAccountType); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execGetHostPingData); \
	DECLARE_FUNCTION(execGetInteger); \
	DECLARE_FUNCTION(execGetPingFromHostData); \
	DECLARE_FUNCTION(execGetPublicIp); \
	DECLARE_FUNCTION(execGetSteamIdFromPlayerState); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execIsGameIDValid); \
	DECLARE_FUNCTION(execIsGameIDValid_Exec); \
	DECLARE_FUNCTION(execIsLobby); \
	DECLARE_FUNCTION(execIsPublishedFileIDValid); \
	DECLARE_FUNCTION(execIsPublishedFileIDValid_Exec); \
	DECLARE_FUNCTION(execIsRecalculatingPing); \
	DECLARE_FUNCTION(execIsSteamAvailable); \
	DECLARE_FUNCTION(execIsSteamIDValid_Exec); \
	DECLARE_FUNCTION(execIsSteamInventoryUpdateHandleValid); \
	DECLARE_FUNCTION(execIsSteamInventoryUpdateHandleValid_Exec); \
	DECLARE_FUNCTION(execIsSteamTicketHandleValid); \
	DECLARE_FUNCTION(execIsSteamTicketHandleValid_Exec); \
	DECLARE_FUNCTION(execIsUGCHandleValid); \
	DECLARE_FUNCTION(execIsUGCHandleValid_Exec); \
	DECLARE_FUNCTION(execIsUsingP2PRelays); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execListenForSteamMessages); \
	DECLARE_FUNCTION(execMakeBool); \
	DECLARE_FUNCTION(execMakeInteger); \
	DECLARE_FUNCTION(execMakeInventoryUpdateHandle); \
	DECLARE_FUNCTION(execMakePublishedFileID); \
	DECLARE_FUNCTION(execMakeSearchBool); \
	DECLARE_FUNCTION(execMakeSearchInteger); \
	DECLARE_FUNCTION(execMakeSearchString); \
	DECLARE_FUNCTION(execMakeSteamGameID); \
	DECLARE_FUNCTION(execMakeSteamID); \
	DECLARE_FUNCTION(execMakeString); \
	DECLARE_FUNCTION(execMakeTicketHandle); \
	DECLARE_FUNCTION(execMakeUGCHandle); \
	DECLARE_FUNCTION(execNotEqual); \
	DECLARE_FUNCTION(execPublishedFileID_Equals); \
	DECLARE_FUNCTION(execPublishedFileID_Equals_Exec); \
	DECLARE_FUNCTION(execPublishedFileID_NotEquals); \
	DECLARE_FUNCTION(execReleaseRequest); \
	DECLARE_FUNCTION(execSteamItemInstanceID_Equals); \
	DECLARE_FUNCTION(execSteamItemInstanceID_Equals_Exec);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamUtilities_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_BytesToString); \
	DECLARE_FUNCTION(execBP_StringToBytes); \
	DECLARE_FUNCTION(execBreakInventoryUpdateHandle); \
	DECLARE_FUNCTION(execBreakPublishedFileID); \
	DECLARE_FUNCTION(execBreakSteamGameID); \
	DECLARE_FUNCTION(execBreakSteamID); \
	DECLARE_FUNCTION(execBreakTicketHandle); \
	DECLARE_FUNCTION(execBreakUGCHandle); \
	DECLARE_FUNCTION(execCancelQuery); \
	DECLARE_FUNCTION(execConstructServerFilter); \
	DECLARE_FUNCTION(execEncryptString); \
	DECLARE_FUNCTION(execEqual); \
	DECLARE_FUNCTION(execEqual_Exec); \
	DECLARE_FUNCTION(execFromUnixTimestamp); \
	DECLARE_FUNCTION(execGetAccountType); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execGetHostPingData); \
	DECLARE_FUNCTION(execGetInteger); \
	DECLARE_FUNCTION(execGetPingFromHostData); \
	DECLARE_FUNCTION(execGetPublicIp); \
	DECLARE_FUNCTION(execGetSteamIdFromPlayerState); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execIsGameIDValid); \
	DECLARE_FUNCTION(execIsGameIDValid_Exec); \
	DECLARE_FUNCTION(execIsLobby); \
	DECLARE_FUNCTION(execIsPublishedFileIDValid); \
	DECLARE_FUNCTION(execIsPublishedFileIDValid_Exec); \
	DECLARE_FUNCTION(execIsRecalculatingPing); \
	DECLARE_FUNCTION(execIsSteamAvailable); \
	DECLARE_FUNCTION(execIsSteamIDValid_Exec); \
	DECLARE_FUNCTION(execIsSteamInventoryUpdateHandleValid); \
	DECLARE_FUNCTION(execIsSteamInventoryUpdateHandleValid_Exec); \
	DECLARE_FUNCTION(execIsSteamTicketHandleValid); \
	DECLARE_FUNCTION(execIsSteamTicketHandleValid_Exec); \
	DECLARE_FUNCTION(execIsUGCHandleValid); \
	DECLARE_FUNCTION(execIsUGCHandleValid_Exec); \
	DECLARE_FUNCTION(execIsUsingP2PRelays); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execListenForSteamMessages); \
	DECLARE_FUNCTION(execMakeBool); \
	DECLARE_FUNCTION(execMakeInteger); \
	DECLARE_FUNCTION(execMakeInventoryUpdateHandle); \
	DECLARE_FUNCTION(execMakePublishedFileID); \
	DECLARE_FUNCTION(execMakeSearchBool); \
	DECLARE_FUNCTION(execMakeSearchInteger); \
	DECLARE_FUNCTION(execMakeSearchString); \
	DECLARE_FUNCTION(execMakeSteamGameID); \
	DECLARE_FUNCTION(execMakeSteamID); \
	DECLARE_FUNCTION(execMakeString); \
	DECLARE_FUNCTION(execMakeTicketHandle); \
	DECLARE_FUNCTION(execMakeUGCHandle); \
	DECLARE_FUNCTION(execNotEqual); \
	DECLARE_FUNCTION(execPublishedFileID_Equals); \
	DECLARE_FUNCTION(execPublishedFileID_Equals_Exec); \
	DECLARE_FUNCTION(execPublishedFileID_NotEquals); \
	DECLARE_FUNCTION(execReleaseRequest); \
	DECLARE_FUNCTION(execSteamItemInstanceID_Equals); \
	DECLARE_FUNCTION(execSteamItemInstanceID_Equals_Exec);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamUtilities_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamUtilities(); \
	friend struct Z_Construct_UClass_USteamUtilities_Statics; \
public: \
	DECLARE_CLASS(USteamUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamUtilities)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamUtilities_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUSteamUtilities(); \
	friend struct Z_Construct_UClass_USteamUtilities_Statics; \
public: \
	DECLARE_CLASS(USteamUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamUtilities)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamUtilities_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamUtilities(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamUtilities(USteamUtilities&&); \
	NO_API USteamUtilities(const USteamUtilities&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamUtilities_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamUtilities(USteamUtilities&&); \
	NO_API USteamUtilities(const USteamUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamUtilities); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USteamUtilities)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamUtilities_h_29_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamUtilities_h_27_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamUtilities_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamUtilities_h_29_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamUtilities_h_29_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamUtilities_h_29_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamUtilities_h_29_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamUtilities_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamUtilities_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamUtilities_h_29_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamUtilities_h_29_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamUtilities_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamUtilities_h_29_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamUtilities_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
