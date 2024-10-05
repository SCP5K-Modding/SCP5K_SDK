#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Activatable.generated.h"

UINTERFACE(Blueprintable)
class UActivatable : public UInterface {
    GENERATED_BODY()
};

class IActivatable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Enable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Disable();
    
};

