#pragma once
#include "CoreMinimal.h"
#include "Climber.h"
#include "GameFramework/Character.h"
#include "Engine/NetSerialization.h"
#include "Damageable.h"
#include "MeleeUser.h"
#include "ResonatorMeleeHitDataMCDelegateDelegate.h"
#include "Rotator_NetQuantize.h"
#include "ResonatorCharacter.generated.h"

class AActor;
class AController;
class UDamageType;
class USAIMeleeComponent;

UCLASS(Blueprintable)
class PANDEMIC_API AResonatorCharacter : public ACharacter, public IMeleeUser, public IDamageable, public IClimber {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResonatorMeleeHitDataMCDelegate ResonatorAttackRequestedMCDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResonatorMeleeHitDataMCDelegate ResonatorAttackMCDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USAIMeleeComponent* MeleeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsTargetVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize LastSeenTargetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize FocusLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator_NetQuantize ControlRotation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsDead, meta=(AllowPrivateAccess=true))
    bool bIsDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentMoveSpeed, meta=(AllowPrivateAccess=true))
    float CurrentMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinMoveSpeedVariance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMoveSpeedVariance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RandomMoveSpeedVariance;
    
public:
    AResonatorCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SetMinMoveSpeedVariance(float DesiredMinVariance);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimumMovementSpeed(float DesiredMinimum);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxMoveSpeedVariance(float DesiredMaxVariance);
    
    UFUNCTION(BlueprintCallable)
    void SetMaximumMovementSpeed(float DesiredMaximum);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCurrentMoveSpeed(float DesiredSpeed);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsDead();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CurrentMoveSpeed();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDamage(AActor* DamagedActor, float Damage, const UDamageType* RecievingDamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRandomMoveSpeedVariance() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinMoveSpeedVariance() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinimumMovementSpeed() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxMoveSpeedVariance() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaximumMovementSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentMoveSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Die(AActor* Causer, AController* InstigatedBy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticDie();
    

    // Fix for true pure virtual functions not being implemented
};

