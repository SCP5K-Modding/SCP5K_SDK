// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
enum class EInputType : uint8;
class UActivatableWidget;
struct FGameplayTag;
#ifdef USERINTERFACE_UIInputLibrary_generated_h
#error "UIInputLibrary.generated.h already included, missing '#pragma once' in UIInputLibrary.h"
#endif
#define USERINTERFACE_UIInputLibrary_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIInputLibrary_h_14_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIInputLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFirstWidget); \
	DECLARE_FUNCTION(execGetOwningPlayerInputType); \
	DECLARE_FUNCTION(execIsPlayerUsingGamepad); \
	DECLARE_FUNCTION(execPopContentFromLayer); \
	DECLARE_FUNCTION(execPushContentToLayer); \
	DECLARE_FUNCTION(execPushStreamedContentToLayer);


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIInputLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFirstWidget); \
	DECLARE_FUNCTION(execGetOwningPlayerInputType); \
	DECLARE_FUNCTION(execIsPlayerUsingGamepad); \
	DECLARE_FUNCTION(execPopContentFromLayer); \
	DECLARE_FUNCTION(execPushContentToLayer); \
	DECLARE_FUNCTION(execPushStreamedContentToLayer);


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIInputLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIInputLibrary(); \
	friend struct Z_Construct_UClass_UUIInputLibrary_Statics; \
public: \
	DECLARE_CLASS(UUIInputLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserInterface"), NO_API) \
	DECLARE_SERIALIZER(UUIInputLibrary)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIInputLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUUIInputLibrary(); \
	friend struct Z_Construct_UClass_UUIInputLibrary_Statics; \
public: \
	DECLARE_CLASS(UUIInputLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserInterface"), NO_API) \
	DECLARE_SERIALIZER(UUIInputLibrary)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIInputLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIInputLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIInputLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIInputLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIInputLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIInputLibrary(UUIInputLibrary&&); \
	NO_API UUIInputLibrary(const UUIInputLibrary&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIInputLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIInputLibrary(UUIInputLibrary&&); \
	NO_API UUIInputLibrary(const UUIInputLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIInputLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIInputLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIInputLibrary)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIInputLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIInputLibrary_h_12_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIInputLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIInputLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIInputLibrary_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIInputLibrary_h_14_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIInputLibrary_h_14_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIInputLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIInputLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIInputLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIInputLibrary_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIInputLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIInputLibrary_h_14_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIInputLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> USERINTERFACE_API UClass* StaticClass<class UUIInputLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIInputLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
