// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef SURFACEDEFORMATION_SurfaceDeformationCapture_generated_h
#error "SurfaceDeformationCapture.generated.h already included, missing '#pragma once' in SurfaceDeformationCapture.h"
#endif
#define SURFACEDEFORMATION_SurfaceDeformationCapture_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_SurfaceDeformation_Source_SurfaceDeformation_Public_SurfaceDeformationCapture_h_13_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_SurfaceDeformation_Source_SurfaceDeformation_Public_SurfaceDeformationCapture_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddStaticActorsToHiddenArray); \
	DECLARE_FUNCTION(execReposition); \
	DECLARE_FUNCTION(execRunComputeShader);


#define SCP5K_SDK_Plugins_AffrayCore_SurfaceDeformation_Source_SurfaceDeformation_Public_SurfaceDeformationCapture_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddStaticActorsToHiddenArray); \
	DECLARE_FUNCTION(execReposition); \
	DECLARE_FUNCTION(execRunComputeShader);


#define SCP5K_SDK_Plugins_AffrayCore_SurfaceDeformation_Source_SurfaceDeformation_Public_SurfaceDeformationCapture_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASurfaceDeformationCapture(); \
	friend struct Z_Construct_UClass_ASurfaceDeformationCapture_Statics; \
public: \
	DECLARE_CLASS(ASurfaceDeformationCapture, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurfaceDeformation"), NO_API) \
	DECLARE_SERIALIZER(ASurfaceDeformationCapture)


#define SCP5K_SDK_Plugins_AffrayCore_SurfaceDeformation_Source_SurfaceDeformation_Public_SurfaceDeformationCapture_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASurfaceDeformationCapture(); \
	friend struct Z_Construct_UClass_ASurfaceDeformationCapture_Statics; \
public: \
	DECLARE_CLASS(ASurfaceDeformationCapture, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurfaceDeformation"), NO_API) \
	DECLARE_SERIALIZER(ASurfaceDeformationCapture)


#define SCP5K_SDK_Plugins_AffrayCore_SurfaceDeformation_Source_SurfaceDeformation_Public_SurfaceDeformationCapture_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASurfaceDeformationCapture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASurfaceDeformationCapture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurfaceDeformationCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurfaceDeformationCapture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurfaceDeformationCapture(ASurfaceDeformationCapture&&); \
	NO_API ASurfaceDeformationCapture(const ASurfaceDeformationCapture&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_SurfaceDeformation_Source_SurfaceDeformation_Public_SurfaceDeformationCapture_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurfaceDeformationCapture(ASurfaceDeformationCapture&&); \
	NO_API ASurfaceDeformationCapture(const ASurfaceDeformationCapture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurfaceDeformationCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurfaceDeformationCapture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASurfaceDeformationCapture)


#define SCP5K_SDK_Plugins_AffrayCore_SurfaceDeformation_Source_SurfaceDeformation_Public_SurfaceDeformationCapture_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CaptureComponent() { return STRUCT_OFFSET(ASurfaceDeformationCapture, CaptureComponent); } \
	FORCEINLINE static uint32 __PPO__SurfaceCaptureComponent() { return STRUCT_OFFSET(ASurfaceDeformationCapture, SurfaceCaptureComponent); } \
	FORCEINLINE static uint32 __PPO__RenderTexture() { return STRUCT_OFFSET(ASurfaceDeformationCapture, RenderTexture); } \
	FORCEINLINE static uint32 __PPO__CompositeTexture() { return STRUCT_OFFSET(ASurfaceDeformationCapture, CompositeTexture); } \
	FORCEINLINE static uint32 __PPO__SurfaceTexture() { return STRUCT_OFFSET(ASurfaceDeformationCapture, SurfaceTexture); } \
	FORCEINLINE static uint32 __PPO__NormalsTexture() { return STRUCT_OFFSET(ASurfaceDeformationCapture, NormalsTexture); } \
	FORCEINLINE static uint32 __PPO__Blur() { return STRUCT_OFFSET(ASurfaceDeformationCapture, Blur); } \
	FORCEINLINE static uint32 __PPO__SurfaceThickness() { return STRUCT_OFFSET(ASurfaceDeformationCapture, SurfaceThickness); } \
	FORCEINLINE static uint32 __PPO__Accumulation() { return STRUCT_OFFSET(ASurfaceDeformationCapture, Accumulation); } \
	FORCEINLINE static uint32 __PPO__HiddenActors() { return STRUCT_OFFSET(ASurfaceDeformationCapture, HiddenActors); } \
	FORCEINLINE static uint32 __PPO__HiddenActorTag() { return STRUCT_OFFSET(ASurfaceDeformationCapture, HiddenActorTag); } \
	FORCEINLINE static uint32 __PPO__ShowActorTag() { return STRUCT_OFFSET(ASurfaceDeformationCapture, ShowActorTag); } \
	FORCEINLINE static uint32 __PPO__bPopulateHiddenActorsFromStaticOnPlay() { return STRUCT_OFFSET(ASurfaceDeformationCapture, bPopulateHiddenActorsFromStaticOnPlay); }


#define SCP5K_SDK_Plugins_AffrayCore_SurfaceDeformation_Source_SurfaceDeformation_Public_SurfaceDeformationCapture_h_11_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_SurfaceDeformation_Source_SurfaceDeformation_Public_SurfaceDeformationCapture_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_SurfaceDeformation_Source_SurfaceDeformation_Public_SurfaceDeformationCapture_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_SurfaceDeformation_Source_SurfaceDeformation_Public_SurfaceDeformationCapture_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_SurfaceDeformation_Source_SurfaceDeformation_Public_SurfaceDeformationCapture_h_13_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_SurfaceDeformation_Source_SurfaceDeformation_Public_SurfaceDeformationCapture_h_13_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_SurfaceDeformation_Source_SurfaceDeformation_Public_SurfaceDeformationCapture_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_SurfaceDeformation_Source_SurfaceDeformation_Public_SurfaceDeformationCapture_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_SurfaceDeformation_Source_SurfaceDeformation_Public_SurfaceDeformationCapture_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_SurfaceDeformation_Source_SurfaceDeformation_Public_SurfaceDeformationCapture_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_SurfaceDeformation_Source_SurfaceDeformation_Public_SurfaceDeformationCapture_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_SurfaceDeformation_Source_SurfaceDeformation_Public_SurfaceDeformationCapture_h_13_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_SurfaceDeformation_Source_SurfaceDeformation_Public_SurfaceDeformationCapture_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURFACEDEFORMATION_API UClass* StaticClass<class ASurfaceDeformationCapture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_SurfaceDeformation_Source_SurfaceDeformation_Public_SurfaceDeformationCapture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
