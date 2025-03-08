#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
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

