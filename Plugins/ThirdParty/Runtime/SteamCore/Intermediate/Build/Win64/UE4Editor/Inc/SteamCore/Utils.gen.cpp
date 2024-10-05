// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Utils.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUtils() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UUtils_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UUtils();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUniverse();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamNotificationPosition();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UUtils::execBOverlayNeedsPresent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::BOverlayNeedsPresent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetAppID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetAppID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetAppID_Pure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetAppID_Pure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetConnectedUniverse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamUniverse*)Z_Param__Result=UUtils::GetConnectedUniverse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetCurrentBatteryPower)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetCurrentBatteryPower();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetEnteredGamepadTextInput)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::GetEnteredGamepadTextInput(Z_Param_Out_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetEnteredGamepadTextLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetEnteredGamepadTextLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetImageRGBA)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_iImage);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::GetImageRGBA(Z_Param_iImage,Z_Param_Out_OutBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetImageSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_iImage);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Width);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Height);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::GetImageSize(Z_Param_iImage,Z_Param_Out_Width,Z_Param_Out_Height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetIPCCallCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetIPCCallCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetIPCountry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUtils::GetIPCountry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetSecondsSinceAppActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetSecondsSinceAppActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetSecondsSinceComputerActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetSecondsSinceComputerActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetServerRealTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetServerRealTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetSteamUILanguage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUtils::GetSteamUILanguage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execInitFilterText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::InitFilterText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execIsOverlayEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::IsOverlayEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execIsSteamChinaLauncher)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::IsSteamChinaLauncher();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execIsSteamInBigPictureMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::IsSteamInBigPictureMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execIsSteamRunningInVR)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::IsSteamRunningInVR();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execIsVRHeadsetStreamingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::IsVRHeadsetStreamingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execSetOverlayNotificationInset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_HorizontalInset);
		P_GET_PROPERTY(FIntProperty,Z_Param_VerticalInset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtils::SetOverlayNotificationInset(Z_Param_HorizontalInset,Z_Param_VerticalInset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execSetOverlayNotificationPosition)
	{
		P_GET_ENUM(ESteamNotificationPosition,Z_Param_NotificationPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtils::SetOverlayNotificationPosition(ESteamNotificationPosition(Z_Param_NotificationPosition));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execSetVRHeadsetStreamingEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtils::SetVRHeadsetStreamingEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execShowGamepadTextInput)
	{
		P_GET_ENUM(ESteamGamepadTextInputMode,Z_Param_InputMode);
		P_GET_ENUM(ESteamGamepadTextInputLineMode,Z_Param_LineInputMode);
		P_GET_PROPERTY(FStrProperty,Z_Param_Description);
		P_GET_PROPERTY(FIntProperty,Z_Param_CharMax);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExistingText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::ShowGamepadTextInput(ESteamGamepadTextInputMode(Z_Param_InputMode),ESteamGamepadTextInputLineMode(Z_Param_LineInputMode),Z_Param_Description,Z_Param_CharMax,Z_Param_ExistingText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execStartVRDashboard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtils::StartVRDashboard();
		P_NATIVE_END;
	}
	void UUtils::StaticRegisterNativesUUtils()
	{
		UClass* Class = UUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BOverlayNeedsPresent", &UUtils::execBOverlayNeedsPresent },
			{ "GetAppID", &UUtils::execGetAppID },
			{ "GetAppID_Pure", &UUtils::execGetAppID_Pure },
			{ "GetConnectedUniverse", &UUtils::execGetConnectedUniverse },
			{ "GetCurrentBatteryPower", &UUtils::execGetCurrentBatteryPower },
			{ "GetEnteredGamepadTextInput", &UUtils::execGetEnteredGamepadTextInput },
			{ "GetEnteredGamepadTextLength", &UUtils::execGetEnteredGamepadTextLength },
			{ "GetImageRGBA", &UUtils::execGetImageRGBA },
			{ "GetImageSize", &UUtils::execGetImageSize },
			{ "GetIPCCallCount", &UUtils::execGetIPCCallCount },
			{ "GetIPCountry", &UUtils::execGetIPCountry },
			{ "GetSecondsSinceAppActive", &UUtils::execGetSecondsSinceAppActive },
			{ "GetSecondsSinceComputerActive", &UUtils::execGetSecondsSinceComputerActive },
			{ "GetServerRealTime", &UUtils::execGetServerRealTime },
			{ "GetSteamUILanguage", &UUtils::execGetSteamUILanguage },
			{ "InitFilterText", &UUtils::execInitFilterText },
			{ "IsOverlayEnabled", &UUtils::execIsOverlayEnabled },
			{ "IsSteamChinaLauncher", &UUtils::execIsSteamChinaLauncher },
			{ "IsSteamInBigPictureMode", &UUtils::execIsSteamInBigPictureMode },
			{ "IsSteamRunningInVR", &UUtils::execIsSteamRunningInVR },
			{ "IsVRHeadsetStreamingEnabled", &UUtils::execIsVRHeadsetStreamingEnabled },
			{ "SetOverlayNotificationInset", &UUtils::execSetOverlayNotificationInset },
			{ "SetOverlayNotificationPosition", &UUtils::execSetOverlayNotificationPosition },
			{ "SetVRHeadsetStreamingEnabled", &UUtils::execSetVRHeadsetStreamingEnabled },
			{ "ShowGamepadTextInput", &UUtils::execShowGamepadTextInput },
			{ "StartVRDashboard", &UUtils::execStartVRDashboard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics
	{
		struct Utils_eventBOverlayNeedsPresent_Parms
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
	void Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventBOverlayNeedsPresent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventBOverlayNeedsPresent_Parms), &Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "BOverlayNeedsPresent", nullptr, nullptr, sizeof(Utils_eventBOverlayNeedsPresent_Parms), Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_BOverlayNeedsPresent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetAppID_Statics
	{
		struct Utils_eventGetAppID_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetAppID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetAppID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetAppID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetAppID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetAppID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetAppID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetAppID", nullptr, nullptr, sizeof(Utils_eventGetAppID_Parms), Z_Construct_UFunction_UUtils_GetAppID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetAppID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetAppID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetAppID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetAppID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetAppID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics
	{
		struct Utils_eventGetAppID_Pure_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetAppID_Pure_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetAppID_Pure", nullptr, nullptr, sizeof(Utils_eventGetAppID_Pure_Parms), Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetAppID_Pure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics
	{
		struct Utils_eventGetConnectedUniverse_Parms
		{
			ESteamUniverse ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetConnectedUniverse_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamUniverse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetConnectedUniverse", nullptr, nullptr, sizeof(Utils_eventGetConnectedUniverse_Parms), Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetConnectedUniverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics
	{
		struct Utils_eventGetCurrentBatteryPower_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetCurrentBatteryPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetCurrentBatteryPower", nullptr, nullptr, sizeof(Utils_eventGetCurrentBatteryPower_Parms), Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetCurrentBatteryPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics
	{
		struct Utils_eventGetEnteredGamepadTextInput_Parms
		{
			FString Text;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetEnteredGamepadTextInput_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventGetEnteredGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventGetEnteredGamepadTextInput_Parms), &Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetEnteredGamepadTextInput", nullptr, nullptr, sizeof(Utils_eventGetEnteredGamepadTextInput_Parms), Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics
	{
		struct Utils_eventGetEnteredGamepadTextLength_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetEnteredGamepadTextLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetEnteredGamepadTextLength", nullptr, nullptr, sizeof(Utils_eventGetEnteredGamepadTextLength_Parms), Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetImageRGBA_Statics
	{
		struct Utils_eventGetImageRGBA_Parms
		{
			int32 iImage;
			TArray<uint8> OutBuffer;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_iImage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutBuffer_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutBuffer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_iImage = { "iImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetImageRGBA_Parms, iImage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_OutBuffer_Inner = { "OutBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_OutBuffer = { "OutBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetImageRGBA_Parms, OutBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventGetImageRGBA_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventGetImageRGBA_Parms), &Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_iImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_OutBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_OutBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetImageRGBA", nullptr, nullptr, sizeof(Utils_eventGetImageRGBA_Parms), Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetImageRGBA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetImageSize_Statics
	{
		struct Utils_eventGetImageSize_Parms
		{
			int32 iImage;
			int32 Width;
			int32 Height;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_iImage;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_iImage = { "iImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetImageSize_Parms, iImage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetImageSize_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetImageSize_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventGetImageSize_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventGetImageSize_Parms), &Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetImageSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_iImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetImageSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetImageSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetImageSize", nullptr, nullptr, sizeof(Utils_eventGetImageSize_Parms), Z_Construct_UFunction_UUtils_GetImageSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetImageSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetImageSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetImageSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetImageSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetImageSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics
	{
		struct Utils_eventGetIPCCallCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetIPCCallCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetIPCCallCount", nullptr, nullptr, sizeof(Utils_eventGetIPCCallCount_Parms), Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetIPCCallCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetIPCountry_Statics
	{
		struct Utils_eventGetIPCountry_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_GetIPCountry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetIPCountry_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetIPCountry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetIPCountry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetIPCountry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetIPCountry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetIPCountry", nullptr, nullptr, sizeof(Utils_eventGetIPCountry_Parms), Z_Construct_UFunction_UUtils_GetIPCountry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetIPCountry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetIPCountry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetIPCountry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetIPCountry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetIPCountry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics
	{
		struct Utils_eventGetSecondsSinceAppActive_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetSecondsSinceAppActive_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetSecondsSinceAppActive", nullptr, nullptr, sizeof(Utils_eventGetSecondsSinceAppActive_Parms), Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics
	{
		struct Utils_eventGetSecondsSinceComputerActive_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetSecondsSinceComputerActive_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetSecondsSinceComputerActive", nullptr, nullptr, sizeof(Utils_eventGetSecondsSinceComputerActive_Parms), Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetServerRealTime_Statics
	{
		struct Utils_eventGetServerRealTime_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetServerRealTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetServerRealTime", nullptr, nullptr, sizeof(Utils_eventGetServerRealTime_Parms), Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetServerRealTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics
	{
		struct Utils_eventGetSteamUILanguage_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetSteamUILanguage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetSteamUILanguage", nullptr, nullptr, sizeof(Utils_eventGetSteamUILanguage_Parms), Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetSteamUILanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_InitFilterText_Statics
	{
		struct Utils_eventInitFilterText_Parms
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
	void Z_Construct_UFunction_UUtils_InitFilterText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventInitFilterText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_InitFilterText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventInitFilterText_Parms), &Z_Construct_UFunction_UUtils_InitFilterText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_InitFilterText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_InitFilterText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_InitFilterText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_InitFilterText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "InitFilterText", nullptr, nullptr, sizeof(Utils_eventInitFilterText_Parms), Z_Construct_UFunction_UUtils_InitFilterText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_InitFilterText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_InitFilterText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_InitFilterText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_InitFilterText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_InitFilterText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics
	{
		struct Utils_eventIsOverlayEnabled_Parms
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
	void Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventIsOverlayEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventIsOverlayEnabled_Parms), &Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "IsOverlayEnabled", nullptr, nullptr, sizeof(Utils_eventIsOverlayEnabled_Parms), Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_IsOverlayEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics
	{
		struct Utils_eventIsSteamChinaLauncher_Parms
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
	void Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventIsSteamChinaLauncher_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventIsSteamChinaLauncher_Parms), &Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "IsSteamChinaLauncher", nullptr, nullptr, sizeof(Utils_eventIsSteamChinaLauncher_Parms), Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_IsSteamChinaLauncher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics
	{
		struct Utils_eventIsSteamInBigPictureMode_Parms
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
	void Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventIsSteamInBigPictureMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventIsSteamInBigPictureMode_Parms), &Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "IsSteamInBigPictureMode", nullptr, nullptr, sizeof(Utils_eventIsSteamInBigPictureMode_Parms), Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics
	{
		struct Utils_eventIsSteamRunningInVR_Parms
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
	void Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventIsSteamRunningInVR_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventIsSteamRunningInVR_Parms), &Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "IsSteamRunningInVR", nullptr, nullptr, sizeof(Utils_eventIsSteamRunningInVR_Parms), Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_IsSteamRunningInVR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics
	{
		struct Utils_eventIsVRHeadsetStreamingEnabled_Parms
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
	void Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventIsVRHeadsetStreamingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventIsVRHeadsetStreamingEnabled_Parms), &Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "IsVRHeadsetStreamingEnabled", nullptr, nullptr, sizeof(Utils_eventIsVRHeadsetStreamingEnabled_Parms), Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics
	{
		struct Utils_eventSetOverlayNotificationInset_Parms
		{
			int32 HorizontalInset;
			int32 VerticalInset;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HorizontalInset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VerticalInset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::NewProp_HorizontalInset = { "HorizontalInset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventSetOverlayNotificationInset_Parms, HorizontalInset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::NewProp_VerticalInset = { "VerticalInset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventSetOverlayNotificationInset_Parms, VerticalInset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::NewProp_HorizontalInset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::NewProp_VerticalInset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "SetOverlayNotificationInset", nullptr, nullptr, sizeof(Utils_eventSetOverlayNotificationInset_Parms), Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_SetOverlayNotificationInset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics
	{
		struct Utils_eventSetOverlayNotificationPosition_Parms
		{
			ESteamNotificationPosition NotificationPosition;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NotificationPosition_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NotificationPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition = { "NotificationPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventSetOverlayNotificationPosition_Parms, NotificationPosition), Z_Construct_UEnum_SteamCore_ESteamNotificationPosition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "SetOverlayNotificationPosition", nullptr, nullptr, sizeof(Utils_eventSetOverlayNotificationPosition_Parms), Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics
	{
		struct Utils_eventSetVRHeadsetStreamingEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((Utils_eventSetVRHeadsetStreamingEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventSetVRHeadsetStreamingEnabled_Parms), &Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "SetVRHeadsetStreamingEnabled", nullptr, nullptr, sizeof(Utils_eventSetVRHeadsetStreamingEnabled_Parms), Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics
	{
		struct Utils_eventShowGamepadTextInput_Parms
		{
			ESteamGamepadTextInputMode InputMode;
			ESteamGamepadTextInputLineMode LineInputMode;
			FString Description;
			int32 CharMax;
			FString ExistingText;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LineInputMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LineInputMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExistingText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExistingText;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventShowGamepadTextInput_Parms, InputMode), Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_LineInputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_LineInputMode = { "LineInputMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventShowGamepadTextInput_Parms, LineInputMode), Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventShowGamepadTextInput_Parms, Description), METADATA_PARAMS(Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_CharMax = { "CharMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventShowGamepadTextInput_Parms, CharMax), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ExistingText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ExistingText = { "ExistingText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventShowGamepadTextInput_Parms, ExistingText), METADATA_PARAMS(Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ExistingText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ExistingText_MetaData)) };
	void Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventShowGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventShowGamepadTextInput_Parms), &Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_InputMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_InputMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_LineInputMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_LineInputMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_CharMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ExistingText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "ShowGamepadTextInput", nullptr, nullptr, sizeof(Utils_eventShowGamepadTextInput_Parms), Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_ShowGamepadTextInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_StartVRDashboard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_StartVRDashboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_StartVRDashboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "StartVRDashboard", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_StartVRDashboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_StartVRDashboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_StartVRDashboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_StartVRDashboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUtils_NoRegister()
	{
		return UUtils::StaticClass();
	}
	struct Z_Construct_UClass_UUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckFileSignature_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_CheckFileSignature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamepadTextInputDismissed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GamepadTextInputDismissed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPCountry_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_IPCountry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowBatteryPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LowBatteryPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamShutdown_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamShutdown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUtils_BOverlayNeedsPresent, "BOverlayNeedsPresent" }, // 3244635320
		{ &Z_Construct_UFunction_UUtils_GetAppID, "GetAppID" }, // 1368322812
		{ &Z_Construct_UFunction_UUtils_GetAppID_Pure, "GetAppID_Pure" }, // 3781797437
		{ &Z_Construct_UFunction_UUtils_GetConnectedUniverse, "GetConnectedUniverse" }, // 2220638297
		{ &Z_Construct_UFunction_UUtils_GetCurrentBatteryPower, "GetCurrentBatteryPower" }, // 1195131133
		{ &Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput, "GetEnteredGamepadTextInput" }, // 2535765858
		{ &Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength, "GetEnteredGamepadTextLength" }, // 2232172870
		{ &Z_Construct_UFunction_UUtils_GetImageRGBA, "GetImageRGBA" }, // 1216802706
		{ &Z_Construct_UFunction_UUtils_GetImageSize, "GetImageSize" }, // 1723083334
		{ &Z_Construct_UFunction_UUtils_GetIPCCallCount, "GetIPCCallCount" }, // 890923869
		{ &Z_Construct_UFunction_UUtils_GetIPCountry, "GetIPCountry" }, // 4277443167
		{ &Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive, "GetSecondsSinceAppActive" }, // 2322629220
		{ &Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive, "GetSecondsSinceComputerActive" }, // 3768548641
		{ &Z_Construct_UFunction_UUtils_GetServerRealTime, "GetServerRealTime" }, // 2327879134
		{ &Z_Construct_UFunction_UUtils_GetSteamUILanguage, "GetSteamUILanguage" }, // 3453918615
		{ &Z_Construct_UFunction_UUtils_InitFilterText, "InitFilterText" }, // 1918851322
		{ &Z_Construct_UFunction_UUtils_IsOverlayEnabled, "IsOverlayEnabled" }, // 543552255
		{ &Z_Construct_UFunction_UUtils_IsSteamChinaLauncher, "IsSteamChinaLauncher" }, // 2446133983
		{ &Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode, "IsSteamInBigPictureMode" }, // 3901890374
		{ &Z_Construct_UFunction_UUtils_IsSteamRunningInVR, "IsSteamRunningInVR" }, // 2330542788
		{ &Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled, "IsVRHeadsetStreamingEnabled" }, // 3808580696
		{ &Z_Construct_UFunction_UUtils_SetOverlayNotificationInset, "SetOverlayNotificationInset" }, // 1940158749
		{ &Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition, "SetOverlayNotificationPosition" }, // 2742066657
		{ &Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled, "SetVRHeadsetStreamingEnabled" }, // 2309065788
		{ &Z_Construct_UFunction_UUtils_ShowGamepadTextInput, "ShowGamepadTextInput" }, // 508040869
		{ &Z_Construct_UFunction_UUtils_StartVRDashboard, "StartVRDashboard" }, // 2051140838
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtils_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Utils.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtils_Statics::NewProp_CheckFileSignature_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUtils_Statics::NewProp_CheckFileSignature = { "CheckFileSignature", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUtils, CheckFileSignature), Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUtils_Statics::NewProp_CheckFileSignature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::NewProp_CheckFileSignature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtils_Statics::NewProp_GamepadTextInputDismissed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUtils_Statics::NewProp_GamepadTextInputDismissed = { "GamepadTextInputDismissed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUtils, GamepadTextInputDismissed), Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUtils_Statics::NewProp_GamepadTextInputDismissed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::NewProp_GamepadTextInputDismissed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtils_Statics::NewProp_IPCountry_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUtils_Statics::NewProp_IPCountry = { "IPCountry", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUtils, IPCountry), Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUtils_Statics::NewProp_IPCountry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::NewProp_IPCountry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtils_Statics::NewProp_LowBatteryPower_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUtils_Statics::NewProp_LowBatteryPower = { "LowBatteryPower", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUtils, LowBatteryPower), Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUtils_Statics::NewProp_LowBatteryPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::NewProp_LowBatteryPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtils_Statics::NewProp_SteamShutdown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUtils_Statics::NewProp_SteamShutdown = { "SteamShutdown", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUtils, SteamShutdown), Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUtils_Statics::NewProp_SteamShutdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::NewProp_SteamShutdown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUtils_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUtils_Statics::NewProp_CheckFileSignature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUtils_Statics::NewProp_GamepadTextInputDismissed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUtils_Statics::NewProp_IPCountry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUtils_Statics::NewProp_LowBatteryPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUtils_Statics::NewProp_SteamShutdown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUtils_Statics::ClassParams = {
		&UUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUtils_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUtils, 3981060978);
	template<> STEAMCORE_API UClass* StaticClass<UUtils>()
	{
		return UUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUtils(Z_Construct_UClass_UUtils, &UUtils::StaticClass, TEXT("/Script/SteamCore"), TEXT("UUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
