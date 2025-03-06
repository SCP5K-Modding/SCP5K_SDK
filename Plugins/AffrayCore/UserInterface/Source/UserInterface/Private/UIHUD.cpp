#include "UIHUD.h"
#include "Templates/SubclassOf.h"

AUIHUD::AUIHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->MaxChatCharacterAmount = 100;
    this->MainUIWidgetClass = NULL;
    this->ChatWidget = NULL;
    this->MainUILayout = NULL;
    this->DynamicContainerWidget = NULL;
}


EPlayerActionReturn AUIHUD::UnblockPlayer(APlayerState* PlayerState) {
    return EPlayerActionReturn::Blocked;
}

void AUIHUD::ToggleHUD() {
}


void AUIHUD::SetHUDVisibility(bool Visible) {
}

void AUIHUD::SetForceHideHUD(bool bShouldHideHUD) {
}

void AUIHUD::SetChatWidget(UWidget* Widget) {
}

void AUIHUD::PushUI(const TArray<TSoftClassPtr<UActivatableWidget>>& WidgetList) {
}

void AUIHUD::PushPostGameUI(const TArray<TSoftClassPtr<UActivatableWidget>>& WidgetList) {
}

void AUIHUD::PushCachedPreGameUI() {
}

void AUIHUD::PushCachedPostGameUI() {
}

void AUIHUD::PlayerUpdated(APlayerState* PlayerState) {
}

void AUIHUD::PlayerHealthUpdated(APlayerState* PlayerState, float Health) {
}


void AUIHUD::LocalPlayerPawnUpdated(APlayerController* Controller, APawn* Pawn) {
}

bool AUIHUD::IsPlayerBlocked(APlayerState* PlayerState) {
    return false;
}

bool AUIHUD::GetHUDVisibility() {
    return false;
}


EPlayerActionReturn AUIHUD::BlockPlayer(APlayerState* PlayerState) {
    return EPlayerActionReturn::Blocked;
}

UActivatableWidget* AUIHUD::AddWidgetToLayer(TSubclassOf<UActivatableWidget> Widget, FGameplayTag Layer) {
    return NULL;
}

void AUIHUD::AddNotifier(const FText& Text) {
}



