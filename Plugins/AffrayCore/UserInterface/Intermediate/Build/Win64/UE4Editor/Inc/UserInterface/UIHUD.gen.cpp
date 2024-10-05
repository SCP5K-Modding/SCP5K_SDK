// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/UIHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIHUD() {}
// Cross Module References
	USERINTERFACE_API UClass* Z_Construct_UClass_AUIHUD_NoRegister();
	USERINTERFACE_API UClass* Z_Construct_UClass_AUIHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	USERINTERFACE_API UClass* Z_Construct_UClass_UActivatableWidget_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_EPlayerActionReturn();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature();
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_HUDVisibility__DelegateSignature();
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_AddNotifier__DelegateSignature();
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_PlayerUpdated__DelegateSignature();
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_PlayerHealthUpdated__DelegateSignature();
	USERINTERFACE_API UClass* Z_Construct_UClass_UMainGameLayout_NoRegister();
	USERINTERFACE_API UClass* Z_Construct_UClass_UDynamicActivatableWidgetContainer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AUIHUD::execAddNotifier)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddNotifier(Z_Param_Out_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUIHUD::execAddWidgetToLayer)
	{
		P_GET_OBJECT(UClass,Z_Param_Widget);
		P_GET_STRUCT(FGameplayTag,Z_Param_Layer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActivatableWidget**)Z_Param__Result=P_THIS->AddWidgetToLayer(Z_Param_Widget,Z_Param_Layer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUIHUD::execBlockPlayer)
	{
		P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPlayerActionReturn*)Z_Param__Result=P_THIS->BlockPlayer(Z_Param_PlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUIHUD::execGetHUDVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHUDVisibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUIHUD::execIsPlayerBlocked)
	{
		P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerBlocked(Z_Param_PlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUIHUD::execPushPostGameUI)
	{
		P_GET_TARRAY(TSubclassOf<UActivatableWidget> ,Z_Param_WidgetList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PushPostGameUI(Z_Param_WidgetList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUIHUD::execPushUI)
	{
		P_GET_TARRAY(TSubclassOf<UActivatableWidget> ,Z_Param_WidgetList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PushUI(Z_Param_WidgetList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUIHUD::execSetChatWidget)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChatWidget(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUIHUD::execSetHUDVisibility)
	{
		P_GET_UBOOL(Z_Param_Visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHUDVisibility(Z_Param_Visible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUIHUD::execToggleHUD)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleHUD();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUIHUD::execUnblockPlayer)
	{
		P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPlayerActionReturn*)Z_Param__Result=P_THIS->UnblockPlayer(Z_Param_PlayerState);
		P_NATIVE_END;
	}
	static FName NAME_AUIHUD_AddChatMessage = FName(TEXT("AddChatMessage"));
	void AUIHUD::AddChatMessage(const FString& Name, const FString& Message)
	{
		UIHUD_eventAddChatMessage_Parms Parms;
		Parms.Name=Name;
		Parms.Message=Message;
		ProcessEvent(FindFunctionChecked(NAME_AUIHUD_AddChatMessage),&Parms);
	}
	static FName NAME_AUIHUD_DisplayKilledByUI = FName(TEXT("DisplayKilledByUI"));
	void AUIHUD::DisplayKilledByUI(APlayerState* PlayerState)
	{
		UIHUD_eventDisplayKilledByUI_Parms Parms;
		Parms.PlayerState=PlayerState;
		ProcessEvent(FindFunctionChecked(NAME_AUIHUD_DisplayKilledByUI),&Parms);
	}
	static FName NAME_AUIHUD_MainUIInitialised = FName(TEXT("MainUIInitialised"));
	void AUIHUD::MainUIInitialised()
	{
		ProcessEvent(FindFunctionChecked(NAME_AUIHUD_MainUIInitialised),NULL);
	}
	static FName NAME_AUIHUD_ShowChatWindow = FName(TEXT("ShowChatWindow"));
	void AUIHUD::ShowChatWindow(bool bIsUsingCommand)
	{
		UIHUD_eventShowChatWindow_Parms Parms;
		Parms.bIsUsingCommand=bIsUsingCommand ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AUIHUD_ShowChatWindow),&Parms);
	}
	static FName NAME_AUIHUD_UpdateHUDElementVisibility = FName(TEXT("UpdateHUDElementVisibility"));
	void AUIHUD::UpdateHUDElementVisibility()
	{
		ProcessEvent(FindFunctionChecked(NAME_AUIHUD_UpdateHUDElementVisibility),NULL);
	}
	void AUIHUD::StaticRegisterNativesAUIHUD()
	{
		UClass* Class = AUIHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNotifier", &AUIHUD::execAddNotifier },
			{ "AddWidgetToLayer", &AUIHUD::execAddWidgetToLayer },
			{ "BlockPlayer", &AUIHUD::execBlockPlayer },
			{ "GetHUDVisibility", &AUIHUD::execGetHUDVisibility },
			{ "IsPlayerBlocked", &AUIHUD::execIsPlayerBlocked },
			{ "PushPostGameUI", &AUIHUD::execPushPostGameUI },
			{ "PushUI", &AUIHUD::execPushUI },
			{ "SetChatWidget", &AUIHUD::execSetChatWidget },
			{ "SetHUDVisibility", &AUIHUD::execSetHUDVisibility },
			{ "ToggleHUD", &AUIHUD::execToggleHUD },
			{ "UnblockPlayer", &AUIHUD::execUnblockPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUIHUD_AddChatMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIHUD_AddChatMessage_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUIHUD_AddChatMessage_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIHUD_eventAddChatMessage_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_AUIHUD_AddChatMessage_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_AddChatMessage_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIHUD_AddChatMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUIHUD_AddChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIHUD_eventAddChatMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_AUIHUD_AddChatMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_AddChatMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIHUD_AddChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_AddChatMessage_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_AddChatMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIHUD_AddChatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIHUD_AddChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIHUD, nullptr, "AddChatMessage", nullptr, nullptr, sizeof(UIHUD_eventAddChatMessage_Parms), Z_Construct_UFunction_AUIHUD_AddChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_AddChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIHUD_AddChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_AddChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIHUD_AddChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIHUD_AddChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIHUD_AddNotifier_Statics
	{
		struct UIHUD_eventAddNotifier_Parms
		{
			FText Text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIHUD_AddNotifier_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AUIHUD_AddNotifier_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIHUD_eventAddNotifier_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_AUIHUD_AddNotifier_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_AddNotifier_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIHUD_AddNotifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_AddNotifier_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIHUD_AddNotifier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIHUD_AddNotifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIHUD, nullptr, "AddNotifier", nullptr, nullptr, sizeof(UIHUD_eventAddNotifier_Parms), Z_Construct_UFunction_AUIHUD_AddNotifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_AddNotifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIHUD_AddNotifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_AddNotifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIHUD_AddNotifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIHUD_AddNotifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIHUD_AddWidgetToLayer_Statics
	{
		struct UIHUD_eventAddWidgetToLayer_Parms
		{
			TSubclassOf<UActivatableWidget>  Widget;
			FGameplayTag Layer;
			UActivatableWidget* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Layer;
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AUIHUD_AddWidgetToLayer_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIHUD_eventAddWidgetToLayer_Parms, Widget), Z_Construct_UClass_UActivatableWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUIHUD_AddWidgetToLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIHUD_eventAddWidgetToLayer_Parms, Layer), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIHUD_AddWidgetToLayer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUIHUD_AddWidgetToLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIHUD_eventAddWidgetToLayer_Parms, ReturnValue), Z_Construct_UClass_UActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUIHUD_AddWidgetToLayer_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_AddWidgetToLayer_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIHUD_AddWidgetToLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_AddWidgetToLayer_Statics::NewProp_Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_AddWidgetToLayer_Statics::NewProp_Layer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_AddWidgetToLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIHUD_AddWidgetToLayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIHUD_AddWidgetToLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIHUD, nullptr, "AddWidgetToLayer", nullptr, nullptr, sizeof(UIHUD_eventAddWidgetToLayer_Parms), Z_Construct_UFunction_AUIHUD_AddWidgetToLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_AddWidgetToLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIHUD_AddWidgetToLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_AddWidgetToLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIHUD_AddWidgetToLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIHUD_AddWidgetToLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIHUD_BlockPlayer_Statics
	{
		struct UIHUD_eventBlockPlayer_Parms
		{
			APlayerState* PlayerState;
			EPlayerActionReturn ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUIHUD_BlockPlayer_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIHUD_eventBlockPlayer_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUIHUD_BlockPlayer_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AUIHUD_BlockPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIHUD_eventBlockPlayer_Parms, ReturnValue), Z_Construct_UEnum_UserInterface_EPlayerActionReturn, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIHUD_BlockPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_BlockPlayer_Statics::NewProp_PlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_BlockPlayer_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_BlockPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIHUD_BlockPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIHUD_BlockPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIHUD, nullptr, "BlockPlayer", nullptr, nullptr, sizeof(UIHUD_eventBlockPlayer_Parms), Z_Construct_UFunction_AUIHUD_BlockPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_BlockPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIHUD_BlockPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_BlockPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIHUD_BlockPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIHUD_BlockPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIHUD_DisplayKilledByUI_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUIHUD_DisplayKilledByUI_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIHUD_eventDisplayKilledByUI_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIHUD_DisplayKilledByUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_DisplayKilledByUI_Statics::NewProp_PlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIHUD_DisplayKilledByUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIHUD_DisplayKilledByUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIHUD, nullptr, "DisplayKilledByUI", nullptr, nullptr, sizeof(UIHUD_eventDisplayKilledByUI_Parms), Z_Construct_UFunction_AUIHUD_DisplayKilledByUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_DisplayKilledByUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIHUD_DisplayKilledByUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_DisplayKilledByUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIHUD_DisplayKilledByUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIHUD_DisplayKilledByUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIHUD_GetHUDVisibility_Statics
	{
		struct UIHUD_eventGetHUDVisibility_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUIHUD_GetHUDVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UIHUD_eventGetHUDVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUIHUD_GetHUDVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIHUD_eventGetHUDVisibility_Parms), &Z_Construct_UFunction_AUIHUD_GetHUDVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIHUD_GetHUDVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_GetHUDVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIHUD_GetHUDVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIHUD_GetHUDVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIHUD, nullptr, "GetHUDVisibility", nullptr, nullptr, sizeof(UIHUD_eventGetHUDVisibility_Parms), Z_Construct_UFunction_AUIHUD_GetHUDVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_GetHUDVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIHUD_GetHUDVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_GetHUDVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIHUD_GetHUDVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIHUD_GetHUDVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIHUD_IsPlayerBlocked_Statics
	{
		struct UIHUD_eventIsPlayerBlocked_Parms
		{
			APlayerState* PlayerState;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUIHUD_IsPlayerBlocked_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIHUD_eventIsPlayerBlocked_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUIHUD_IsPlayerBlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UIHUD_eventIsPlayerBlocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUIHUD_IsPlayerBlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIHUD_eventIsPlayerBlocked_Parms), &Z_Construct_UFunction_AUIHUD_IsPlayerBlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIHUD_IsPlayerBlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_IsPlayerBlocked_Statics::NewProp_PlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_IsPlayerBlocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIHUD_IsPlayerBlocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIHUD_IsPlayerBlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIHUD, nullptr, "IsPlayerBlocked", nullptr, nullptr, sizeof(UIHUD_eventIsPlayerBlocked_Parms), Z_Construct_UFunction_AUIHUD_IsPlayerBlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_IsPlayerBlocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIHUD_IsPlayerBlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_IsPlayerBlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIHUD_IsPlayerBlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIHUD_IsPlayerBlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIHUD_MainUIInitialised_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIHUD_MainUIInitialised_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIHUD_MainUIInitialised_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIHUD, nullptr, "MainUIInitialised", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIHUD_MainUIInitialised_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_MainUIInitialised_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIHUD_MainUIInitialised()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIHUD_MainUIInitialised_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIHUD_PushPostGameUI_Statics
	{
		struct UIHUD_eventPushPostGameUI_Parms
		{
			TArray<TSubclassOf<UActivatableWidget> > WidgetList;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WidgetList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AUIHUD_PushPostGameUI_Statics::NewProp_WidgetList_Inner = { "WidgetList", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActivatableWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUIHUD_PushPostGameUI_Statics::NewProp_WidgetList = { "WidgetList", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIHUD_eventPushPostGameUI_Parms, WidgetList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIHUD_PushPostGameUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_PushPostGameUI_Statics::NewProp_WidgetList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_PushPostGameUI_Statics::NewProp_WidgetList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIHUD_PushPostGameUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIHUD_PushPostGameUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIHUD, nullptr, "PushPostGameUI", nullptr, nullptr, sizeof(UIHUD_eventPushPostGameUI_Parms), Z_Construct_UFunction_AUIHUD_PushPostGameUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_PushPostGameUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIHUD_PushPostGameUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_PushPostGameUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIHUD_PushPostGameUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIHUD_PushPostGameUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIHUD_PushUI_Statics
	{
		struct UIHUD_eventPushUI_Parms
		{
			TArray<TSubclassOf<UActivatableWidget> > WidgetList;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WidgetList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AUIHUD_PushUI_Statics::NewProp_WidgetList_Inner = { "WidgetList", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActivatableWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUIHUD_PushUI_Statics::NewProp_WidgetList = { "WidgetList", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIHUD_eventPushUI_Parms, WidgetList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIHUD_PushUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_PushUI_Statics::NewProp_WidgetList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_PushUI_Statics::NewProp_WidgetList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIHUD_PushUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIHUD_PushUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIHUD, nullptr, "PushUI", nullptr, nullptr, sizeof(UIHUD_eventPushUI_Parms), Z_Construct_UFunction_AUIHUD_PushUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_PushUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIHUD_PushUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_PushUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIHUD_PushUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIHUD_PushUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIHUD_SetChatWidget_Statics
	{
		struct UIHUD_eventSetChatWidget_Parms
		{
			UWidget* Widget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIHUD_SetChatWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUIHUD_SetChatWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIHUD_eventSetChatWidget_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUIHUD_SetChatWidget_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_SetChatWidget_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIHUD_SetChatWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_SetChatWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIHUD_SetChatWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIHUD_SetChatWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIHUD, nullptr, "SetChatWidget", nullptr, nullptr, sizeof(UIHUD_eventSetChatWidget_Parms), Z_Construct_UFunction_AUIHUD_SetChatWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_SetChatWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIHUD_SetChatWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_SetChatWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIHUD_SetChatWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIHUD_SetChatWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIHUD_SetHUDVisibility_Statics
	{
		struct UIHUD_eventSetHUDVisibility_Parms
		{
			bool Visible;
		};
		static void NewProp_Visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUIHUD_SetHUDVisibility_Statics::NewProp_Visible_SetBit(void* Obj)
	{
		((UIHUD_eventSetHUDVisibility_Parms*)Obj)->Visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUIHUD_SetHUDVisibility_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIHUD_eventSetHUDVisibility_Parms), &Z_Construct_UFunction_AUIHUD_SetHUDVisibility_Statics::NewProp_Visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIHUD_SetHUDVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_SetHUDVisibility_Statics::NewProp_Visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIHUD_SetHUDVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIHUD_SetHUDVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIHUD, nullptr, "SetHUDVisibility", nullptr, nullptr, sizeof(UIHUD_eventSetHUDVisibility_Parms), Z_Construct_UFunction_AUIHUD_SetHUDVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_SetHUDVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIHUD_SetHUDVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_SetHUDVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIHUD_SetHUDVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIHUD_SetHUDVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIHUD_ShowChatWindow_Statics
	{
		static void NewProp_bIsUsingCommand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsingCommand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUIHUD_ShowChatWindow_Statics::NewProp_bIsUsingCommand_SetBit(void* Obj)
	{
		((UIHUD_eventShowChatWindow_Parms*)Obj)->bIsUsingCommand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUIHUD_ShowChatWindow_Statics::NewProp_bIsUsingCommand = { "bIsUsingCommand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIHUD_eventShowChatWindow_Parms), &Z_Construct_UFunction_AUIHUD_ShowChatWindow_Statics::NewProp_bIsUsingCommand_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIHUD_ShowChatWindow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_ShowChatWindow_Statics::NewProp_bIsUsingCommand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIHUD_ShowChatWindow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIHUD_ShowChatWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIHUD, nullptr, "ShowChatWindow", nullptr, nullptr, sizeof(UIHUD_eventShowChatWindow_Parms), Z_Construct_UFunction_AUIHUD_ShowChatWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_ShowChatWindow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIHUD_ShowChatWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_ShowChatWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIHUD_ShowChatWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIHUD_ShowChatWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIHUD_ToggleHUD_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIHUD_ToggleHUD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIHUD_ToggleHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIHUD, nullptr, "ToggleHUD", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIHUD_ToggleHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_ToggleHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIHUD_ToggleHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIHUD_ToggleHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIHUD_UnblockPlayer_Statics
	{
		struct UIHUD_eventUnblockPlayer_Parms
		{
			APlayerState* PlayerState;
			EPlayerActionReturn ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUIHUD_UnblockPlayer_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIHUD_eventUnblockPlayer_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUIHUD_UnblockPlayer_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AUIHUD_UnblockPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIHUD_eventUnblockPlayer_Parms, ReturnValue), Z_Construct_UEnum_UserInterface_EPlayerActionReturn, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIHUD_UnblockPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_UnblockPlayer_Statics::NewProp_PlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_UnblockPlayer_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIHUD_UnblockPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIHUD_UnblockPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIHUD_UnblockPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIHUD, nullptr, "UnblockPlayer", nullptr, nullptr, sizeof(UIHUD_eventUnblockPlayer_Parms), Z_Construct_UFunction_AUIHUD_UnblockPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_UnblockPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIHUD_UnblockPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_UnblockPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIHUD_UnblockPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIHUD_UnblockPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUIHUD_UpdateHUDElementVisibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUIHUD_UpdateHUDElementVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIHUD_UpdateHUDElementVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUIHUD, nullptr, "UpdateHUDElementVisibility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUIHUD_UpdateHUDElementVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIHUD_UpdateHUDElementVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUIHUD_UpdateHUDElementVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUIHUD_UpdateHUDElementVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUIHUD_NoRegister()
	{
		return AUIHUD::StaticClass();
	}
	struct Z_Construct_UClass_AUIHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAddChatMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAddChatMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHUDVisibilityChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHUDVisibilityChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAddNotifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAddNotifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerHealthUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerHealthUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxChatCharacterAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxChatCharacterAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainUIWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MainUIWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChatWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainUILayout_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainUILayout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PushGameUILayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PushGameUILayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicContainerWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DynamicContainerWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUIHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUIHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUIHUD_AddChatMessage, "AddChatMessage" }, // 414695870
		{ &Z_Construct_UFunction_AUIHUD_AddNotifier, "AddNotifier" }, // 651159203
		{ &Z_Construct_UFunction_AUIHUD_AddWidgetToLayer, "AddWidgetToLayer" }, // 3144473861
		{ &Z_Construct_UFunction_AUIHUD_BlockPlayer, "BlockPlayer" }, // 2656147315
		{ &Z_Construct_UFunction_AUIHUD_DisplayKilledByUI, "DisplayKilledByUI" }, // 447214999
		{ &Z_Construct_UFunction_AUIHUD_GetHUDVisibility, "GetHUDVisibility" }, // 1343244785
		{ &Z_Construct_UFunction_AUIHUD_IsPlayerBlocked, "IsPlayerBlocked" }, // 141872690
		{ &Z_Construct_UFunction_AUIHUD_MainUIInitialised, "MainUIInitialised" }, // 2641839344
		{ &Z_Construct_UFunction_AUIHUD_PushPostGameUI, "PushPostGameUI" }, // 1703470857
		{ &Z_Construct_UFunction_AUIHUD_PushUI, "PushUI" }, // 2703840780
		{ &Z_Construct_UFunction_AUIHUD_SetChatWidget, "SetChatWidget" }, // 2132560593
		{ &Z_Construct_UFunction_AUIHUD_SetHUDVisibility, "SetHUDVisibility" }, // 1386812622
		{ &Z_Construct_UFunction_AUIHUD_ShowChatWindow, "ShowChatWindow" }, // 3095091859
		{ &Z_Construct_UFunction_AUIHUD_ToggleHUD, "ToggleHUD" }, // 2750331584
		{ &Z_Construct_UFunction_AUIHUD_UnblockPlayer, "UnblockPlayer" }, // 209235965
		{ &Z_Construct_UFunction_AUIHUD_UpdateHUDElementVisibility, "UpdateHUDElementVisibility" }, // 3049252666
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIHUD_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UIHUD.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UIHUD.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIHUD_Statics::NewProp_OnAddChatMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIHUD" },
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AUIHUD_Statics::NewProp_OnAddChatMessage = { "OnAddChatMessage", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIHUD, OnAddChatMessage), Z_Construct_UDelegateFunction_UserInterface_AddChatMessage__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AUIHUD_Statics::NewProp_OnAddChatMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIHUD_Statics::NewProp_OnAddChatMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIHUD_Statics::NewProp_OnHUDVisibilityChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIHUD" },
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AUIHUD_Statics::NewProp_OnHUDVisibilityChanged = { "OnHUDVisibilityChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIHUD, OnHUDVisibilityChanged), Z_Construct_UDelegateFunction_UserInterface_HUDVisibility__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AUIHUD_Statics::NewProp_OnHUDVisibilityChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIHUD_Statics::NewProp_OnHUDVisibilityChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIHUD_Statics::NewProp_OnAddNotifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIHUD" },
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AUIHUD_Statics::NewProp_OnAddNotifier = { "OnAddNotifier", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIHUD, OnAddNotifier), Z_Construct_UDelegateFunction_UserInterface_AddNotifier__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AUIHUD_Statics::NewProp_OnAddNotifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIHUD_Statics::NewProp_OnAddNotifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIHUD_Statics::NewProp_OnPlayerUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIHUD" },
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AUIHUD_Statics::NewProp_OnPlayerUpdated = { "OnPlayerUpdated", nullptr, (EPropertyFlags)0x0010100010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIHUD, OnPlayerUpdated), Z_Construct_UDelegateFunction_UserInterface_PlayerUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AUIHUD_Statics::NewProp_OnPlayerUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIHUD_Statics::NewProp_OnPlayerUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIHUD_Statics::NewProp_OnPlayerHealthUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIHUD" },
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AUIHUD_Statics::NewProp_OnPlayerHealthUpdated = { "OnPlayerHealthUpdated", nullptr, (EPropertyFlags)0x0010100010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIHUD, OnPlayerHealthUpdated), Z_Construct_UDelegateFunction_UserInterface_PlayerHealthUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AUIHUD_Statics::NewProp_OnPlayerHealthUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIHUD_Statics::NewProp_OnPlayerHealthUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIHUD_Statics::NewProp_MaxChatCharacterAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIHUD" },
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUIHUD_Statics::NewProp_MaxChatCharacterAmount = { "MaxChatCharacterAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIHUD, MaxChatCharacterAmount), METADATA_PARAMS(Z_Construct_UClass_AUIHUD_Statics::NewProp_MaxChatCharacterAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIHUD_Statics::NewProp_MaxChatCharacterAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIHUD_Statics::NewProp_MainUIWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIHUD" },
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUIHUD_Statics::NewProp_MainUIWidgetClass = { "MainUIWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIHUD, MainUIWidgetClass), Z_Construct_UClass_UMainGameLayout_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUIHUD_Statics::NewProp_MainUIWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIHUD_Statics::NewProp_MainUIWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIHUD_Statics::NewProp_ChatWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIHUD_Statics::NewProp_ChatWidget = { "ChatWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIHUD, ChatWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIHUD_Statics::NewProp_ChatWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIHUD_Statics::NewProp_ChatWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIHUD_Statics::NewProp_MainUILayout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIHUD_Statics::NewProp_MainUILayout = { "MainUILayout", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIHUD, MainUILayout), Z_Construct_UClass_UMainGameLayout_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIHUD_Statics::NewProp_MainUILayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIHUD_Statics::NewProp_MainUILayout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIHUD_Statics::NewProp_PushGameUILayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIHUD" },
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIHUD_Statics::NewProp_PushGameUILayer = { "PushGameUILayer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIHUD, PushGameUILayer), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_AUIHUD_Statics::NewProp_PushGameUILayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIHUD_Statics::NewProp_PushGameUILayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIHUD_Statics::NewProp_DynamicContainerWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UIHUD" },
		{ "ModuleRelativePath", "Public/UIHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUIHUD_Statics::NewProp_DynamicContainerWidget = { "DynamicContainerWidget", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIHUD, DynamicContainerWidget), Z_Construct_UClass_UDynamicActivatableWidgetContainer_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUIHUD_Statics::NewProp_DynamicContainerWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIHUD_Statics::NewProp_DynamicContainerWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUIHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIHUD_Statics::NewProp_OnAddChatMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIHUD_Statics::NewProp_OnHUDVisibilityChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIHUD_Statics::NewProp_OnAddNotifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIHUD_Statics::NewProp_OnPlayerUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIHUD_Statics::NewProp_OnPlayerHealthUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIHUD_Statics::NewProp_MaxChatCharacterAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIHUD_Statics::NewProp_MainUIWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIHUD_Statics::NewProp_ChatWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIHUD_Statics::NewProp_MainUILayout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIHUD_Statics::NewProp_PushGameUILayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIHUD_Statics::NewProp_DynamicContainerWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUIHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUIHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUIHUD_Statics::ClassParams = {
		&AUIHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUIHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUIHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUIHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUIHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUIHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUIHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUIHUD, 3814497630);
	template<> USERINTERFACE_API UClass* StaticClass<AUIHUD>()
	{
		return AUIHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUIHUD(Z_Construct_UClass_AUIHUD, &AUIHUD::StaticClass, TEXT("/Script/UserInterface"), TEXT("AUIHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUIHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
