#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_SCP173B.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UBTService_SCP173B : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Blackboard_TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Blackboard_IsObserved;
    
    UBTService_SCP173B();

};

