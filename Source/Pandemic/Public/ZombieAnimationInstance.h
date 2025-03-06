#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseSnapshot -FallbackName=PoseSnapshot
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=SimpleHitData -FallbackName=SimpleHitData
#include "EZombieLifeState.h"
#include "ReanimationAnimInstance.h"
#include "Templates/SubclassOf.h"
#include "ZombieAnimationInstance.generated.h"

class AAIZombieCharacter;
class ACharacter;
class UAnimMontage;
class UDamageType;
class UHealthComponent;

UCLASS(Blueprintable, NonTransient)
class PANDEMIC_API UZombieAnimationInstance : public UAnimInstance, public IReanimationAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StrafeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LocalVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DistToGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFakingDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EZombieLifeState CurrentLifeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPoseSnapshot SavedRagdollSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRagdolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPoseSnapshot SyncedRagdollSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFakeRagdolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsReanimating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LookAtRotationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTargetSeen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBallisticHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsMeleeHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFrontHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D BodyHitPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HitDirectionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RandomIdleAnimationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RandomizedAnimStartPosition;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingDistanceCheckDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFallDistanceTraceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> MeleeAttackDamageTypeSample;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> BallisticDamageTypeSample;
    
public:
    UZombieAnimationInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void StartFallingDistanceCheck();
    
    UFUNCTION(BlueprintCallable)
    void SetZombieCharacter(AAIZombieCharacter* DesiredCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacter(ACharacter* DesiredCharacter);
    
    UFUNCTION(BlueprintCallable)
    void PrepareReanimationEnd();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnZombieUpdatedLifeState();
    
    UFUNCTION(BlueprintCallable)
    void OnZombiePrepareReanimation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnZombieDied(UHealthComponent* UpdatedHealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnZombieDamaged(UHealthComponent* UpdatedHealthComponent, FSimpleHitData HitData);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnZombieBeganFakeDeath(UHealthComponent* UpdatedHealthComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSyncPoseSnapshot(const FPoseSnapshot UpdatedPoseSnapshot, const bool bIsFaceUp);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetZombieDeathAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAIZombieCharacter* GetZombieCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPoseSnapshot GetSyncedRagdollSnapshot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    void EndFallingDistanceCheck();
    

    // Fix for true pure virtual functions not being implemented
};

