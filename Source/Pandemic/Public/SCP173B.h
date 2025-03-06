#pragma once
#include "CoreMinimal.h"
#include "ESCP173BehaviorState.h"
#include "SCP173Base.h"
#include "Templates/SubclassOf.h"
#include "SCP173B.generated.h"

class AActor;
class UCurveFloat;
class UDamageType;
class UFMODEvent;
class USCP173HallucinogenComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ASCP173B : public ASCP173Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USCP173HallucinogenComponent* HallucinogenComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* WarningSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BloodthirstParameterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GraceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StalkingMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BloodthirstMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BehaviorState, meta=(AllowPrivateAccess=true))
    ESCP173BehaviorState BehaviorState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsAttemptingKill;
    
public:
    ASCP173B(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetBehaviorState(ESCP173BehaviorState InBehaviorState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_BehaviorState();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void KillTarget(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttemptingKill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentKillTarget() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EnterStalkingState();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EnterBloodthirstState();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CancelKill();
    
};

