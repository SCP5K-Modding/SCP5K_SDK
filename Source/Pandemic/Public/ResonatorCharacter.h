#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AISentience -ObjectName=Climber -FallbackName=Climber
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=Damageable -FallbackName=Damageable
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=MeleeUser -FallbackName=MeleeUser
#include "HungerInterface.h"
#include "ResonatorMeleeHitDataMCDelegateDelegate.h"
#include "Rotator_NetQuantize.h"
#include "ResonatorCharacter.generated.h"

class AActor;
class AController;
class USAIMeleeComponent;

UCLASS(Blueprintable)
class PANDEMIC_API AResonatorCharacter : public ACharacter, public IMeleeUser, public IDamageable, public IClimber, public IHungerInterface {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator_NetQuantize DesiredRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> BoneDamageMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Eating, meta=(AllowPrivateAccess=true))
    bool bEating;
    
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
    void SetEating(bool bNewEating);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCurrentMoveSpeed(float DesiredSpeed);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsDead();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Eating();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CurrentMoveSpeed();
    
public:
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

