#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
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

