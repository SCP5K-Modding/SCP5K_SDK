// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
class AActor;
#ifdef ELECTRONICS_ElectronicLift_generated_h
#error "ElectronicLift.generated.h already included, missing '#pragma once' in ElectronicLift.h"
#endif
#define ELECTRONICS_ElectronicLift_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_RPC_WRAPPERS \
	virtual void LiftClosestFloorUpdated_Implementation(int32 Floor, FTransform Transform); \
	virtual void LiftDoorUpdatedValue_Implementation(float Value); \
	virtual void LiftPassedFloor_Implementation(int32 Floor, FTransform Transform); \
	virtual void LiftReachedEnd_Implementation(FTransform Transform); \
	virtual void LiftReachedFloor_Implementation(int32 Floor, FTransform Transform); \
	virtual void LiftReachedStart_Implementation(FTransform Transform); \
	virtual void LiftStartedMoving_Implementation(float CurrentTime, int32 Floor, FTransform Transform); \
	virtual void LiftUpdatedPosition_Implementation(float CurrentTime, FTransform Transform); \
 \
	DECLARE_FUNCTION(execGetDesiredTransform); \
	DECLARE_FUNCTION(execGoToFloor); \
	DECLARE_FUNCTION(execLiftClosestFloorUpdated); \
	DECLARE_FUNCTION(execLiftDoorUpdatedValue); \
	DECLARE_FUNCTION(execLiftPassedFloor); \
	DECLARE_FUNCTION(execLiftReachedEnd); \
	DECLARE_FUNCTION(execLiftReachedFloor); \
	DECLARE_FUNCTION(execLiftReachedStart); \
	DECLARE_FUNCTION(execLiftStartedMoving); \
	DECLARE_FUNCTION(execLiftUpdatedPosition); \
	DECLARE_FUNCTION(execOnRep_bDoorOpen); \
	DECLARE_FUNCTION(execOnRep_TargetFloor); \
	DECLARE_FUNCTION(execStartMoving);


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void LiftClosestFloorUpdated_Implementation(int32 Floor, FTransform Transform); \
	virtual void LiftDoorUpdatedValue_Implementation(float Value); \
	virtual void LiftPassedFloor_Implementation(int32 Floor, FTransform Transform); \
	virtual void LiftReachedEnd_Implementation(FTransform Transform); \
	virtual void LiftReachedFloor_Implementation(int32 Floor, FTransform Transform); \
	virtual void LiftReachedStart_Implementation(FTransform Transform); \
	virtual void LiftStartedMoving_Implementation(float CurrentTime, int32 Floor, FTransform Transform); \
	virtual void LiftUpdatedPosition_Implementation(float CurrentTime, FTransform Transform); \
 \
	DECLARE_FUNCTION(execGetDesiredTransform); \
	DECLARE_FUNCTION(execGoToFloor); \
	DECLARE_FUNCTION(execLiftClosestFloorUpdated); \
	DECLARE_FUNCTION(execLiftDoorUpdatedValue); \
	DECLARE_FUNCTION(execLiftPassedFloor); \
	DECLARE_FUNCTION(execLiftReachedEnd); \
	DECLARE_FUNCTION(execLiftReachedFloor); \
	DECLARE_FUNCTION(execLiftReachedStart); \
	DECLARE_FUNCTION(execLiftStartedMoving); \
	DECLARE_FUNCTION(execLiftUpdatedPosition); \
	DECLARE_FUNCTION(execOnRep_bDoorOpen); \
	DECLARE_FUNCTION(execOnRep_TargetFloor); \
	DECLARE_FUNCTION(execStartMoving);


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_EVENT_PARMS \
	struct ElectronicLift_eventLiftClosestFloorUpdated_Parms \
	{ \
		int32 Floor; \
		FTransform Transform; \
	}; \
	struct ElectronicLift_eventLiftDoorUpdatedValue_Parms \
	{ \
		float Value; \
	}; \
	struct ElectronicLift_eventLiftPassedFloor_Parms \
	{ \
		int32 Floor; \
		FTransform Transform; \
	}; \
	struct ElectronicLift_eventLiftReachedEnd_Parms \
	{ \
		FTransform Transform; \
	}; \
	struct ElectronicLift_eventLiftReachedFloor_Parms \
	{ \
		int32 Floor; \
		FTransform Transform; \
	}; \
	struct ElectronicLift_eventLiftReachedStart_Parms \
	{ \
		FTransform Transform; \
	}; \
	struct ElectronicLift_eventLiftStartedMoving_Parms \
	{ \
		float CurrentTime; \
		int32 Floor; \
		FTransform Transform; \
	}; \
	struct ElectronicLift_eventLiftUpdatedPosition_Parms \
	{ \
		float CurrentTime; \
		FTransform Transform; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAElectronicLift(); \
	friend struct Z_Construct_UClass_AElectronicLift_Statics; \
public: \
	DECLARE_CLASS(AElectronicLift, AElectronic, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Electronics"), NO_API) \
	DECLARE_SERIALIZER(AElectronicLift) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedTime=NETFIELD_REP_START, \
		TargetFloor, \
		ReplicatedPreviousFloor, \
		ReplicatedState, \
		bDoorOpen, \
		NETFIELD_REP_END=bDoorOpen	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAElectronicLift(); \
	friend struct Z_Construct_UClass_AElectronicLift_Statics; \
public: \
	DECLARE_CLASS(AElectronicLift, AElectronic, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Electronics"), NO_API) \
	DECLARE_SERIALIZER(AElectronicLift) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedTime=NETFIELD_REP_START, \
		TargetFloor, \
		ReplicatedPreviousFloor, \
		ReplicatedState, \
		bDoorOpen, \
		NETFIELD_REP_END=bDoorOpen	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AElectronicLift(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AElectronicLift) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElectronicLift); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElectronicLift); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AElectronicLift(AElectronicLift&&); \
	NO_API AElectronicLift(const AElectronicLift&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AElectronicLift(AElectronicLift&&); \
	NO_API AElectronicLift(const AElectronicLift&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElectronicLift); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElectronicLift); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AElectronicLift)


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_14_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELECTRONICS_API UClass* StaticClass<class AElectronicLift>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLift_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
