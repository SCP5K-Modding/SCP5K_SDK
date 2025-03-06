#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "RevealAnimationInterface.generated.h"

class URevealAnimationComponent;

UINTERFACE(Blueprintable)
class PANDEMIC_API URevealAnimationInterface : public UInterface {
    GENERATED_BODY()
};

class PANDEMIC_API IRevealAnimationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RunBehavior();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResumeBehavior(bool bRestart);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PauseBehavior();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    URevealAnimationComponent* GetRevealAnimationComponent() const;
    
};

