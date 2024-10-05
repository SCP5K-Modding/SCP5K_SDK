// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AActor;
#ifdef FPSCONTROLLER_Suppressable_generated_h
#error "Suppressable.generated.h already included, missing '#pragma once' in Suppressable.h"
#endif
#define FPSCONTROLLER_Suppressable_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_RPC_WRAPPERS \
	virtual void Suppressed_Implementation(FVector Location, AActor* Suppressor, bool bIsSuperSonic, float SuppressionAmount) {}; \
 \
	DECLARE_FUNCTION(execSuppressed);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Suppressed_Implementation(FVector Location, AActor* Suppressor, bool bIsSuperSonic, float SuppressionAmount) {}; \
 \
	DECLARE_FUNCTION(execSuppressed);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_EVENT_PARMS \
	struct Suppressable_eventSuppressed_Parms \
	{ \
		FVector Location; \
		AActor* Suppressor; \
		bool bIsSuperSonic; \
		float SuppressionAmount; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USuppressable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USuppressable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USuppressable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USuppressable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USuppressable(USuppressable&&); \
	NO_API USuppressable(const USuppressable&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USuppressable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USuppressable(USuppressable&&); \
	NO_API USuppressable(const USuppressable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USuppressable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USuppressable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USuppressable)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSuppressable(); \
	friend struct Z_Construct_UClass_USuppressable_Statics; \
public: \
	DECLARE_CLASS(USuppressable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(USuppressable)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISuppressable() {} \
public: \
	typedef USuppressable UClassType; \
	typedef ISuppressable ThisClass; \
	static void Execute_Suppressed(UObject* O, FVector Location, AActor* Suppressor, bool bIsSuperSonic, float SuppressionAmount); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~ISuppressable() {} \
public: \
	typedef USuppressable UClassType; \
	typedef ISuppressable ThisClass; \
	static void Execute_Suppressed(UObject* O, FVector Location, AActor* Suppressor, bool bIsSuperSonic, float SuppressionAmount); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_9_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class USuppressable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Suppressable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
