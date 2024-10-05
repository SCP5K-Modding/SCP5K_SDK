// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
struct FVector;
class UPrimitiveComponent;
class UDamageType;
#ifdef DISMEMBERMENT_DismembermentComponent_generated_h
#error "DismembermentComponent.generated.h already included, missing '#pragma once' in DismembermentComponent.h"
#endif
#define DISMEMBERMENT_DismembermentComponent_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_25_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCosmeticDismember); \
	DECLARE_FUNCTION(execCosmeticDismemberBone); \
	DECLARE_FUNCTION(execDismember); \
	DECLARE_FUNCTION(execGetDismemberedBones); \
	DECLARE_FUNCTION(execIsDismembered); \
	DECLARE_FUNCTION(execOnRep_DismemberedBones); \
	DECLARE_FUNCTION(execOnTakePointDamage); \
	DECLARE_FUNCTION(execSpawnParticle);


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCosmeticDismember); \
	DECLARE_FUNCTION(execCosmeticDismemberBone); \
	DECLARE_FUNCTION(execDismember); \
	DECLARE_FUNCTION(execGetDismemberedBones); \
	DECLARE_FUNCTION(execIsDismembered); \
	DECLARE_FUNCTION(execOnRep_DismemberedBones); \
	DECLARE_FUNCTION(execOnTakePointDamage); \
	DECLARE_FUNCTION(execSpawnParticle);


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDismembermentComponent(); \
	friend struct Z_Construct_UClass_UDismembermentComponent_Statics; \
public: \
	DECLARE_CLASS(UDismembermentComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dismemberment"), NO_API) \
	DECLARE_SERIALIZER(UDismembermentComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DismemberedBones=NETFIELD_REP_START, \
		NETFIELD_REP_END=DismemberedBones	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUDismembermentComponent(); \
	friend struct Z_Construct_UClass_UDismembermentComponent_Statics; \
public: \
	DECLARE_CLASS(UDismembermentComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dismemberment"), NO_API) \
	DECLARE_SERIALIZER(UDismembermentComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DismemberedBones=NETFIELD_REP_START, \
		NETFIELD_REP_END=DismemberedBones	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDismembermentComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDismembermentComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDismembermentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDismembermentComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDismembermentComponent(UDismembermentComponent&&); \
	NO_API UDismembermentComponent(const UDismembermentComponent&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDismembermentComponent(UDismembermentComponent&&); \
	NO_API UDismembermentComponent(const UDismembermentComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDismembermentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDismembermentComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDismembermentComponent)


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DismemberedBones() { return STRUCT_OFFSET(UDismembermentComponent, DismemberedBones); } \
	FORCEINLINE static uint32 __PPO__SkeletalMesh() { return STRUCT_OFFSET(UDismembermentComponent, SkeletalMesh); } \
	FORCEINLINE static uint32 __PPO__ChildMeshes() { return STRUCT_OFFSET(UDismembermentComponent, ChildMeshes); } \
	FORCEINLINE static uint32 __PPO__StumpMeshes() { return STRUCT_OFFSET(UDismembermentComponent, StumpMeshes); } \
	FORCEINLINE static uint32 __PPO__ClientDismemberedBones() { return STRUCT_OFFSET(UDismembermentComponent, ClientDismemberedBones); } \
	FORCEINLINE static uint32 __PPO__BoneNames() { return STRUCT_OFFSET(UDismembermentComponent, BoneNames); } \
	FORCEINLINE static uint32 __PPO__DismembermentSound() { return STRUCT_OFFSET(UDismembermentComponent, DismembermentSound); }


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_23_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_25_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_25_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_25_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_25_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_25_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISMEMBERMENT_API UClass* StaticClass<class UDismembermentComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_DismembermentComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
