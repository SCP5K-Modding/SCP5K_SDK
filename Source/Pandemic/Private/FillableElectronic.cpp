#include "FillableElectronic.h"
#include "Net/UnrealNetwork.h"

AFillableElectronic::AFillableElectronic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Capacity = 2;
    this->CurrentAmount = 0;
    this->MissionItemType = EMissionItemType::MI_Other;
}

void AFillableElectronic::OnRep_CurrentAmount() {
}

void AFillableElectronic::InteractionSucceded_Implementation(ACharacter* Character) {
}

void AFillableElectronic::InteractionFailed_Implementation(ACharacter* Character) {
}

EMissionItemType AFillableElectronic::GetMissionItemType() const {
    return EMissionItemType::MI_Other;
}

FName AFillableElectronic::GetMissionItemID() const {
    return NAME_None;
}

int32 AFillableElectronic::GetCurrentAmount() const {
    return 0;
}

int32 AFillableElectronic::GetCapacity() const {
    return 0;
}


void AFillableElectronic::CharacterInteracted(ACharacter* Character) {
}

void AFillableElectronic::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFillableElectronic, CurrentAmount);
}


