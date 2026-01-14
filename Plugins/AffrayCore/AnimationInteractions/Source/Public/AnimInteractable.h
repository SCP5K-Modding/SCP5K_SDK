#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "AnimInteractable.generated.h"

class UAnimInteractionComponent;
class UAnimSequenceBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UAnimInteractable : public UInterface {
    GENERATED_BODY()
};

class IAnimInteractable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AnimInteractionTriggered(UAnimInteractionComponent* InstigatingComponent, UAnimSequenceBase* Animation);
    
};

