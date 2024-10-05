#pragma once
#include "CoreMinimal.h"
#include "ElectronicSwitch.h"
#include "ElectronicMonitorSwitch.generated.h"

class AElectronic;

UCLASS(Blueprintable)
class ELECTRONICS_API AElectronicMonitorSwitch : public AElectronicSwitch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AElectronic* ElectronicToMonitor;
    
    AElectronicMonitorSwitch(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ElectronicEnabledUpdated(AElectronic* Electronic, bool bInEnabled);
    
};

