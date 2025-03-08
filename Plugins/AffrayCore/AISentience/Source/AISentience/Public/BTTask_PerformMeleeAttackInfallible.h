#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "AIMeleeAttackType.h"
#include "BTTask_PerformMeleeAttackInfallible.generated.h"

class AActor;
class USAIMeleeComponent;

UCLASS(Blueprintable)
class AISENTIENCE_API UBTTask_PerformMeleeAttackInfallible : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Blackboard_Target;
    
    UBTTask_PerformMeleeAttackInfallible();

    UFUNCTION(BlueprintCallable)
    void OnAttackFinished(USAIMeleeComponent* AttackingComponent, AActor* AttackedActor, uint8 AttackIndex, FAIMeleeAttackType Attack);
    
};

