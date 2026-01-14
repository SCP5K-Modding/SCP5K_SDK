#include "FlowNode_NotifyBus.h"

UFlowNode_NotifyBus::UFlowNode_NotifyBus() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->NetMode = EFlowNetMode::Authority;
}


