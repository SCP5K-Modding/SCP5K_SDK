#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=AIMeleeAttackType -FallbackName=AIMeleeAttackType
#include "BTTask_PerformMeleeAttack.generated.h"

class AActor;
class USAIMeleeComponent;

UCLASS(Blueprintable)
class AISENTIENCE_API UBTTask_PerformMeleeAttack : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Blackboard_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSucceedEvenIfDamageFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSucceedEvenIfCanceled;
    
    UBTTask_PerformMeleeAttack();

    UFUNCTION(BlueprintCallable)
    void OnAttackFinished(USAIMeleeComponent* AttackingComponent, AActor* AttackedActor, uint8 AttackIndex, FAIMeleeAttackType Attack);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackCanceled(USAIMeleeComponent* AttackingComponent, AActor* AttackedActor, uint8 AttackIndex, FAIMeleeAttackType Attack);
    
};

