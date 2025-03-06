#include "KillCounterAsyncAction.h"

UKillCounterAsyncAction::UKillCounterAsyncAction() {
    this->WorldContext = NULL;
}

void UKillCounterAsyncAction::TimerCompleted() {
}

UKillCounterAsyncAction* UKillCounterAsyncAction::CreateKillCounter(UObject* InWorldContext, int32 InTarget, const TArray<TSoftClassPtr<APawn>>& InClassFilter, FName InCounterName, float InTimer, bool bInRemoveAfterTimerCompleted) {
    return NULL;
}

void UKillCounterAsyncAction::CounterUpdated(APawn* InEnemy, int32 InRemainingEnemies, FName InCounterName) {
}

void UKillCounterAsyncAction::CounterCompleted(APawn* InEnemy, int32 InRemainingEnemies, FName InCounterName) {
}


