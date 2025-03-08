#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "ExternalWidgetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USERINTERFACE_API UExternalWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UExternalWidgetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ForceDrawWidget();
    
};

