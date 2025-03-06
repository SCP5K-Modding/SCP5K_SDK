#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
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

