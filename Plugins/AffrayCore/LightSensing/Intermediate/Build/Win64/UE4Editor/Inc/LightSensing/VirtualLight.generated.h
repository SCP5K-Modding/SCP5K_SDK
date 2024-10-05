// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef LIGHTSENSING_VirtualLight_generated_h
#error "VirtualLight.generated.h already included, missing '#pragma once' in VirtualLight.h"
#endif
#define LIGHTSENSING_VirtualLight_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_RPC_WRAPPERS \
	virtual bool GetCastsShadows_Implementation() { return false; }; \
	virtual float GetConeMinDot_Implementation() { return 0; }; \
	virtual FVector GetDirection_Implementation() { return FVector(ForceInit); }; \
	virtual bool GetHasCone_Implementation() { return false; }; \
	virtual float GetIntensity_Implementation() { return 0; }; \
	virtual FVector GetPosition_Implementation() { return FVector(ForceInit); }; \
	virtual float GetRadius_Implementation() { return 0; }; \
 \
	DECLARE_FUNCTION(execGetCastsShadows); \
	DECLARE_FUNCTION(execGetConeMinDot); \
	DECLARE_FUNCTION(execGetDirection); \
	DECLARE_FUNCTION(execGetHasCone); \
	DECLARE_FUNCTION(execGetIntensity); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetRadius);


#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool GetCastsShadows_Implementation() { return false; }; \
	virtual float GetConeMinDot_Implementation() { return 0; }; \
	virtual FVector GetDirection_Implementation() { return FVector(ForceInit); }; \
	virtual bool GetHasCone_Implementation() { return false; }; \
	virtual float GetIntensity_Implementation() { return 0; }; \
	virtual FVector GetPosition_Implementation() { return FVector(ForceInit); }; \
	virtual float GetRadius_Implementation() { return 0; }; \
 \
	DECLARE_FUNCTION(execGetCastsShadows); \
	DECLARE_FUNCTION(execGetConeMinDot); \
	DECLARE_FUNCTION(execGetDirection); \
	DECLARE_FUNCTION(execGetHasCone); \
	DECLARE_FUNCTION(execGetIntensity); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetRadius);


#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_EVENT_PARMS \
	struct VirtualLight_eventGetCastsShadows_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VirtualLight_eventGetCastsShadows_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VirtualLight_eventGetConeMinDot_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VirtualLight_eventGetConeMinDot_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct VirtualLight_eventGetDirection_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VirtualLight_eventGetDirection_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct VirtualLight_eventGetHasCone_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VirtualLight_eventGetHasCone_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VirtualLight_eventGetIntensity_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VirtualLight_eventGetIntensity_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct VirtualLight_eventGetPosition_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VirtualLight_eventGetPosition_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct VirtualLight_eventGetRadius_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VirtualLight_eventGetRadius_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualLight(UVirtualLight&&); \
	NO_API UVirtualLight(const UVirtualLight&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualLight(UVirtualLight&&); \
	NO_API UVirtualLight(const UVirtualLight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualLight); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualLight)


#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVirtualLight(); \
	friend struct Z_Construct_UClass_UVirtualLight_Statics; \
public: \
	DECLARE_CLASS(UVirtualLight, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LightSensing"), NO_API) \
	DECLARE_SERIALIZER(UVirtualLight)


#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVirtualLight() {} \
public: \
	typedef UVirtualLight UClassType; \
	typedef IVirtualLight ThisClass; \
	static bool Execute_GetCastsShadows(UObject* O); \
	static float Execute_GetConeMinDot(UObject* O); \
	static FVector Execute_GetDirection(UObject* O); \
	static bool Execute_GetHasCone(UObject* O); \
	static float Execute_GetIntensity(UObject* O); \
	static FVector Execute_GetPosition(UObject* O); \
	static float Execute_GetRadius(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~IVirtualLight() {} \
public: \
	typedef UVirtualLight UClassType; \
	typedef IVirtualLight ThisClass; \
	static bool Execute_GetCastsShadows(UObject* O); \
	static float Execute_GetConeMinDot(UObject* O); \
	static FVector Execute_GetDirection(UObject* O); \
	static bool Execute_GetHasCone(UObject* O); \
	static float Execute_GetIntensity(UObject* O); \
	static FVector Execute_GetPosition(UObject* O); \
	static float Execute_GetRadius(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_7_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHTSENSING_API UClass* StaticClass<class UVirtualLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_VirtualLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
