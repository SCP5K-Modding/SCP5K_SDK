#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "DeferredDespawnImplementor.generated.h"

class UDeferredDespawnComponent;

UINTERFACE(Blueprintable)
class PANDEMIC_API UDeferredDespawnImplementor : public UInterface {
    GENERATED_BODY()
};

class PANDEMIC_API IDeferredDespawnImplementor : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UDeferredDespawnComponent* GetDespawnComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeferredDespawn(float Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeDespawned() const;
    
};

