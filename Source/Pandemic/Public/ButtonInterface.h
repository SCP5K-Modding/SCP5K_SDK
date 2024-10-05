#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ButtonInterface.generated.h"

UINTERFACE(Blueprintable)
class UButtonInterface : public UInterface {
    GENERATED_BODY()
};

class IButtonInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUnselected();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUnhovered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHovered();
    
};

