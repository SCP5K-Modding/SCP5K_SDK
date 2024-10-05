#pragma once
#include "CoreMinimal.h"
#include "ESwitchResetMode.h"
#include "ElectronicSwitch.h"
#include "MultiSwitch.generated.h"

class AActor;

UCLASS(Blueprintable)
class ELECTRONICS_API AMultiSwitch : public AElectronicSwitch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESwitchResetMode> ResetMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetSwitchesOnClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AElectronicSwitch*> ExtraSwitchesToClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableTimerOnEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AActor*> Inputs;
    
    AMultiSwitch(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeTillReset() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearInputs();
    
    UFUNCTION(BlueprintCallable)
    void CheckInputs();
    
};

