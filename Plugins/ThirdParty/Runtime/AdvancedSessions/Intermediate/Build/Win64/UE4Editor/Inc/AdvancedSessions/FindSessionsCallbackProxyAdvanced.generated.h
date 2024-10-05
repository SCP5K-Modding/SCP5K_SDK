// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBlueprintSessionResult;
struct FSessionsSearchSetting;
class UObject;
class APlayerController;
enum class EBPServerPresenceSearchType : uint8;
class UFindSessionsCallbackProxyAdvanced;
#ifdef ADVANCEDSESSIONS_FindSessionsCallbackProxyAdvanced_generated_h
#error "FindSessionsCallbackProxyAdvanced.generated.h already included, missing '#pragma once' in FindSessionsCallbackProxyAdvanced.h"
#endif
#define ADVANCEDSESSIONS_FindSessionsCallbackProxyAdvanced_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_FindSessionsCallbackProxyAdvanced_h_16_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_FindSessionsCallbackProxyAdvanced_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFilterSessionResults); \
	DECLARE_FUNCTION(execFindSessionsAdvanced);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_FindSessionsCallbackProxyAdvanced_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFilterSessionResults); \
	DECLARE_FUNCTION(execFindSessionsAdvanced);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_FindSessionsCallbackProxyAdvanced_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFindSessionsCallbackProxyAdvanced(); \
	friend struct Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics; \
public: \
	DECLARE_CLASS(UFindSessionsCallbackProxyAdvanced, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UFindSessionsCallbackProxyAdvanced)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_FindSessionsCallbackProxyAdvanced_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFindSessionsCallbackProxyAdvanced(); \
	friend struct Z_Construct_UClass_UFindSessionsCallbackProxyAdvanced_Statics; \
public: \
	DECLARE_CLASS(UFindSessionsCallbackProxyAdvanced, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UFindSessionsCallbackProxyAdvanced)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_FindSessionsCallbackProxyAdvanced_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFindSessionsCallbackProxyAdvanced(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFindSessionsCallbackProxyAdvanced) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFindSessionsCallbackProxyAdvanced); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFindSessionsCallbackProxyAdvanced); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFindSessionsCallbackProxyAdvanced(UFindSessionsCallbackProxyAdvanced&&); \
	NO_API UFindSessionsCallbackProxyAdvanced(const UFindSessionsCallbackProxyAdvanced&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_FindSessionsCallbackProxyAdvanced_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFindSessionsCallbackProxyAdvanced(UFindSessionsCallbackProxyAdvanced&&); \
	NO_API UFindSessionsCallbackProxyAdvanced(const UFindSessionsCallbackProxyAdvanced&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFindSessionsCallbackProxyAdvanced); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFindSessionsCallbackProxyAdvanced); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFindSessionsCallbackProxyAdvanced)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_FindSessionsCallbackProxyAdvanced_h_16_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_FindSessionsCallbackProxyAdvanced_h_14_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_FindSessionsCallbackProxyAdvanced_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_FindSessionsCallbackProxyAdvanced_h_16_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_FindSessionsCallbackProxyAdvanced_h_16_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_FindSessionsCallbackProxyAdvanced_h_16_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_FindSessionsCallbackProxyAdvanced_h_16_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_FindSessionsCallbackProxyAdvanced_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_FindSessionsCallbackProxyAdvanced_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_FindSessionsCallbackProxyAdvanced_h_16_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_FindSessionsCallbackProxyAdvanced_h_16_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_FindSessionsCallbackProxyAdvanced_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_FindSessionsCallbackProxyAdvanced_h_16_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_FindSessionsCallbackProxyAdvanced_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSESSIONS_API UClass* StaticClass<class UFindSessionsCallbackProxyAdvanced>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_FindSessionsCallbackProxyAdvanced_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
