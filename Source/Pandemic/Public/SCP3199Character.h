#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIZombieCharacter.h"
#include "ESCP3199ActionState.h"
#include "SCP3199Character.generated.h"

class ACharacter;
class UAnimMontage;
class UFMODEvent;

UCLASS(Blueprintable)
class PANDEMIC_API ASCP3199Character : public AAIZombieCharacter {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdatedActionStateDelegate, ESCP3199ActionState, NewActionState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnChargeCrashedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdatedActionStateDelegate OnUpdatedActionState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChargeCrashedDelegate OnChargeCrashed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentActionState, meta=(AllowPrivateAccess=true))
    ESCP3199ActionState CurrentActionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPanicking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPanickingDeathDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPanickingDeathDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsCrashing, meta=(AllowPrivateAccess=true))
    bool bIsCrashing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTurning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCrashOnHitCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeDamageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxChargeZDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinChargeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxChargeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeCollisionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeDotProductThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACharacter*> ChargeHitCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float RotationDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DoorwayMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ChargeCrashMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TurnLeftMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TurnRightMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TurnLeftSharpMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TurnRightSharpMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeStartSoundDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange TeethChatterRandomDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ChargeCrashSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ChargeStartSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MeleeAttackKillSound;
    
public:
    ASCP3199Character(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void TeethChatterQueueControlLoop();
    
private:
    UFUNCTION(BlueprintCallable)
    void StopTurning_Delayed();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRotationDelta(float Delta);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsPanicking(bool bPanicked);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsCrashing(bool bCrashed);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCurrentActionState(ESCP3199ActionState NewActionState);
    
private:
    UFUNCTION(BlueprintCallable)
    void ServerBeginChargeCrash();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void PlayTeethChatter();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void PlayChargeStartSound_Delayed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_IsCrashing();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CurrentActionState();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastCosmeticStartTurning(UAnimMontage* Montage, float PlayRate);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastCosmeticChargeCrash();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotationDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinChargeDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxChargeZDifference() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxChargeDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsTurning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPanicking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCrashing() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetDoorwayMontage() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESCP3199ActionState GetCurrentActionState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChargeDotProductThreshold() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetChargeCrashSound() const;
    
};
