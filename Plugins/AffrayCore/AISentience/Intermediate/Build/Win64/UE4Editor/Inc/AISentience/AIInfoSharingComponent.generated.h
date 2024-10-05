// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAIInfoSharingComponent;
struct FSAISquadInfo;
#ifdef AISENTIENCE_AIInfoSharingComponent_generated_h
#error "AIInfoSharingComponent.generated.h already included, missing '#pragma once' in AIInfoSharingComponent.h"
#endif
#define AISENTIENCE_AIInfoSharingComponent_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_RPC_WRAPPERS \
	virtual void ReceiveSquadInfo_Implementation(UAIInfoSharingComponent* OtherInfoSharingComponent, FSAISquadInfo OtherSquadInfo, bool bFullShare); \
 \
	DECLARE_FUNCTION(execReceiveSquadInfo); \
	DECLARE_FUNCTION(execShareAllSquadInfo); \
	DECLARE_FUNCTION(execShareInfo); \
	DECLARE_FUNCTION(execShareSquadInfo);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ReceiveSquadInfo_Implementation(UAIInfoSharingComponent* OtherInfoSharingComponent, FSAISquadInfo OtherSquadInfo, bool bFullShare); \
 \
	DECLARE_FUNCTION(execReceiveSquadInfo); \
	DECLARE_FUNCTION(execShareAllSquadInfo); \
	DECLARE_FUNCTION(execShareInfo); \
	DECLARE_FUNCTION(execShareSquadInfo);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_EVENT_PARMS \
	struct AIInfoSharingComponent_eventReceiveSquadInfo_Parms \
	{ \
		UAIInfoSharingComponent* OtherInfoSharingComponent; \
		FSAISquadInfo OtherSquadInfo; \
		bool bFullShare; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIInfoSharingComponent(); \
	friend struct Z_Construct_UClass_UAIInfoSharingComponent_Statics; \
public: \
	DECLARE_CLASS(UAIInfoSharingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(UAIInfoSharingComponent)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUAIInfoSharingComponent(); \
	friend struct Z_Construct_UClass_UAIInfoSharingComponent_Statics; \
public: \
	DECLARE_CLASS(UAIInfoSharingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(UAIInfoSharingComponent)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIInfoSharingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIInfoSharingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIInfoSharingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIInfoSharingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIInfoSharingComponent(UAIInfoSharingComponent&&); \
	NO_API UAIInfoSharingComponent(const UAIInfoSharingComponent&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIInfoSharingComponent(UAIInfoSharingComponent&&); \
	NO_API UAIInfoSharingComponent(const UAIInfoSharingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIInfoSharingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIInfoSharingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIInfoSharingComponent)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_10_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AISENTIENCE_API UClass* StaticClass<class UAIInfoSharingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_AIInfoSharingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
