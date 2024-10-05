// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDialogueComponent;
#ifdef AISENTIENCE_DialogueUser_generated_h
#error "DialogueUser.generated.h already included, missing '#pragma once' in DialogueUser.h"
#endif
#define AISENTIENCE_DialogueUser_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_RPC_WRAPPERS \
	virtual UDialogueComponent* GetDialogueComponent_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetDialogueComponent);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UDialogueComponent* GetDialogueComponent_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetDialogueComponent);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_EVENT_PARMS \
	struct DialogueUser_eventGetDialogueComponent_Parms \
	{ \
		UDialogueComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DialogueUser_eventGetDialogueComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AISENTIENCE_API UDialogueUser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueUser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AISENTIENCE_API, UDialogueUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueUser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AISENTIENCE_API UDialogueUser(UDialogueUser&&); \
	AISENTIENCE_API UDialogueUser(const UDialogueUser&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AISENTIENCE_API UDialogueUser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AISENTIENCE_API UDialogueUser(UDialogueUser&&); \
	AISENTIENCE_API UDialogueUser(const UDialogueUser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AISENTIENCE_API, UDialogueUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueUser); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueUser)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDialogueUser(); \
	friend struct Z_Construct_UClass_UDialogueUser_Statics; \
public: \
	DECLARE_CLASS(UDialogueUser, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AISentience"), AISENTIENCE_API) \
	DECLARE_SERIALIZER(UDialogueUser)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDialogueUser() {} \
public: \
	typedef UDialogueUser UClassType; \
	typedef IDialogueUser ThisClass; \
	static UDialogueComponent* Execute_GetDialogueComponent(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IDialogueUser() {} \
public: \
	typedef UDialogueUser UClassType; \
	typedef IDialogueUser ThisClass; \
	static UDialogueComponent* Execute_GetDialogueComponent(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_8_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AISENTIENCE_API UClass* StaticClass<class UDialogueUser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_DialogueUser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
