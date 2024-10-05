#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
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

