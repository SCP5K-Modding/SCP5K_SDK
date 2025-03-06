#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ScenarioItem.generated.h"

UINTERFACE(Blueprintable)
class UScenarioItem : public UInterface {
    GENERATED_BODY()
};

class IScenarioItem : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ScenarioEnabledChanged(bool bEnabled);
    
};

