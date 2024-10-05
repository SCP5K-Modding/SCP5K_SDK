// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJournal;
class UObject;
class UJournalEntry;
enum class EJournalPersistenceType : uint8;
enum class ESharingType : uint8;
#ifdef USERINTERFACE_JournalSubsystem_generated_h
#error "JournalSubsystem.generated.h already included, missing '#pragma once' in JournalSubsystem.h"
#endif
#define USERINTERFACE_JournalSubsystem_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h_18_DELEGATE \
static inline void FOnJournalUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnJournalUpdated) \
{ \
	OnJournalUpdated.ProcessMulticastDelegate<UObject>(NULL); \
}


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h_16_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllJournalLists); \
	DECLARE_FUNCTION(execGetJournalEntrySoftObject); \
	DECLARE_FUNCTION(execGetJournalList); \
	DECLARE_FUNCTION(execJournalEntryLoaded); \
	DECLARE_FUNCTION(execLoadJournalEntry); \
	DECLARE_FUNCTION(execUpdateJournalList);


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllJournalLists); \
	DECLARE_FUNCTION(execGetJournalEntrySoftObject); \
	DECLARE_FUNCTION(execGetJournalList); \
	DECLARE_FUNCTION(execJournalEntryLoaded); \
	DECLARE_FUNCTION(execLoadJournalEntry); \
	DECLARE_FUNCTION(execUpdateJournalList);


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJournalSubsystem(); \
	friend struct Z_Construct_UClass_UJournalSubsystem_Statics; \
public: \
	DECLARE_CLASS(UJournalSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserInterface"), NO_API) \
	DECLARE_SERIALIZER(UJournalSubsystem)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUJournalSubsystem(); \
	friend struct Z_Construct_UClass_UJournalSubsystem_Statics; \
public: \
	DECLARE_CLASS(UJournalSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserInterface"), NO_API) \
	DECLARE_SERIALIZER(UJournalSubsystem)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJournalSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJournalSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJournalSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJournalSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJournalSubsystem(UJournalSubsystem&&); \
	NO_API UJournalSubsystem(const UJournalSubsystem&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJournalSubsystem(UJournalSubsystem&&); \
	NO_API UJournalSubsystem(const UJournalSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJournalSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJournalSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UJournalSubsystem)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h_16_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h_14_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h_16_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h_16_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h_16_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h_16_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h_16_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h_16_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> USERINTERFACE_API UClass* StaticClass<class UJournalSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
