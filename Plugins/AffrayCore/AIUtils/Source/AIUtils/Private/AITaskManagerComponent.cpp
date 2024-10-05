#include "AITaskManagerComponent.h"
#include "Templates/SubclassOf.h"

UAITaskManagerComponent::UAITaskManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
}

void UAITaskManagerComponent::SortTasks() {
}

void UAITaskManagerComponent::SortHighPriorityTasks() {
}

void UAITaskManagerComponent::SortGeneralTasks() {
}

void UAITaskManagerComponent::RemoveTask(UTaskManagerTask* Task) {
}

bool UAITaskManagerComponent::HasHighPriorityTask() const {
    return false;
}

bool UAITaskManagerComponent::HasAnyTasks() const {
    return false;
}

UTaskManagerTask* UAITaskManagerComponent::AddTask(TSubclassOf<UTaskManagerTask> NewTask, ETaskManagerTaskType Stack, bool Sort) {
    return NULL;
}

void UAITaskManagerComponent::AddStack(TArray<TSubclassOf<UTaskManagerTask>> StackToAdd, ETaskManagerTaskType StackType) {
}

void UAITaskManagerComponent::AddQueue(TArray<TSubclassOf<UTaskManagerTask>> Queue, ETaskManagerTaskType Stack) {
}


