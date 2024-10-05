// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayConsole/Public/ConsoleCommand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsoleCommand() {}
// Cross Module References
	GAMEPLAYCONSOLE_API UClass* Z_Construct_UClass_UConsoleCommand_NoRegister();
	GAMEPLAYCONSOLE_API UClass* Z_Construct_UClass_UConsoleCommand();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GameplayConsole();
	GAMEPLAYCONSOLE_API UEnum* Z_Construct_UEnum_GameplayConsole_EMessageType();
	GAMEPLAYCONSOLE_API UClass* Z_Construct_UClass_UConsoleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	GAMEPLAYCONSOLE_API UScriptStruct* Z_Construct_UScriptStruct_FConsoleArgument();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase_NoRegister();
	GAMEPLAYCONSOLE_API UEnum* Z_Construct_UEnum_GameplayConsole_EArgumentType();
// End Cross Module References
	DEFINE_FUNCTION(UConsoleCommand::execClientAddMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_PROPERTY(FByteProperty,Z_Param_MessageType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Tooltip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientAddMessage(Z_Param_Text,EMessageType(Z_Param_MessageType),Z_Param_Tooltip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleCommand::execExecuteClient)
	{
		P_GET_OBJECT(UConsoleComponent,Z_Param_Component);
		P_GET_OBJECT(APlayerController,Z_Param_Controller);
		P_GET_TARRAY_REF(FConsoleArgument,Z_Param_Out_InArguments);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteClient_Implementation(Z_Param_Component,Z_Param_Controller,Z_Param_Out_InArguments);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleCommand::execExecuteServer)
	{
		P_GET_OBJECT(UConsoleComponent,Z_Param_Component);
		P_GET_OBJECT(APlayerController,Z_Param_Controller);
		P_GET_TARRAY_REF(FConsoleArgument,Z_Param_Out_InArguments);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteServer_Implementation(Z_Param_Component,Z_Param_Controller,Z_Param_Out_InArguments);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleCommand::execFinishExecution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishExecution_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleCommand::execGetAutoFillArray)
	{
		P_GET_OBJECT(UConsoleComponent,Z_Param_Component);
		P_GET_PROPERTY(FIntProperty,Z_Param_ArgumentIndex);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Results);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAutoFillArray_Implementation(Z_Param_Component,Z_Param_ArgumentIndex,Z_Param_Out_Results);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleCommand::execGetController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=P_THIS->GetController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleCommand::execGetCurrentArguments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FConsoleArgument>*)Z_Param__Result=P_THIS->GetCurrentArguments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleCommand::execGetGameInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameInstance**)Z_Param__Result=P_THIS->GetGameInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleCommand::execGetGameMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGameModeBase**)Z_Param__Result=P_THIS->GetGameMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleCommand::execGetGameState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGameStateBase**)Z_Param__Result=P_THIS->GetGameState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleCommand::execGetOwningComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UConsoleComponent**)Z_Param__Result=P_THIS->GetOwningComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleCommand::execMulticastAddMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_PROPERTY(FByteProperty,Z_Param_MessageType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Tooltip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastAddMessage(Z_Param_Text,EMessageType(Z_Param_MessageType),Z_Param_Tooltip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleCommand::execServerAddMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_PROPERTY(FByteProperty,Z_Param_MessageType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Tooltip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerAddMessage(Z_Param_Text,EMessageType(Z_Param_MessageType),Z_Param_Tooltip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleCommand::execValidateServer)
	{
		P_GET_OBJECT(UConsoleComponent,Z_Param_Component);
		P_GET_OBJECT(APlayerController,Z_Param_Controller);
		P_GET_TARRAY_REF(FConsoleArgument,Z_Param_Out_InArguments);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ValidateServer_Implementation(Z_Param_Component,Z_Param_Controller,Z_Param_Out_InArguments);
		P_NATIVE_END;
	}
	static FName NAME_UConsoleCommand_ExecuteClient = FName(TEXT("ExecuteClient"));
	void UConsoleCommand::ExecuteClient(UConsoleComponent* Component, APlayerController* Controller, TArray<FConsoleArgument> const& InArguments)
	{
		ConsoleCommand_eventExecuteClient_Parms Parms;
		Parms.Component=Component;
		Parms.Controller=Controller;
		Parms.InArguments=InArguments;
		ProcessEvent(FindFunctionChecked(NAME_UConsoleCommand_ExecuteClient),&Parms);
	}
	static FName NAME_UConsoleCommand_ExecuteServer = FName(TEXT("ExecuteServer"));
	void UConsoleCommand::ExecuteServer(UConsoleComponent* Component, APlayerController* Controller, TArray<FConsoleArgument> const& InArguments)
	{
		ConsoleCommand_eventExecuteServer_Parms Parms;
		Parms.Component=Component;
		Parms.Controller=Controller;
		Parms.InArguments=InArguments;
		ProcessEvent(FindFunctionChecked(NAME_UConsoleCommand_ExecuteServer),&Parms);
	}
	static FName NAME_UConsoleCommand_FinishExecution = FName(TEXT("FinishExecution"));
	void UConsoleCommand::FinishExecution()
	{
		ProcessEvent(FindFunctionChecked(NAME_UConsoleCommand_FinishExecution),NULL);
	}
	static FName NAME_UConsoleCommand_GetAutoFillArray = FName(TEXT("GetAutoFillArray"));
	bool UConsoleCommand::GetAutoFillArray(const UConsoleComponent* Component, int32 ArgumentIndex, TArray<FString>& Results)
	{
		ConsoleCommand_eventGetAutoFillArray_Parms Parms;
		Parms.Component=Component;
		Parms.ArgumentIndex=ArgumentIndex;
		Parms.Results=Results;
		ProcessEvent(FindFunctionChecked(NAME_UConsoleCommand_GetAutoFillArray),&Parms);
		Results=Parms.Results;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UConsoleCommand_ValidateServer = FName(TEXT("ValidateServer"));
	bool UConsoleCommand::ValidateServer(UConsoleComponent* Component, APlayerController* Controller, TArray<FConsoleArgument> const& InArguments)
	{
		ConsoleCommand_eventValidateServer_Parms Parms;
		Parms.Component=Component;
		Parms.Controller=Controller;
		Parms.InArguments=InArguments;
		ProcessEvent(FindFunctionChecked(NAME_UConsoleCommand_ValidateServer),&Parms);
		return !!Parms.ReturnValue;
	}
	void UConsoleCommand::StaticRegisterNativesUConsoleCommand()
	{
		UClass* Class = UConsoleCommand::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientAddMessage", &UConsoleCommand::execClientAddMessage },
			{ "ExecuteClient", &UConsoleCommand::execExecuteClient },
			{ "ExecuteServer", &UConsoleCommand::execExecuteServer },
			{ "FinishExecution", &UConsoleCommand::execFinishExecution },
			{ "GetAutoFillArray", &UConsoleCommand::execGetAutoFillArray },
			{ "GetController", &UConsoleCommand::execGetController },
			{ "GetCurrentArguments", &UConsoleCommand::execGetCurrentArguments },
			{ "GetGameInstance", &UConsoleCommand::execGetGameInstance },
			{ "GetGameMode", &UConsoleCommand::execGetGameMode },
			{ "GetGameState", &UConsoleCommand::execGetGameState },
			{ "GetOwningComponent", &UConsoleCommand::execGetOwningComponent },
			{ "MulticastAddMessage", &UConsoleCommand::execMulticastAddMessage },
			{ "ServerAddMessage", &UConsoleCommand::execServerAddMessage },
			{ "ValidateServer", &UConsoleCommand::execValidateServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConsoleCommand_ClientAddMessage_Statics
	{
		struct ConsoleCommand_eventClientAddMessage_Parms
		{
			FString Text;
			TEnumAsByte<EMessageType> MessageType;
			FString Tooltip;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MessageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tooltip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_ClientAddMessage_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleCommand_ClientAddMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventClientAddMessage_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_ClientAddMessage_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_ClientAddMessage_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConsoleCommand_ClientAddMessage_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventClientAddMessage_Parms, MessageType), Z_Construct_UEnum_GameplayConsole_EMessageType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_ClientAddMessage_Statics::NewProp_Tooltip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleCommand_ClientAddMessage_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventClientAddMessage_Parms, Tooltip), METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_ClientAddMessage_Statics::NewProp_Tooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_ClientAddMessage_Statics::NewProp_Tooltip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleCommand_ClientAddMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_ClientAddMessage_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_ClientAddMessage_Statics::NewProp_MessageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_ClientAddMessage_Statics::NewProp_Tooltip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_ClientAddMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleCommand_ClientAddMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleCommand, nullptr, "ClientAddMessage", nullptr, nullptr, sizeof(ConsoleCommand_eventClientAddMessage_Parms), Z_Construct_UFunction_UConsoleCommand_ClientAddMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_ClientAddMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_ClientAddMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_ClientAddMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleCommand_ClientAddMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleCommand_ClientAddMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InArguments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InArguments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventExecuteClient_Parms, Component), Z_Construct_UClass_UConsoleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventExecuteClient_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics::NewProp_InArguments_Inner = { "InArguments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConsoleArgument, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics::NewProp_InArguments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics::NewProp_InArguments = { "InArguments", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventExecuteClient_Parms, InArguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics::NewProp_InArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics::NewProp_InArguments_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics::NewProp_InArguments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics::NewProp_InArguments,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleCommand, nullptr, "ExecuteClient", nullptr, nullptr, sizeof(ConsoleCommand_eventExecuteClient_Parms), Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleCommand_ExecuteClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleCommand_ExecuteClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InArguments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InArguments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventExecuteServer_Parms, Component), Z_Construct_UClass_UConsoleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventExecuteServer_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics::NewProp_InArguments_Inner = { "InArguments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConsoleArgument, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics::NewProp_InArguments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics::NewProp_InArguments = { "InArguments", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventExecuteServer_Parms, InArguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics::NewProp_InArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics::NewProp_InArguments_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics::NewProp_InArguments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics::NewProp_InArguments,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleCommand, nullptr, "ExecuteServer", nullptr, nullptr, sizeof(ConsoleCommand_eventExecuteServer_Parms), Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleCommand_ExecuteServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleCommand_ExecuteServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleCommand_FinishExecution_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_FinishExecution_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleCommand_FinishExecution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleCommand, nullptr, "FinishExecution", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_FinishExecution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_FinishExecution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleCommand_FinishExecution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleCommand_FinishExecution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArgumentIndex;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Results_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Results;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventGetAutoFillArray_Parms, Component), Z_Construct_UClass_UConsoleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::NewProp_ArgumentIndex = { "ArgumentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventGetAutoFillArray_Parms, ArgumentIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventGetAutoFillArray_Parms, Results), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConsoleCommand_eventGetAutoFillArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConsoleCommand_eventGetAutoFillArray_Parms), &Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::NewProp_ArgumentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::NewProp_Results_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::NewProp_Results,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleCommand, nullptr, "GetAutoFillArray", nullptr, nullptr, sizeof(ConsoleCommand_eventGetAutoFillArray_Parms), Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleCommand_GetController_Statics
	{
		struct ConsoleCommand_eventGetController_Parms
		{
			APlayerController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConsoleCommand_GetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventGetController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleCommand_GetController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_GetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_GetController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleCommand_GetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleCommand, nullptr, "GetController", nullptr, nullptr, sizeof(ConsoleCommand_eventGetController_Parms), Z_Construct_UFunction_UConsoleCommand_GetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_GetController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_GetController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_GetController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleCommand_GetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleCommand_GetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleCommand_GetCurrentArguments_Statics
	{
		struct ConsoleCommand_eventGetCurrentArguments_Parms
		{
			TArray<FConsoleArgument> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConsoleCommand_GetCurrentArguments_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConsoleArgument, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConsoleCommand_GetCurrentArguments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventGetCurrentArguments_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleCommand_GetCurrentArguments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_GetCurrentArguments_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_GetCurrentArguments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_GetCurrentArguments_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleCommand_GetCurrentArguments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleCommand, nullptr, "GetCurrentArguments", nullptr, nullptr, sizeof(ConsoleCommand_eventGetCurrentArguments_Parms), Z_Construct_UFunction_UConsoleCommand_GetCurrentArguments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_GetCurrentArguments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_GetCurrentArguments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_GetCurrentArguments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleCommand_GetCurrentArguments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleCommand_GetCurrentArguments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleCommand_GetGameInstance_Statics
	{
		struct ConsoleCommand_eventGetGameInstance_Parms
		{
			UGameInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConsoleCommand_GetGameInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventGetGameInstance_Parms, ReturnValue), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleCommand_GetGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_GetGameInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_GetGameInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleCommand_GetGameInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleCommand, nullptr, "GetGameInstance", nullptr, nullptr, sizeof(ConsoleCommand_eventGetGameInstance_Parms), Z_Construct_UFunction_UConsoleCommand_GetGameInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_GetGameInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_GetGameInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_GetGameInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleCommand_GetGameInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleCommand_GetGameInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleCommand_GetGameMode_Statics
	{
		struct ConsoleCommand_eventGetGameMode_Parms
		{
			AGameModeBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConsoleCommand_GetGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventGetGameMode_Parms, ReturnValue), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleCommand_GetGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_GetGameMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_GetGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleCommand_GetGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleCommand, nullptr, "GetGameMode", nullptr, nullptr, sizeof(ConsoleCommand_eventGetGameMode_Parms), Z_Construct_UFunction_UConsoleCommand_GetGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_GetGameMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_GetGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_GetGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleCommand_GetGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleCommand_GetGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleCommand_GetGameState_Statics
	{
		struct ConsoleCommand_eventGetGameState_Parms
		{
			AGameStateBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConsoleCommand_GetGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventGetGameState_Parms, ReturnValue), Z_Construct_UClass_AGameStateBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleCommand_GetGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_GetGameState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_GetGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleCommand_GetGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleCommand, nullptr, "GetGameState", nullptr, nullptr, sizeof(ConsoleCommand_eventGetGameState_Parms), Z_Construct_UFunction_UConsoleCommand_GetGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_GetGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_GetGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_GetGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleCommand_GetGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleCommand_GetGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleCommand_GetOwningComponent_Statics
	{
		struct ConsoleCommand_eventGetOwningComponent_Parms
		{
			UConsoleComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_GetOwningComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConsoleCommand_GetOwningComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventGetOwningComponent_Parms, ReturnValue), Z_Construct_UClass_UConsoleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_GetOwningComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_GetOwningComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleCommand_GetOwningComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_GetOwningComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_GetOwningComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleCommand_GetOwningComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleCommand, nullptr, "GetOwningComponent", nullptr, nullptr, sizeof(ConsoleCommand_eventGetOwningComponent_Parms), Z_Construct_UFunction_UConsoleCommand_GetOwningComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_GetOwningComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_GetOwningComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_GetOwningComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleCommand_GetOwningComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleCommand_GetOwningComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage_Statics
	{
		struct ConsoleCommand_eventMulticastAddMessage_Parms
		{
			FString Text;
			TEnumAsByte<EMessageType> MessageType;
			FString Tooltip;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MessageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tooltip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventMulticastAddMessage_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventMulticastAddMessage_Parms, MessageType), Z_Construct_UEnum_GameplayConsole_EMessageType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage_Statics::NewProp_Tooltip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventMulticastAddMessage_Parms, Tooltip), METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage_Statics::NewProp_Tooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage_Statics::NewProp_Tooltip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage_Statics::NewProp_MessageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage_Statics::NewProp_Tooltip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleCommand, nullptr, "MulticastAddMessage", nullptr, nullptr, sizeof(ConsoleCommand_eventMulticastAddMessage_Parms), Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleCommand_ServerAddMessage_Statics
	{
		struct ConsoleCommand_eventServerAddMessage_Parms
		{
			FString Text;
			TEnumAsByte<EMessageType> MessageType;
			FString Tooltip;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MessageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tooltip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_ServerAddMessage_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleCommand_ServerAddMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventServerAddMessage_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_ServerAddMessage_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_ServerAddMessage_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConsoleCommand_ServerAddMessage_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventServerAddMessage_Parms, MessageType), Z_Construct_UEnum_GameplayConsole_EMessageType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_ServerAddMessage_Statics::NewProp_Tooltip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleCommand_ServerAddMessage_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventServerAddMessage_Parms, Tooltip), METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_ServerAddMessage_Statics::NewProp_Tooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_ServerAddMessage_Statics::NewProp_Tooltip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleCommand_ServerAddMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_ServerAddMessage_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_ServerAddMessage_Statics::NewProp_MessageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_ServerAddMessage_Statics::NewProp_Tooltip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_ServerAddMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleCommand_ServerAddMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleCommand, nullptr, "ServerAddMessage", nullptr, nullptr, sizeof(ConsoleCommand_eventServerAddMessage_Parms), Z_Construct_UFunction_UConsoleCommand_ServerAddMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_ServerAddMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_ServerAddMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_ServerAddMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleCommand_ServerAddMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleCommand_ServerAddMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InArguments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InArguments;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventValidateServer_Parms, Component), Z_Construct_UClass_UConsoleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventValidateServer_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::NewProp_InArguments_Inner = { "InArguments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConsoleArgument, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::NewProp_InArguments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::NewProp_InArguments = { "InArguments", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleCommand_eventValidateServer_Parms, InArguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::NewProp_InArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::NewProp_InArguments_MetaData)) };
	void Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConsoleCommand_eventValidateServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConsoleCommand_eventValidateServer_Parms), &Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::NewProp_InArguments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::NewProp_InArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleCommand, nullptr, "ValidateServer", nullptr, nullptr, sizeof(ConsoleCommand_eventValidateServer_Parms), Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleCommand_ValidateServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleCommand_ValidateServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UConsoleCommand_NoRegister()
	{
		return UConsoleCommand::StaticClass();
	}
	struct Z_Construct_UClass_UConsoleCommand_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentArguments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentArguments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAlias_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentAlias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CommandName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Aliases_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aliases_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Aliases;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_arguments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arguments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinArguments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExecuteOnClient_MetaData[];
#endif
		static void NewProp_bExecuteOnClient_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExecuteOnClient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExecuteOnServer_MetaData[];
#endif
		static void NewProp_bExecuteOnServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExecuteOnServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAsynchronous_MetaData[];
#endif
		static void NewProp_bAsynchronous_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAsynchronous;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConsoleCommand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayConsole,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConsoleCommand_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConsoleCommand_ClientAddMessage, "ClientAddMessage" }, // 3091204169
		{ &Z_Construct_UFunction_UConsoleCommand_ExecuteClient, "ExecuteClient" }, // 2013102080
		{ &Z_Construct_UFunction_UConsoleCommand_ExecuteServer, "ExecuteServer" }, // 4099985529
		{ &Z_Construct_UFunction_UConsoleCommand_FinishExecution, "FinishExecution" }, // 2753188576
		{ &Z_Construct_UFunction_UConsoleCommand_GetAutoFillArray, "GetAutoFillArray" }, // 2429836003
		{ &Z_Construct_UFunction_UConsoleCommand_GetController, "GetController" }, // 2527606193
		{ &Z_Construct_UFunction_UConsoleCommand_GetCurrentArguments, "GetCurrentArguments" }, // 2376782380
		{ &Z_Construct_UFunction_UConsoleCommand_GetGameInstance, "GetGameInstance" }, // 3849573151
		{ &Z_Construct_UFunction_UConsoleCommand_GetGameMode, "GetGameMode" }, // 2994757825
		{ &Z_Construct_UFunction_UConsoleCommand_GetGameState, "GetGameState" }, // 880802759
		{ &Z_Construct_UFunction_UConsoleCommand_GetOwningComponent, "GetOwningComponent" }, // 1325719084
		{ &Z_Construct_UFunction_UConsoleCommand_MulticastAddMessage, "MulticastAddMessage" }, // 1140260921
		{ &Z_Construct_UFunction_UConsoleCommand_ServerAddMessage, "ServerAddMessage" }, // 1642855305
		{ &Z_Construct_UFunction_UConsoleCommand_ValidateServer, "ValidateServer" }, // 2389199001
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleCommand_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ConsoleCommand.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleCommand_Statics::NewProp_OwningPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConsoleCommand" },
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConsoleCommand_Statics::NewProp_OwningPlayer = { "OwningPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleCommand, OwningPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_OwningPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_OwningPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleCommand_Statics::NewProp_OwningComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConsoleCommand" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConsoleCommand_Statics::NewProp_OwningComponent = { "OwningComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleCommand, OwningComponent), Z_Construct_UClass_UConsoleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_OwningComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_OwningComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConsoleCommand_Statics::NewProp_CurrentArguments_Inner = { "CurrentArguments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConsoleArgument, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleCommand_Statics::NewProp_CurrentArguments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConsoleCommand" },
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConsoleCommand_Statics::NewProp_CurrentArguments = { "CurrentArguments", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleCommand, CurrentArguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_CurrentArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_CurrentArguments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleCommand_Statics::NewProp_CurrentAlias_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConsoleCommand" },
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UConsoleCommand_Statics::NewProp_CurrentAlias = { "CurrentAlias", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleCommand, CurrentAlias), nullptr, METADATA_PARAMS(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_CurrentAlias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_CurrentAlias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleCommand_Statics::NewProp_CommandName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConsoleCommand" },
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConsoleCommand_Statics::NewProp_CommandName = { "CommandName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleCommand, CommandName), METADATA_PARAMS(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_CommandName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_CommandName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConsoleCommand_Statics::NewProp_Aliases_Inner = { "Aliases", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleCommand_Statics::NewProp_Aliases_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConsoleCommand" },
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConsoleCommand_Statics::NewProp_Aliases = { "Aliases", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleCommand, Aliases), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_Aliases_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_Aliases_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UConsoleCommand_Statics::NewProp_arguments_Inner = { "arguments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_GameplayConsole_EArgumentType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleCommand_Statics::NewProp_arguments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConsoleCommand" },
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConsoleCommand_Statics::NewProp_arguments = { "arguments", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleCommand, arguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_arguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_arguments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleCommand_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConsoleCommand" },
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UConsoleCommand_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleCommand, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleCommand_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConsoleCommand" },
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UConsoleCommand_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleCommand, Description), METADATA_PARAMS(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleCommand_Statics::NewProp_MinArguments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConsoleCommand" },
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UConsoleCommand_Statics::NewProp_MinArguments = { "MinArguments", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleCommand, MinArguments), METADATA_PARAMS(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_MinArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_MinArguments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleCommand_Statics::NewProp_bExecuteOnClient_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConsoleCommand" },
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	void Z_Construct_UClass_UConsoleCommand_Statics::NewProp_bExecuteOnClient_SetBit(void* Obj)
	{
		((UConsoleCommand*)Obj)->bExecuteOnClient = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConsoleCommand_Statics::NewProp_bExecuteOnClient = { "bExecuteOnClient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UConsoleCommand), &Z_Construct_UClass_UConsoleCommand_Statics::NewProp_bExecuteOnClient_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_bExecuteOnClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_bExecuteOnClient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleCommand_Statics::NewProp_bExecuteOnServer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConsoleCommand" },
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	void Z_Construct_UClass_UConsoleCommand_Statics::NewProp_bExecuteOnServer_SetBit(void* Obj)
	{
		((UConsoleCommand*)Obj)->bExecuteOnServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConsoleCommand_Statics::NewProp_bExecuteOnServer = { "bExecuteOnServer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UConsoleCommand), &Z_Construct_UClass_UConsoleCommand_Statics::NewProp_bExecuteOnServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_bExecuteOnServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_bExecuteOnServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleCommand_Statics::NewProp_bAsynchronous_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConsoleCommand" },
		{ "ModuleRelativePath", "Public/ConsoleCommand.h" },
	};
#endif
	void Z_Construct_UClass_UConsoleCommand_Statics::NewProp_bAsynchronous_SetBit(void* Obj)
	{
		((UConsoleCommand*)Obj)->bAsynchronous = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConsoleCommand_Statics::NewProp_bAsynchronous = { "bAsynchronous", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UConsoleCommand), &Z_Construct_UClass_UConsoleCommand_Statics::NewProp_bAsynchronous_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_bAsynchronous_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleCommand_Statics::NewProp_bAsynchronous_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConsoleCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleCommand_Statics::NewProp_OwningPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleCommand_Statics::NewProp_OwningComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleCommand_Statics::NewProp_CurrentArguments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleCommand_Statics::NewProp_CurrentArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleCommand_Statics::NewProp_CurrentAlias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleCommand_Statics::NewProp_CommandName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleCommand_Statics::NewProp_Aliases_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleCommand_Statics::NewProp_Aliases,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleCommand_Statics::NewProp_arguments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleCommand_Statics::NewProp_arguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleCommand_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleCommand_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleCommand_Statics::NewProp_MinArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleCommand_Statics::NewProp_bExecuteOnClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleCommand_Statics::NewProp_bExecuteOnServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleCommand_Statics::NewProp_bAsynchronous,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConsoleCommand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConsoleCommand>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConsoleCommand_Statics::ClassParams = {
		&UConsoleCommand::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UConsoleCommand_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleCommand_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConsoleCommand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleCommand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConsoleCommand()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConsoleCommand_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConsoleCommand, 2681318659);
	template<> GAMEPLAYCONSOLE_API UClass* StaticClass<UConsoleCommand>()
	{
		return UConsoleCommand::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConsoleCommand(Z_Construct_UClass_UConsoleCommand, &UConsoleCommand::StaticClass, TEXT("/Script/GameplayConsole"), TEXT("UConsoleCommand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConsoleCommand);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
