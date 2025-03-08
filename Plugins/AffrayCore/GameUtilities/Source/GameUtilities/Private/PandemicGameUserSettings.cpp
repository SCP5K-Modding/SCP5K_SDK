#include "PandemicGameUserSettings.h"

UPandemicGameUserSettings::UPandemicGameUserSettings() {
    this->LastBuild = TEXT("0.16.0.72");
    this->bToggleCrouch = false;
    this->bToggleSprint = false;
    this->bToggleAim = false;
    this->bToggleLean = false;
    this->bToggleLowReady = true;
    this->bTogglePointShooting = false;
    this->bCenterViewOnADS = false;
    this->bInvertHorizontalInput = false;
    this->bInvertVerticalInput = false;
    this->InputSensitivity = 0.80f;
    this->AimingSensitivity = 0.70f;
    this->DeadzoneSensitivity = 0.50f;
    this->HeadBobIntensity = 1.00f;
    this->bUseBodyCam = false;
    this->bEnableSeasonalEvents = true;
    this->ReflexMode = ECustomReflexMode::Disabled;
    this->UpscalerMode = EUpscalerMode::None;
    this->UpscalerQuality = EUpscalerQuality::Quality;
    this->bEnableUpscalerAutoExposure = false;
    this->bEnableDepthOfField = true;
    this->bEnableMotionBlur = false;
    this->bEnableSSGI = false;
    this->bEnablePaniniProjection = false;
    this->PaniniProjectionAmount = 0.20f;
    this->Brightness = 1.00f;
    this->FieldOfView = 100.00f;
    this->Language = TEXT("en");
    this->TextSize = ETextSize::Normal;
    this->UIScale = 1.00f;
    this->DisplayTimeScale = 1;
    this->MasterVolume = 0.45f;
    this->MusicVolume = 1.00f;
    this->SFXVolume = 1.00f;
    this->UIVolume = 1.00f;
    this->VoiceVolume = 1.00f;
    this->SubtitleDisplayMode = ESubtitleDisplayMode::Story;
}

void UPandemicGameUserSettings::SetVoiceVolume(float NewVoiceVolume) {
}

void UPandemicGameUserSettings::SetUseBodyCam(bool bNewUseBodyCam) {
}

void UPandemicGameUserSettings::SetUpscalerQuality(EUpscalerQuality NewUpscalerQuality) {
}

void UPandemicGameUserSettings::SetUpscalerMode(EUpscalerMode NewUpscalerMode) {
}

void UPandemicGameUserSettings::SetUIVolume(float NewUIVolume) {
}

void UPandemicGameUserSettings::SetUIScale(float NewUIScale) {
}

void UPandemicGameUserSettings::SetToggleSprint(bool bNewToggleSprint) {
}

void UPandemicGameUserSettings::SetTogglePointShooting(bool bNewTogglePointShooting) {
}

void UPandemicGameUserSettings::SetToggleLowReady(bool bNewToggleReady) {
}

void UPandemicGameUserSettings::SetToggleLean(bool bNewToggleLean) {
}

void UPandemicGameUserSettings::SetToggleCrouch(bool bNewToggleCrouch) {
}

void UPandemicGameUserSettings::SetToggleAim(bool bNewToggleAim) {
}

void UPandemicGameUserSettings::SetTextSize(ETextSize NewTextSize) {
}

void UPandemicGameUserSettings::SetSubtitleDisplayMode(ESubtitleDisplayMode NewMode) {
}

void UPandemicGameUserSettings::SetSFXVolume(float NewSFXVolume) {
}

void UPandemicGameUserSettings::SetReflexMode(ECustomReflexMode NewReflexMode) {
}

void UPandemicGameUserSettings::SetRedColor(FLinearColor NewRedColor) {
}

void UPandemicGameUserSettings::SetPaniniProjectionAmount(float NewPaniniProjectionAmount) {
}

