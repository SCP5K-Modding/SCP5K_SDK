#include "ActivatableWidget.h"

UActivatableWidget::UActivatableWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->InputMode = EWidgetInputMode::Default;
    this->GameMouseCaptureMode = EMouseCaptureMode::CapturePermanently;
    this->ActionMappings.AddDefaulted(1);
    this->bSupportsBackAction = false;
    this->bAutoActivate = false;
    this->bSupportsActivationFocus = true;
    this->bIsDialogue = false;
    this->bAutoRestoreFocus = false;
    this->bIsActive = false;
    this->bSetVisibilityOnActivated = false;
    this->ActivatedVisibility = ESlateVisibility::SelfHitTestInvisible;
    this->bSetVisibilityOnDeactivated = false;
    this->DeactivatedVisibility = ESlateVisibility::Collapsed;
}

void UActivatableWidget::UpdateInput() {
}

bool UActivatableWidget::IsActivated() const {
    return false;
}

UWidget* UActivatableWidget::GetDesiredFocusTarget() const {
    return NULL;
}

void UActivatableWidget::DeactivateWidget() {
}





void UActivatableWidget::ActivateWidget() {
}


