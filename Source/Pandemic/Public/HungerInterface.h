#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
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

