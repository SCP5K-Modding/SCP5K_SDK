#include "MainGameLayout.h"
#include "Templates/SubclassOf.h"

UMainGameLayout::UMainGameLayout() : UUserWidget(FObjectInitializer::Get()) {
}

void UMainGameLayout::RegisterLayer(FGameplayTag LayerTag, UActivatableWidgetContainerStack* LayerWidget) {
}

UActivatableWidgetContainerStack* UMainGameLayout::GetLayerWidget(FGameplayTag LayerName) {
    return NULL;
}

UActivatableWidget* UMainGameLayout::GetActiveLayerWidget(FGameplayTag LayerName, TSubclassOf<UActivatableWidget> ActivatableWidgetClass) {
    return NULL;
}

UActivatableWidget* UMainGameLayout::AddWidgetToLayer(FGameplayTag Layer, TSubclassOf<UActivatableWidget> ActivatableWidgetClass) {
    return NULL;
}


