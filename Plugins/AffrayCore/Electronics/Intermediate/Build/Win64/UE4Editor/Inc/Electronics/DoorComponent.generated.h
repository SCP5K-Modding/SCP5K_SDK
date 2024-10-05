// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ELECTRONICS_DoorComponent_generated_h
#error "DoorComponent.generated.h already included, missing '#pragma once' in DoorComponent.h"
#endif
#define ELECTRONICS_DoorComponent_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorComponent_h_10_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorComponent_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddInfluencingActor); \
	DECLARE_FUNCTION(execRemoveInfluencingActor);


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddInfluencingActor); \
	DECLARE_FUNCTION(execRemoveInfluencingActor);


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDoorComponent(); \
	friend struct Z_Construct_UClass_UDoorComponent_Statics; \
public: \
	DECLARE_CLASS(UDoorComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Electronics"), NO_API) \
	DECLARE_SERIALIZER(UDoorComponent)


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUDoorComponent(); \
	friend struct Z_Construct_UClass_UDoorComponent_Statics; \
public: \
	DECLARE_CLASS(UDoorComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Electronics"), NO_API) \
	DECLARE_SERIALIZER(UDoorComponent)


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDoorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorComponent(UDoorComponent&&); \
	NO_API UDoorComponent(const UDoorComponent&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorComponent(UDoorComponent&&); \
	NO_API UDoorComponent(const UDoorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoorComponent)


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Velocity() { return STRUCT_OFFSET(UDoorComponent, Velocity); } \
	FORCEINLINE static uint32 __PPO__position() { return STRUCT_OFFSET(UDoorComponent, position); } \
	FORCEINLINE static uint32 __PPO__Friction() { return STRUCT_OFFSET(UDoorComponent, Friction); } \
	FORCEINLINE static uint32 __PPO__MinPosition() { return STRUCT_OFFSET(UDoorComponent, MinPosition); } \
	FORCEINLINE static uint32 __PPO__MaxPosition() { return STRUCT_OFFSET(UDoorComponent, MaxPosition); } \
	FORCEINLINE static uint32 __PPO__bLatched() { return STRUCT_OFFSET(UDoorComponent, bLatched); } \
	FORCEINLINE static uint32 __PPO__InfluencingActors() { return STRUCT_OFFSET(UDoorComponent, InfluencingActors); }


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorComponent_h_8_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorComponent_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorComponent_h_10_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorComponent_h_10_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorComponent_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorComponent_h_10_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELECTRONICS_API UClass* StaticClass<class UDoorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
