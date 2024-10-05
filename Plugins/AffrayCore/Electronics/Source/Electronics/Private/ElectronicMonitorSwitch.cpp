#include "ElectronicMonitorSwitch.h"

AElectronicMonitorSwitch::AElectronicMonitorSwitch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ElectronicToMonitor = NULL;
}

void AElectronicMonitorSwitch::ElectronicEnabledUpdated(AElectronic* Electronic, bool bInEnabled) {
}


