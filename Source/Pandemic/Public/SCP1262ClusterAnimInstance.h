#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SCP1262ClusterAnimInstance.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, NonTransient)
class PANDEMIC_API USCP1262ClusterAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* HitMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DeathMontage;
    
public:
    USCP1262ClusterAnimInstance();

    UFUNCTION(BlueprintCallable)
    void PlayHitAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayDeathAnimation();
    
};

