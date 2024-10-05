// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UConsoleComponent;
class APlayerController;
struct FConsoleArgument;
class UGameInstance;
class AGameModeBase;
class AGameStateBase;
#ifdef GAMEPLAYCONSOLE_ConsoleCommand_generated_h
#error "ConsoleCommand.generated.h already included, missing '#pragma once' in ConsoleCommand.h"
#endif
#define GAMEPLAYCONSOLE_ConsoleCommand_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_RPC_WRAPPERS \
	virtual void ExecuteClient_Implementation(UConsoleComponent* Component, APlayerController* Controller, TArray<FConsoleArgument> const& InArguments); \
	virtual void ExecuteServer_Implementation(UConsoleComponent* Component, APlayerController* Controller, TArray<FConsoleArgument> const& InArguments); \
	virtual void FinishExecution_Implementation(); \
	virtual bool GetAutoFillArray_Implementation(const UConsoleComponent* Component, int32 ArgumentIndex, TArray<FString>& Results); \
	virtual bool ValidateServer_Implementation(UConsoleComponent* Component, APlayerController* Controller, TArray<FConsoleArgument> const& InArguments); \
 \
	DECLARE_FUNCTION(execClientAddMessage); \
	DECLARE_FUNCTION(execExecuteClient); \
	DECLARE_FUNCTION(execExecuteServer); \
	DECLARE_FUNCTION(execFinishExecution); \
	DECLARE_FUNCTION(execGetAutoFillArray); \
	DECLARE_FUNCTION(execGetController); \
	DECLARE_FUNCTION(execGetCurrentArguments); \
	DECLARE_FUNCTION(execGetGameInstance); \
	DECLARE_FUNCTION(execGetGameMode); \
	DECLARE_FUNCTION(execGetGameState); \
	DECLARE_FUNCTION(execGetOwningComponent); \
	DECLARE_FUNCTION(execMulticastAddMessage); \
	DECLARE_FUNCTION(execServerAddMessage); \
	DECLARE_FUNCTION(execValidateServer);


#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ExecuteClient_Implementation(UConsoleComponent* Component, APlayerController* Controller, TArray<FConsoleArgument> const& InArguments); \
	virtual void ExecuteServer_Implementation(UConsoleComponent* Component, APlayerController* Controller, TArray<FConsoleArgument> const& InArguments); \
	virtual void FinishExecution_Implementation(); \
	virtual bool GetAutoFillArray_Implementation(const UConsoleComponent* Component, int32 ArgumentIndex, TArray<FString>& Results); \
	virtual bool ValidateServer_Implementation(UConsoleComponent* Component, APlayerController* Controller, TArray<FConsoleArgument> const& InArguments); \
 \
	DECLARE_FUNCTION(execClientAddMessage); \
	DECLARE_FUNCTION(execExecuteClient); \
	DECLARE_FUNCTION(execExecuteServer); \
	DECLARE_FUNCTION(execFinishExecution); \
	DECLARE_FUNCTION(execGetAutoFillArray); \
	DECLARE_FUNCTION(execGetController); \
	DECLARE_FUNCTION(execGetCurrentArguments); \
	DECLARE_FUNCTION(execGetGameInstance); \
	DECLARE_FUNCTION(execGetGameMode); \
	DECLARE_FUNCTION(execGetGameState); \
	DECLARE_FUNCTION(execGetOwningComponent); \
	DECLARE_FUNCTION(execMulticastAddMessage); \
	DECLARE_FUNCTION(execServerAddMessage); \
	DECLARE_FUNCTION(execValidateServer);


#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_EVENT_PARMS \
	struct ConsoleCommand_eventExecuteClient_Parms \
	{ \
		UConsoleComponent* Component; \
		APlayerController* Controller; \
		TArray<FConsoleArgument> InArguments; \
	}; \
	struct ConsoleCommand_eventExecuteServer_Parms \
	{ \
		UConsoleComponent* Component; \
		APlayerController* Controller; \
		TArray<FConsoleArgument> InArguments; \
	}; \
	struct ConsoleCommand_eventGetAutoFillArray_Parms \
	{ \
		const UConsoleComponent* Component; \
		int32 ArgumentIndex; \
		TArray<FString> Results; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ConsoleCommand_eventGetAutoFillArray_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ConsoleCommand_eventValidateServer_Parms \
	{ \
		UConsoleComponent* Component; \
		APlayerController* Controller; \
		TArray<FConsoleArgument> InArguments; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ConsoleCommand_eventValidateServer_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConsoleCommand(); \
	friend struct Z_Construct_UClass_UConsoleCommand_Statics; \
public: \
	DECLARE_CLASS(UConsoleCommand, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayConsole"), NO_API) \
	DECLARE_SERIALIZER(UConsoleCommand)


#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUConsoleCommand(); \
	friend struct Z_Construct_UClass_UConsoleCommand_Statics; \
public: \
	DECLARE_CLASS(UConsoleCommand, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayConsole"), NO_API) \
	DECLARE_SERIALIZER(UConsoleCommand)


#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConsoleCommand(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsoleCommand) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConsoleCommand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsoleCommand); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConsoleCommand(UConsoleCommand&&); \
	NO_API UConsoleCommand(const UConsoleCommand&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConsoleCommand(UConsoleCommand&&); \
	NO_API UConsoleCommand(const UConsoleCommand&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConsoleCommand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsoleCommand); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConsoleCommand)


#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_15_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCONSOLE_API UClass* StaticClass<class UConsoleCommand>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleCommand_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
