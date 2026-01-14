#include "FlowNode_Objective.h"

UFlowNode_Objective::UFlowNode_Objective() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(9);
    this->OutputPins.AddDefaulted(9);
    this->Objective = NULL;
    this->bFinishNodeOnComplete = true;
    this->bFinishNodeOnDeactivation = false;
}

void UFlowNode_Objective::OnObjectiveUpdated(UObjective* InObjective) {
}

void UFlowNode_Objective::OnObjectiveStopped(UObjective* InObjective, bool bWasStarted) {
}

void UFlowNode_Objective::OnObjectiveStarted(UObjective* InObjective, bool bWasStarted) {
}

void UFlowNode_Objective::OnObjectiveReset(UObjective* InObjective) {
}

void UFlowNode_Objective::OnObjectiveDeactivated(UObjective* InObjective) {
}

void UFlowNode_Objective::OnObjectiveCompleted(UObjective* InObjective, bool bSucceeded) {
}

void UFlowNode_Objective::OnObjectiveActivated(UObjective* InObjective) {
}


