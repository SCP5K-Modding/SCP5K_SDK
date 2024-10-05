// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AElectronicDoor;
struct FVector;
class UNavLinkCustomComponent;
#ifdef ELECTRONICS_DoorInteraction_generated_h
#error "DoorInteraction.generated.h already included, missing '#pragma once' in DoorInteraction.h"
#endif
#define ELECTRONICS_DoorInteraction_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_RPC_WRAPPERS \
	virtual bool CanInteractWithDoor_Implementation(const AElectronicDoor* Door) const { return false; }; \
	virtual void InteractDoor_Implementation(FVector TravelDirection, FVector TravelDestination, AElectronicDoor* Door, const UNavLinkCustomComponent* NavLinkComponent) {}; \
 \
	DECLARE_FUNCTION(execCanInteractWithDoor); \
	DECLARE_FUNCTION(execInteractDoor);


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanInteractWithDoor_Implementation(const AElectronicDoor* Door) const { return false; }; \
	virtual void InteractDoor_Implementation(FVector TravelDirection, FVector TravelDestination, AElectronicDoor* Door, const UNavLinkCustomComponent* NavLinkComponent) {}; \
 \
	DECLARE_FUNCTION(execCanInteractWithDoor); \
	DECLARE_FUNCTION(execInteractDoor);


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_EVENT_PARMS \
	struct DoorInteraction_eventCanInteractWithDoor_Parms \
	{ \
		const AElectronicDoor* Door; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DoorInteraction_eventCanInteractWithDoor_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct DoorInteraction_eventInteractDoor_Parms \
	{ \
		FVector TravelDirection; \
		FVector TravelDestination; \
		AElectronicDoor* Door; \
		const UNavLinkCustomComponent* NavLinkComponent; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDoorInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoorInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorInteraction(UDoorInteraction&&); \
	NO_API UDoorInteraction(const UDoorInteraction&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDoorInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorInteraction(UDoorInteraction&&); \
	NO_API UDoorInteraction(const UDoorInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorInteraction); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoorInteraction)


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDoorInteraction(); \
	friend struct Z_Construct_UClass_UDoorInteraction_Statics; \
public: \
	DECLARE_CLASS(UDoorInteraction, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Electronics"), NO_API) \
	DECLARE_SERIALIZER(UDoorInteraction)


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDoorInteraction() {} \
public: \
	typedef UDoorInteraction UClassType; \
	typedef IDoorInteraction ThisClass; \
	static bool Execute_CanInteractWithDoor(const UObject* O, const AElectronicDoor* Door); \
	static void Execute_InteractDoor(UObject* O, FVector TravelDirection, FVector TravelDestination, AElectronicDoor* Door, const UNavLinkCustomComponent* NavLinkComponent); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IDoorInteraction() {} \
public: \
	typedef UDoorInteraction UClassType; \
	typedef IDoorInteraction ThisClass; \
	static bool Execute_CanInteractWithDoor(const UObject* O, const AElectronicDoor* Door); \
	static void Execute_InteractDoor(UObject* O, FVector TravelDirection, FVector TravelDestination, AElectronicDoor* Door, const UNavLinkCustomComponent* NavLinkComponent); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_10_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELECTRONICS_API UClass* StaticClass<class UDoorInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_DoorInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
