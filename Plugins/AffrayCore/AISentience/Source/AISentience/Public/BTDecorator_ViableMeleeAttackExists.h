#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_ViableMeleeAttackExists.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API UBTDecorator_ViableMeleeAttackExists : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Blackboard_Target;
    
    UBTDecorator_ViableMeleeAttackExists();

};

