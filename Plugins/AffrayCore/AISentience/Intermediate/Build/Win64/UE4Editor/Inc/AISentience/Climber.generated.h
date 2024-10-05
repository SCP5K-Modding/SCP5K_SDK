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
class ANavLinkProxy;
enum class EClimbingType : uint8;
#ifdef AISENTIENCE_Climber_generated_h
#error "Climber.generated.h already included, missing '#pragma once' in Climber.h"
#endif
#define AISENTIENCE_Climber_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_RPC_WRAPPERS \
	virtual void Climb_Implementation(FVector Destination, FRotator Rotation, ANavLinkProxy* NavLink, EClimbingType Type) {}; \
	virtual uint8 GetAvailableClimbingModes_Implementation() { return 0; }; \
 \
	DECLARE_FUNCTION(execClimb); \
	DECLARE_FUNCTION(execGetAvailableClimbingModes);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Climb_Implementation(FVector Destination, FRotator Rotation, ANavLinkProxy* NavLink, EClimbingType Type) {}; \
	virtual uint8 GetAvailableClimbingModes_Implementation() { return 0; }; \
 \
	DECLARE_FUNCTION(execClimb); \
	DECLARE_FUNCTION(execGetAvailableClimbingModes);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_EVENT_PARMS \
	struct Climber_eventClimb_Parms \
	{ \
		FVector Destination; \
		FRotator Rotation; \
		ANavLinkProxy* NavLink; \
		EClimbingType Type; \
	}; \
	struct Climber_eventGetAvailableClimbingModes_Parms \
	{ \
		uint8 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Climber_eventGetAvailableClimbingModes_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClimber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClimber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClimber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClimber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClimber(UClimber&&); \
	NO_API UClimber(const UClimber&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClimber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClimber(UClimber&&); \
	NO_API UClimber(const UClimber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClimber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClimber); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClimber)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUClimber(); \
	friend struct Z_Construct_UClass_UClimber_Statics; \
public: \
	DECLARE_CLASS(UClimber, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(UClimber)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IClimber() {} \
public: \
	typedef UClimber UClassType; \
	typedef IClimber ThisClass; \
	static void Execute_Climb(UObject* O, FVector Destination, FRotator Rotation, ANavLinkProxy* NavLink, EClimbingType Type); \
	static uint8 Execute_GetAvailableClimbingModes(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IClimber() {} \
public: \
	typedef UClimber UClassType; \
	typedef IClimber ThisClass; \
	static void Execute_Climb(UObject* O, FVector Destination, FRotator Rotation, ANavLinkProxy* NavLink, EClimbingType Type); \
	static uint8 Execute_GetAvailableClimbingModes(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_11_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AISENTIENCE_API UClass* StaticClass<class UClimber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_Climber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
