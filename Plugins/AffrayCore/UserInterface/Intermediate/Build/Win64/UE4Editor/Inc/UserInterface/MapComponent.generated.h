// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
struct FVector;
class UTexture;
struct FVector2D;
#ifdef USERINTERFACE_MapComponent_generated_h
#error "MapComponent.generated.h already included, missing '#pragma once' in MapComponent.h"
#endif
#define USERINTERFACE_MapComponent_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MapComponent_h_15_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MapComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMap); \
	DECLARE_FUNCTION(execGetMapName); \
	DECLARE_FUNCTION(execGetMaxCorner); \
	DECLARE_FUNCTION(execGetMaxReference); \
	DECLARE_FUNCTION(execGetMinCorner); \
	DECLARE_FUNCTION(execGetMinReference); \
	DECLARE_FUNCTION(execGetOverlayTexture); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetUV); \
	DECLARE_FUNCTION(execGetUVAxisAligned);


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MapComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMap); \
	DECLARE_FUNCTION(execGetMapName); \
	DECLARE_FUNCTION(execGetMaxCorner); \
	DECLARE_FUNCTION(execGetMaxReference); \
	DECLARE_FUNCTION(execGetMinCorner); \
	DECLARE_FUNCTION(execGetMinReference); \
	DECLARE_FUNCTION(execGetOverlayTexture); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetUV); \
	DECLARE_FUNCTION(execGetUVAxisAligned);


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MapComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapComponent(); \
	friend struct Z_Construct_UClass_UMapComponent_Statics; \
public: \
	DECLARE_CLASS(UMapComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UserInterface"), NO_API) \
	DECLARE_SERIALIZER(UMapComponent)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MapComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMapComponent(); \
	friend struct Z_Construct_UClass_UMapComponent_Statics; \
public: \
	DECLARE_CLASS(UMapComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UserInterface"), NO_API) \
	DECLARE_SERIALIZER(UMapComponent)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MapComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapComponent(UMapComponent&&); \
	NO_API UMapComponent(const UMapComponent&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MapComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapComponent(UMapComponent&&); \
	NO_API UMapComponent(const UMapComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapComponent)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MapComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MapName() { return STRUCT_OFFSET(UMapComponent, MapName); } \
	FORCEINLINE static uint32 __PPO__MinCorner() { return STRUCT_OFFSET(UMapComponent, MinCorner); } \
	FORCEINLINE static uint32 __PPO__MaxCorner() { return STRUCT_OFFSET(UMapComponent, MaxCorner); } \
	FORCEINLINE static uint32 __PPO__WorldMinCorner() { return STRUCT_OFFSET(UMapComponent, WorldMinCorner); } \
	FORCEINLINE static uint32 __PPO__WorldMaxCorner() { return STRUCT_OFFSET(UMapComponent, WorldMaxCorner); } \
	FORCEINLINE static uint32 __PPO__TestActor() { return STRUCT_OFFSET(UMapComponent, TestActor); } \
	FORCEINLINE static uint32 __PPO__Map() { return STRUCT_OFFSET(UMapComponent, Map); } \
	FORCEINLINE static uint32 __PPO__DefaultIcon() { return STRUCT_OFFSET(UMapComponent, DefaultIcon); } \
	FORCEINLINE static uint32 __PPO__OverlayTexture() { return STRUCT_OFFSET(UMapComponent, OverlayTexture); }


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MapComponent_h_13_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MapComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MapComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MapComponent_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MapComponent_h_15_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MapComponent_h_15_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MapComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MapComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MapComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MapComponent_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MapComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MapComponent_h_15_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MapComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> USERINTERFACE_API UClass* StaticClass<class UMapComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MapComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
