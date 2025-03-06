#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "RevealAnimator.generated.h"

class UAnimSequence;

UINTERFACE(Blueprintable, MinimalAPI)
class URevealAnimator : public UInterface {
    GENERATED_BODY()
};

class IRevealAnimator : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopRevealAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRevealAnimation(UAnimSequence* RevealAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPlayingRevealAnimation();
    
};

