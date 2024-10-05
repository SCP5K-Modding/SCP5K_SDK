#pragma once
#include "CoreMinimal.h"
#include "ActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "DynamicActivatableWidgetContainer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USERINTERFACE_API UDynamicActivatableWidgetContainer : public UActivatableWidget {
    GENERATED_BODY()
public:
    UDynamicActivatableWidgetContainer();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddWidgets(const TArray<TSubclassOf<UActivatableWidget>>& Widgets);
    
};

