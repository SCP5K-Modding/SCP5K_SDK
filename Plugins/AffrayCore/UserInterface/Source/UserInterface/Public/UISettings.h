#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UISettings.generated.h"

UINTERFACE(Blueprintable)
class UUISettings : public UInterface {
    GENERATED_BODY()
};

class IUISettings : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UIHUDElementUpdated();
    
};

