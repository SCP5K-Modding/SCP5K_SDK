#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
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