void UPandemicGameUserSettings::SetPandemicResolutionScaleNormalized(float NewScaleNormalized) {
}

void UPandemicGameUserSettings::SetMusicVolume(float NewMusicVolume) {
}

void UPandemicGameUserSettings::SetMasterVolume(float NewMasterVolume) {
}

void UPandemicGameUserSettings::SetLastBuild(const FString& NewLastBuild) {
}

void UPandemicGameUserSettings::SetLanguage(const FString& NewLanguage) {
}

void UPandemicGameUserSettings::SetInvertVerticalInput(bool bNewInvertVerticalInput) {
}

void UPandemicGameUserSettings::SetInvertHorizontalInput(bool bNewInvertHorizontalInput) {
}

void UPandemicGameUserSettings::SetInputSensitivity(float NewInputSensitivity) {
}

void UPandemicGameUserSettings::SetHUDElementVisibility(FHUDElementVisibility HUDElements) {
}

void UPandemicGameUserSettings::SetHeadBobIntensity(float NewHeadBobIntensity) {
}

void UPandemicGameUserSettings::SetGreenColor(FLinearColor NewGreenColor) {
}

void UPandemicGameUserSettings::SetFieldOfView(float Value) {
}

void UPandemicGameUserSettings::SetEnableUpscalerAutoExposure(bool bNewEnableUpscalerAutoExposure) {
}

void UPandemicGameUserSettings::SetEnableSSGI(bool bNewEnableSSGI) {
}

void UPandemicGameUserSettings::SetEnableSeasonalEvents(bool bNewEnableSeasonalEvents) {
}

void UPandemicGameUserSettings::SetEnablePaniniProjection(bool bNewEnablePaniniProjection) {
}

void UPandemicGameUserSettings::SetEnableMotionBlur(bool bNewEnableMotionBlur) {
}

void UPandemicGameUserSettings::SetEnableDepthOfField(bool bNewEnableDepthOfField) {
}

void UPandemicGameUserSettings::SetDeadzoneSensitivity(float NewDeadzoneSensitivity) {
}

void UPandemicGameUserSettings::SetCenterViewOnADS(bool bNewCenterViewOnADS) {
}

void UPandemicGameUserSettings::SetBrightness(float Value) {
}

void UPandemicGameUserSettings::SetAimingSensitivity(float NewAimingSensitivity) {
}

float UPandemicGameUserSettings::GetVoiceVolume() const {
    return 0.0f;
}

bool UPandemicGameUserSettings::GetUseBodyCam() const {
    return false;
}

TArray<FText> UPandemicGameUserSettings::GetUpscalerQualityNamesFromArray(TArray<EUpscalerQuality> UpscalerQualities) {
    return TArray<FText>();
}

EUpscalerQuality UPandemicGameUserSettings::GetUpscalerQuality() const {
    return EUpscalerQuality::UltraQuality;
}

TArray<FText> UPandemicGameUserSettings::GetUpscalerModeNamesFromArray(TArray<EUpscalerMode> UpscalerModes) {
    return TArray<FText>();
}

EUpscalerMode UPandemicGameUserSettings::GetUpscalerMode() const {
    return EUpscalerMode::None;
}

float UPandemicGameUserSettings::GetUIVolume() const {
    return 0.0f;
}

float UPandemicGameUserSettings::GetUIScale() const {
    return 0.0f;
}

bool UPandemicGameUserSettings::GetToggleSprint() const {
    return false;
}

bool UPandemicGameUserSettings::GetTogglePointShooting() const {
    return false;
}

bool UPandemicGameUserSettings::GetToggleLowReady() const {
    return false;
}

bool UPandemicGameUserSettings::GetToggleLean() const {
    return false;
}

bool UPandemicGameUserSettings::GetToggleCrouch() const {
    return false;
}

bool UPandemicGameUserSettings::GetToggleAim() const {
    return false;
}

