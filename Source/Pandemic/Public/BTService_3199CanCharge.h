#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_3199CanCharge.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UBTService_3199CanCharge : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ChargeTargetKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ChargeLocationKey;
    
    UBTService_3199CanCharge();

};

