#include "TaskManagerTask.h"

UTaskManagerTask::UTaskManagerTask() {
    this->TaskPriority = 0;
    this->bRestoreTaskInCaseOfPrerequisiteFailure = true;
    this->bRestoreTaskInCaseOfAbort = false;
    this->MaxPrerequisiteFailureRestoration = 0;
    this->MaxAbortRestoration = 2;
}

    EBTNodeResult::Type UTaskManagerTask::TickTask_Implementation(UBehaviorTreeComponent* OwnerComp, float DeltaSeconds) {
    return EBTNodeResult::Succeeded;
}

bool UTaskManagerTask::ShouldBeRestored_Implementation(bool bRestorationReason) const {
    return false;
}

bool UTaskManagerTask::IsHighPriorityTask_Implementation() const {
    return false;
}

bool UTaskManagerTask::HasBeenInitialized() const {
    return false;
}

int32 UTaskManagerTask::GetTaskPriority_Implementation() const {
    return 0;
}

void UTaskManagerTask::FinishTask_Implementation(AAIController* OwningController) {
}

EBTNodeResult::Type UTaskManagerTask::ExecuteTask_Implementation(UBehaviorTreeComponent* OwnerComp) {
    return EBTNodeResult::Succeeded;
}

bool UTaskManagerTask::DoPrerequisiteOperation_Implementation(AAIController* OwningController) {
    return false;
}

bool UTaskManagerTask::CanExecuteTask_Implementation() const {
    return false;
}

void UTaskManagerTask::AbortTask_Implementation(UBehaviorTreeComponent* OwnerComp) {
}


