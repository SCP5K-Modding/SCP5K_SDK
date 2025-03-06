#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "InterruptibleAnimator.generated.h"

class UInterruptibleAnimComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UInterruptibleAnimator : public UInterface {
    GENERATED_BODY()
};

class IInterruptibleAnimator : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UInterruptibleAnimComponent* GetInterruptibleAnimComponent() const;
    
};

