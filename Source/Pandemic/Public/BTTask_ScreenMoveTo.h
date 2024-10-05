#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_ScreenMoveTo.generated.h"

class ATheatreAnomalyController;

UCLASS(Blueprintable)
class PANDEMIC_API UBTTask_ScreenMoveTo : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetKey;
    
public:
    UBTTask_ScreenMoveTo();

private:
    UFUNCTION(BlueprintCallable)
    void PathfindCompleted(ATheatreAnomalyController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void PathfindCancelled(ATheatreAnomalyController* Controller);
    
};

