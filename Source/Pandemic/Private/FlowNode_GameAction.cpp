#include "FlowNode_GameAction.h"

UFlowNode_GameAction::UFlowNode_GameAction() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->GameAction = NULL;
}


