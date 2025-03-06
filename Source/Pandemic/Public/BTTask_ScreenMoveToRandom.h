#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "BTTask_ScreenMoveToRandom.generated.h"

class ATheatreAnomalyController;

UCLASS(Blueprintable)
class PANDEMIC_API UBTTask_ScreenMoveToRandom : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SearchDistance;
    
public:
    UBTTask_ScreenMoveToRandom();

private:
    UFUNCTION(BlueprintCallable)
    void PathfindCompleted(ATheatreAnomalyController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void PathfindCancelled(ATheatreAnomalyController* Controller);
    
};