ETextSize UPandemicGameUserSettings::GetTextSize() const {
    return ETextSize::Small;
}

TArray<EUpscalerQuality> UPandemicGameUserSettings::GetSupportedUpscalerQuality(EUpscalerMode Upscaler) {
    return TArray<EUpscalerQuality>();
}

TArray<EUpscalerMode> UPandemicGameUserSettings::GetSupportedUpscalerModes() {
    return TArray<EUpscalerMode>();
}

ESubtitleDisplayMode UPandemicGameUserSettings::GetSubtitleDisplayMode() const {
    return ESubtitleDisplayMode::None;
}

bool UPandemicGameUserSettings::GetSSGI() const {
    return false;
}

float UPandemicGameUserSettings::GetSFXVolume() const {
    return 0.0f;
}

FLinearColor UPandemicGameUserSettings::GetRedColor() const {
    return FLinearColor{};
}

float UPandemicGameUserSettings::GetPaniniProjectionAmount() const {
    return 0.0f;
}

bool UPandemicGameUserSettings::GetPaniniProjection() const {
    return false;
}

UPandemicGameUserSettings* UPandemicGameUserSettings::GetPandemicGameUserSettings() {
    return NULL;
}

FText UPandemicGameUserSettings::GetNameOfUpscalerQuality(EUpscalerQuality Upscaler) {
    return FText::GetEmpty();
}

FText UPandemicGameUserSettings::GetNameOfUpscalerMode(EUpscalerMode Upscaler) {
    return FText::GetEmpty();
}

float UPandemicGameUserSettings::GetMusicVolume() const {
    return 0.0f;
}

bool UPandemicGameUserSettings::GetMotionBlur() const {
    return false;
}

float UPandemicGameUserSettings::GetMasterVolume() const {
    return 0.0f;
}

FString UPandemicGameUserSettings::GetLastBuild() const {
    return TEXT("");
}

FString UPandemicGameUserSettings::GetLanguage() const {
    return TEXT("");
}

bool UPandemicGameUserSettings::GetInvertVerticalInput() const {
    return false;
}

bool UPandemicGameUserSettings::GetInvertHorizontalInput() const {
    return false;
}

float UPandemicGameUserSettings::GetInputSensitivity() const {
    return 0.0f;
}

FHUDElementVisibility UPandemicGameUserSettings::GetHUDElementVisibility() {
    return FHUDElementVisibility{};
}

float UPandemicGameUserSettings::GetHeadBobIntensity() const {
    return 0.0f;
}

FLinearColor UPandemicGameUserSettings::GetGreenColor() const {
    return FLinearColor{};
}

float UPandemicGameUserSettings::GetFieldOfView() const {
    return 0.0f;
}

bool UPandemicGameUserSettings::GetEnableUpscalerAutoExposure() const {
    return false;
}

bool UPandemicGameUserSettings::GetEnableSeasonalEvents() const {
    return false;
}

bool UPandemicGameUserSettings::GetDepthOfField() const {
    return false;
}

float UPandemicGameUserSettings::GetDeadzoneSensitivity() const {
    return 0.0f;
}

UNISMode UPandemicGameUserSettings::GetCurrentUpscalerQualityForNIS() {
    return UNISMode::Off;
}

UDLSSMode UPandemicGameUserSettings::GetCurrentUpscalerQualityForDLSS() {
    return UDLSSMode::Off;
}

bool UPandemicGameUserSettings::GetCenterViewOnAds() const {
    return false;
}

float UPandemicGameUserSettings::GetBrightness() const {
    return 0.0f;
}

float UPandemicGameUserSettings::GetAimingSensitivity() const {
    return 0.0f;
}

void UPandemicGameUserSettings::ApplyVideoSettings() {
}

void UPandemicGameUserSettings::ApplyUISettings() {
}

void UPandemicGameUserSettings::ApplyGameplaySettings() {
}

void UPandemicGameUserSettings::ApplyAudioSettings() {
}


