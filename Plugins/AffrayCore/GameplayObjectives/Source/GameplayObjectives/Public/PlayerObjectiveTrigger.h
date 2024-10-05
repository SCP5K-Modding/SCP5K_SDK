#pragma once
#include "CoreMinimal.h"
#include "ObjectiveTrigger.h"
#include "PlayerObjectiveTrigger.generated.h"

class AActor;
class UObjective;

UCLASS(Blueprintable)
class GAMEPLAYOBJECTIVES_API APlayerObjectiveTrigger : public AObjectiveTrigger {
    GENERATED_BODY()
public:
    APlayerObjectiveTrigger(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnObjectiveReset(UObjective* InObjective);
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

