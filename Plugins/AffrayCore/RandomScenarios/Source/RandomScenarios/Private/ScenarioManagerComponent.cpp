#include "ScenarioManagerComponent.h"

UScenarioManagerComponent::UScenarioManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumberOfScenariosToSelect = 1;
    this->bSelectRandomScenario = true;
}

void UScenarioManagerComponent::SetCurrentScenarios(const TArray<int32>& NewScenarios) {
}

void UScenarioManagerComponent::SetCurrentScenario(int32 Scenario) {
}

void UScenarioManagerComponent::SelectRandomScenario() {
}

void UScenarioManagerComponent::SelectNextScenario() {
}


