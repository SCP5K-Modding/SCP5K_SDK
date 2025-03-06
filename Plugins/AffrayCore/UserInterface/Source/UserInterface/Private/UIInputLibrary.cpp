#include "UIInputLibrary.h"
#include "Templates/SubclassOf.h"

UUIInputLibrary::UUIInputLibrary() {
}

void UUIInputLibrary::PushStreamedContentToLayer(FGameplayTag LayerName, TSoftClassPtr<UActivatableWidget> WidgetClass) {
}

UActivatableWidget* UUIInputLibrary::PushContentToLayer(FGameplayTag LayerName, TSubclassOf<UActivatableWidget> WidgetClass) {
    return NULL;
}

void UUIInputLibrary::PopContentFromLayer(UActivatableWidget* ActivatableWidget) {
}

bool UUIInputLibrary::IsPlayerUsingGamepad(const UUserWidget* WidgetContextObject) {
    return false;
}

EInputType UUIInputLibrary::GetOwningPlayerInputType(const UUserWidget* WidgetContextObject) {
    return EInputType::MouseAndKeyboard;
}

UUserWidget* UUIInputLibrary::GetFirstWidgetNative(UWidget* Widget) {
    return NULL;
}

UUserWidget* UUIInputLibrary::GetFirstWidget(const UUserWidget* Widget) {
    return NULL;
}


