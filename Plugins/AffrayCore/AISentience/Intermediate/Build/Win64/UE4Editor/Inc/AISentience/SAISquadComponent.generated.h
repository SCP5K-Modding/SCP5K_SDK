// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USAISquadComponent;
class AController;
class APawn;
struct FGuid;
#ifdef AISENTIENCE_SAISquadComponent_generated_h
#error "SAISquadComponent.generated.h already included, missing '#pragma once' in SAISquadComponent.h"
#endif
#define AISENTIENCE_SAISquadComponent_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_RPC_WRAPPERS \
	virtual void MulticastSquadChanged_Implementation(FGuid NewSquadID, bool bAsSquadLeader); \
	virtual void ServerJoinSquad_Implementation(FGuid NewSquadID, bool bAsSquadLeader); \
	virtual void ServerLeaveSquad_Implementation(); \
 \
	DECLARE_FUNCTION(execGetAllVisibleSquadMembers); \
	DECLARE_FUNCTION(execGetController); \
	DECLARE_FUNCTION(execGetLeader); \
	DECLARE_FUNCTION(execGetPawn); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execIsSquadLeader); \
	DECLARE_FUNCTION(execMulticastSquadChanged); \
	DECLARE_FUNCTION(execServerJoinSquad); \
	DECLARE_FUNCTION(execServerLeaveSquad);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastSquadChanged_Implementation(FGuid NewSquadID, bool bAsSquadLeader); \
	virtual void ServerJoinSquad_Implementation(FGuid NewSquadID, bool bAsSquadLeader); \
	virtual void ServerLeaveSquad_Implementation(); \
 \
	DECLARE_FUNCTION(execGetAllVisibleSquadMembers); \
	DECLARE_FUNCTION(execGetController); \
	DECLARE_FUNCTION(execGetLeader); \
	DECLARE_FUNCTION(execGetPawn); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execIsSquadLeader); \
	DECLARE_FUNCTION(execMulticastSquadChanged); \
	DECLARE_FUNCTION(execServerJoinSquad); \
	DECLARE_FUNCTION(execServerLeaveSquad);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_EVENT_PARMS \
	struct SAISquadComponent_eventMulticastSquadChanged_Parms \
	{ \
		FGuid NewSquadID; \
		bool bAsSquadLeader; \
	}; \
	struct SAISquadComponent_eventServerJoinSquad_Parms \
	{ \
		FGuid NewSquadID; \
		bool bAsSquadLeader; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSAISquadComponent(); \
	friend struct Z_Construct_UClass_USAISquadComponent_Statics; \
public: \
	DECLARE_CLASS(USAISquadComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(USAISquadComponent)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSAISquadComponent(); \
	friend struct Z_Construct_UClass_USAISquadComponent_Statics; \
public: \
	DECLARE_CLASS(USAISquadComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(USAISquadComponent)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USAISquadComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USAISquadComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USAISquadComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAISquadComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USAISquadComponent(USAISquadComponent&&); \
	NO_API USAISquadComponent(const USAISquadComponent&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USAISquadComponent(USAISquadComponent&&); \
	NO_API USAISquadComponent(const USAISquadComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USAISquadComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAISquadComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USAISquadComponent)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bSuppressDamageableWarning() { return STRUCT_OFFSET(USAISquadComponent, bSuppressDamageableWarning); }


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_12_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AISENTIENCE_API UClass* StaticClass<class USAISquadComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
