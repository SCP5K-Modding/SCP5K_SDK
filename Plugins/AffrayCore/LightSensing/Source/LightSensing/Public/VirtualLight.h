#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "VirtualLight.generated.h"

UINTERFACE(Blueprintable)
class UVirtualLight : public UInterface {
    GENERATED_BODY()
};

class IVirtualLight : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetRadius();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetIntensity();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetHasCone();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetConeMinDot();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetCastsShadows();
    
};

