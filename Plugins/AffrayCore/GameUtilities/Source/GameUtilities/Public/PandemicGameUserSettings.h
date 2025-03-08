#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UDLSSMode.h"
#include "GameFramework/GameUserSettings.h"
#include "UNISMode.h"
#include "HUDElementVisibility.h"
#include "ECustomReflexMode.h"
#include "ESubtitleDisplayMode.h"
#include "ETextSize.h"
#include "EUpscalerMode.h"
#include "EUpscalerQuality.h"
#include "OnAudioSettingsUpdatedDelegate.h"
#include "OnGameplaySettingsUpdatedDelegate.h"
#include "OnHUDElementsUpdatedDelegate.h"
#include "OnRequestUpdateDelegate.h"
#include "OnUISettingsUpdatedDelegate.h"
#include "OnVideoSettingsUpdatedDelegate.h"
#include "PandemicGameUserSettings.generated.h"

class UPandemicGameUserSettings;

UCLASS(Blueprintable, Config=Engine)
class GAMEUTILITIES_API UPandemicGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastBuild;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleCrouch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleSprint;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleAim;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleLean;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleLowReady;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTogglePointShooting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCenterViewOnADS;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertHorizontalInput;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertVerticalInput;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadzoneSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadBobIntensity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBodyCam;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSeasonalEvents;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomReflexMode ReflexMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUpscalerMode UpscalerMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUpscalerQuality UpscalerQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableUpscalerAutoExposure;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDepthOfField;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMotionBlur;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSSGI;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePaniniProjection;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PaniniProjectionAmount;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Brightness;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FieldOfView;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Language;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextSize TextSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor RedColor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor GreenColor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UIScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDElementVisibility HUDElementVisibility;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayTimeScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MasterVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MusicVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SFXVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UIVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoiceVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubtitleDisplayMode SubtitleDisplayMode;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameplaySettingsUpdated OnGameplaySettingUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVideoSettingsUpdated OnVideoSettingUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUISettingsUpdated OnUISettingUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAudioSettingsUpdated OnAudioSettingUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestUpdate OnUINeedsUpdating;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestUpdate OnLanguageUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHUDElementsUpdated OnHUDElementsUpdated;
    
    UPandemicGameUserSettings();

    UFUNCTION(BlueprintCallable)
    void SetVoiceVolume(float NewVoiceVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetUseBodyCam(bool bNewUseBodyCam);
    
    UFUNCTION(BlueprintCallable)
    void SetUpscalerQuality(EUpscalerQuality NewUpscalerQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetUpscalerMode(EUpscalerMode NewUpscalerMode);
    
    UFUNCTION(BlueprintCallable)
    void SetUIVolume(float NewUIVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetUIScale(float NewUIScale);
    
    UFUNCTION(BlueprintCallable)
    void SetToggleSprint(bool bNewToggleSprint);
    
    UFUNCTION(BlueprintCallable)
    void SetTogglePointShooting(bool bNewTogglePointShooting);
    
    UFUNCTION(BlueprintCallable)
    void SetToggleLowReady(bool bNewToggleReady);
    
    UFUNCTION(BlueprintCallable)
    void SetToggleLean(bool bNewToggleLean);
    
    UFUNCTION(BlueprintCallable)
    void SetToggleCrouch(bool bNewToggleCrouch);
    
    UFUNCTION(BlueprintCallable)
    void SetToggleAim(bool bNewToggleAim);
    
    UFUNCTION(BlueprintCallable)
    void SetTextSize(ETextSize NewTextSize);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitleDisplayMode(ESubtitleDisplayMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetSFXVolume(float NewSFXVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetReflexMode(ECustomReflexMode NewReflexMode);
    
    UFUNCTION(BlueprintCallable)
    void SetRedColor(FLinearColor NewRedColor);
    
    UFUNCTION(BlueprintCallable)
    void SetPaniniProjectionAmount(float NewPaniniProjectionAmount);
    
    UFUNCTION(BlueprintCallable)
    void SetPandemicResolutionScaleNormalized(float NewScaleNormalized);
    
    UFUNCTION(BlueprintCallable)
    void SetMusicVolume(float NewMusicVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterVolume(float NewMasterVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetLastBuild(const FString& NewLastBuild);
    
    UFUNCTION(BlueprintCallable)
    void SetLanguage(const FString& NewLanguage);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertVerticalInput(bool bNewInvertVerticalInput);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertHorizontalInput(bool bNewInvertHorizontalInput);
    
    UFUNCTION(BlueprintCallable)
    void SetInputSensitivity(float NewInputSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDElementVisibility(FHUDElementVisibility HUDElements);
    
    UFUNCTION(BlueprintCallable)
    void SetHeadBobIntensity(float NewHeadBobIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetGreenColor(FLinearColor NewGreenColor);
    
    UFUNCTION(BlueprintCallable)
    void SetFieldOfView(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableUpscalerAutoExposure(bool bNewEnableUpscalerAutoExposure);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSSGI(bool bNewEnableSSGI);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSeasonalEvents(bool bNewEnableSeasonalEvents);
    
    UFUNCTION(BlueprintCallable)
    void SetEnablePaniniProjection(bool bNewEnablePaniniProjection);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableMotionBlur(bool bNewEnableMotionBlur);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableDepthOfField(bool bNewEnableDepthOfField);
    
    UFUNCTION(BlueprintCallable)
    void SetDeadzoneSensitivity(float NewDeadzoneSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetCenterViewOnADS(bool bNewCenterViewOnADS);
    
    UFUNCTION(BlueprintCallable)
    void SetBrightness(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAimingSensitivity(float NewAimingSensitivity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVoiceVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseBodyCam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetUpscalerQualityNamesFromArray(TArray<EUpscalerQuality> UpscalerQualities);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUpscalerQuality GetUpscalerQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetUpscalerModeNamesFromArray(TArray<EUpscalerMode> UpscalerModes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUpscalerMode GetUpscalerMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUIVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUIScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetToggleSprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTogglePointShooting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetToggleLowReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetToggleLean() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetToggleCrouch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetToggleAim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETextSize GetTextSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EUpscalerQuality> GetSupportedUpscalerQuality(EUpscalerMode Upscaler);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EUpscalerMode> GetSupportedUpscalerModes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESubtitleDisplayMode GetSubtitleDisplayMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSSGI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSFXVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetRedColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPaniniProjectionAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPaniniProjection() const;
    
    UFUNCTION(BlueprintCallable)
    static UPandemicGameUserSettings* GetPandemicGameUserSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNameOfUpscalerQuality(EUpscalerQuality Upscaler);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNameOfUpscalerMode(EUpscalerMode Upscaler);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMusicVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMotionBlur() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMasterVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLastBuild() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLanguage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInvertVerticalInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInvertHorizontalInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHUDElementVisibility GetHUDElementVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHeadBobIntensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetGreenColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFieldOfView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableUpscalerAutoExposure() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableSeasonalEvents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDepthOfField() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeadzoneSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNISMode GetCurrentUpscalerQualityForNIS();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDLSSMode GetCurrentUpscalerQualityForDLSS();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCenterViewOnAds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBrightness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimingSensitivity() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyVideoSettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplyUISettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplyGameplaySettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplyAudioSettings();
    
};

