#pragma once
#include "CoreMinimal.h"
#include "ESCP3199ActionState.h"
#include "ZombieAnimationInstance.h"
#include "SCP3199AnimationInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class PANDEMIC_API USCP3199AnimationInstance : public UZombieAnimationInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RotationDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESCP3199ActionState CurrentActionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPanicking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCharging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCrashing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTurning;
    
public:
    USCP3199AnimationInstance();

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdatedActionState(ESCP3199ActionState NewActionState);
    
    UFUNCTION(BlueprintCallable)
    void OnChargeCrashed();
    
};

