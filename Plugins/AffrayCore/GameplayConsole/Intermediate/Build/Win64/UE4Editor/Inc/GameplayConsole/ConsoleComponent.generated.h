// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UConsoleCommand;
class AGameModeBase;
class AGameStateBase;
struct FConsoleArgument;
#ifdef GAMEPLAYCONSOLE_ConsoleComponent_generated_h
#error "ConsoleComponent.generated.h already included, missing '#pragma once' in ConsoleComponent.h"
#endif
#define GAMEPLAYCONSOLE_ConsoleComponent_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_RPC_WRAPPERS \
	virtual void AddMessage_Implementation(const FString& Text, EMessageType MessageType, const FString& Tooltip); \
	virtual void ClientAddMessage_Implementation(const FString& Text, EMessageType MessageType, const FString& Tooltip); \
	virtual void MulticastAddMessage_Implementation(const FString& Text, EMessageType MessageType, const FString& Tooltip); \
	virtual void ServerAddMessage_Implementation(const FString& Text, EMessageType MessageType, const FString& Tooltip); \
	virtual void ServerRunCommand_Implementation(int32 CommandIndex, TArray<FConsoleArgument> const& arguments, uint8 AliasIndex); \
 \
	DECLARE_FUNCTION(execAddMessage); \
	DECLARE_FUNCTION(execAutoComplete); \
	DECLARE_FUNCTION(execClientAddMessage); \
	DECLARE_FUNCTION(execGetCommand); \
	DECLARE_FUNCTION(execGetGameMode); \
	DECLARE_FUNCTION(execGetGameState); \
	DECLARE_FUNCTION(execMulticastAddMessage); \
	DECLARE_FUNCTION(execParse); \
	DECLARE_FUNCTION(execRunCommand); \
	DECLARE_FUNCTION(execServerAddMessage); \
	DECLARE_FUNCTION(execServerRunCommand); \
	DECLARE_FUNCTION(execSimpleParse);


#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AddMessage_Implementation(const FString& Text, EMessageType MessageType, const FString& Tooltip); \
	virtual void ClientAddMessage_Implementation(const FString& Text, EMessageType MessageType, const FString& Tooltip); \
	virtual void MulticastAddMessage_Implementation(const FString& Text, EMessageType MessageType, const FString& Tooltip); \
	virtual void ServerAddMessage_Implementation(const FString& Text, EMessageType MessageType, const FString& Tooltip); \
	virtual void ServerRunCommand_Implementation(int32 CommandIndex, TArray<FConsoleArgument> const& arguments, uint8 AliasIndex); \
 \
	DECLARE_FUNCTION(execAddMessage); \
	DECLARE_FUNCTION(execAutoComplete); \
	DECLARE_FUNCTION(execClientAddMessage); \
	DECLARE_FUNCTION(execGetCommand); \
	DECLARE_FUNCTION(execGetGameMode); \
	DECLARE_FUNCTION(execGetGameState); \
	DECLARE_FUNCTION(execMulticastAddMessage); \
	DECLARE_FUNCTION(execParse); \
	DECLARE_FUNCTION(execRunCommand); \
	DECLARE_FUNCTION(execServerAddMessage); \
	DECLARE_FUNCTION(execServerRunCommand); \
	DECLARE_FUNCTION(execSimpleParse);


#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_EVENT_PARMS \
	struct ConsoleComponent_eventAddMessage_Parms \
	{ \
		FString Text; \
		TEnumAsByte<EMessageType> MessageType; \
		FString Tooltip; \
	}; \
	struct ConsoleComponent_eventClientAddMessage_Parms \
	{ \
		FString Text; \
		TEnumAsByte<EMessageType> MessageType; \
		FString Tooltip; \
	}; \
	struct ConsoleComponent_eventMulticastAddMessage_Parms \
	{ \
		FString Text; \
		TEnumAsByte<EMessageType> MessageType; \
		FString Tooltip; \
	}; \
	struct ConsoleComponent_eventServerAddMessage_Parms \
	{ \
		FString Text; \
		TEnumAsByte<EMessageType> MessageType; \
		FString Tooltip; \
	}; \
	struct ConsoleComponent_eventServerRunCommand_Parms \
	{ \
		int32 CommandIndex; \
		TArray<FConsoleArgument> arguments; \
		uint8 AliasIndex; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConsoleComponent(); \
	friend struct Z_Construct_UClass_UConsoleComponent_Statics; \
public: \
	DECLARE_CLASS(UConsoleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayConsole"), NO_API) \
	DECLARE_SERIALIZER(UConsoleComponent)


#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUConsoleComponent(); \
	friend struct Z_Construct_UClass_UConsoleComponent_Statics; \
public: \
	DECLARE_CLASS(UConsoleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayConsole"), NO_API) \
	DECLARE_SERIALIZER(UConsoleComponent)


#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConsoleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsoleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConsoleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsoleComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConsoleComponent(UConsoleComponent&&); \
	NO_API UConsoleComponent(const UConsoleComponent&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConsoleComponent(UConsoleComponent&&); \
	NO_API UConsoleComponent(const UConsoleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConsoleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsoleComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsoleComponent)


#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_14_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCONSOLE_API UClass* StaticClass<class UConsoleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_ConsoleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
