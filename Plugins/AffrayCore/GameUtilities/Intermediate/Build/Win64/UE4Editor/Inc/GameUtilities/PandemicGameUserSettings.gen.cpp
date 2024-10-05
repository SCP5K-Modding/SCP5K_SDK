// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameUtilities/Public/PandemicGameUserSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePandemicGameUserSettings() {}
// Cross Module References
	GAMEUTILITIES_API UClass* Z_Construct_UClass_UPandemicGameUserSettings_NoRegister();
	GAMEUTILITIES_API UClass* Z_Construct_UClass_UPandemicGameUserSettings();
	ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings();
	UPackage* Z_Construct_UPackage__Script_GameUtilities();
	DLSSBLUEPRINT_API UEnum* Z_Construct_UEnum_DLSSBlueprint_UDLSSMode();
	NISBLUEPRINT_API UEnum* Z_Construct_UEnum_NISBlueprint_UNISMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UIUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FHUDElementVisibility();
	GAMEUTILITIES_API UEnum* Z_Construct_UEnum_GameUtilities_EUpscalerMode();
	GAMEUTILITIES_API UEnum* Z_Construct_UEnum_GameUtilities_EUpscalerQuality();
	GAMEUTILITIES_API UEnum* Z_Construct_UEnum_GameUtilities_ETextSize();
	GAMEUTILITIES_API UEnum* Z_Construct_UEnum_GameUtilities_ECustomReflexMode();
	GAMEUTILITIES_API UFunction* Z_Construct_UDelegateFunction_GameUtilities_OnGameplaySettingsUpdated__DelegateSignature();
	GAMEUTILITIES_API UFunction* Z_Construct_UDelegateFunction_GameUtilities_OnVideoSettingsUpdated__DelegateSignature();
	GAMEUTILITIES_API UFunction* Z_Construct_UDelegateFunction_GameUtilities_OnUISettingsUpdated__DelegateSignature();
	GAMEUTILITIES_API UFunction* Z_Construct_UDelegateFunction_GameUtilities_OnAudioSettingsUpdated__DelegateSignature();
	GAMEUTILITIES_API UFunction* Z_Construct_UDelegateFunction_GameUtilities_OnRequestUpdate__DelegateSignature();
	GAMEUTILITIES_API UFunction* Z_Construct_UDelegateFunction_GameUtilities_OnHUDElementsUpdated__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UPandemicGameUserSettings::execApplyAudioSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAudioSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execApplyGameplaySettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyGameplaySettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execApplyUISettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyUISettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execApplyVideoSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyVideoSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetAimingSensitivity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAimingSensitivity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetBrightness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBrightness();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetCenterViewOnAds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCenterViewOnAds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetCurrentUpscalerQualityForDLSS)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDLSSMode*)Z_Param__Result=P_THIS->GetCurrentUpscalerQualityForDLSS();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetCurrentUpscalerQualityForNIS)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNISMode*)Z_Param__Result=P_THIS->GetCurrentUpscalerQualityForNIS();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetDeadzoneSensitivity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDeadzoneSensitivity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetDepthOfField)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDepthOfField();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetFieldOfView)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFieldOfView();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetGreenColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetGreenColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetHeadBobIntensity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHeadBobIntensity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetHUDElementVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHUDElementVisibility*)Z_Param__Result=P_THIS->GetHUDElementVisibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetInputSensitivity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInputSensitivity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetInvertHorizontalInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInvertHorizontalInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetInvertVerticalInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInvertVerticalInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetLanguage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLanguage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetMasterVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMasterVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetMotionBlur)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMotionBlur();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetMusicVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMusicVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetNameOfUpscalerMode)
	{
		P_GET_ENUM(EUpscalerMode,Z_Param_Upscaler);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetNameOfUpscalerMode(EUpscalerMode(Z_Param_Upscaler));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetNameOfUpscalerQuality)
	{
		P_GET_ENUM(EUpscalerQuality,Z_Param_Upscaler);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetNameOfUpscalerQuality(EUpscalerQuality(Z_Param_Upscaler));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetPandemicGameUserSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPandemicGameUserSettings**)Z_Param__Result=UPandemicGameUserSettings::GetPandemicGameUserSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetPaniniProjection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPaniniProjection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetPaniniProjectionAmount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPaniniProjectionAmount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetRedColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetRedColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetSFXVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSFXVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetSupportedUpscalerModes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<EUpscalerMode>*)Z_Param__Result=P_THIS->GetSupportedUpscalerModes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetSupportedUpscalerQuality)
	{
		P_GET_ENUM(EUpscalerMode,Z_Param_Upscaler);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<EUpscalerQuality>*)Z_Param__Result=P_THIS->GetSupportedUpscalerQuality(EUpscalerMode(Z_Param_Upscaler));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetTextSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETextSize*)Z_Param__Result=P_THIS->GetTextSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetToggleAim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetToggleAim();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetToggleCrouch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetToggleCrouch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetToggleLean)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetToggleLean();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetToggleLowReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetToggleLowReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetTogglePointShooting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTogglePointShooting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetToggleSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetToggleSprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetUIScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetUIScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetUIVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetUIVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetUpscalerMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUpscalerMode*)Z_Param__Result=P_THIS->GetUpscalerMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetUpscalerModeNamesFromArray)
	{
		P_GET_TARRAY(EUpscalerMode,Z_Param_UpscalerModes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FText>*)Z_Param__Result=P_THIS->GetUpscalerModeNamesFromArray(Z_Param_UpscalerModes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetUpscalerQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUpscalerQuality*)Z_Param__Result=P_THIS->GetUpscalerQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetUpscalerQualityNamesFromArray)
	{
		P_GET_TARRAY(EUpscalerQuality,Z_Param_UpscalerQualities);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FText>*)Z_Param__Result=P_THIS->GetUpscalerQualityNamesFromArray(Z_Param_UpscalerQualities);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execGetVoiceVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVoiceVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetAimingSensitivity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewAimingSensitivity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAimingSensitivity(Z_Param_NewAimingSensitivity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetBrightness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrightness(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetCenterViewOnADS)
	{
		P_GET_UBOOL(Z_Param_bNewCenterViewOnADS);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCenterViewOnADS(Z_Param_bNewCenterViewOnADS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetDeadzoneSensitivity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewDeadzoneSensitivity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDeadzoneSensitivity(Z_Param_NewDeadzoneSensitivity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetEnableDepthOfField)
	{
		P_GET_UBOOL(Z_Param_bNewEnableDepthOfField);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableDepthOfField(Z_Param_bNewEnableDepthOfField);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetEnableMotionBlur)
	{
		P_GET_UBOOL(Z_Param_bNewEnableMotionBlur);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableMotionBlur(Z_Param_bNewEnableMotionBlur);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetEnablePaniniProjection)
	{
		P_GET_UBOOL(Z_Param_bNewEnablePaniniProjection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnablePaniniProjection(Z_Param_bNewEnablePaniniProjection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetFieldOfView)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFieldOfView(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetGreenColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewGreenColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGreenColor(Z_Param_NewGreenColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetHeadBobIntensity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewHeadBobIntensity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeadBobIntensity(Z_Param_NewHeadBobIntensity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetHUDElementVisibility)
	{
		P_GET_STRUCT(FHUDElementVisibility,Z_Param_HUDElements);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHUDElementVisibility(Z_Param_HUDElements);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetInputSensitivity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewInputSensitivity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputSensitivity(Z_Param_NewInputSensitivity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetInvertHorizontalInput)
	{
		P_GET_UBOOL(Z_Param_bNewInvertHorizontalInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInvertHorizontalInput(Z_Param_bNewInvertHorizontalInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetInvertVerticalInput)
	{
		P_GET_UBOOL(Z_Param_bNewInvertVerticalInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInvertVerticalInput(Z_Param_bNewInvertVerticalInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetLanguage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewLanguage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLanguage(Z_Param_NewLanguage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetMasterVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMasterVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMasterVolume(Z_Param_NewMasterVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetMusicVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMusicVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMusicVolume(Z_Param_NewMusicVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetPandemicResolutionScaleNormalized)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewScaleNormalized);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPandemicResolutionScaleNormalized(Z_Param_NewScaleNormalized);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetPaniniProjectionAmount)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPaniniProjectionAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPaniniProjectionAmount(Z_Param_NewPaniniProjectionAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetRedColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewRedColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRedColor(Z_Param_NewRedColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetReflexMode)
	{
		P_GET_ENUM(ECustomReflexMode,Z_Param_NewReflexMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReflexMode(ECustomReflexMode(Z_Param_NewReflexMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetSFXVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSFXVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSFXVolume(Z_Param_NewSFXVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetTextSize)
	{
		P_GET_ENUM(ETextSize,Z_Param_NewTextSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextSize(ETextSize(Z_Param_NewTextSize));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetToggleAim)
	{
		P_GET_UBOOL(Z_Param_bNewToggleAim);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToggleAim(Z_Param_bNewToggleAim);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetToggleCrouch)
	{
		P_GET_UBOOL(Z_Param_bNewToggleCrouch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToggleCrouch(Z_Param_bNewToggleCrouch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetToggleLean)
	{
		P_GET_UBOOL(Z_Param_bNewToggleLean);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToggleLean(Z_Param_bNewToggleLean);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetToggleLowReady)
	{
		P_GET_UBOOL(Z_Param_bNewToggleReady);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToggleLowReady(Z_Param_bNewToggleReady);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetTogglePointShooting)
	{
		P_GET_UBOOL(Z_Param_bNewTogglePointShooting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTogglePointShooting(Z_Param_bNewTogglePointShooting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetToggleSprint)
	{
		P_GET_UBOOL(Z_Param_bNewToggleSprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToggleSprint(Z_Param_bNewToggleSprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetUIScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewUIScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUIScale(Z_Param_NewUIScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetUIVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewUIVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUIVolume(Z_Param_NewUIVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetUpscalerMode)
	{
		P_GET_ENUM(EUpscalerMode,Z_Param_NewUpscalerMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpscalerMode(EUpscalerMode(Z_Param_NewUpscalerMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetUpscalerQuality)
	{
		P_GET_ENUM(EUpscalerQuality,Z_Param_NewUpscalerQuality);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpscalerQuality(EUpscalerQuality(Z_Param_NewUpscalerQuality));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPandemicGameUserSettings::execSetVoiceVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewVoiceVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVoiceVolume(Z_Param_NewVoiceVolume);
		P_NATIVE_END;
	}
	void UPandemicGameUserSettings::StaticRegisterNativesUPandemicGameUserSettings()
	{
		UClass* Class = UPandemicGameUserSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyAudioSettings", &UPandemicGameUserSettings::execApplyAudioSettings },
			{ "ApplyGameplaySettings", &UPandemicGameUserSettings::execApplyGameplaySettings },
			{ "ApplyUISettings", &UPandemicGameUserSettings::execApplyUISettings },
			{ "ApplyVideoSettings", &UPandemicGameUserSettings::execApplyVideoSettings },
			{ "GetAimingSensitivity", &UPandemicGameUserSettings::execGetAimingSensitivity },
			{ "GetBrightness", &UPandemicGameUserSettings::execGetBrightness },
			{ "GetCenterViewOnAds", &UPandemicGameUserSettings::execGetCenterViewOnAds },
			{ "GetCurrentUpscalerQualityForDLSS", &UPandemicGameUserSettings::execGetCurrentUpscalerQualityForDLSS },
			{ "GetCurrentUpscalerQualityForNIS", &UPandemicGameUserSettings::execGetCurrentUpscalerQualityForNIS },
			{ "GetDeadzoneSensitivity", &UPandemicGameUserSettings::execGetDeadzoneSensitivity },
			{ "GetDepthOfField", &UPandemicGameUserSettings::execGetDepthOfField },
			{ "GetFieldOfView", &UPandemicGameUserSettings::execGetFieldOfView },
			{ "GetGreenColor", &UPandemicGameUserSettings::execGetGreenColor },
			{ "GetHeadBobIntensity", &UPandemicGameUserSettings::execGetHeadBobIntensity },
			{ "GetHUDElementVisibility", &UPandemicGameUserSettings::execGetHUDElementVisibility },
			{ "GetInputSensitivity", &UPandemicGameUserSettings::execGetInputSensitivity },
			{ "GetInvertHorizontalInput", &UPandemicGameUserSettings::execGetInvertHorizontalInput },
			{ "GetInvertVerticalInput", &UPandemicGameUserSettings::execGetInvertVerticalInput },
			{ "GetLanguage", &UPandemicGameUserSettings::execGetLanguage },
			{ "GetMasterVolume", &UPandemicGameUserSettings::execGetMasterVolume },
			{ "GetMotionBlur", &UPandemicGameUserSettings::execGetMotionBlur },
			{ "GetMusicVolume", &UPandemicGameUserSettings::execGetMusicVolume },
			{ "GetNameOfUpscalerMode", &UPandemicGameUserSettings::execGetNameOfUpscalerMode },
			{ "GetNameOfUpscalerQuality", &UPandemicGameUserSettings::execGetNameOfUpscalerQuality },
			{ "GetPandemicGameUserSettings", &UPandemicGameUserSettings::execGetPandemicGameUserSettings },
			{ "GetPaniniProjection", &UPandemicGameUserSettings::execGetPaniniProjection },
			{ "GetPaniniProjectionAmount", &UPandemicGameUserSettings::execGetPaniniProjectionAmount },
			{ "GetRedColor", &UPandemicGameUserSettings::execGetRedColor },
			{ "GetSFXVolume", &UPandemicGameUserSettings::execGetSFXVolume },
			{ "GetSupportedUpscalerModes", &UPandemicGameUserSettings::execGetSupportedUpscalerModes },
			{ "GetSupportedUpscalerQuality", &UPandemicGameUserSettings::execGetSupportedUpscalerQuality },
			{ "GetTextSize", &UPandemicGameUserSettings::execGetTextSize },
			{ "GetToggleAim", &UPandemicGameUserSettings::execGetToggleAim },
			{ "GetToggleCrouch", &UPandemicGameUserSettings::execGetToggleCrouch },
			{ "GetToggleLean", &UPandemicGameUserSettings::execGetToggleLean },
			{ "GetToggleLowReady", &UPandemicGameUserSettings::execGetToggleLowReady },
			{ "GetTogglePointShooting", &UPandemicGameUserSettings::execGetTogglePointShooting },
			{ "GetToggleSprint", &UPandemicGameUserSettings::execGetToggleSprint },
			{ "GetUIScale", &UPandemicGameUserSettings::execGetUIScale },
			{ "GetUIVolume", &UPandemicGameUserSettings::execGetUIVolume },
			{ "GetUpscalerMode", &UPandemicGameUserSettings::execGetUpscalerMode },
			{ "GetUpscalerModeNamesFromArray", &UPandemicGameUserSettings::execGetUpscalerModeNamesFromArray },
			{ "GetUpscalerQuality", &UPandemicGameUserSettings::execGetUpscalerQuality },
			{ "GetUpscalerQualityNamesFromArray", &UPandemicGameUserSettings::execGetUpscalerQualityNamesFromArray },
			{ "GetVoiceVolume", &UPandemicGameUserSettings::execGetVoiceVolume },
			{ "SetAimingSensitivity", &UPandemicGameUserSettings::execSetAimingSensitivity },
			{ "SetBrightness", &UPandemicGameUserSettings::execSetBrightness },
			{ "SetCenterViewOnADS", &UPandemicGameUserSettings::execSetCenterViewOnADS },
			{ "SetDeadzoneSensitivity", &UPandemicGameUserSettings::execSetDeadzoneSensitivity },
			{ "SetEnableDepthOfField", &UPandemicGameUserSettings::execSetEnableDepthOfField },
			{ "SetEnableMotionBlur", &UPandemicGameUserSettings::execSetEnableMotionBlur },
			{ "SetEnablePaniniProjection", &UPandemicGameUserSettings::execSetEnablePaniniProjection },
			{ "SetFieldOfView", &UPandemicGameUserSettings::execSetFieldOfView },
			{ "SetGreenColor", &UPandemicGameUserSettings::execSetGreenColor },
			{ "SetHeadBobIntensity", &UPandemicGameUserSettings::execSetHeadBobIntensity },
			{ "SetHUDElementVisibility", &UPandemicGameUserSettings::execSetHUDElementVisibility },
			{ "SetInputSensitivity", &UPandemicGameUserSettings::execSetInputSensitivity },
			{ "SetInvertHorizontalInput", &UPandemicGameUserSettings::execSetInvertHorizontalInput },
			{ "SetInvertVerticalInput", &UPandemicGameUserSettings::execSetInvertVerticalInput },
			{ "SetLanguage", &UPandemicGameUserSettings::execSetLanguage },
			{ "SetMasterVolume", &UPandemicGameUserSettings::execSetMasterVolume },
			{ "SetMusicVolume", &UPandemicGameUserSettings::execSetMusicVolume },
			{ "SetPandemicResolutionScaleNormalized", &UPandemicGameUserSettings::execSetPandemicResolutionScaleNormalized },
			{ "SetPaniniProjectionAmount", &UPandemicGameUserSettings::execSetPaniniProjectionAmount },
			{ "SetRedColor", &UPandemicGameUserSettings::execSetRedColor },
			{ "SetReflexMode", &UPandemicGameUserSettings::execSetReflexMode },
			{ "SetSFXVolume", &UPandemicGameUserSettings::execSetSFXVolume },
			{ "SetTextSize", &UPandemicGameUserSettings::execSetTextSize },
			{ "SetToggleAim", &UPandemicGameUserSettings::execSetToggleAim },
			{ "SetToggleCrouch", &UPandemicGameUserSettings::execSetToggleCrouch },
			{ "SetToggleLean", &UPandemicGameUserSettings::execSetToggleLean },
			{ "SetToggleLowReady", &UPandemicGameUserSettings::execSetToggleLowReady },
			{ "SetTogglePointShooting", &UPandemicGameUserSettings::execSetTogglePointShooting },
			{ "SetToggleSprint", &UPandemicGameUserSettings::execSetToggleSprint },
			{ "SetUIScale", &UPandemicGameUserSettings::execSetUIScale },
			{ "SetUIVolume", &UPandemicGameUserSettings::execSetUIVolume },
			{ "SetUpscalerMode", &UPandemicGameUserSettings::execSetUpscalerMode },
			{ "SetUpscalerQuality", &UPandemicGameUserSettings::execSetUpscalerQuality },
			{ "SetVoiceVolume", &UPandemicGameUserSettings::execSetVoiceVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_ApplyAudioSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_ApplyAudioSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_ApplyAudioSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "ApplyAudioSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_ApplyAudioSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_ApplyAudioSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_ApplyAudioSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_ApplyAudioSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_ApplyGameplaySettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_ApplyGameplaySettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_ApplyGameplaySettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "ApplyGameplaySettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_ApplyGameplaySettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_ApplyGameplaySettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_ApplyGameplaySettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_ApplyGameplaySettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_ApplyUISettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_ApplyUISettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_ApplyUISettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "ApplyUISettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_ApplyUISettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_ApplyUISettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_ApplyUISettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_ApplyUISettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_ApplyVideoSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_ApplyVideoSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_ApplyVideoSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "ApplyVideoSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_ApplyVideoSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_ApplyVideoSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_ApplyVideoSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_ApplyVideoSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetAimingSensitivity_Statics
	{
		struct PandemicGameUserSettings_eventGetAimingSensitivity_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetAimingSensitivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetAimingSensitivity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetAimingSensitivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetAimingSensitivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetAimingSensitivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetAimingSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetAimingSensitivity", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetAimingSensitivity_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetAimingSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetAimingSensitivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetAimingSensitivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetAimingSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetAimingSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetAimingSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetBrightness_Statics
	{
		struct PandemicGameUserSettings_eventGetBrightness_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetBrightness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetBrightness_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetBrightness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetBrightness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetBrightness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetBrightness", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetBrightness_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetBrightness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetBrightness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetBrightness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetBrightness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetBrightness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetCenterViewOnAds_Statics
	{
		struct PandemicGameUserSettings_eventGetCenterViewOnAds_Parms
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
	void Z_Construct_UFunction_UPandemicGameUserSettings_GetCenterViewOnAds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventGetCenterViewOnAds_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetCenterViewOnAds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventGetCenterViewOnAds_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_GetCenterViewOnAds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetCenterViewOnAds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetCenterViewOnAds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetCenterViewOnAds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetCenterViewOnAds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetCenterViewOnAds", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetCenterViewOnAds_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetCenterViewOnAds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetCenterViewOnAds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetCenterViewOnAds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetCenterViewOnAds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetCenterViewOnAds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetCenterViewOnAds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForDLSS_Statics
	{
		struct PandemicGameUserSettings_eventGetCurrentUpscalerQualityForDLSS_Parms
		{
			UDLSSMode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForDLSS_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForDLSS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetCurrentUpscalerQualityForDLSS_Parms, ReturnValue), Z_Construct_UEnum_DLSSBlueprint_UDLSSMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForDLSS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForDLSS_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForDLSS_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForDLSS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForDLSS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetCurrentUpscalerQualityForDLSS", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetCurrentUpscalerQualityForDLSS_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForDLSS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForDLSS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForDLSS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForDLSS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForDLSS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForDLSS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForNIS_Statics
	{
		struct PandemicGameUserSettings_eventGetCurrentUpscalerQualityForNIS_Parms
		{
			UNISMode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForNIS_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForNIS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetCurrentUpscalerQualityForNIS_Parms, ReturnValue), Z_Construct_UEnum_NISBlueprint_UNISMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForNIS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForNIS_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForNIS_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForNIS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForNIS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetCurrentUpscalerQualityForNIS", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetCurrentUpscalerQualityForNIS_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForNIS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForNIS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForNIS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForNIS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForNIS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForNIS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetDeadzoneSensitivity_Statics
	{
		struct PandemicGameUserSettings_eventGetDeadzoneSensitivity_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetDeadzoneSensitivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetDeadzoneSensitivity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetDeadzoneSensitivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetDeadzoneSensitivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetDeadzoneSensitivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetDeadzoneSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetDeadzoneSensitivity", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetDeadzoneSensitivity_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetDeadzoneSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetDeadzoneSensitivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetDeadzoneSensitivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetDeadzoneSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetDeadzoneSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetDeadzoneSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetDepthOfField_Statics
	{
		struct PandemicGameUserSettings_eventGetDepthOfField_Parms
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
	void Z_Construct_UFunction_UPandemicGameUserSettings_GetDepthOfField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventGetDepthOfField_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetDepthOfField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventGetDepthOfField_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_GetDepthOfField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetDepthOfField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetDepthOfField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetDepthOfField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetDepthOfField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetDepthOfField", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetDepthOfField_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetDepthOfField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetDepthOfField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetDepthOfField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetDepthOfField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetDepthOfField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetDepthOfField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetFieldOfView_Statics
	{
		struct PandemicGameUserSettings_eventGetFieldOfView_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetFieldOfView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetFieldOfView_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetFieldOfView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetFieldOfView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetFieldOfView_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetFieldOfView", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetFieldOfView_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetFieldOfView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetFieldOfView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetFieldOfView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetFieldOfView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetFieldOfView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetGreenColor_Statics
	{
		struct PandemicGameUserSettings_eventGetGreenColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetGreenColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetGreenColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetGreenColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetGreenColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetGreenColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetGreenColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetGreenColor", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetGreenColor_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetGreenColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetGreenColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetGreenColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetGreenColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetGreenColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetGreenColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetHeadBobIntensity_Statics
	{
		struct PandemicGameUserSettings_eventGetHeadBobIntensity_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetHeadBobIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetHeadBobIntensity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetHeadBobIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetHeadBobIntensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetHeadBobIntensity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetHeadBobIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetHeadBobIntensity", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetHeadBobIntensity_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetHeadBobIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetHeadBobIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetHeadBobIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetHeadBobIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetHeadBobIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetHeadBobIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetHUDElementVisibility_Statics
	{
		struct PandemicGameUserSettings_eventGetHUDElementVisibility_Parms
		{
			FHUDElementVisibility ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetHUDElementVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetHUDElementVisibility_Parms, ReturnValue), Z_Construct_UScriptStruct_FHUDElementVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetHUDElementVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetHUDElementVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetHUDElementVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetHUDElementVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetHUDElementVisibility", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetHUDElementVisibility_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetHUDElementVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetHUDElementVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetHUDElementVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetHUDElementVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetHUDElementVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetHUDElementVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetInputSensitivity_Statics
	{
		struct PandemicGameUserSettings_eventGetInputSensitivity_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetInputSensitivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetInputSensitivity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetInputSensitivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetInputSensitivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetInputSensitivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetInputSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetInputSensitivity", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetInputSensitivity_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetInputSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetInputSensitivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetInputSensitivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetInputSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetInputSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetInputSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertHorizontalInput_Statics
	{
		struct PandemicGameUserSettings_eventGetInvertHorizontalInput_Parms
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
	void Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertHorizontalInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventGetInvertHorizontalInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertHorizontalInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventGetInvertHorizontalInput_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertHorizontalInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertHorizontalInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertHorizontalInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertHorizontalInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertHorizontalInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetInvertHorizontalInput", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetInvertHorizontalInput_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertHorizontalInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertHorizontalInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertHorizontalInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertHorizontalInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertHorizontalInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertHorizontalInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertVerticalInput_Statics
	{
		struct PandemicGameUserSettings_eventGetInvertVerticalInput_Parms
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
	void Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertVerticalInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventGetInvertVerticalInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertVerticalInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventGetInvertVerticalInput_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertVerticalInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertVerticalInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertVerticalInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertVerticalInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertVerticalInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetInvertVerticalInput", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetInvertVerticalInput_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertVerticalInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertVerticalInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertVerticalInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertVerticalInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertVerticalInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertVerticalInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetLanguage_Statics
	{
		struct PandemicGameUserSettings_eventGetLanguage_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetLanguage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetLanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetLanguage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetLanguage", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetLanguage_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetMasterVolume_Statics
	{
		struct PandemicGameUserSettings_eventGetMasterVolume_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetMasterVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetMasterVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetMasterVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetMasterVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetMasterVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetMasterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetMasterVolume", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetMasterVolume_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetMasterVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetMasterVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetMasterVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetMasterVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetMasterVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetMotionBlur_Statics
	{
		struct PandemicGameUserSettings_eventGetMotionBlur_Parms
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
	void Z_Construct_UFunction_UPandemicGameUserSettings_GetMotionBlur_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventGetMotionBlur_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetMotionBlur_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventGetMotionBlur_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_GetMotionBlur_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetMotionBlur_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetMotionBlur_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetMotionBlur_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetMotionBlur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetMotionBlur", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetMotionBlur_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetMotionBlur_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetMotionBlur_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetMotionBlur_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetMotionBlur_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetMotionBlur()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetMotionBlur_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetMusicVolume_Statics
	{
		struct PandemicGameUserSettings_eventGetMusicVolume_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetMusicVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetMusicVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetMusicVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetMusicVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetMusicVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetMusicVolume", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetMusicVolume_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetMusicVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetMusicVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetMusicVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetMusicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetMusicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerMode_Statics
	{
		struct PandemicGameUserSettings_eventGetNameOfUpscalerMode_Parms
		{
			EUpscalerMode Upscaler;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Upscaler_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Upscaler;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerMode_Statics::NewProp_Upscaler_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerMode_Statics::NewProp_Upscaler = { "Upscaler", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetNameOfUpscalerMode_Parms, Upscaler), Z_Construct_UEnum_GameUtilities_EUpscalerMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetNameOfUpscalerMode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerMode_Statics::NewProp_Upscaler_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerMode_Statics::NewProp_Upscaler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetNameOfUpscalerMode", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetNameOfUpscalerMode_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerQuality_Statics
	{
		struct PandemicGameUserSettings_eventGetNameOfUpscalerQuality_Parms
		{
			EUpscalerQuality Upscaler;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Upscaler_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Upscaler;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerQuality_Statics::NewProp_Upscaler_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerQuality_Statics::NewProp_Upscaler = { "Upscaler", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetNameOfUpscalerQuality_Parms, Upscaler), Z_Construct_UEnum_GameUtilities_EUpscalerQuality, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetNameOfUpscalerQuality_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerQuality_Statics::NewProp_Upscaler_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerQuality_Statics::NewProp_Upscaler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetNameOfUpscalerQuality", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetNameOfUpscalerQuality_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetPandemicGameUserSettings_Statics
	{
		struct PandemicGameUserSettings_eventGetPandemicGameUserSettings_Parms
		{
			UPandemicGameUserSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetPandemicGameUserSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetPandemicGameUserSettings_Parms, ReturnValue), Z_Construct_UClass_UPandemicGameUserSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetPandemicGameUserSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetPandemicGameUserSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetPandemicGameUserSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetPandemicGameUserSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetPandemicGameUserSettings", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetPandemicGameUserSettings_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetPandemicGameUserSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetPandemicGameUserSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetPandemicGameUserSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetPandemicGameUserSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetPandemicGameUserSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetPandemicGameUserSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjection_Statics
	{
		struct PandemicGameUserSettings_eventGetPaniniProjection_Parms
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
	void Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventGetPaniniProjection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventGetPaniniProjection_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetPaniniProjection", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetPaniniProjection_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjectionAmount_Statics
	{
		struct PandemicGameUserSettings_eventGetPaniniProjectionAmount_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjectionAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetPaniniProjectionAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjectionAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjectionAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjectionAmount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjectionAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetPaniniProjectionAmount", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetPaniniProjectionAmount_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjectionAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjectionAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjectionAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjectionAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjectionAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjectionAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetRedColor_Statics
	{
		struct PandemicGameUserSettings_eventGetRedColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetRedColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetRedColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetRedColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetRedColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetRedColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetRedColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetRedColor", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetRedColor_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetRedColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetRedColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetRedColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetRedColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetRedColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetRedColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetSFXVolume_Statics
	{
		struct PandemicGameUserSettings_eventGetSFXVolume_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetSFXVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetSFXVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetSFXVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetSFXVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetSFXVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetSFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetSFXVolume", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetSFXVolume_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetSFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetSFXVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetSFXVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetSFXVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetSFXVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetSFXVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerModes_Statics
	{
		struct PandemicGameUserSettings_eventGetSupportedUpscalerModes_Parms
		{
			TArray<EUpscalerMode> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerModes_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerModes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_GameUtilities_EUpscalerMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerModes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetSupportedUpscalerModes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerModes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerModes_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerModes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerModes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerModes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerModes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetSupportedUpscalerModes", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetSupportedUpscalerModes_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerModes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerModes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerModes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerModes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerModes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerModes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerQuality_Statics
	{
		struct PandemicGameUserSettings_eventGetSupportedUpscalerQuality_Parms
		{
			EUpscalerMode Upscaler;
			TArray<EUpscalerQuality> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Upscaler_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Upscaler;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerQuality_Statics::NewProp_Upscaler_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerQuality_Statics::NewProp_Upscaler = { "Upscaler", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetSupportedUpscalerQuality_Parms, Upscaler), Z_Construct_UEnum_GameUtilities_EUpscalerMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerQuality_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerQuality_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_GameUtilities_EUpscalerQuality, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetSupportedUpscalerQuality_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerQuality_Statics::NewProp_Upscaler_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerQuality_Statics::NewProp_Upscaler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerQuality_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerQuality_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetSupportedUpscalerQuality", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetSupportedUpscalerQuality_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetTextSize_Statics
	{
		struct PandemicGameUserSettings_eventGetTextSize_Parms
		{
			ETextSize ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetTextSize_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetTextSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetTextSize_Parms, ReturnValue), Z_Construct_UEnum_GameUtilities_ETextSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetTextSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetTextSize_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetTextSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetTextSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetTextSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetTextSize", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetTextSize_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetTextSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetTextSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetTextSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetTextSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetTextSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetTextSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleAim_Statics
	{
		struct PandemicGameUserSettings_eventGetToggleAim_Parms
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
	void Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleAim_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventGetToggleAim_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleAim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventGetToggleAim_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleAim_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleAim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleAim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleAim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleAim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetToggleAim", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetToggleAim_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleAim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleAim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleAim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleAim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleAim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleCrouch_Statics
	{
		struct PandemicGameUserSettings_eventGetToggleCrouch_Parms
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
	void Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleCrouch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventGetToggleCrouch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleCrouch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventGetToggleCrouch_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleCrouch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleCrouch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleCrouch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleCrouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetToggleCrouch", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetToggleCrouch_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleCrouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleCrouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleCrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleCrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLean_Statics
	{
		struct PandemicGameUserSettings_eventGetToggleLean_Parms
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
	void Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventGetToggleLean_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventGetToggleLean_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLean_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLean_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLean_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetToggleLean", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetToggleLean_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLowReady_Statics
	{
		struct PandemicGameUserSettings_eventGetToggleLowReady_Parms
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
	void Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLowReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventGetToggleLowReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLowReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventGetToggleLowReady_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLowReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLowReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLowReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLowReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLowReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetToggleLowReady", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetToggleLowReady_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLowReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLowReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLowReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLowReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLowReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLowReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetTogglePointShooting_Statics
	{
		struct PandemicGameUserSettings_eventGetTogglePointShooting_Parms
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
	void Z_Construct_UFunction_UPandemicGameUserSettings_GetTogglePointShooting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventGetTogglePointShooting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetTogglePointShooting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventGetTogglePointShooting_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_GetTogglePointShooting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetTogglePointShooting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetTogglePointShooting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetTogglePointShooting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetTogglePointShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetTogglePointShooting", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetTogglePointShooting_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetTogglePointShooting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetTogglePointShooting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetTogglePointShooting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetTogglePointShooting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetTogglePointShooting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetTogglePointShooting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleSprint_Statics
	{
		struct PandemicGameUserSettings_eventGetToggleSprint_Parms
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
	void Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleSprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventGetToggleSprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleSprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventGetToggleSprint_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleSprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleSprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleSprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleSprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetToggleSprint", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetToggleSprint_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleSprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetUIScale_Statics
	{
		struct PandemicGameUserSettings_eventGetUIScale_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetUIScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetUIScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetUIScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetUIScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetUIScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetUIScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetUIScale", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetUIScale_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetUIScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetUIScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetUIScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetUIScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetUIScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetUIScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetUIVolume_Statics
	{
		struct PandemicGameUserSettings_eventGetUIVolume_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetUIVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetUIVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetUIVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetUIVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetUIVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetUIVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetUIVolume", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetUIVolume_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetUIVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetUIVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetUIVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetUIVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetUIVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetUIVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerMode_Statics
	{
		struct PandemicGameUserSettings_eventGetUpscalerMode_Parms
		{
			EUpscalerMode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetUpscalerMode_Parms, ReturnValue), Z_Construct_UEnum_GameUtilities_EUpscalerMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetUpscalerMode", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetUpscalerMode_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerModeNamesFromArray_Statics
	{
		struct PandemicGameUserSettings_eventGetUpscalerModeNamesFromArray_Parms
		{
			TArray<EUpscalerMode> UpscalerModes;
			TArray<FText> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpscalerModes_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UpscalerModes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UpscalerModes;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerModeNamesFromArray_Statics::NewProp_UpscalerModes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerModeNamesFromArray_Statics::NewProp_UpscalerModes_Inner = { "UpscalerModes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_GameUtilities_EUpscalerMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerModeNamesFromArray_Statics::NewProp_UpscalerModes = { "UpscalerModes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetUpscalerModeNamesFromArray_Parms, UpscalerModes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerModeNamesFromArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerModeNamesFromArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetUpscalerModeNamesFromArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerModeNamesFromArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerModeNamesFromArray_Statics::NewProp_UpscalerModes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerModeNamesFromArray_Statics::NewProp_UpscalerModes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerModeNamesFromArray_Statics::NewProp_UpscalerModes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerModeNamesFromArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerModeNamesFromArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerModeNamesFromArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerModeNamesFromArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetUpscalerModeNamesFromArray", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetUpscalerModeNamesFromArray_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerModeNamesFromArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerModeNamesFromArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerModeNamesFromArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerModeNamesFromArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerModeNamesFromArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerModeNamesFromArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQuality_Statics
	{
		struct PandemicGameUserSettings_eventGetUpscalerQuality_Parms
		{
			EUpscalerQuality ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQuality_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetUpscalerQuality_Parms, ReturnValue), Z_Construct_UEnum_GameUtilities_EUpscalerQuality, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQuality_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetUpscalerQuality", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetUpscalerQuality_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQualityNamesFromArray_Statics
	{
		struct PandemicGameUserSettings_eventGetUpscalerQualityNamesFromArray_Parms
		{
			TArray<EUpscalerQuality> UpscalerQualities;
			TArray<FText> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpscalerQualities_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UpscalerQualities_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UpscalerQualities;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQualityNamesFromArray_Statics::NewProp_UpscalerQualities_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQualityNamesFromArray_Statics::NewProp_UpscalerQualities_Inner = { "UpscalerQualities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_GameUtilities_EUpscalerQuality, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQualityNamesFromArray_Statics::NewProp_UpscalerQualities = { "UpscalerQualities", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetUpscalerQualityNamesFromArray_Parms, UpscalerQualities), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQualityNamesFromArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQualityNamesFromArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetUpscalerQualityNamesFromArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQualityNamesFromArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQualityNamesFromArray_Statics::NewProp_UpscalerQualities_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQualityNamesFromArray_Statics::NewProp_UpscalerQualities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQualityNamesFromArray_Statics::NewProp_UpscalerQualities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQualityNamesFromArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQualityNamesFromArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQualityNamesFromArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQualityNamesFromArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetUpscalerQualityNamesFromArray", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetUpscalerQualityNamesFromArray_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQualityNamesFromArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQualityNamesFromArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQualityNamesFromArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQualityNamesFromArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQualityNamesFromArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQualityNamesFromArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_GetVoiceVolume_Statics
	{
		struct PandemicGameUserSettings_eventGetVoiceVolume_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_GetVoiceVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventGetVoiceVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_GetVoiceVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_GetVoiceVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_GetVoiceVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_GetVoiceVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "GetVoiceVolume", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventGetVoiceVolume_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_GetVoiceVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetVoiceVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_GetVoiceVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_GetVoiceVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_GetVoiceVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_GetVoiceVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetAimingSensitivity_Statics
	{
		struct PandemicGameUserSettings_eventSetAimingSensitivity_Parms
		{
			float NewAimingSensitivity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewAimingSensitivity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetAimingSensitivity_Statics::NewProp_NewAimingSensitivity = { "NewAimingSensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventSetAimingSensitivity_Parms, NewAimingSensitivity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetAimingSensitivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetAimingSensitivity_Statics::NewProp_NewAimingSensitivity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetAimingSensitivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetAimingSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetAimingSensitivity", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetAimingSensitivity_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetAimingSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetAimingSensitivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetAimingSensitivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetAimingSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetAimingSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetAimingSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetBrightness_Statics
	{
		struct PandemicGameUserSettings_eventSetBrightness_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetBrightness_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventSetBrightness_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetBrightness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetBrightness_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetBrightness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetBrightness", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetBrightness_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetBrightness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetBrightness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetBrightness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetBrightness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetBrightness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetCenterViewOnADS_Statics
	{
		struct PandemicGameUserSettings_eventSetCenterViewOnADS_Parms
		{
			bool bNewCenterViewOnADS;
		};
		static void NewProp_bNewCenterViewOnADS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewCenterViewOnADS;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPandemicGameUserSettings_SetCenterViewOnADS_Statics::NewProp_bNewCenterViewOnADS_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventSetCenterViewOnADS_Parms*)Obj)->bNewCenterViewOnADS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetCenterViewOnADS_Statics::NewProp_bNewCenterViewOnADS = { "bNewCenterViewOnADS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventSetCenterViewOnADS_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_SetCenterViewOnADS_Statics::NewProp_bNewCenterViewOnADS_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetCenterViewOnADS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetCenterViewOnADS_Statics::NewProp_bNewCenterViewOnADS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetCenterViewOnADS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetCenterViewOnADS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetCenterViewOnADS", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetCenterViewOnADS_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetCenterViewOnADS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetCenterViewOnADS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetCenterViewOnADS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetCenterViewOnADS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetCenterViewOnADS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetCenterViewOnADS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetDeadzoneSensitivity_Statics
	{
		struct PandemicGameUserSettings_eventSetDeadzoneSensitivity_Parms
		{
			float NewDeadzoneSensitivity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDeadzoneSensitivity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetDeadzoneSensitivity_Statics::NewProp_NewDeadzoneSensitivity = { "NewDeadzoneSensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventSetDeadzoneSensitivity_Parms, NewDeadzoneSensitivity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetDeadzoneSensitivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetDeadzoneSensitivity_Statics::NewProp_NewDeadzoneSensitivity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetDeadzoneSensitivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetDeadzoneSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetDeadzoneSensitivity", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetDeadzoneSensitivity_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetDeadzoneSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetDeadzoneSensitivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetDeadzoneSensitivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetDeadzoneSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetDeadzoneSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetDeadzoneSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableDepthOfField_Statics
	{
		struct PandemicGameUserSettings_eventSetEnableDepthOfField_Parms
		{
			bool bNewEnableDepthOfField;
		};
		static void NewProp_bNewEnableDepthOfField_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewEnableDepthOfField;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableDepthOfField_Statics::NewProp_bNewEnableDepthOfField_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventSetEnableDepthOfField_Parms*)Obj)->bNewEnableDepthOfField = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableDepthOfField_Statics::NewProp_bNewEnableDepthOfField = { "bNewEnableDepthOfField", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventSetEnableDepthOfField_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableDepthOfField_Statics::NewProp_bNewEnableDepthOfField_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableDepthOfField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableDepthOfField_Statics::NewProp_bNewEnableDepthOfField,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableDepthOfField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableDepthOfField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetEnableDepthOfField", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetEnableDepthOfField_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableDepthOfField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableDepthOfField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableDepthOfField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableDepthOfField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableDepthOfField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableDepthOfField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableMotionBlur_Statics
	{
		struct PandemicGameUserSettings_eventSetEnableMotionBlur_Parms
		{
			bool bNewEnableMotionBlur;
		};
		static void NewProp_bNewEnableMotionBlur_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewEnableMotionBlur;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableMotionBlur_Statics::NewProp_bNewEnableMotionBlur_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventSetEnableMotionBlur_Parms*)Obj)->bNewEnableMotionBlur = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableMotionBlur_Statics::NewProp_bNewEnableMotionBlur = { "bNewEnableMotionBlur", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventSetEnableMotionBlur_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableMotionBlur_Statics::NewProp_bNewEnableMotionBlur_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableMotionBlur_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableMotionBlur_Statics::NewProp_bNewEnableMotionBlur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableMotionBlur_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableMotionBlur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetEnableMotionBlur", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetEnableMotionBlur_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableMotionBlur_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableMotionBlur_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableMotionBlur_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableMotionBlur_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableMotionBlur()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableMotionBlur_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetEnablePaniniProjection_Statics
	{
		struct PandemicGameUserSettings_eventSetEnablePaniniProjection_Parms
		{
			bool bNewEnablePaniniProjection;
		};
		static void NewProp_bNewEnablePaniniProjection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewEnablePaniniProjection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPandemicGameUserSettings_SetEnablePaniniProjection_Statics::NewProp_bNewEnablePaniniProjection_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventSetEnablePaniniProjection_Parms*)Obj)->bNewEnablePaniniProjection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetEnablePaniniProjection_Statics::NewProp_bNewEnablePaniniProjection = { "bNewEnablePaniniProjection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventSetEnablePaniniProjection_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_SetEnablePaniniProjection_Statics::NewProp_bNewEnablePaniniProjection_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetEnablePaniniProjection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetEnablePaniniProjection_Statics::NewProp_bNewEnablePaniniProjection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetEnablePaniniProjection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetEnablePaniniProjection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetEnablePaniniProjection", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetEnablePaniniProjection_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetEnablePaniniProjection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetEnablePaniniProjection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetEnablePaniniProjection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetEnablePaniniProjection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetEnablePaniniProjection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetEnablePaniniProjection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetFieldOfView_Statics
	{
		struct PandemicGameUserSettings_eventSetFieldOfView_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetFieldOfView_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventSetFieldOfView_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetFieldOfView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetFieldOfView_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetFieldOfView_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetFieldOfView", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetFieldOfView_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetFieldOfView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetFieldOfView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetFieldOfView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetFieldOfView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetFieldOfView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetGreenColor_Statics
	{
		struct PandemicGameUserSettings_eventSetGreenColor_Parms
		{
			FLinearColor NewGreenColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGreenColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetGreenColor_Statics::NewProp_NewGreenColor = { "NewGreenColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventSetGreenColor_Parms, NewGreenColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetGreenColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetGreenColor_Statics::NewProp_NewGreenColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetGreenColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetGreenColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetGreenColor", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetGreenColor_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetGreenColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetGreenColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetGreenColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetGreenColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetGreenColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetGreenColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetHeadBobIntensity_Statics
	{
		struct PandemicGameUserSettings_eventSetHeadBobIntensity_Parms
		{
			float NewHeadBobIntensity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewHeadBobIntensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetHeadBobIntensity_Statics::NewProp_NewHeadBobIntensity = { "NewHeadBobIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventSetHeadBobIntensity_Parms, NewHeadBobIntensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetHeadBobIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetHeadBobIntensity_Statics::NewProp_NewHeadBobIntensity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetHeadBobIntensity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetHeadBobIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetHeadBobIntensity", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetHeadBobIntensity_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetHeadBobIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetHeadBobIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetHeadBobIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetHeadBobIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetHeadBobIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetHeadBobIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetHUDElementVisibility_Statics
	{
		struct PandemicGameUserSettings_eventSetHUDElementVisibility_Parms
		{
			FHUDElementVisibility HUDElements;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HUDElements;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetHUDElementVisibility_Statics::NewProp_HUDElements = { "HUDElements", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventSetHUDElementVisibility_Parms, HUDElements), Z_Construct_UScriptStruct_FHUDElementVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetHUDElementVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetHUDElementVisibility_Statics::NewProp_HUDElements,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetHUDElementVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetHUDElementVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetHUDElementVisibility", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetHUDElementVisibility_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetHUDElementVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetHUDElementVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetHUDElementVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetHUDElementVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetHUDElementVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetHUDElementVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetInputSensitivity_Statics
	{
		struct PandemicGameUserSettings_eventSetInputSensitivity_Parms
		{
			float NewInputSensitivity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewInputSensitivity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetInputSensitivity_Statics::NewProp_NewInputSensitivity = { "NewInputSensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventSetInputSensitivity_Parms, NewInputSensitivity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetInputSensitivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetInputSensitivity_Statics::NewProp_NewInputSensitivity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetInputSensitivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetInputSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetInputSensitivity", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetInputSensitivity_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetInputSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetInputSensitivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetInputSensitivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetInputSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetInputSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetInputSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertHorizontalInput_Statics
	{
		struct PandemicGameUserSettings_eventSetInvertHorizontalInput_Parms
		{
			bool bNewInvertHorizontalInput;
		};
		static void NewProp_bNewInvertHorizontalInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewInvertHorizontalInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertHorizontalInput_Statics::NewProp_bNewInvertHorizontalInput_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventSetInvertHorizontalInput_Parms*)Obj)->bNewInvertHorizontalInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertHorizontalInput_Statics::NewProp_bNewInvertHorizontalInput = { "bNewInvertHorizontalInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventSetInvertHorizontalInput_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertHorizontalInput_Statics::NewProp_bNewInvertHorizontalInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertHorizontalInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertHorizontalInput_Statics::NewProp_bNewInvertHorizontalInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertHorizontalInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertHorizontalInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetInvertHorizontalInput", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetInvertHorizontalInput_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertHorizontalInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertHorizontalInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertHorizontalInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertHorizontalInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertHorizontalInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertHorizontalInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertVerticalInput_Statics
	{
		struct PandemicGameUserSettings_eventSetInvertVerticalInput_Parms
		{
			bool bNewInvertVerticalInput;
		};
		static void NewProp_bNewInvertVerticalInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewInvertVerticalInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertVerticalInput_Statics::NewProp_bNewInvertVerticalInput_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventSetInvertVerticalInput_Parms*)Obj)->bNewInvertVerticalInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertVerticalInput_Statics::NewProp_bNewInvertVerticalInput = { "bNewInvertVerticalInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventSetInvertVerticalInput_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertVerticalInput_Statics::NewProp_bNewInvertVerticalInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertVerticalInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertVerticalInput_Statics::NewProp_bNewInvertVerticalInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertVerticalInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertVerticalInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetInvertVerticalInput", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetInvertVerticalInput_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertVerticalInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertVerticalInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertVerticalInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertVerticalInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertVerticalInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertVerticalInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetLanguage_Statics
	{
		struct PandemicGameUserSettings_eventSetLanguage_Parms
		{
			FString NewLanguage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLanguage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewLanguage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetLanguage_Statics::NewProp_NewLanguage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetLanguage_Statics::NewProp_NewLanguage = { "NewLanguage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventSetLanguage_Parms, NewLanguage), METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetLanguage_Statics::NewProp_NewLanguage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetLanguage_Statics::NewProp_NewLanguage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetLanguage_Statics::NewProp_NewLanguage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetLanguage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetLanguage", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetLanguage_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetMasterVolume_Statics
	{
		struct PandemicGameUserSettings_eventSetMasterVolume_Parms
		{
			float NewMasterVolume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewMasterVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetMasterVolume_Statics::NewProp_NewMasterVolume = { "NewMasterVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventSetMasterVolume_Parms, NewMasterVolume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetMasterVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetMasterVolume_Statics::NewProp_NewMasterVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetMasterVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetMasterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetMasterVolume", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetMasterVolume_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetMasterVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetMasterVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetMasterVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetMasterVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetMasterVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetMusicVolume_Statics
	{
		struct PandemicGameUserSettings_eventSetMusicVolume_Parms
		{
			float NewMusicVolume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewMusicVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetMusicVolume_Statics::NewProp_NewMusicVolume = { "NewMusicVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventSetMusicVolume_Parms, NewMusicVolume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetMusicVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetMusicVolume_Statics::NewProp_NewMusicVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetMusicVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetMusicVolume", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetMusicVolume_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetMusicVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetMusicVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetMusicVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetMusicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetMusicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetPandemicResolutionScaleNormalized_Statics
	{
		struct PandemicGameUserSettings_eventSetPandemicResolutionScaleNormalized_Parms
		{
			float NewScaleNormalized;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewScaleNormalized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetPandemicResolutionScaleNormalized_Statics::NewProp_NewScaleNormalized = { "NewScaleNormalized", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventSetPandemicResolutionScaleNormalized_Parms, NewScaleNormalized), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetPandemicResolutionScaleNormalized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetPandemicResolutionScaleNormalized_Statics::NewProp_NewScaleNormalized,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetPandemicResolutionScaleNormalized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetPandemicResolutionScaleNormalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetPandemicResolutionScaleNormalized", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetPandemicResolutionScaleNormalized_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetPandemicResolutionScaleNormalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetPandemicResolutionScaleNormalized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetPandemicResolutionScaleNormalized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetPandemicResolutionScaleNormalized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetPandemicResolutionScaleNormalized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetPandemicResolutionScaleNormalized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetPaniniProjectionAmount_Statics
	{
		struct PandemicGameUserSettings_eventSetPaniniProjectionAmount_Parms
		{
			float NewPaniniProjectionAmount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPaniniProjectionAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetPaniniProjectionAmount_Statics::NewProp_NewPaniniProjectionAmount = { "NewPaniniProjectionAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventSetPaniniProjectionAmount_Parms, NewPaniniProjectionAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetPaniniProjectionAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetPaniniProjectionAmount_Statics::NewProp_NewPaniniProjectionAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetPaniniProjectionAmount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetPaniniProjectionAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetPaniniProjectionAmount", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetPaniniProjectionAmount_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetPaniniProjectionAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetPaniniProjectionAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetPaniniProjectionAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetPaniniProjectionAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetPaniniProjectionAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetPaniniProjectionAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetRedColor_Statics
	{
		struct PandemicGameUserSettings_eventSetRedColor_Parms
		{
			FLinearColor NewRedColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRedColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetRedColor_Statics::NewProp_NewRedColor = { "NewRedColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventSetRedColor_Parms, NewRedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetRedColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetRedColor_Statics::NewProp_NewRedColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetRedColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetRedColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetRedColor", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetRedColor_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetRedColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetRedColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetRedColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetRedColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetRedColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetRedColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetReflexMode_Statics
	{
		struct PandemicGameUserSettings_eventSetReflexMode_Parms
		{
			ECustomReflexMode NewReflexMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewReflexMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewReflexMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetReflexMode_Statics::NewProp_NewReflexMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetReflexMode_Statics::NewProp_NewReflexMode = { "NewReflexMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventSetReflexMode_Parms, NewReflexMode), Z_Construct_UEnum_GameUtilities_ECustomReflexMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetReflexMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetReflexMode_Statics::NewProp_NewReflexMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetReflexMode_Statics::NewProp_NewReflexMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetReflexMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetReflexMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetReflexMode", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetReflexMode_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetReflexMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetReflexMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetReflexMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetReflexMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetReflexMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetReflexMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetSFXVolume_Statics
	{
		struct PandemicGameUserSettings_eventSetSFXVolume_Parms
		{
			float NewSFXVolume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSFXVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetSFXVolume_Statics::NewProp_NewSFXVolume = { "NewSFXVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventSetSFXVolume_Parms, NewSFXVolume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetSFXVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetSFXVolume_Statics::NewProp_NewSFXVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetSFXVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetSFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetSFXVolume", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetSFXVolume_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetSFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetSFXVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetSFXVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetSFXVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetSFXVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetSFXVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetTextSize_Statics
	{
		struct PandemicGameUserSettings_eventSetTextSize_Parms
		{
			ETextSize NewTextSize;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewTextSize_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewTextSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetTextSize_Statics::NewProp_NewTextSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetTextSize_Statics::NewProp_NewTextSize = { "NewTextSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventSetTextSize_Parms, NewTextSize), Z_Construct_UEnum_GameUtilities_ETextSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetTextSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetTextSize_Statics::NewProp_NewTextSize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetTextSize_Statics::NewProp_NewTextSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetTextSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetTextSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetTextSize", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetTextSize_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetTextSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetTextSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetTextSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetTextSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetTextSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetTextSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleAim_Statics
	{
		struct PandemicGameUserSettings_eventSetToggleAim_Parms
		{
			bool bNewToggleAim;
		};
		static void NewProp_bNewToggleAim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewToggleAim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleAim_Statics::NewProp_bNewToggleAim_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventSetToggleAim_Parms*)Obj)->bNewToggleAim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleAim_Statics::NewProp_bNewToggleAim = { "bNewToggleAim", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventSetToggleAim_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleAim_Statics::NewProp_bNewToggleAim_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleAim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleAim_Statics::NewProp_bNewToggleAim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleAim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleAim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetToggleAim", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetToggleAim_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleAim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleAim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleAim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleAim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleAim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleCrouch_Statics
	{
		struct PandemicGameUserSettings_eventSetToggleCrouch_Parms
		{
			bool bNewToggleCrouch;
		};
		static void NewProp_bNewToggleCrouch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewToggleCrouch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleCrouch_Statics::NewProp_bNewToggleCrouch_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventSetToggleCrouch_Parms*)Obj)->bNewToggleCrouch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleCrouch_Statics::NewProp_bNewToggleCrouch = { "bNewToggleCrouch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventSetToggleCrouch_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleCrouch_Statics::NewProp_bNewToggleCrouch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleCrouch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleCrouch_Statics::NewProp_bNewToggleCrouch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleCrouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetToggleCrouch", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetToggleCrouch_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleCrouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleCrouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleCrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleCrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLean_Statics
	{
		struct PandemicGameUserSettings_eventSetToggleLean_Parms
		{
			bool bNewToggleLean;
		};
		static void NewProp_bNewToggleLean_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewToggleLean;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLean_Statics::NewProp_bNewToggleLean_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventSetToggleLean_Parms*)Obj)->bNewToggleLean = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLean_Statics::NewProp_bNewToggleLean = { "bNewToggleLean", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventSetToggleLean_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLean_Statics::NewProp_bNewToggleLean_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLean_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLean_Statics::NewProp_bNewToggleLean,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLean_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetToggleLean", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetToggleLean_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLowReady_Statics
	{
		struct PandemicGameUserSettings_eventSetToggleLowReady_Parms
		{
			bool bNewToggleReady;
		};
		static void NewProp_bNewToggleReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewToggleReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLowReady_Statics::NewProp_bNewToggleReady_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventSetToggleLowReady_Parms*)Obj)->bNewToggleReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLowReady_Statics::NewProp_bNewToggleReady = { "bNewToggleReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventSetToggleLowReady_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLowReady_Statics::NewProp_bNewToggleReady_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLowReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLowReady_Statics::NewProp_bNewToggleReady,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLowReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLowReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetToggleLowReady", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetToggleLowReady_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLowReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLowReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLowReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLowReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLowReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLowReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetTogglePointShooting_Statics
	{
		struct PandemicGameUserSettings_eventSetTogglePointShooting_Parms
		{
			bool bNewTogglePointShooting;
		};
		static void NewProp_bNewTogglePointShooting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewTogglePointShooting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPandemicGameUserSettings_SetTogglePointShooting_Statics::NewProp_bNewTogglePointShooting_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventSetTogglePointShooting_Parms*)Obj)->bNewTogglePointShooting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetTogglePointShooting_Statics::NewProp_bNewTogglePointShooting = { "bNewTogglePointShooting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventSetTogglePointShooting_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_SetTogglePointShooting_Statics::NewProp_bNewTogglePointShooting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetTogglePointShooting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetTogglePointShooting_Statics::NewProp_bNewTogglePointShooting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetTogglePointShooting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetTogglePointShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetTogglePointShooting", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetTogglePointShooting_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetTogglePointShooting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetTogglePointShooting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetTogglePointShooting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetTogglePointShooting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetTogglePointShooting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetTogglePointShooting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleSprint_Statics
	{
		struct PandemicGameUserSettings_eventSetToggleSprint_Parms
		{
			bool bNewToggleSprint;
		};
		static void NewProp_bNewToggleSprint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewToggleSprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleSprint_Statics::NewProp_bNewToggleSprint_SetBit(void* Obj)
	{
		((PandemicGameUserSettings_eventSetToggleSprint_Parms*)Obj)->bNewToggleSprint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleSprint_Statics::NewProp_bNewToggleSprint = { "bNewToggleSprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PandemicGameUserSettings_eventSetToggleSprint_Parms), &Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleSprint_Statics::NewProp_bNewToggleSprint_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleSprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleSprint_Statics::NewProp_bNewToggleSprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleSprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetToggleSprint", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetToggleSprint_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleSprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetUIScale_Statics
	{
		struct PandemicGameUserSettings_eventSetUIScale_Parms
		{
			float NewUIScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewUIScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetUIScale_Statics::NewProp_NewUIScale = { "NewUIScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventSetUIScale_Parms, NewUIScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetUIScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetUIScale_Statics::NewProp_NewUIScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetUIScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetUIScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetUIScale", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetUIScale_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetUIScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetUIScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetUIScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetUIScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetUIScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetUIScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetUIVolume_Statics
	{
		struct PandemicGameUserSettings_eventSetUIVolume_Parms
		{
			float NewUIVolume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewUIVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetUIVolume_Statics::NewProp_NewUIVolume = { "NewUIVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventSetUIVolume_Parms, NewUIVolume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetUIVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetUIVolume_Statics::NewProp_NewUIVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetUIVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetUIVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetUIVolume", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetUIVolume_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetUIVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetUIVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetUIVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetUIVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetUIVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetUIVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerMode_Statics
	{
		struct PandemicGameUserSettings_eventSetUpscalerMode_Parms
		{
			EUpscalerMode NewUpscalerMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewUpscalerMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewUpscalerMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerMode_Statics::NewProp_NewUpscalerMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerMode_Statics::NewProp_NewUpscalerMode = { "NewUpscalerMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventSetUpscalerMode_Parms, NewUpscalerMode), Z_Construct_UEnum_GameUtilities_EUpscalerMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerMode_Statics::NewProp_NewUpscalerMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerMode_Statics::NewProp_NewUpscalerMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetUpscalerMode", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetUpscalerMode_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerQuality_Statics
	{
		struct PandemicGameUserSettings_eventSetUpscalerQuality_Parms
		{
			EUpscalerQuality NewUpscalerQuality;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewUpscalerQuality_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewUpscalerQuality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerQuality_Statics::NewProp_NewUpscalerQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerQuality_Statics::NewProp_NewUpscalerQuality = { "NewUpscalerQuality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventSetUpscalerQuality_Parms, NewUpscalerQuality), Z_Construct_UEnum_GameUtilities_EUpscalerQuality, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerQuality_Statics::NewProp_NewUpscalerQuality_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerQuality_Statics::NewProp_NewUpscalerQuality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetUpscalerQuality", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetUpscalerQuality_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPandemicGameUserSettings_SetVoiceVolume_Statics
	{
		struct PandemicGameUserSettings_eventSetVoiceVolume_Parms
		{
			float NewVoiceVolume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewVoiceVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPandemicGameUserSettings_SetVoiceVolume_Statics::NewProp_NewVoiceVolume = { "NewVoiceVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PandemicGameUserSettings_eventSetVoiceVolume_Parms, NewVoiceVolume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPandemicGameUserSettings_SetVoiceVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPandemicGameUserSettings_SetVoiceVolume_Statics::NewProp_NewVoiceVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPandemicGameUserSettings_SetVoiceVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPandemicGameUserSettings_SetVoiceVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPandemicGameUserSettings, nullptr, "SetVoiceVolume", nullptr, nullptr, sizeof(PandemicGameUserSettings_eventSetVoiceVolume_Parms), Z_Construct_UFunction_UPandemicGameUserSettings_SetVoiceVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetVoiceVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPandemicGameUserSettings_SetVoiceVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPandemicGameUserSettings_SetVoiceVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPandemicGameUserSettings_SetVoiceVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPandemicGameUserSettings_SetVoiceVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPandemicGameUserSettings_NoRegister()
	{
		return UPandemicGameUserSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPandemicGameUserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bToggleCrouch_MetaData[];
#endif
		static void NewProp_bToggleCrouch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToggleCrouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bToggleSprint_MetaData[];
#endif
		static void NewProp_bToggleSprint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToggleSprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bToggleAim_MetaData[];
#endif
		static void NewProp_bToggleAim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToggleAim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bToggleLean_MetaData[];
#endif
		static void NewProp_bToggleLean_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToggleLean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bToggleLowReady_MetaData[];
#endif
		static void NewProp_bToggleLowReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToggleLowReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTogglePointShooting_MetaData[];
#endif
		static void NewProp_bTogglePointShooting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTogglePointShooting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCenterViewOnADS_MetaData[];
#endif
		static void NewProp_bCenterViewOnADS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCenterViewOnADS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertHorizontalInput_MetaData[];
#endif
		static void NewProp_bInvertHorizontalInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertHorizontalInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertVerticalInput_MetaData[];
#endif
		static void NewProp_bInvertVerticalInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertVerticalInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeadzoneSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeadzoneSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadBobIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadBobIntensity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReflexMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflexMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReflexMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpscalerMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpscalerMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UpscalerMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpscalerQuality_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpscalerQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UpscalerQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDepthOfField_MetaData[];
#endif
		static void NewProp_bEnableDepthOfField_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDepthOfField;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMotionBlur_MetaData[];
#endif
		static void NewProp_bEnableMotionBlur_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMotionBlur;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePaniniProjection_MetaData[];
#endif
		static void NewProp_bEnablePaniniProjection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePaniniProjection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaniniProjectionAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PaniniProjectionAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Brightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextSize_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TextSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RedColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GreenColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UIScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDElementVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HUDElementVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayTimeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisplayTimeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MasterVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MusicVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MusicVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SFXVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SFXVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UIVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoiceVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGameplaySettingUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameplaySettingUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnVideoSettingUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVideoSettingUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUISettingUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUISettingUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioSettingUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioSettingUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUINeedsUpdating_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUINeedsUpdating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLanguageUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLanguageUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHUDElementsUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHUDElementsUpdated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPandemicGameUserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameUserSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_GameUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPandemicGameUserSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_ApplyAudioSettings, "ApplyAudioSettings" }, // 1706275097
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_ApplyGameplaySettings, "ApplyGameplaySettings" }, // 2390424582
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_ApplyUISettings, "ApplyUISettings" }, // 4161545006
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_ApplyVideoSettings, "ApplyVideoSettings" }, // 2533884153
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetAimingSensitivity, "GetAimingSensitivity" }, // 2001212405
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetBrightness, "GetBrightness" }, // 1772005766
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetCenterViewOnAds, "GetCenterViewOnAds" }, // 2386030321
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForDLSS, "GetCurrentUpscalerQualityForDLSS" }, // 3369878836
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetCurrentUpscalerQualityForNIS, "GetCurrentUpscalerQualityForNIS" }, // 3672202752
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetDeadzoneSensitivity, "GetDeadzoneSensitivity" }, // 523389187
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetDepthOfField, "GetDepthOfField" }, // 2811060410
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetFieldOfView, "GetFieldOfView" }, // 3305180774
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetGreenColor, "GetGreenColor" }, // 1700945148
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetHeadBobIntensity, "GetHeadBobIntensity" }, // 222449
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetHUDElementVisibility, "GetHUDElementVisibility" }, // 1213894551
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetInputSensitivity, "GetInputSensitivity" }, // 4108467347
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertHorizontalInput, "GetInvertHorizontalInput" }, // 2428393825
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetInvertVerticalInput, "GetInvertVerticalInput" }, // 527689980
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetLanguage, "GetLanguage" }, // 554559823
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetMasterVolume, "GetMasterVolume" }, // 2366266678
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetMotionBlur, "GetMotionBlur" }, // 2953142221
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetMusicVolume, "GetMusicVolume" }, // 3069992973
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerMode, "GetNameOfUpscalerMode" }, // 741093520
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetNameOfUpscalerQuality, "GetNameOfUpscalerQuality" }, // 1030183126
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetPandemicGameUserSettings, "GetPandemicGameUserSettings" }, // 465104989
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjection, "GetPaniniProjection" }, // 3968411555
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetPaniniProjectionAmount, "GetPaniniProjectionAmount" }, // 4205953523
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetRedColor, "GetRedColor" }, // 1673256436
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetSFXVolume, "GetSFXVolume" }, // 3108078173
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerModes, "GetSupportedUpscalerModes" }, // 600596230
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetSupportedUpscalerQuality, "GetSupportedUpscalerQuality" }, // 3784826098
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetTextSize, "GetTextSize" }, // 1100371194
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleAim, "GetToggleAim" }, // 3680028322
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleCrouch, "GetToggleCrouch" }, // 1312737640
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLean, "GetToggleLean" }, // 3551261631
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleLowReady, "GetToggleLowReady" }, // 1281934426
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetTogglePointShooting, "GetTogglePointShooting" }, // 2688097435
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetToggleSprint, "GetToggleSprint" }, // 2185601013
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetUIScale, "GetUIScale" }, // 432226870
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetUIVolume, "GetUIVolume" }, // 2340080620
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerMode, "GetUpscalerMode" }, // 2593062319
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerModeNamesFromArray, "GetUpscalerModeNamesFromArray" }, // 2196041778
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQuality, "GetUpscalerQuality" }, // 29352720
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetUpscalerQualityNamesFromArray, "GetUpscalerQualityNamesFromArray" }, // 1774348082
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_GetVoiceVolume, "GetVoiceVolume" }, // 2329926071
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetAimingSensitivity, "SetAimingSensitivity" }, // 2947324268
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetBrightness, "SetBrightness" }, // 1402059908
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetCenterViewOnADS, "SetCenterViewOnADS" }, // 4016291241
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetDeadzoneSensitivity, "SetDeadzoneSensitivity" }, // 3256230697
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableDepthOfField, "SetEnableDepthOfField" }, // 987869405
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetEnableMotionBlur, "SetEnableMotionBlur" }, // 428367868
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetEnablePaniniProjection, "SetEnablePaniniProjection" }, // 244355149
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetFieldOfView, "SetFieldOfView" }, // 177220054
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetGreenColor, "SetGreenColor" }, // 1597735565
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetHeadBobIntensity, "SetHeadBobIntensity" }, // 3150201851
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetHUDElementVisibility, "SetHUDElementVisibility" }, // 3133660402
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetInputSensitivity, "SetInputSensitivity" }, // 600438078
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertHorizontalInput, "SetInvertHorizontalInput" }, // 3541160628
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetInvertVerticalInput, "SetInvertVerticalInput" }, // 2703163053
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetLanguage, "SetLanguage" }, // 2945531868
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetMasterVolume, "SetMasterVolume" }, // 748044304
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetMusicVolume, "SetMusicVolume" }, // 330620835
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetPandemicResolutionScaleNormalized, "SetPandemicResolutionScaleNormalized" }, // 3967344883
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetPaniniProjectionAmount, "SetPaniniProjectionAmount" }, // 1955682013
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetRedColor, "SetRedColor" }, // 1109092614
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetReflexMode, "SetReflexMode" }, // 2852555458
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetSFXVolume, "SetSFXVolume" }, // 727517075
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetTextSize, "SetTextSize" }, // 1168609368
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleAim, "SetToggleAim" }, // 1524865850
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleCrouch, "SetToggleCrouch" }, // 4200191439
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLean, "SetToggleLean" }, // 3373892536
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleLowReady, "SetToggleLowReady" }, // 3145888108
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetTogglePointShooting, "SetTogglePointShooting" }, // 3407232885
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetToggleSprint, "SetToggleSprint" }, // 2267793484
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetUIScale, "SetUIScale" }, // 893754292
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetUIVolume, "SetUIVolume" }, // 2306636837
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerMode, "SetUpscalerMode" }, // 3877225530
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetUpscalerQuality, "SetUpscalerQuality" }, // 1202055082
		{ &Z_Construct_UFunction_UPandemicGameUserSettings_SetVoiceVolume, "SetVoiceVolume" }, // 330744699
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PandemicGameUserSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleCrouch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleCrouch_SetBit(void* Obj)
	{
		((UPandemicGameUserSettings*)Obj)->bToggleCrouch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleCrouch = { "bToggleCrouch", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPandemicGameUserSettings), &Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleCrouch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleCrouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleCrouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleSprint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleSprint_SetBit(void* Obj)
	{
		((UPandemicGameUserSettings*)Obj)->bToggleSprint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleSprint = { "bToggleSprint", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPandemicGameUserSettings), &Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleSprint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleSprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleSprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleAim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleAim_SetBit(void* Obj)
	{
		((UPandemicGameUserSettings*)Obj)->bToggleAim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleAim = { "bToggleAim", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPandemicGameUserSettings), &Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleAim_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleAim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleLean_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleLean_SetBit(void* Obj)
	{
		((UPandemicGameUserSettings*)Obj)->bToggleLean = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleLean = { "bToggleLean", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPandemicGameUserSettings), &Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleLean_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleLean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleLean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleLowReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleLowReady_SetBit(void* Obj)
	{
		((UPandemicGameUserSettings*)Obj)->bToggleLowReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleLowReady = { "bToggleLowReady", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPandemicGameUserSettings), &Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleLowReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleLowReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleLowReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bTogglePointShooting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bTogglePointShooting_SetBit(void* Obj)
	{
		((UPandemicGameUserSettings*)Obj)->bTogglePointShooting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bTogglePointShooting = { "bTogglePointShooting", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPandemicGameUserSettings), &Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bTogglePointShooting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bTogglePointShooting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bTogglePointShooting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bCenterViewOnADS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bCenterViewOnADS_SetBit(void* Obj)
	{
		((UPandemicGameUserSettings*)Obj)->bCenterViewOnADS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bCenterViewOnADS = { "bCenterViewOnADS", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPandemicGameUserSettings), &Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bCenterViewOnADS_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bCenterViewOnADS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bCenterViewOnADS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bInvertHorizontalInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bInvertHorizontalInput_SetBit(void* Obj)
	{
		((UPandemicGameUserSettings*)Obj)->bInvertHorizontalInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bInvertHorizontalInput = { "bInvertHorizontalInput", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPandemicGameUserSettings), &Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bInvertHorizontalInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bInvertHorizontalInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bInvertHorizontalInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bInvertVerticalInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bInvertVerticalInput_SetBit(void* Obj)
	{
		((UPandemicGameUserSettings*)Obj)->bInvertVerticalInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bInvertVerticalInput = { "bInvertVerticalInput", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPandemicGameUserSettings), &Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bInvertVerticalInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bInvertVerticalInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bInvertVerticalInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_InputSensitivity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_InputSensitivity = { "InputSensitivity", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, InputSensitivity), METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_InputSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_InputSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_AimingSensitivity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_AimingSensitivity = { "AimingSensitivity", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, AimingSensitivity), METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_AimingSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_AimingSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_DeadzoneSensitivity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_DeadzoneSensitivity = { "DeadzoneSensitivity", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, DeadzoneSensitivity), METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_DeadzoneSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_DeadzoneSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_HeadBobIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_HeadBobIntensity = { "HeadBobIntensity", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, HeadBobIntensity), METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_HeadBobIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_HeadBobIntensity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_ReflexMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_ReflexMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_ReflexMode = { "ReflexMode", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, ReflexMode), Z_Construct_UEnum_GameUtilities_ECustomReflexMode, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_ReflexMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_ReflexMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UpscalerMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UpscalerMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UpscalerMode = { "UpscalerMode", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, UpscalerMode), Z_Construct_UEnum_GameUtilities_EUpscalerMode, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UpscalerMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UpscalerMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UpscalerQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UpscalerQuality_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UpscalerQuality = { "UpscalerQuality", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, UpscalerQuality), Z_Construct_UEnum_GameUtilities_EUpscalerQuality, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UpscalerQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UpscalerQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bEnableDepthOfField_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bEnableDepthOfField_SetBit(void* Obj)
	{
		((UPandemicGameUserSettings*)Obj)->bEnableDepthOfField = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bEnableDepthOfField = { "bEnableDepthOfField", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPandemicGameUserSettings), &Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bEnableDepthOfField_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bEnableDepthOfField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bEnableDepthOfField_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bEnableMotionBlur_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bEnableMotionBlur_SetBit(void* Obj)
	{
		((UPandemicGameUserSettings*)Obj)->bEnableMotionBlur = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bEnableMotionBlur = { "bEnableMotionBlur", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPandemicGameUserSettings), &Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bEnableMotionBlur_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bEnableMotionBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bEnableMotionBlur_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bEnablePaniniProjection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bEnablePaniniProjection_SetBit(void* Obj)
	{
		((UPandemicGameUserSettings*)Obj)->bEnablePaniniProjection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bEnablePaniniProjection = { "bEnablePaniniProjection", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPandemicGameUserSettings), &Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bEnablePaniniProjection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bEnablePaniniProjection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bEnablePaniniProjection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_PaniniProjectionAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_PaniniProjectionAmount = { "PaniniProjectionAmount", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, PaniniProjectionAmount), METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_PaniniProjectionAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_PaniniProjectionAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_Brightness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, Brightness), METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_Brightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_Brightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_FieldOfView_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, FieldOfView), METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_FieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_FieldOfView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_Language_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, Language), METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_TextSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_TextSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_TextSize = { "TextSize", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, TextSize), Z_Construct_UEnum_GameUtilities_ETextSize, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_TextSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_TextSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_RedColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_RedColor = { "RedColor", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, RedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_RedColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_RedColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_GreenColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_GreenColor = { "GreenColor", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, GreenColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_GreenColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_GreenColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UIScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UIScale = { "UIScale", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, UIScale), METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UIScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UIScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_HUDElementVisibility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_HUDElementVisibility = { "HUDElementVisibility", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, HUDElementVisibility), Z_Construct_UScriptStruct_FHUDElementVisibility, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_HUDElementVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_HUDElementVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_DisplayTimeScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_DisplayTimeScale = { "DisplayTimeScale", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, DisplayTimeScale), METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_DisplayTimeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_DisplayTimeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_MasterVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_MasterVolume = { "MasterVolume", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, MasterVolume), METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_MasterVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_MasterVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_MusicVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_MusicVolume = { "MusicVolume", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, MusicVolume), METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_MusicVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_MusicVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_SFXVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_SFXVolume = { "SFXVolume", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, SFXVolume), METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_SFXVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_SFXVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UIVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UIVolume = { "UIVolume", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, UIVolume), METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UIVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UIVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_VoiceVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_VoiceVolume = { "VoiceVolume", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, VoiceVolume), METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_VoiceVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_VoiceVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnGameplaySettingUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnGameplaySettingUpdated = { "OnGameplaySettingUpdated", nullptr, (EPropertyFlags)0x0010100010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, OnGameplaySettingUpdated), Z_Construct_UDelegateFunction_GameUtilities_OnGameplaySettingsUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnGameplaySettingUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnGameplaySettingUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnVideoSettingUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnVideoSettingUpdated = { "OnVideoSettingUpdated", nullptr, (EPropertyFlags)0x0010100010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, OnVideoSettingUpdated), Z_Construct_UDelegateFunction_GameUtilities_OnVideoSettingsUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnVideoSettingUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnVideoSettingUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnUISettingUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnUISettingUpdated = { "OnUISettingUpdated", nullptr, (EPropertyFlags)0x0010100010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, OnUISettingUpdated), Z_Construct_UDelegateFunction_GameUtilities_OnUISettingsUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnUISettingUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnUISettingUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnAudioSettingUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnAudioSettingUpdated = { "OnAudioSettingUpdated", nullptr, (EPropertyFlags)0x0010100010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, OnAudioSettingUpdated), Z_Construct_UDelegateFunction_GameUtilities_OnAudioSettingsUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnAudioSettingUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnAudioSettingUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnUINeedsUpdating_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnUINeedsUpdating = { "OnUINeedsUpdating", nullptr, (EPropertyFlags)0x0010100010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, OnUINeedsUpdating), Z_Construct_UDelegateFunction_GameUtilities_OnRequestUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnUINeedsUpdating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnUINeedsUpdating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnLanguageUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnLanguageUpdated = { "OnLanguageUpdated", nullptr, (EPropertyFlags)0x0010100010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, OnLanguageUpdated), Z_Construct_UDelegateFunction_GameUtilities_OnRequestUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnLanguageUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnLanguageUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnHUDElementsUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PandemicGameUserSettings" },
		{ "ModuleRelativePath", "Public/PandemicGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnHUDElementsUpdated = { "OnHUDElementsUpdated", nullptr, (EPropertyFlags)0x0010100010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPandemicGameUserSettings, OnHUDElementsUpdated), Z_Construct_UDelegateFunction_GameUtilities_OnHUDElementsUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnHUDElementsUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnHUDElementsUpdated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPandemicGameUserSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleCrouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleSprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleAim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleLean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bToggleLowReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bTogglePointShooting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bCenterViewOnADS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bInvertHorizontalInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bInvertVerticalInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_InputSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_AimingSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_DeadzoneSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_HeadBobIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_ReflexMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_ReflexMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UpscalerMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UpscalerMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UpscalerQuality_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UpscalerQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bEnableDepthOfField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bEnableMotionBlur,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_bEnablePaniniProjection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_PaniniProjectionAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_Brightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_FieldOfView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_TextSize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_TextSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_RedColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_GreenColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UIScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_HUDElementVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_DisplayTimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_MasterVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_MusicVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_SFXVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_UIVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_VoiceVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnGameplaySettingUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnVideoSettingUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnUISettingUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnAudioSettingUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnUINeedsUpdating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnLanguageUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPandemicGameUserSettings_Statics::NewProp_OnHUDElementsUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPandemicGameUserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPandemicGameUserSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPandemicGameUserSettings_Statics::ClassParams = {
		&UPandemicGameUserSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPandemicGameUserSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::PropPointers),
		0,
		0x409000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPandemicGameUserSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPandemicGameUserSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPandemicGameUserSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPandemicGameUserSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPandemicGameUserSettings, 1196534290);
	template<> GAMEUTILITIES_API UClass* StaticClass<UPandemicGameUserSettings>()
	{
		return UPandemicGameUserSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPandemicGameUserSettings(Z_Construct_UClass_UPandemicGameUserSettings, &UPandemicGameUserSettings::StaticClass, TEXT("/Script/GameUtilities"), TEXT("UPandemicGameUserSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPandemicGameUserSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
