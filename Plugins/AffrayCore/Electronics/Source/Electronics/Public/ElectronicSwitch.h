#pragma once
#include "CoreMinimal.h"
#include "Electronic.h"
#include "ElectronicSwitch.generated.h"

class AActor;
class AElectronicSwitch;

UCLASS(Blueprintable)
class ELECTRONICS_API AElectronicSwitch : public AElectronic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AElectronic*> ConnectedElectronics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AElectronicSwitch*> ConnectedSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ConnectedActivatables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPowerSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationDelay;
    
    AElectronicSwitch(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void FinishDelay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnableConnectedElectronic(AElectronic* Electronic);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisableConnectedElectronic(AElectronic* Electronic);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ConnectedSwitchUpdated(AElectronicSwitch* SWITCH);
    
};

