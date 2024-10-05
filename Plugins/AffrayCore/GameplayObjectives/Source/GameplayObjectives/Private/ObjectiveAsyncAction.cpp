#include "ObjectiveAsyncAction.h"

UObjectiveAsyncAction::UObjectiveAsyncAction() {
    this->CurrentObjective = NULL;
}

void UObjectiveAsyncAction::ObjectiveUpdated(UObjective* Objective) {
}

void UObjectiveAsyncAction::ObjectiveStopped(UObjective* Objective, bool bWasStarted) {
}

void UObjectiveAsyncAction::ObjectiveStarted(UObjective* Objective, bool bWasStarted) {
}

void UObjectiveAsyncAction::ObjectiveReset(UObjective* Objective) {
}

UObjectiveAsyncAction* UObjectiveAsyncAction::ObjectiveEvents(UObjective* InObjective) {
    return NULL;
}

void UObjectiveAsyncAction::ObjectiveDeactivated(UObjective* Objective) {
}

void UObjectiveAsyncAction::ObjectiveCompleted(UObjective* Objective, bool bSucceded) {
}

void UObjectiveAsyncAction::ObjectiveActivated(UObjective* Objective) {
}


