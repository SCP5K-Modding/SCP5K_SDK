#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
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

