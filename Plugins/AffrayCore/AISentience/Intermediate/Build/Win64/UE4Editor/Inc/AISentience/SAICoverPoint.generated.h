// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AISENTIENCE_SAICoverPoint_generated_h
#error "SAICoverPoint.generated.h already included, missing '#pragma once' in SAICoverPoint.h"
#endif
#define AISENTIENCE_SAICoverPoint_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAICoverPoint_h_11_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAICoverPoint_h_11_RPC_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAICoverPoint_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAICoverPoint_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASAICoverPoint(); \
	friend struct Z_Construct_UClass_ASAICoverPoint_Statics; \
public: \
	DECLARE_CLASS(ASAICoverPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(ASAICoverPoint)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAICoverPoint_h_11_INCLASS \
private: \
	static void StaticRegisterNativesASAICoverPoint(); \
	friend struct Z_Construct_UClass_ASAICoverPoint_Statics; \
public: \
	DECLARE_CLASS(ASAICoverPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(ASAICoverPoint)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAICoverPoint_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASAICoverPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAICoverPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAICoverPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAICoverPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASAICoverPoint(ASAICoverPoint&&); \
	NO_API ASAICoverPoint(const ASAICoverPoint&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAICoverPoint_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASAICoverPoint(ASAICoverPoint&&); \
	NO_API ASAICoverPoint(const ASAICoverPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAICoverPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAICoverPoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAICoverPoint)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAICoverPoint_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsHighCover() { return STRUCT_OFFSET(ASAICoverPoint, bIsHighCover); } \
	FORCEINLINE static uint32 __PPO__bInUse() { return STRUCT_OFFSET(ASAICoverPoint, bInUse); } \
	FORCEINLINE static uint32 __PPO__PawnUsingCover() { return STRUCT_OFFSET(ASAICoverPoint, PawnUsingCover); } \
	FORCEINLINE static uint32 __PPO__CoverDetection() { return STRUCT_OFFSET(ASAICoverPoint, CoverDetection); }


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAICoverPoint_h_9_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAICoverPoint_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAICoverPoint_h_11_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAICoverPoint_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAICoverPoint_h_11_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAICoverPoint_h_11_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAICoverPoint_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAICoverPoint_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAICoverPoint_h_11_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAICoverPoint_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAICoverPoint_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAICoverPoint_h_11_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAICoverPoint_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AISENTIENCE_API UClass* StaticClass<class ASAICoverPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAICoverPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
