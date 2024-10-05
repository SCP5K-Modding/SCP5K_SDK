#include "ElectronicSwitch.h"

AElectronicSwitch::AElectronicSwitch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = true;
    this->bCanBeBroken = false;
    this->bPowerSwitches = true;
    this->bInvert = false;
    this->ActivationDelay = 0.00f;
}

void AElectronicSwitch::FinishDelay() {
}

void AElectronicSwitch::EnableConnectedElectronic_Implementation(AElectronic* Electronic) {
}

void AElectronicSwitch::DisableConnectedElectronic_Implementation(AElectronic* Electronic) {
}

void AElectronicSwitch::ConnectedSwitchUpdated_Implementation(AElectronicSwitch* SWITCH) {
}


