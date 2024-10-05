// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Input.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInput() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UInput_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UInput();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionSetHandle();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionData();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionData();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputType();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputMotionData();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad();
// End Cross Module References
	DEFINE_FUNCTION(UInput::execActivateActionSet)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateActionSet(Z_Param_Handle,Z_Param_ActionSetHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execActivateActionSetLayer)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetLayerHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateActionSetLayer(Z_Param_Handle,Z_Param_ActionSetLayerHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execDeactivateActionSetLayer)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetLayerHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateActionSetLayer(Z_Param_Handle,Z_Param_ActionSetLayerHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execDeactivateAllActionSetLayers)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateAllActionSetLayers(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetActionOriginFromXboxOrigin)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_ENUM(ESteamCoreXboxOrigin,Z_Param_Origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamCoreInputActionOrigin*)Z_Param__Result=P_THIS->GetActionOriginFromXboxOrigin(Z_Param_Handle,ESteamCoreXboxOrigin(Z_Param_Origin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetActionSetHandle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ActionSetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputActionSetHandle*)Z_Param__Result=P_THIS->GetActionSetHandle(Z_Param_ActionSetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetActiveActionSetLayers)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_TARRAY_REF(FInputActionSetHandle,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActiveActionSetLayers(Z_Param_Handle,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetAnalogActionData)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_STRUCT(FInputAnalogActionHandle,Z_Param_AnalogActionHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputAnalogActionData*)Z_Param__Result=P_THIS->GetAnalogActionData(Z_Param_Handle,Z_Param_AnalogActionHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetAnalogActionHandle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PszActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputAnalogActionHandle*)Z_Param__Result=P_THIS->GetAnalogActionHandle(Z_Param_PszActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetAnalogActionOrigins)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetHandle);
		P_GET_STRUCT(FInputAnalogActionHandle,Z_Param_AnalogActionHandle);
		P_GET_TARRAY_REF(ESteamCoreInputActionOrigin,Z_Param_Out_OriginsOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAnalogActionOrigins(Z_Param_Handle,Z_Param_ActionSetHandle,Z_Param_AnalogActionHandle,Z_Param_Out_OriginsOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetControllerForGamepadIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputHandle*)Z_Param__Result=P_THIS->GetControllerForGamepadIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetCurrentActionSet)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputActionSetHandle*)Z_Param__Result=P_THIS->GetCurrentActionSet(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetDeviceBindingRevision)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Major);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Minor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDeviceBindingRevision(Z_Param_Handle,Z_Param_Out_Major,Z_Param_Out_Minor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetDigitalActionData)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_STRUCT(FInputDigitalActionHandle,Z_Param_DigitalActionHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputDigitalActionData*)Z_Param__Result=P_THIS->GetDigitalActionData(Z_Param_Handle,Z_Param_DigitalActionHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetDigitalActionHandle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PszActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputDigitalActionHandle*)Z_Param__Result=P_THIS->GetDigitalActionHandle(Z_Param_PszActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetDigitalActionOrigins)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetHandle);
		P_GET_STRUCT(FInputDigitalActionHandle,Z_Param_DigitalActionHandle);
		P_GET_TARRAY_REF(ESteamCoreInputActionOrigin,Z_Param_Out_OriginsOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDigitalActionOrigins(Z_Param_Handle,Z_Param_ActionSetHandle,Z_Param_DigitalActionHandle,Z_Param_Out_OriginsOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetGamepadIndexForController)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGamepadIndexForController(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetGlyphForActionOrigin)
	{
		P_GET_ENUM(ESteamCoreInputActionOrigin,Z_Param_Origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetGlyphForActionOrigin(ESteamCoreInputActionOrigin(Z_Param_Origin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetGlyphForXboxOrigin)
	{
		P_GET_ENUM(ESteamCoreXboxOrigin,Z_Param_Origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetGlyphForXboxOrigin(ESteamCoreXboxOrigin(Z_Param_Origin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetInputTypeForHandle)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamCoreInputType*)Z_Param__Result=P_THIS->GetInputTypeForHandle(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetMotionData)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputMotionData*)Z_Param__Result=P_THIS->GetMotionData(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetRemotePlaySessionID)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRemotePlaySessionID(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetStringForActionOrigin)
	{
		P_GET_ENUM(ESteamCoreInputActionOrigin,Z_Param_Origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringForActionOrigin(ESteamCoreInputActionOrigin(Z_Param_Origin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetStringForXboxOrigin)
	{
		P_GET_ENUM(ESteamCoreXboxOrigin,Z_Param_Origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringForXboxOrigin(ESteamCoreXboxOrigin(Z_Param_Origin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execSetLEDColor)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_PROPERTY(FByteProperty,Z_Param_ColorR);
		P_GET_PROPERTY(FByteProperty,Z_Param_ColorG);
		P_GET_PROPERTY(FByteProperty,Z_Param_ColorB);
		P_GET_ENUM(ESteamCoreInputLEDFlag,Z_Param_Flags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLEDColor(Z_Param_Handle,Z_Param_ColorR,Z_Param_ColorG,Z_Param_ColorB,ESteamCoreInputLEDFlag(Z_Param_Flags));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execShowBindingPanel)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShowBindingPanel(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execStopAnalogActionMomentum)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_STRUCT(FInputAnalogActionHandle,Z_Param_EAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAnalogActionMomentum(Z_Param_Handle,Z_Param_EAction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execTranslateActionOrigin)
	{
		P_GET_ENUM(ESteamCoreInputType,Z_Param_DestinationInputType);
		P_GET_ENUM(ESteamCoreInputActionOrigin,Z_Param_SourceOrigin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamCoreInputActionOrigin*)Z_Param__Result=P_THIS->TranslateActionOrigin(ESteamCoreInputType(Z_Param_DestinationInputType),ESteamCoreInputActionOrigin(Z_Param_SourceOrigin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execTriggerHapticPulse)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_ENUM(ESteamCoreControllerPad,Z_Param_TargetPad);
		P_GET_PROPERTY(FByteProperty,Z_Param_DurationMicroSec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerHapticPulse(Z_Param_Handle,ESteamCoreControllerPad(Z_Param_TargetPad),Z_Param_DurationMicroSec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execTriggerRepeatedHapticPulse)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_ENUM(ESteamCoreControllerPad,Z_Param_TargetPad);
		P_GET_PROPERTY(FByteProperty,Z_Param_DurationMicroSec);
		P_GET_PROPERTY(FByteProperty,Z_Param_OffMicroSec);
		P_GET_PROPERTY(FByteProperty,Z_Param_Repeat);
		P_GET_PROPERTY(FByteProperty,Z_Param_Flags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerRepeatedHapticPulse(Z_Param_Handle,ESteamCoreControllerPad(Z_Param_TargetPad),Z_Param_DurationMicroSec,Z_Param_OffMicroSec,Z_Param_Repeat,Z_Param_Flags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execTriggerVibration)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_PROPERTY(FByteProperty,Z_Param_LeftSpeed);
		P_GET_PROPERTY(FByteProperty,Z_Param_RightSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerVibration(Z_Param_Handle,Z_Param_LeftSpeed,Z_Param_RightSpeed);
		P_NATIVE_END;
	}
	void UInput::StaticRegisterNativesUInput()
	{
		UClass* Class = UInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateActionSet", &UInput::execActivateActionSet },
			{ "ActivateActionSetLayer", &UInput::execActivateActionSetLayer },
			{ "DeactivateActionSetLayer", &UInput::execDeactivateActionSetLayer },
			{ "DeactivateAllActionSetLayers", &UInput::execDeactivateAllActionSetLayers },
			{ "GetActionOriginFromXboxOrigin", &UInput::execGetActionOriginFromXboxOrigin },
			{ "GetActionSetHandle", &UInput::execGetActionSetHandle },
			{ "GetActiveActionSetLayers", &UInput::execGetActiveActionSetLayers },
			{ "GetAnalogActionData", &UInput::execGetAnalogActionData },
			{ "GetAnalogActionHandle", &UInput::execGetAnalogActionHandle },
			{ "GetAnalogActionOrigins", &UInput::execGetAnalogActionOrigins },
			{ "GetControllerForGamepadIndex", &UInput::execGetControllerForGamepadIndex },
			{ "GetCurrentActionSet", &UInput::execGetCurrentActionSet },
			{ "GetDeviceBindingRevision", &UInput::execGetDeviceBindingRevision },
			{ "GetDigitalActionData", &UInput::execGetDigitalActionData },
			{ "GetDigitalActionHandle", &UInput::execGetDigitalActionHandle },
			{ "GetDigitalActionOrigins", &UInput::execGetDigitalActionOrigins },
			{ "GetGamepadIndexForController", &UInput::execGetGamepadIndexForController },
			{ "GetGlyphForActionOrigin", &UInput::execGetGlyphForActionOrigin },
			{ "GetGlyphForXboxOrigin", &UInput::execGetGlyphForXboxOrigin },
			{ "GetInputTypeForHandle", &UInput::execGetInputTypeForHandle },
			{ "GetMotionData", &UInput::execGetMotionData },
			{ "GetRemotePlaySessionID", &UInput::execGetRemotePlaySessionID },
			{ "GetStringForActionOrigin", &UInput::execGetStringForActionOrigin },
			{ "GetStringForXboxOrigin", &UInput::execGetStringForXboxOrigin },
			{ "SetLEDColor", &UInput::execSetLEDColor },
			{ "ShowBindingPanel", &UInput::execShowBindingPanel },
			{ "StopAnalogActionMomentum", &UInput::execStopAnalogActionMomentum },
			{ "TranslateActionOrigin", &UInput::execTranslateActionOrigin },
			{ "TriggerHapticPulse", &UInput::execTriggerHapticPulse },
			{ "TriggerRepeatedHapticPulse", &UInput::execTriggerRepeatedHapticPulse },
			{ "TriggerVibration", &UInput::execTriggerVibration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInput_ActivateActionSet_Statics
	{
		struct Input_eventActivateActionSet_Parms
		{
			FInputHandle Handle;
			FInputActionSetHandle ActionSetHandle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_ActivateActionSet_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventActivateActionSet_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_ActivateActionSet_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventActivateActionSet_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_ActivateActionSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ActivateActionSet_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ActivateActionSet_Statics::NewProp_ActionSetHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_ActivateActionSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_ActivateActionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "ActivateActionSet", nullptr, nullptr, sizeof(Input_eventActivateActionSet_Parms), Z_Construct_UFunction_UInput_ActivateActionSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ActivateActionSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_ActivateActionSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ActivateActionSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_ActivateActionSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_ActivateActionSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics
	{
		struct Input_eventActivateActionSetLayer_Parms
		{
			FInputHandle Handle;
			FInputActionSetHandle ActionSetLayerHandle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionSetLayerHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventActivateActionSetLayer_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle = { "ActionSetLayerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventActivateActionSetLayer_Parms, ActionSetLayerHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "ActivateActionSetLayer", nullptr, nullptr, sizeof(Input_eventActivateActionSetLayer_Parms), Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_ActivateActionSetLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics
	{
		struct Input_eventDeactivateActionSetLayer_Parms
		{
			FInputHandle Handle;
			FInputActionSetHandle ActionSetLayerHandle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionSetLayerHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventDeactivateActionSetLayer_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle = { "ActionSetLayerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventDeactivateActionSetLayer_Parms, ActionSetLayerHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "DeactivateActionSetLayer", nullptr, nullptr, sizeof(Input_eventDeactivateActionSetLayer_Parms), Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_DeactivateActionSetLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics
	{
		struct Input_eventDeactivateAllActionSetLayers_Parms
		{
			FInputHandle Handle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventDeactivateAllActionSetLayers_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::NewProp_Handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "DeactivateAllActionSetLayers", nullptr, nullptr, sizeof(Input_eventDeactivateAllActionSetLayers_Parms), Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics
	{
		struct Input_eventGetActionOriginFromXboxOrigin_Parms
		{
			FInputHandle Handle;
			ESteamCoreXboxOrigin Origin;
			ESteamCoreInputActionOrigin ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetActionOriginFromXboxOrigin_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetActionOriginFromXboxOrigin_Parms, Origin), Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetActionOriginFromXboxOrigin_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetActionOriginFromXboxOrigin", nullptr, nullptr, sizeof(Input_eventGetActionOriginFromXboxOrigin_Parms), Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetActionSetHandle_Statics
	{
		struct Input_eventGetActionSetHandle_Parms
		{
			FString ActionSetName;
			FInputActionSetHandle ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActionSetName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::NewProp_ActionSetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::NewProp_ActionSetName = { "ActionSetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetActionSetHandle_Parms, ActionSetName), METADATA_PARAMS(Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::NewProp_ActionSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::NewProp_ActionSetName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetActionSetHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::NewProp_ActionSetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetActionSetHandle", nullptr, nullptr, sizeof(Input_eventGetActionSetHandle_Parms), Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetActionSetHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics
	{
		struct Input_eventGetActiveActionSetLayers_Parms
		{
			FInputHandle Handle;
			TArray<FInputActionSetHandle> Data;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetActiveActionSetLayers_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetActiveActionSetLayers_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetActiveActionSetLayers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetActiveActionSetLayers", nullptr, nullptr, sizeof(Input_eventGetActiveActionSetLayers_Parms), Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetActiveActionSetLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetAnalogActionData_Statics
	{
		struct Input_eventGetAnalogActionData_Parms
		{
			FInputHandle Handle;
			FInputAnalogActionHandle AnalogActionHandle;
			FInputAnalogActionData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnalogActionHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetAnalogActionData_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_AnalogActionHandle = { "AnalogActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetAnalogActionData_Parms, AnalogActionHandle), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetAnalogActionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputAnalogActionData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_AnalogActionHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetAnalogActionData", nullptr, nullptr, sizeof(Input_eventGetAnalogActionData_Parms), Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetAnalogActionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics
	{
		struct Input_eventGetAnalogActionHandle_Parms
		{
			FString PszActionName;
			FInputAnalogActionHandle ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PszActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PszActionName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::NewProp_PszActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::NewProp_PszActionName = { "PszActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetAnalogActionHandle_Parms, PszActionName), METADATA_PARAMS(Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::NewProp_PszActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::NewProp_PszActionName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetAnalogActionHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::NewProp_PszActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetAnalogActionHandle", nullptr, nullptr, sizeof(Input_eventGetAnalogActionHandle_Parms), Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetAnalogActionHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics
	{
		struct Input_eventGetAnalogActionOrigins_Parms
		{
			FInputHandle Handle;
			FInputActionSetHandle ActionSetHandle;
			FInputAnalogActionHandle AnalogActionHandle;
			TArray<ESteamCoreInputActionOrigin> OriginsOut;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnalogActionHandle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OriginsOut_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OriginsOut_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OriginsOut;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetAnalogActionOrigins_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetAnalogActionOrigins_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_AnalogActionHandle = { "AnalogActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetAnalogActionOrigins_Parms, AnalogActionHandle), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_OriginsOut_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_OriginsOut_Inner = { "OriginsOut", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_OriginsOut = { "OriginsOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetAnalogActionOrigins_Parms, OriginsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetAnalogActionOrigins_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_ActionSetHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_AnalogActionHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_OriginsOut_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_OriginsOut_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_OriginsOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetAnalogActionOrigins", nullptr, nullptr, sizeof(Input_eventGetAnalogActionOrigins_Parms), Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetAnalogActionOrigins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics
	{
		struct Input_eventGetControllerForGamepadIndex_Parms
		{
			int32 Index;
			FInputHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetControllerForGamepadIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetControllerForGamepadIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetControllerForGamepadIndex", nullptr, nullptr, sizeof(Input_eventGetControllerForGamepadIndex_Parms), Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetControllerForGamepadIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics
	{
		struct Input_eventGetCurrentActionSet_Parms
		{
			FInputHandle Handle;
			FInputActionSetHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetCurrentActionSet_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetCurrentActionSet_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetCurrentActionSet", nullptr, nullptr, sizeof(Input_eventGetCurrentActionSet_Parms), Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetCurrentActionSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics
	{
		struct Input_eventGetDeviceBindingRevision_Parms
		{
			FInputHandle Handle;
			int32 Major;
			int32 Minor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Major;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Minor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDeviceBindingRevision_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_Major = { "Major", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDeviceBindingRevision_Parms, Major), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_Minor = { "Minor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDeviceBindingRevision_Parms, Minor), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Input_eventGetDeviceBindingRevision_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Input_eventGetDeviceBindingRevision_Parms), &Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_Major,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_Minor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetDeviceBindingRevision", nullptr, nullptr, sizeof(Input_eventGetDeviceBindingRevision_Parms), Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetDeviceBindingRevision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetDigitalActionData_Statics
	{
		struct Input_eventGetDigitalActionData_Parms
		{
			FInputHandle Handle;
			FInputDigitalActionHandle DigitalActionHandle;
			FInputDigitalActionData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DigitalActionHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDigitalActionData_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_DigitalActionHandle = { "DigitalActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDigitalActionData_Parms, DigitalActionHandle), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDigitalActionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputDigitalActionData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_DigitalActionHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetDigitalActionData", nullptr, nullptr, sizeof(Input_eventGetDigitalActionData_Parms), Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetDigitalActionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics
	{
		struct Input_eventGetDigitalActionHandle_Parms
		{
			FString PszActionName;
			FInputDigitalActionHandle ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PszActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PszActionName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::NewProp_PszActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::NewProp_PszActionName = { "PszActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDigitalActionHandle_Parms, PszActionName), METADATA_PARAMS(Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::NewProp_PszActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::NewProp_PszActionName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDigitalActionHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::NewProp_PszActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetDigitalActionHandle", nullptr, nullptr, sizeof(Input_eventGetDigitalActionHandle_Parms), Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetDigitalActionHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics
	{
		struct Input_eventGetDigitalActionOrigins_Parms
		{
			FInputHandle Handle;
			FInputActionSetHandle ActionSetHandle;
			FInputDigitalActionHandle DigitalActionHandle;
			TArray<ESteamCoreInputActionOrigin> OriginsOut;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DigitalActionHandle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OriginsOut_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OriginsOut_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OriginsOut;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDigitalActionOrigins_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDigitalActionOrigins_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_DigitalActionHandle = { "DigitalActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDigitalActionOrigins_Parms, DigitalActionHandle), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_OriginsOut_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_OriginsOut_Inner = { "OriginsOut", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_OriginsOut = { "OriginsOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDigitalActionOrigins_Parms, OriginsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDigitalActionOrigins_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_ActionSetHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_DigitalActionHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_OriginsOut_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_OriginsOut_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_OriginsOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetDigitalActionOrigins", nullptr, nullptr, sizeof(Input_eventGetDigitalActionOrigins_Parms), Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetDigitalActionOrigins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics
	{
		struct Input_eventGetGamepadIndexForController_Parms
		{
			FInputHandle Handle;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetGamepadIndexForController_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetGamepadIndexForController_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetGamepadIndexForController", nullptr, nullptr, sizeof(Input_eventGetGamepadIndexForController_Parms), Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetGamepadIndexForController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics
	{
		struct Input_eventGetGlyphForActionOrigin_Parms
		{
			ESteamCoreInputActionOrigin Origin;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetGlyphForActionOrigin_Parms, Origin), Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetGlyphForActionOrigin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::NewProp_Origin_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetGlyphForActionOrigin", nullptr, nullptr, sizeof(Input_eventGetGlyphForActionOrigin_Parms), Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetGlyphForActionOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics
	{
		struct Input_eventGetGlyphForXboxOrigin_Parms
		{
			ESteamCoreXboxOrigin Origin;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetGlyphForXboxOrigin_Parms, Origin), Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetGlyphForXboxOrigin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_Origin_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetGlyphForXboxOrigin", nullptr, nullptr, sizeof(Input_eventGetGlyphForXboxOrigin_Parms), Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics
	{
		struct Input_eventGetInputTypeForHandle_Parms
		{
			FInputHandle Handle;
			ESteamCoreInputType ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetInputTypeForHandle_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetInputTypeForHandle_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamCoreInputType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetInputTypeForHandle", nullptr, nullptr, sizeof(Input_eventGetInputTypeForHandle_Parms), Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetInputTypeForHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetMotionData_Statics
	{
		struct Input_eventGetMotionData_Parms
		{
			FInputHandle Handle;
			FInputMotionData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetMotionData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetMotionData_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetMotionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetMotionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputMotionData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetMotionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetMotionData_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetMotionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetMotionData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetMotionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetMotionData", nullptr, nullptr, sizeof(Input_eventGetMotionData_Parms), Z_Construct_UFunction_UInput_GetMotionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetMotionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetMotionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetMotionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetMotionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetMotionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics
	{
		struct Input_eventGetRemotePlaySessionID_Parms
		{
			FInputHandle Handle;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetRemotePlaySessionID_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetRemotePlaySessionID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetRemotePlaySessionID", nullptr, nullptr, sizeof(Input_eventGetRemotePlaySessionID_Parms), Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetRemotePlaySessionID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics
	{
		struct Input_eventGetStringForActionOrigin_Parms
		{
			ESteamCoreInputActionOrigin Origin;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetStringForActionOrigin_Parms, Origin), Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetStringForActionOrigin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::NewProp_Origin_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetStringForActionOrigin", nullptr, nullptr, sizeof(Input_eventGetStringForActionOrigin_Parms), Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetStringForActionOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics
	{
		struct Input_eventGetStringForXboxOrigin_Parms
		{
			ESteamCoreXboxOrigin Origin;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetStringForXboxOrigin_Parms, Origin), Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetStringForXboxOrigin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_Origin_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetStringForXboxOrigin", nullptr, nullptr, sizeof(Input_eventGetStringForXboxOrigin_Parms), Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetStringForXboxOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_SetLEDColor_Statics
	{
		struct Input_eventSetLEDColor_Parms
		{
			FInputHandle Handle;
			uint8 ColorR;
			uint8 ColorG;
			uint8 ColorB;
			ESteamCoreInputLEDFlag Flags;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorR;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorG;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorB;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventSetLEDColor_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_ColorR = { "ColorR", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventSetLEDColor_Parms, ColorR), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_ColorG = { "ColorG", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventSetLEDColor_Parms, ColorG), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_ColorB = { "ColorB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventSetLEDColor_Parms, ColorB), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_Flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventSetLEDColor_Parms, Flags), Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_SetLEDColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_ColorR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_ColorG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_ColorB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_Flags_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_Flags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_SetLEDColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "SetLEDColor", nullptr, nullptr, sizeof(Input_eventSetLEDColor_Parms), Z_Construct_UFunction_UInput_SetLEDColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_SetLEDColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_SetLEDColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_SetLEDColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_SetLEDColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_SetLEDColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_ShowBindingPanel_Statics
	{
		struct Input_eventShowBindingPanel_Parms
		{
			FInputHandle Handle;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventShowBindingPanel_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Input_eventShowBindingPanel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Input_eventShowBindingPanel_Parms), &Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "ShowBindingPanel", nullptr, nullptr, sizeof(Input_eventShowBindingPanel_Parms), Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_ShowBindingPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics
	{
		struct Input_eventStopAnalogActionMomentum_Parms
		{
			FInputHandle Handle;
			FInputAnalogActionHandle EAction;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventStopAnalogActionMomentum_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::NewProp_EAction = { "EAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventStopAnalogActionMomentum_Parms, EAction), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::NewProp_EAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "StopAnalogActionMomentum", nullptr, nullptr, sizeof(Input_eventStopAnalogActionMomentum_Parms), Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_StopAnalogActionMomentum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics
	{
		struct Input_eventTranslateActionOrigin_Parms
		{
			ESteamCoreInputType DestinationInputType;
			ESteamCoreInputActionOrigin SourceOrigin;
			ESteamCoreInputActionOrigin ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DestinationInputType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DestinationInputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceOrigin_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SourceOrigin;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType = { "DestinationInputType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTranslateActionOrigin_Parms, DestinationInputType), Z_Construct_UEnum_SteamCore_ESteamCoreInputType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_SourceOrigin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_SourceOrigin = { "SourceOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTranslateActionOrigin_Parms, SourceOrigin), Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTranslateActionOrigin_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_SourceOrigin_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_SourceOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "TranslateActionOrigin", nullptr, nullptr, sizeof(Input_eventTranslateActionOrigin_Parms), Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_TranslateActionOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics
	{
		struct Input_eventTriggerHapticPulse_Parms
		{
			FInputHandle Handle;
			ESteamCoreControllerPad TargetPad;
			uint8 DurationMicroSec;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetPad_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetPad;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DurationMicroSec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerHapticPulse_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_TargetPad_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_TargetPad = { "TargetPad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerHapticPulse_Parms, TargetPad), Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_DurationMicroSec = { "DurationMicroSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerHapticPulse_Parms, DurationMicroSec), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_TargetPad_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_TargetPad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_DurationMicroSec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "TriggerHapticPulse", nullptr, nullptr, sizeof(Input_eventTriggerHapticPulse_Parms), Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_TriggerHapticPulse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics
	{
		struct Input_eventTriggerRepeatedHapticPulse_Parms
		{
			FInputHandle Handle;
			ESteamCoreControllerPad TargetPad;
			uint8 DurationMicroSec;
			uint8 OffMicroSec;
			uint8 Repeat;
			uint8 Flags;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetPad_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetPad;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DurationMicroSec;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OffMicroSec;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Repeat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_TargetPad_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_TargetPad = { "TargetPad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, TargetPad), Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_DurationMicroSec = { "DurationMicroSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, DurationMicroSec), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_OffMicroSec = { "OffMicroSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, OffMicroSec), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, Repeat), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, Flags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_TargetPad_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_TargetPad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_DurationMicroSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_OffMicroSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_Repeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_Flags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "TriggerRepeatedHapticPulse", nullptr, nullptr, sizeof(Input_eventTriggerRepeatedHapticPulse_Parms), Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_TriggerVibration_Statics
	{
		struct Input_eventTriggerVibration_Parms
		{
			FInputHandle Handle;
			uint8 LeftSpeed;
			uint8 RightSpeed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LeftSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RightSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerVibration_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_LeftSpeed = { "LeftSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerVibration_Parms, LeftSpeed), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_RightSpeed = { "RightSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerVibration_Parms, RightSpeed), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_TriggerVibration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_LeftSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_RightSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_TriggerVibration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_TriggerVibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "TriggerVibration", nullptr, nullptr, sizeof(Input_eventTriggerVibration_Parms), Z_Construct_UFunction_UInput_TriggerVibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerVibration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_TriggerVibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerVibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_TriggerVibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_TriggerVibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInput_NoRegister()
	{
		return UInput::StaticClass();
	}
	struct Z_Construct_UClass_UInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInput_ActivateActionSet, "ActivateActionSet" }, // 2499317631
		{ &Z_Construct_UFunction_UInput_ActivateActionSetLayer, "ActivateActionSetLayer" }, // 1319141411
		{ &Z_Construct_UFunction_UInput_DeactivateActionSetLayer, "DeactivateActionSetLayer" }, // 1572388835
		{ &Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers, "DeactivateAllActionSetLayers" }, // 1648155846
		{ &Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin, "GetActionOriginFromXboxOrigin" }, // 362053446
		{ &Z_Construct_UFunction_UInput_GetActionSetHandle, "GetActionSetHandle" }, // 2392344703
		{ &Z_Construct_UFunction_UInput_GetActiveActionSetLayers, "GetActiveActionSetLayers" }, // 2468307512
		{ &Z_Construct_UFunction_UInput_GetAnalogActionData, "GetAnalogActionData" }, // 4079059428
		{ &Z_Construct_UFunction_UInput_GetAnalogActionHandle, "GetAnalogActionHandle" }, // 1302206130
		{ &Z_Construct_UFunction_UInput_GetAnalogActionOrigins, "GetAnalogActionOrigins" }, // 152816195
		{ &Z_Construct_UFunction_UInput_GetControllerForGamepadIndex, "GetControllerForGamepadIndex" }, // 1446456571
		{ &Z_Construct_UFunction_UInput_GetCurrentActionSet, "GetCurrentActionSet" }, // 2982251444
		{ &Z_Construct_UFunction_UInput_GetDeviceBindingRevision, "GetDeviceBindingRevision" }, // 1185298583
		{ &Z_Construct_UFunction_UInput_GetDigitalActionData, "GetDigitalActionData" }, // 3671619063
		{ &Z_Construct_UFunction_UInput_GetDigitalActionHandle, "GetDigitalActionHandle" }, // 3324098424
		{ &Z_Construct_UFunction_UInput_GetDigitalActionOrigins, "GetDigitalActionOrigins" }, // 3154419109
		{ &Z_Construct_UFunction_UInput_GetGamepadIndexForController, "GetGamepadIndexForController" }, // 2059079737
		{ &Z_Construct_UFunction_UInput_GetGlyphForActionOrigin, "GetGlyphForActionOrigin" }, // 3139165638
		{ &Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin, "GetGlyphForXboxOrigin" }, // 1143689361
		{ &Z_Construct_UFunction_UInput_GetInputTypeForHandle, "GetInputTypeForHandle" }, // 303381603
		{ &Z_Construct_UFunction_UInput_GetMotionData, "GetMotionData" }, // 2733732799
		{ &Z_Construct_UFunction_UInput_GetRemotePlaySessionID, "GetRemotePlaySessionID" }, // 3110476948
		{ &Z_Construct_UFunction_UInput_GetStringForActionOrigin, "GetStringForActionOrigin" }, // 2701157860
		{ &Z_Construct_UFunction_UInput_GetStringForXboxOrigin, "GetStringForXboxOrigin" }, // 1216305626
		{ &Z_Construct_UFunction_UInput_SetLEDColor, "SetLEDColor" }, // 2400093508
		{ &Z_Construct_UFunction_UInput_ShowBindingPanel, "ShowBindingPanel" }, // 2325908094
		{ &Z_Construct_UFunction_UInput_StopAnalogActionMomentum, "StopAnalogActionMomentum" }, // 3469052080
		{ &Z_Construct_UFunction_UInput_TranslateActionOrigin, "TranslateActionOrigin" }, // 3158139481
		{ &Z_Construct_UFunction_UInput_TriggerHapticPulse, "TriggerHapticPulse" }, // 365422268
		{ &Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse, "TriggerRepeatedHapticPulse" }, // 1218140819
		{ &Z_Construct_UFunction_UInput_TriggerVibration, "TriggerVibration" }, // 1791039753
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Input.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Input.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInput_Statics::ClassParams = {
		&UInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInput, 4083669926);
	template<> STEAMCORE_API UClass* StaticClass<UInput>()
	{
		return UInput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInput(Z_Construct_UClass_UInput, &UInput::StaticClass, TEXT("/Script/SteamCore"), TEXT("UInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
