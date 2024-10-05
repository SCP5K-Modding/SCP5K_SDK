// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class AHorde;
class AActor;
#ifdef AIHORDES_HordeController_generated_h
#error "HordeController.generated.h already included, missing '#pragma once' in HordeController.h"
#endif
#define AIHORDES_HordeController_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_RPC_WRAPPERS \
	virtual void BeginAlert_Implementation(TArray<APawn*> const& Targets); \
	virtual void EndAlert_Implementation(); \
	virtual bool IsTarget_Implementation(AActor* Actor); \
 \
	DECLARE_FUNCTION(execBeginAlert); \
	DECLARE_FUNCTION(execCheckTargetVisibility); \
	DECLARE_FUNCTION(execEndAlert); \
	DECLARE_FUNCTION(execGetCurrentTargets); \
	DECLARE_FUNCTION(execGetHorde); \
	DECLARE_FUNCTION(execIsTarget); \
	DECLARE_FUNCTION(execOnSeePawn);


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BeginAlert_Implementation(TArray<APawn*> const& Targets); \
	virtual void EndAlert_Implementation(); \
	virtual bool IsTarget_Implementation(AActor* Actor); \
 \
	DECLARE_FUNCTION(execBeginAlert); \
	DECLARE_FUNCTION(execCheckTargetVisibility); \
	DECLARE_FUNCTION(execEndAlert); \
	DECLARE_FUNCTION(execGetCurrentTargets); \
	DECLARE_FUNCTION(execGetHorde); \
	DECLARE_FUNCTION(execIsTarget); \
	DECLARE_FUNCTION(execOnSeePawn);


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_EVENT_PARMS \
	struct HordeController_eventBeginAlert_Parms \
	{ \
		TArray<APawn*> Targets; \
	}; \
	struct HordeController_eventIsTarget_Parms \
	{ \
		AActor* Actor; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HordeController_eventIsTarget_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHordeController(); \
	friend struct Z_Construct_UClass_AHordeController_Statics; \
public: \
	DECLARE_CLASS(AHordeController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIHordes"), NO_API) \
	DECLARE_SERIALIZER(AHordeController)


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHordeController(); \
	friend struct Z_Construct_UClass_AHordeController_Statics; \
public: \
	DECLARE_CLASS(AHordeController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIHordes"), NO_API) \
	DECLARE_SERIALIZER(AHordeController)


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHordeController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHordeController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHordeController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHordeController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHordeController(AHordeController&&); \
	NO_API AHordeController(const AHordeController&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHordeController(AHordeController&&); \
	NO_API AHordeController(const AHordeController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHordeController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHordeController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHordeController)


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RandomPathingRadius() { return STRUCT_OFFSET(AHordeController, RandomPathingRadius); } \
	FORCEINLINE static uint32 __PPO__CurrentTargets() { return STRUCT_OFFSET(AHordeController, CurrentTargets); }


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_10_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIHORDES_API UClass* StaticClass<class AHordeController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
