// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USAISquadComponent;
#ifdef AISENTIENCE_SAISquadMemberInterface_generated_h
#error "SAISquadMemberInterface.generated.h already included, missing '#pragma once' in SAISquadMemberInterface.h"
#endif
#define AISENTIENCE_SAISquadMemberInterface_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_RPC_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_EVENT_PARMS \
	struct SAISquadMemberInterface_eventGetSquadComponent_Parms \
	{ \
		USAISquadComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SAISquadMemberInterface_eventGetSquadComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AISENTIENCE_API USAISquadMemberInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USAISquadMemberInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AISENTIENCE_API, USAISquadMemberInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAISquadMemberInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AISENTIENCE_API USAISquadMemberInterface(USAISquadMemberInterface&&); \
	AISENTIENCE_API USAISquadMemberInterface(const USAISquadMemberInterface&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AISENTIENCE_API USAISquadMemberInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AISENTIENCE_API USAISquadMemberInterface(USAISquadMemberInterface&&); \
	AISENTIENCE_API USAISquadMemberInterface(const USAISquadMemberInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AISENTIENCE_API, USAISquadMemberInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAISquadMemberInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USAISquadMemberInterface)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSAISquadMemberInterface(); \
	friend struct Z_Construct_UClass_USAISquadMemberInterface_Statics; \
public: \
	DECLARE_CLASS(USAISquadMemberInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AISentience"), AISENTIENCE_API) \
	DECLARE_SERIALIZER(USAISquadMemberInterface)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISAISquadMemberInterface() {} \
public: \
	typedef USAISquadMemberInterface UClassType; \
	typedef ISAISquadMemberInterface ThisClass; \
	static USAISquadComponent* Execute_GetSquadComponent(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~ISAISquadMemberInterface() {} \
public: \
	typedef USAISquadMemberInterface UClassType; \
	typedef ISAISquadMemberInterface ThisClass; \
	static USAISquadComponent* Execute_GetSquadComponent(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_8_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AISENTIENCE_API UClass* StaticClass<class USAISquadMemberInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISquadMemberInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
