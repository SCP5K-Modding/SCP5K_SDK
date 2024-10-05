// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDiscordLobbyTransaction;
struct FDiscordLobbySearchQuery;
enum class EDiscordLobbySearchDistance : uint8;
enum class EDiscordLobbySearchComparison : uint8;
enum class EDiscordLobbySearchCast : uint8;
struct FDiscordLobbyMemberTransaction;
enum class EDiscordLobbyType : uint8;
 
#ifdef DISCORDLOBBY_DiscordLobbyLibrary_generated_h
#error "DiscordLobbyLibrary.generated.h already included, missing '#pragma once' in DiscordLobbyLibrary.h"
#endif
#define DISCORDLOBBY_DiscordLobbyLibrary_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyLibrary_h_15_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteMetadata); \
	DECLARE_FUNCTION(execDistance); \
	DECLARE_FUNCTION(execFilter); \
	DECLARE_FUNCTION(execLimit); \
	DECLARE_FUNCTION(execMember_DeleteMetadata); \
	DECLARE_FUNCTION(execMember_SetMetadata); \
	DECLARE_FUNCTION(execSetCapacity); \
	DECLARE_FUNCTION(execSetLobbyTransactionProperties); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetMetadata); \
	DECLARE_FUNCTION(execSetOwner); \
	DECLARE_FUNCTION(execSetType); \
	DECLARE_FUNCTION(execSort);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteMetadata); \
	DECLARE_FUNCTION(execDistance); \
	DECLARE_FUNCTION(execFilter); \
	DECLARE_FUNCTION(execLimit); \
	DECLARE_FUNCTION(execMember_DeleteMetadata); \
	DECLARE_FUNCTION(execMember_SetMetadata); \
	DECLARE_FUNCTION(execSetCapacity); \
	DECLARE_FUNCTION(execSetLobbyTransactionProperties); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetMetadata); \
	DECLARE_FUNCTION(execSetOwner); \
	DECLARE_FUNCTION(execSetType); \
	DECLARE_FUNCTION(execSort);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDiscordLobbyLibrary(); \
	friend struct Z_Construct_UClass_UDiscordLobbyLibrary_Statics; \
public: \
	DECLARE_CLASS(UDiscordLobbyLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordLobby"), NO_API) \
	DECLARE_SERIALIZER(UDiscordLobbyLibrary)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDiscordLobbyLibrary(); \
	friend struct Z_Construct_UClass_UDiscordLobbyLibrary_Statics; \
public: \
	DECLARE_CLASS(UDiscordLobbyLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordLobby"), NO_API) \
	DECLARE_SERIALIZER(UDiscordLobbyLibrary)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiscordLobbyLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiscordLobbyLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordLobbyLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordLobbyLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordLobbyLibrary(UDiscordLobbyLibrary&&); \
	NO_API UDiscordLobbyLibrary(const UDiscordLobbyLibrary&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordLobbyLibrary(UDiscordLobbyLibrary&&); \
	NO_API UDiscordLobbyLibrary(const UDiscordLobbyLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordLobbyLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordLobbyLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDiscordLobbyLibrary)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyLibrary_h_13_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyLibrary_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyLibrary_h_15_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyLibrary_h_15_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyLibrary_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyLibrary_h_15_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDLOBBY_API UClass* StaticClass<class UDiscordLobbyLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
