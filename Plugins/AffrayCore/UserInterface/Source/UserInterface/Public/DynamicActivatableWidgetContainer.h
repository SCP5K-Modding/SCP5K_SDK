#pragma once
#include "CoreMinimal.h"
#include "ActivatableWidget.h"
#include "DynamicActivatableWidgetContainer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USERINTERFACE_API UDynamicActivatableWidgetContainer : public UActivatableWidget {
    GENERATED_BODY()
public:
    UDynamicActivatableWidgetContainer();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddWidgets(const TArray<TSoftClassPtr<UActivatableWidget>>& Widgets);
    
};

