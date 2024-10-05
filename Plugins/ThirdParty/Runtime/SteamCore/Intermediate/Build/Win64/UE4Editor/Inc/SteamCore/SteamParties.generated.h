// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPartyBeaconID;
struct FSteamID;
struct FSteamPartyBeaconLocation;
enum class ESteamPartiesBeaconLocationData : uint8;
#ifdef STEAMCORE_SteamParties_generated_h
#error "SteamParties.generated.h already included, missing '#pragma once' in SteamParties.h"
#endif
#define STEAMCORE_SteamParties_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamParties_h_21_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamParties_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCancelReservation); \
	DECLARE_FUNCTION(execChangeNumOpenSlots); \
	DECLARE_FUNCTION(execCreateBeacon); \
	DECLARE_FUNCTION(execDestroyBeacon); \
	DECLARE_FUNCTION(execGetAvailableBeaconLocations); \
	DECLARE_FUNCTION(execGetBeaconByIndex); \
	DECLARE_FUNCTION(execGetBeaconDetails); \
	DECLARE_FUNCTION(execGetBeaconLocationData); \
	DECLARE_FUNCTION(execGetNumActiveBeacons); \
	DECLARE_FUNCTION(execGetNumAvailableBeaconLocations); \
	DECLARE_FUNCTION(execJoinParty); \
	DECLARE_FUNCTION(execOnReservationCompleted);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamParties_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCancelReservation); \
	DECLARE_FUNCTION(execChangeNumOpenSlots); \
	DECLARE_FUNCTION(execCreateBeacon); \
	DECLARE_FUNCTION(execDestroyBeacon); \
	DECLARE_FUNCTION(execGetAvailableBeaconLocations); \
	DECLARE_FUNCTION(execGetBeaconByIndex); \
	DECLARE_FUNCTION(execGetBeaconDetails); \
	DECLARE_FUNCTION(execGetBeaconLocationData); \
	DECLARE_FUNCTION(execGetNumActiveBeacons); \
	DECLARE_FUNCTION(execGetNumAvailableBeaconLocations); \
	DECLARE_FUNCTION(execJoinParty); \
	DECLARE_FUNCTION(execOnReservationCompleted);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamParties_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamParties(); \
	friend struct Z_Construct_UClass_USteamParties_Statics; \
public: \
	DECLARE_CLASS(USteamParties, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamParties)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamParties_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSteamParties(); \
	friend struct Z_Construct_UClass_USteamParties_Statics; \
public: \
	DECLARE_CLASS(USteamParties, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamParties)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamParties_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamParties(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamParties) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamParties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamParties); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamParties(USteamParties&&); \
	NO_API USteamParties(const USteamParties&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamParties_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamParties(USteamParties&&); \
	NO_API USteamParties(const USteamParties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamParties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamParties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamParties)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamParties_h_21_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamParties_h_19_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamParties_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamParties_h_21_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamParties_h_21_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamParties_h_21_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamParties_h_21_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamParties_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamParties_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamParties_h_21_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamParties_h_21_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamParties_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamParties_h_21_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamParties_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamParties>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamParties_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
