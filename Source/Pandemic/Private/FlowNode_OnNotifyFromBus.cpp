#include "FlowNode_OnNotifyFromBus.h"

UFlowNode_OnNotifyFromBus::UFlowNode_OnNotifyFromBus() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(3);
    this->bIsPayloadEvent = false;
    this->SuccessLimit = 0;
    this->SuccessCount = 0;
    this->bRetroactive = false;
}

void UFlowNode_OnNotifyFromBus::OnEventReceived() {
}

void UFlowNode_OnNotifyFromBus::OnEventBusPayloadNotified(const UGenericGameEvent* Event) {
}

void UFlowNode_OnNotifyFromBus::OnEventBusNotified(const UObject* _, const UObject* __) {
}


