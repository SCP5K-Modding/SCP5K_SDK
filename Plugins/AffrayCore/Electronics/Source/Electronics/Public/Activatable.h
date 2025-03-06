#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
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

