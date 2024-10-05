// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayConsole/Public/ConsoleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsoleComponent() {}
// Cross Module References
	GAMEPLAYCONSOLE_API UClass* Z_Construct_UClass_UConsoleComponent_NoRegister();
	GAMEPLAYCONSOLE_API UClass* Z_Construct_UClass_UConsoleComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GameplayConsole();
	GAMEPLAYCONSOLE_API UEnum* Z_Construct_UEnum_GameplayConsole_EMessageType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYCONSOLE_API UClass* Z_Construct_UClass_UConsoleCommand_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase_NoRegister();
	GAMEPLAYCONSOLE_API UScriptStruct* Z_Construct_UScriptStruct_FConsoleArgument();
	GAMEPLAYCONSOLE_API UFunction* Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UConsoleComponent::execAddMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_PROPERTY(FByteProperty,Z_Param_MessageType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Tooltip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMessage_Implementation(Z_Param_Text,EMessageType(Z_Param_MessageType),Z_Param_Tooltip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleComponent::execAutoComplete)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Options);
		P_GET_PROPERTY(FIntProperty,Z_Param_ArgumentIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AutoComplete(Z_Param_Text,Z_Param_Out_Options,Z_Param_ArgumentIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleComponent::execClientAddMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_PROPERTY(FByteProperty,Z_Param_MessageType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Tooltip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientAddMessage_Implementation(Z_Param_Text,EMessageType(Z_Param_MessageType),Z_Param_Tooltip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleComponent::execGetCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UConsoleCommand> ,Z_Param_Out_CommandClass);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AliasIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCommand(Z_Param_Text,Z_Param_Out_CommandClass,Z_Param_Out_AliasIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleComponent::execGetGameMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGameModeBase**)Z_Param__Result=P_THIS->GetGameMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleComponent::execGetGameState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGameStateBase**)Z_Param__Result=P_THIS->GetGameState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleComponent::execMulticastAddMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_PROPERTY(FByteProperty,Z_Param_MessageType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Tooltip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastAddMessage_Implementation(Z_Param_Text,EMessageType(Z_Param_MessageType),Z_Param_Tooltip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleComponent::execParse)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UConsoleCommand> ,Z_Param_Out_CommandClass);
		P_GET_TARRAY_REF(FConsoleArgument,Z_Param_Out_arguments);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AliasIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Parse(Z_Param_Text,Z_Param_Out_CommandClass,Z_Param_Out_arguments,Z_Param_Out_AliasIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleComponent::execRunCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RunCommand(Z_Param_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleComponent::execServerAddMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_PROPERTY(FByteProperty,Z_Param_MessageType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Tooltip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerAddMessage_Implementation(Z_Param_Text,EMessageType(Z_Param_MessageType),Z_Param_Tooltip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleComponent::execServerRunCommand)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CommandIndex);
		P_GET_TARRAY(FConsoleArgument,Z_Param_arguments);
		P_GET_PROPERTY(FByteProperty,Z_Param_AliasIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRunCommand_Implementation(Z_Param_CommandIndex,Z_Param_arguments,Z_Param_AliasIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleComponent::execSimpleParse)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Elements);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConsoleComponent::SimpleParse(Z_Param_Text,Z_Param_Out_Elements);
		P_NATIVE_END;
	}
	static FName NAME_UConsoleComponent_AddMessage = FName(TEXT("AddMessage"));
	void UConsoleComponent::AddMessage(const FString& Text, EMessageType MessageType, const FString& Tooltip)
	{
		ConsoleComponent_eventAddMessage_Parms Parms;
		Parms.Text=Text;
		Parms.MessageType=MessageType;
		Parms.Tooltip=Tooltip;
		ProcessEvent(FindFunctionChecked(NAME_UConsoleComponent_AddMessage),&Parms);
	}
	static FName NAME_UConsoleComponent_ClientAddMessage = FName(TEXT("ClientAddMessage"));
	void UConsoleComponent::ClientAddMessage(const FString& Text, EMessageType MessageType, const FString& Tooltip)
	{
		ConsoleComponent_eventClientAddMessage_Parms Parms;
		Parms.Text=Text;
		Parms.MessageType=MessageType;
		Parms.Tooltip=Tooltip;
		ProcessEvent(FindFunctionChecked(NAME_UConsoleComponent_ClientAddMessage),&Parms);
	}
	static FName NAME_UConsoleComponent_MulticastAddMessage = FName(TEXT("MulticastAddMessage"));
	void UConsoleComponent::MulticastAddMessage(const FString& Text, EMessageType MessageType, const FString& Tooltip)
	{
		ConsoleComponent_eventMulticastAddMessage_Parms Parms;
		Parms.Text=Text;
		Parms.MessageType=MessageType;
		Parms.Tooltip=Tooltip;
		ProcessEvent(FindFunctionChecked(NAME_UConsoleComponent_MulticastAddMessage),&Parms);
	}
	static FName NAME_UConsoleComponent_ServerAddMessage = FName(TEXT("ServerAddMessage"));
	void UConsoleComponent::ServerAddMessage(const FString& Text, EMessageType MessageType, const FString& Tooltip)
	{
		ConsoleComponent_eventServerAddMessage_Parms Parms;
		Parms.Text=Text;
		Parms.MessageType=MessageType;
		Parms.Tooltip=Tooltip;
		ProcessEvent(FindFunctionChecked(NAME_UConsoleComponent_ServerAddMessage),&Parms);
	}
	static FName NAME_UConsoleComponent_ServerRunCommand = FName(TEXT("ServerRunCommand"));
	void UConsoleComponent::ServerRunCommand(int32 CommandIndex, TArray<FConsoleArgument> const& arguments, uint8 AliasIndex)
	{
		ConsoleComponent_eventServerRunCommand_Parms Parms;
		Parms.CommandIndex=CommandIndex;
		Parms.arguments=arguments;
		Parms.AliasIndex=AliasIndex;
		ProcessEvent(FindFunctionChecked(NAME_UConsoleComponent_ServerRunCommand),&Parms);
	}
	void UConsoleComponent::StaticRegisterNativesUConsoleComponent()
	{
		UClass* Class = UConsoleComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMessage", &UConsoleComponent::execAddMessage },
			{ "AutoComplete", &UConsoleComponent::execAutoComplete },
			{ "ClientAddMessage", &UConsoleComponent::execClientAddMessage },
			{ "GetCommand", &UConsoleComponent::execGetCommand },
			{ "GetGameMode", &UConsoleComponent::execGetGameMode },
			{ "GetGameState", &UConsoleComponent::execGetGameState },
			{ "MulticastAddMessage", &UConsoleComponent::execMulticastAddMessage },
			{ "Parse", &UConsoleComponent::execParse },
			{ "RunCommand", &UConsoleComponent::execRunCommand },
			{ "ServerAddMessage", &UConsoleComponent::execServerAddMessage },
			{ "ServerRunCommand", &UConsoleComponent::execServerRunCommand },
			{ "SimpleParse", &UConsoleComponent::execSimpleParse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConsoleComponent_AddMessage_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_AddMessage_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleComponent_AddMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventAddMessage_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_AddMessage_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_AddMessage_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConsoleComponent_AddMessage_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventAddMessage_Parms, MessageType), Z_Construct_UEnum_GameplayConsole_EMessageType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_AddMessage_Statics::NewProp_Tooltip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleComponent_AddMessage_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventAddMessage_Parms, Tooltip), METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_AddMessage_Statics::NewProp_Tooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_AddMessage_Statics::NewProp_Tooltip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleComponent_AddMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_AddMessage_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_AddMessage_Statics::NewProp_MessageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_AddMessage_Statics::NewProp_Tooltip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_AddMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleComponent_AddMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleComponent, nullptr, "AddMessage", nullptr, nullptr, sizeof(ConsoleComponent_eventAddMessage_Parms), Z_Construct_UFunction_UConsoleComponent_AddMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_AddMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_AddMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_AddMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleComponent_AddMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleComponent_AddMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics
	{
		struct ConsoleComponent_eventAutoComplete_Parms
		{
			FString Text;
			TArray<FString> Options;
			int32 ArgumentIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Options_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArgumentIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventAutoComplete_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventAutoComplete_Parms, Options), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::NewProp_ArgumentIndex = { "ArgumentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventAutoComplete_Parms, ArgumentIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConsoleComponent_eventAutoComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConsoleComponent_eventAutoComplete_Parms), &Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::NewProp_Options_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::NewProp_ArgumentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleComponent, nullptr, "AutoComplete", nullptr, nullptr, sizeof(ConsoleComponent_eventAutoComplete_Parms), Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleComponent_AutoComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleComponent_AutoComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleComponent_ClientAddMessage_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_ClientAddMessage_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleComponent_ClientAddMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventClientAddMessage_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_ClientAddMessage_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_ClientAddMessage_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConsoleComponent_ClientAddMessage_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventClientAddMessage_Parms, MessageType), Z_Construct_UEnum_GameplayConsole_EMessageType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_ClientAddMessage_Statics::NewProp_Tooltip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleComponent_ClientAddMessage_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventClientAddMessage_Parms, Tooltip), METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_ClientAddMessage_Statics::NewProp_Tooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_ClientAddMessage_Statics::NewProp_Tooltip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleComponent_ClientAddMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_ClientAddMessage_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_ClientAddMessage_Statics::NewProp_MessageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_ClientAddMessage_Statics::NewProp_Tooltip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_ClientAddMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleComponent_ClientAddMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleComponent, nullptr, "ClientAddMessage", nullptr, nullptr, sizeof(ConsoleComponent_eventClientAddMessage_Parms), Z_Construct_UFunction_UConsoleComponent_ClientAddMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_ClientAddMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_ClientAddMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_ClientAddMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleComponent_ClientAddMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleComponent_ClientAddMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleComponent_GetCommand_Statics
	{
		struct ConsoleComponent_eventGetCommand_Parms
		{
			FString Text;
			TSubclassOf<UConsoleCommand>  CommandClass;
			uint8 AliasIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CommandClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AliasIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_GetCommand_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleComponent_GetCommand_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventGetCommand_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_GetCommand_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_GetCommand_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UConsoleComponent_GetCommand_Statics::NewProp_CommandClass = { "CommandClass", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventGetCommand_Parms, CommandClass), Z_Construct_UClass_UConsoleCommand_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConsoleComponent_GetCommand_Statics::NewProp_AliasIndex = { "AliasIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventGetCommand_Parms, AliasIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConsoleComponent_GetCommand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConsoleComponent_eventGetCommand_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleComponent_GetCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConsoleComponent_eventGetCommand_Parms), &Z_Construct_UFunction_UConsoleComponent_GetCommand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleComponent_GetCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_GetCommand_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_GetCommand_Statics::NewProp_CommandClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_GetCommand_Statics::NewProp_AliasIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_GetCommand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_GetCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleComponent_GetCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleComponent, nullptr, "GetCommand", nullptr, nullptr, sizeof(ConsoleComponent_eventGetCommand_Parms), Z_Construct_UFunction_UConsoleComponent_GetCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_GetCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_GetCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_GetCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleComponent_GetCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleComponent_GetCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleComponent_GetGameMode_Statics
	{
		struct ConsoleComponent_eventGetGameMode_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConsoleComponent_GetGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventGetGameMode_Parms, ReturnValue), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleComponent_GetGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_GetGameMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_GetGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleComponent_GetGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleComponent, nullptr, "GetGameMode", nullptr, nullptr, sizeof(ConsoleComponent_eventGetGameMode_Parms), Z_Construct_UFunction_UConsoleComponent_GetGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_GetGameMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_GetGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_GetGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleComponent_GetGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleComponent_GetGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleComponent_GetGameState_Statics
	{
		struct ConsoleComponent_eventGetGameState_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConsoleComponent_GetGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventGetGameState_Parms, ReturnValue), Z_Construct_UClass_AGameStateBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleComponent_GetGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_GetGameState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_GetGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleComponent_GetGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleComponent, nullptr, "GetGameState", nullptr, nullptr, sizeof(ConsoleComponent_eventGetGameState_Parms), Z_Construct_UFunction_UConsoleComponent_GetGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_GetGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_GetGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_GetGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleComponent_GetGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleComponent_GetGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventMulticastAddMessage_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventMulticastAddMessage_Parms, MessageType), Z_Construct_UEnum_GameplayConsole_EMessageType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage_Statics::NewProp_Tooltip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventMulticastAddMessage_Parms, Tooltip), METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage_Statics::NewProp_Tooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage_Statics::NewProp_Tooltip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage_Statics::NewProp_MessageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage_Statics::NewProp_Tooltip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleComponent, nullptr, "MulticastAddMessage", nullptr, nullptr, sizeof(ConsoleComponent_eventMulticastAddMessage_Parms), Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleComponent_Parse_Statics
	{
		struct ConsoleComponent_eventParse_Parms
		{
			FString Text;
			TSubclassOf<UConsoleCommand>  CommandClass;
			TArray<FConsoleArgument> arguments;
			uint8 AliasIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CommandClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_arguments_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arguments;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AliasIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_Parse_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleComponent_Parse_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventParse_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_Parse_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_Parse_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UConsoleComponent_Parse_Statics::NewProp_CommandClass = { "CommandClass", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventParse_Parms, CommandClass), Z_Construct_UClass_UConsoleCommand_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConsoleComponent_Parse_Statics::NewProp_arguments_Inner = { "arguments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConsoleArgument, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConsoleComponent_Parse_Statics::NewProp_arguments = { "arguments", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventParse_Parms, arguments), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConsoleComponent_Parse_Statics::NewProp_AliasIndex = { "AliasIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventParse_Parms, AliasIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConsoleComponent_Parse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConsoleComponent_eventParse_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleComponent_Parse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConsoleComponent_eventParse_Parms), &Z_Construct_UFunction_UConsoleComponent_Parse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleComponent_Parse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_Parse_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_Parse_Statics::NewProp_CommandClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_Parse_Statics::NewProp_arguments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_Parse_Statics::NewProp_arguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_Parse_Statics::NewProp_AliasIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_Parse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_Parse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleComponent_Parse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleComponent, nullptr, "Parse", nullptr, nullptr, sizeof(ConsoleComponent_eventParse_Parms), Z_Construct_UFunction_UConsoleComponent_Parse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_Parse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_Parse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_Parse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleComponent_Parse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleComponent_Parse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleComponent_RunCommand_Statics
	{
		struct ConsoleComponent_eventRunCommand_Parms
		{
			FString Text;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_RunCommand_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleComponent_RunCommand_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventRunCommand_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_RunCommand_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_RunCommand_Statics::NewProp_Text_MetaData)) };
	void Z_Construct_UFunction_UConsoleComponent_RunCommand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConsoleComponent_eventRunCommand_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleComponent_RunCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConsoleComponent_eventRunCommand_Parms), &Z_Construct_UFunction_UConsoleComponent_RunCommand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleComponent_RunCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_RunCommand_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_RunCommand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_RunCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleComponent_RunCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleComponent, nullptr, "RunCommand", nullptr, nullptr, sizeof(ConsoleComponent_eventRunCommand_Parms), Z_Construct_UFunction_UConsoleComponent_RunCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_RunCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_RunCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_RunCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleComponent_RunCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleComponent_RunCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleComponent_ServerAddMessage_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_ServerAddMessage_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleComponent_ServerAddMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventServerAddMessage_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_ServerAddMessage_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_ServerAddMessage_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConsoleComponent_ServerAddMessage_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventServerAddMessage_Parms, MessageType), Z_Construct_UEnum_GameplayConsole_EMessageType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_ServerAddMessage_Statics::NewProp_Tooltip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleComponent_ServerAddMessage_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventServerAddMessage_Parms, Tooltip), METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_ServerAddMessage_Statics::NewProp_Tooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_ServerAddMessage_Statics::NewProp_Tooltip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleComponent_ServerAddMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_ServerAddMessage_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_ServerAddMessage_Statics::NewProp_MessageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_ServerAddMessage_Statics::NewProp_Tooltip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_ServerAddMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleComponent_ServerAddMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleComponent, nullptr, "ServerAddMessage", nullptr, nullptr, sizeof(ConsoleComponent_eventServerAddMessage_Parms), Z_Construct_UFunction_UConsoleComponent_ServerAddMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_ServerAddMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_ServerAddMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_ServerAddMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleComponent_ServerAddMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleComponent_ServerAddMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleComponent_ServerRunCommand_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CommandIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_arguments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arguments;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AliasIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConsoleComponent_ServerRunCommand_Statics::NewProp_CommandIndex = { "CommandIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventServerRunCommand_Parms, CommandIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConsoleComponent_ServerRunCommand_Statics::NewProp_arguments_Inner = { "arguments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConsoleArgument, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_ServerRunCommand_Statics::NewProp_arguments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConsoleComponent_ServerRunCommand_Statics::NewProp_arguments = { "arguments", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventServerRunCommand_Parms, arguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_ServerRunCommand_Statics::NewProp_arguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_ServerRunCommand_Statics::NewProp_arguments_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConsoleComponent_ServerRunCommand_Statics::NewProp_AliasIndex = { "AliasIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventServerRunCommand_Parms, AliasIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleComponent_ServerRunCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_ServerRunCommand_Statics::NewProp_CommandIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_ServerRunCommand_Statics::NewProp_arguments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_ServerRunCommand_Statics::NewProp_arguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_ServerRunCommand_Statics::NewProp_AliasIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_ServerRunCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleComponent_ServerRunCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleComponent, nullptr, "ServerRunCommand", nullptr, nullptr, sizeof(ConsoleComponent_eventServerRunCommand_Parms), Z_Construct_UFunction_UConsoleComponent_ServerRunCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_ServerRunCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_ServerRunCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_ServerRunCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleComponent_ServerRunCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleComponent_ServerRunCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleComponent_SimpleParse_Statics
	{
		struct ConsoleComponent_eventSimpleParse_Parms
		{
			FString Text;
			TArray<FString> Elements;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Elements_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Elements;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_SimpleParse_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleComponent_SimpleParse_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventSimpleParse_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_SimpleParse_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_SimpleParse_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleComponent_SimpleParse_Statics::NewProp_Elements_Inner = { "Elements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConsoleComponent_SimpleParse_Statics::NewProp_Elements = { "Elements", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleComponent_eventSimpleParse_Parms, Elements), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleComponent_SimpleParse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_SimpleParse_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_SimpleParse_Statics::NewProp_Elements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleComponent_SimpleParse_Statics::NewProp_Elements,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleComponent_SimpleParse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConsoleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleComponent_SimpleParse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleComponent, nullptr, "SimpleParse", nullptr, nullptr, sizeof(ConsoleComponent_eventSimpleParse_Parms), Z_Construct_UFunction_UConsoleComponent_SimpleParse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_SimpleParse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleComponent_SimpleParse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleComponent_SimpleParse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleComponent_SimpleParse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleComponent_SimpleParse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UConsoleComponent_NoRegister()
	{
		return UConsoleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UConsoleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Commands_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Commands_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Commands;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAddMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAddMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConsoleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayConsole,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConsoleComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConsoleComponent_AddMessage, "AddMessage" }, // 1199719920
		{ &Z_Construct_UFunction_UConsoleComponent_AutoComplete, "AutoComplete" }, // 3861889886
		{ &Z_Construct_UFunction_UConsoleComponent_ClientAddMessage, "ClientAddMessage" }, // 838376555
		{ &Z_Construct_UFunction_UConsoleComponent_GetCommand, "GetCommand" }, // 3876284935
		{ &Z_Construct_UFunction_UConsoleComponent_GetGameMode, "GetGameMode" }, // 3871473901
		{ &Z_Construct_UFunction_UConsoleComponent_GetGameState, "GetGameState" }, // 1777005615
		{ &Z_Construct_UFunction_UConsoleComponent_MulticastAddMessage, "MulticastAddMessage" }, // 4164711479
		{ &Z_Construct_UFunction_UConsoleComponent_Parse, "Parse" }, // 3992780501
		{ &Z_Construct_UFunction_UConsoleComponent_RunCommand, "RunCommand" }, // 905233755
		{ &Z_Construct_UFunction_UConsoleComponent_ServerAddMessage, "ServerAddMessage" }, // 1225676211
		{ &Z_Construct_UFunction_UConsoleComponent_ServerRunCommand, "ServerRunCommand" }, // 3589697836
		{ &Z_Construct_UFunction_UConsoleComponent_SimpleParse, "SimpleParse" }, // 1768822309
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ConsoleComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConsoleComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UConsoleComponent_Statics::NewProp_Commands_Inner = { "Commands", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UConsoleCommand_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleComponent_Statics::NewProp_Commands_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConsoleComponent" },
		{ "ModuleRelativePath", "Public/ConsoleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConsoleComponent_Statics::NewProp_Commands = { "Commands", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleComponent, Commands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConsoleComponent_Statics::NewProp_Commands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleComponent_Statics::NewProp_Commands_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleComponent_Statics::NewProp_OnAddMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConsoleComponent" },
		{ "ModuleRelativePath", "Public/ConsoleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConsoleComponent_Statics::NewProp_OnAddMessage = { "OnAddMessage", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleComponent, OnAddMessage), Z_Construct_UDelegateFunction_GameplayConsole_MessageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UConsoleComponent_Statics::NewProp_OnAddMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleComponent_Statics::NewProp_OnAddMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConsoleComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleComponent_Statics::NewProp_Commands_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleComponent_Statics::NewProp_Commands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleComponent_Statics::NewProp_OnAddMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConsoleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConsoleComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConsoleComponent_Statics::ClassParams = {
		&UConsoleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UConsoleComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UConsoleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConsoleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConsoleComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConsoleComponent, 3871459259);
	template<> GAMEPLAYCONSOLE_API UClass* StaticClass<UConsoleComponent>()
	{
		return UConsoleComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConsoleComponent(Z_Construct_UClass_UConsoleComponent, &UConsoleComponent::StaticClass, TEXT("/Script/GameplayConsole"), TEXT("UConsoleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConsoleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
