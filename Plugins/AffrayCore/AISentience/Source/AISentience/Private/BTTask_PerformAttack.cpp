#include "BTTask_PerformAttack.h"

UBTTask_PerformAttack::UBTTask_PerformAttack() {
    this->bSucceedOnStart = false;
    this->bSucceedEvenIfDamageFailed = true;
    this->bSucceedEvenIfCanceled = false;
    this->bCancelAttackOnAbort = false;
    this->bUseSpecificAttack = false;
}

void UBTTask_PerformAttack::OnAttackFinished(USAIAttackComponent* AttackComponent, const AActor* Target, const USAIAttack* Attack, uint8 AttackIndex) {
}

void UBTTask_PerformAttack::OnAttackCanceled(USAIAttackComponent* AttackComponent, const AActor* Target, const USAIAttack* Attack, uint8 AttackIndex) {
}


