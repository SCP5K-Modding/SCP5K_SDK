#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "CrowdFollowingAIControllerBase.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API ACrowdFollowingAIControllerBase : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavQueryCostVariance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavQueryCostMultiplier;
    
public:
    ACrowdFollowingAIControllerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNavQueryCostVariance(float NewVariance);
    
    UFUNCTION(BlueprintCallable)
    void SetNavQueryCostMultiplier(float NewMultiplier);
    
};

