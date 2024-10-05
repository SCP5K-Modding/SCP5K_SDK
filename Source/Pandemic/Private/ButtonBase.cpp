#include "ButtonBase.h"

UButtonBase::UButtonBase() : UUserWidget(FObjectInitializer::Get()) {
    this->TextBlock = NULL;
    this->SizeBox = NULL;
    this->Image = NULL;
    this->Button = NULL;
    this->bIsHovered = false;
    this->bIsPressed = false;
    this->DebugOption = EDubugType::E_Disabled;
    this->DebugText = NULL;
    this->ButtonType = EButtonType::E_Normal;
    this->ButtonState = EButtonState::E_Normal;
    this->PreviousState = EButtonState::E_Normal;
    this->PlayAudio = true;
    this->bUseFMOD = false;
    this->BaseHoveredAudio = NULL;
    this->BaseSelectedAudio = NULL;
    this->FMODHoveredAudio = NULL;
    this->FMODSelectedAudio = NULL;
    this->BaseHoveredVolume = 1.00f;
    this->BaseSelectedVolume = 1.00f;
    this->VisualDelta = 0.00f;
    this->VisualLock = false;
    this->ObjectClass = NULL;
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
    this->Justification = ETextJustify::Left;
    this->ButtonStyle = NULL;
}


void UButtonBase::UpdateConnectedButtons() {
}

void UButtonBase::Unselected_Implementation() {
}

void UButtonBase::Unhovered_Implementation() {
}


void UButtonBase::SetVisualDelta(float Delta) {
}

void UButtonBase::SetSecondaryText_Implementation(const FText& Text) {
}

void UButtonBase::SetPrimaryText_Implementation(const FText& Text) {
}

void UButtonBase::SetImageTexture(UTexture2D* Texture) {
}

void UButtonBase::SetButtonState(EButtonState State) {
}

void UButtonBase::Selected_Implementation() {
}

void UButtonBase::Released() {
}


void UButtonBase::Pressed() {
}


void UButtonBase::PlaySelectedAudio() {
}

void UButtonBase::PlayHoveredAudio() {
}




void UButtonBase::Hovered_Implementation() {
}

void UButtonBase::DrawDebugText() {
}


