#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HungerInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UHungerInterface : public UInterface {
    GENERATED_BODY()
};

class IHungerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EatBody(bool bShouldEat);
    
};

