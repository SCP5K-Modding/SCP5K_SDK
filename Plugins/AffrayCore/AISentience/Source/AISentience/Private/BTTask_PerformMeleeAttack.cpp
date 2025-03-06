#include "BTTask_PerformMeleeAttack.h"

UBTTask_PerformMeleeAttack::UBTTask_PerformMeleeAttack() {
    this->bSucceedEvenIfDamageFailed = true;
    this->bSucceedEvenIfCanceled = false;
}

void UBTTask_PerformMeleeAttack::OnAttackFinished(USAIMeleeComponent* AttackingComponent, AActor* AttackedActor, uint8 AttackIndex, FAIMeleeAttackType Attack) {
}

void UBTTask_PerformMeleeAttack::OnAttackCanceled(USAIMeleeComponent* AttackingComponent, AActor* AttackedActor, uint8 AttackIndex, FAIMeleeAttackType Attack) {
}


