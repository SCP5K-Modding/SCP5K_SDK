#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Poolable.generated.h"

class UObjectPoolComponent;

UINTERFACE(Blueprintable)
class UPoolable : public UInterface {
    GENERATED_BODY()
};

class IPoolable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartReleasedFromPool();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReturnedToPool();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishReleasedFromPool();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddedToPool(UObjectPoolComponent* Pool);
    
};

