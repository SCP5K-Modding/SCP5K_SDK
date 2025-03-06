#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=AIMeleeAttackType -FallbackName=AIMeleeAttackType
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

