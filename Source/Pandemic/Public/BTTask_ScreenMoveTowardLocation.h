#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_ScreenMoveTowardLocation.generated.h"

class ATheatreAnomalyController;

UCLASS(Blueprintable)
class PANDEMIC_API UBTTask_ScreenMoveTowardLocation : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetLocationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptedDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreVisibility;
    
public:
    UBTTask_ScreenMoveTowardLocation();

private:
    UFUNCTION(BlueprintCallable)
    void PathfindCompleted(ATheatreAnomalyController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void PathfindCancelled(ATheatreAnomalyController* Controller);
    
};

