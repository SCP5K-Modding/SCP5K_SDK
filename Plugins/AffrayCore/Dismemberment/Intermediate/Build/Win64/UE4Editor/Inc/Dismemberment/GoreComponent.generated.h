// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class UObject;
class AActor;
class AController;
class UPrimitiveComponent;
class UDamageType;
#ifdef DISMEMBERMENT_GoreComponent_generated_h
#error "GoreComponent.generated.h already included, missing '#pragma once' in GoreComponent.h"
#endif
#define DISMEMBERMENT_GoreComponent_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_GoreComponent_h_24_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_GoreComponent_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddGoreEllipse); \
	DECLARE_FUNCTION(execAddGorePoint); \
	DECLARE_FUNCTION(execAssetLoaded); \
	DECLARE_FUNCTION(execDeinitialize); \
	DECLARE_FUNCTION(execGetMaxEllipsoids); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execOnRep_LastHit); \
	DECLARE_FUNCTION(execOnTakePointDamage); \
	DECLARE_FUNCTION(execTryAddGoreMesh); \
	DECLARE_FUNCTION(execUpdateGoreEllipse); \
	DECLARE_FUNCTION(execUpdateGorePoint); \
	DECLARE_FUNCTION(execUpdateGorePointAlpha); \
	DECLARE_FUNCTION(execUpdateGorePointSize); \
	DECLARE_FUNCTION(execUpdateMaxIndex); \
	DECLARE_FUNCTION(execUpdateTexture);


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_GoreComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddGoreEllipse); \
	DECLARE_FUNCTION(execAddGorePoint); \
	DECLARE_FUNCTION(execAssetLoaded); \
	DECLARE_FUNCTION(execDeinitialize); \
	DECLARE_FUNCTION(execGetMaxEllipsoids); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execOnRep_LastHit); \
	DECLARE_FUNCTION(execOnTakePointDamage); \
	DECLARE_FUNCTION(execTryAddGoreMesh); \
	DECLARE_FUNCTION(execUpdateGoreEllipse); \
	DECLARE_FUNCTION(execUpdateGorePoint); \
	DECLARE_FUNCTION(execUpdateGorePointAlpha); \
	DECLARE_FUNCTION(execUpdateGorePointSize); \
	DECLARE_FUNCTION(execUpdateMaxIndex); \
	DECLARE_FUNCTION(execUpdateTexture);


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_GoreComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGoreComponent(); \
	friend struct Z_Construct_UClass_UGoreComponent_Statics; \
public: \
	DECLARE_CLASS(UGoreComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dismemberment"), NO_API) \
	DECLARE_SERIALIZER(UGoreComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LastHit=NETFIELD_REP_START, \
		NETFIELD_REP_END=LastHit	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_GoreComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUGoreComponent(); \
	friend struct Z_Construct_UClass_UGoreComponent_Statics; \
public: \
	DECLARE_CLASS(UGoreComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dismemberment"), NO_API) \
	DECLARE_SERIALIZER(UGoreComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LastHit=NETFIELD_REP_START, \
		NETFIELD_REP_END=LastHit	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_GoreComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoreComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGoreComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoreComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoreComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGoreComponent(UGoreComponent&&); \
	NO_API UGoreComponent(const UGoreComponent&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_GoreComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGoreComponent(UGoreComponent&&); \
	NO_API UGoreComponent(const UGoreComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoreComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoreComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGoreComponent)


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_GoreComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnAssetLoaded() { return STRUCT_OFFSET(UGoreComponent, OnAssetLoaded); }


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_GoreComponent_h_22_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_GoreComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_GoreComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_GoreComponent_h_24_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_GoreComponent_h_24_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_GoreComponent_h_24_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_GoreComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_GoreComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_GoreComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_GoreComponent_h_24_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_GoreComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_GoreComponent_h_24_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_GoreComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISMEMBERMENT_API UClass* StaticClass<class UGoreComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_GoreComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
