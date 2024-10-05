#include "LoadingScreenGameInstance.h"

ULoadingScreenGameInstance::ULoadingScreenGameInstance() {
    this->EnableLoadingScreen = true;
    this->LoadingScreenWidget = NULL;
    this->MinimumLoadingScreenTime = 3.00f;
    this->FadeOption = EFadeInOut::FadeInAndOut;
    this->FadeTime = 1.00f;
    this->SkipFirstMap = true;
    this->PastFirstMap = false;
    this->bIsLoadingMap = false;
    this->bIsShowingLoadingScreen = false;
    this->ManuallyRemoveLoadingScreen = false;
}

void ULoadingScreenGameInstance::PreLoadMap(const FString& InMapName) {
}

void ULoadingScreenGameInstance::MapLoaded(UWorld* InLoadedWorld) {
}

void ULoadingScreenGameInstance::EndLoadingScreen(UWorld* InLoadedWorld) {
}

void ULoadingScreenGameInstance::BeginLoadingScreen(const FString& MapName) {
}


