#include "ActivatableWidgetContainerStack.h"
#include "Components/SlateWrapperTypes.h"
#include "Templates/SubclassOf.h"

UActivatableWidgetContainerStack::UActivatableWidgetContainerStack() {
    this->Visibility = ESlateVisibility::Collapsed;
    this->DisplayedWidget = NULL;
    this->RootWidgetClass = NULL;
    this->RootWidget = NULL;
}

void UActivatableWidgetContainerStack::SetRootWidget(TSubclassOf<UActivatableWidget> WidgetClass) {
}

void UActivatableWidgetContainerStack::RemoveWidget(UActivatableWidget* WidgetToRemove) {
}

bool UActivatableWidgetContainerStack::IsWidgetClassAlreadyPresent(TSubclassOf<UActivatableWidget> WidgetClass) {
    return false;
}

UActivatableWidget* UActivatableWidgetContainerStack::GetActiveWidget() const {
    return NULL;
}

void UActivatableWidgetContainerStack::ClearWidgets() {
}

void UActivatableWidgetContainerStack::BP_AddWidgetList(const TArray<TSoftClassPtr<UActivatableWidget>>& WidgetClassList) {
}

UActivatableWidget* UActivatableWidgetContainerStack::BP_AddWidget(TSubclassOf<UActivatableWidget> WidgetClass) {
    return NULL;
}


