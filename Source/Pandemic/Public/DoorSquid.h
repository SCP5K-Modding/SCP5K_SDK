#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamAgentInterface -FallbackName=GenericTeamAgentInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=AISentience -ObjectName=ESAITeam -FallbackName=ESAITeam
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=Damageable -FallbackName=Damageable
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=MeleeUser -FallbackName=MeleeUser
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=Suppressable -FallbackName=Suppressable
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "RevealAnimator.h"
#include "Templates/SubclassOf.h"
#include "DoorSquid.generated.h"

class AActor;
class AController;
class UAIPerceptionStimuliSourceComponent;
class UActorComponent;
class UBoxComponent;
class UDamageType;
class UDoorSquidAnimationInstance;
class UFMODAudioComponent;
class UFMODEvent;
class UPhysicsHandleComponent;
class UPrimitiveComponent;
class USkeletalMeshComponent;
class USphereComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ADoorSquid : public APawn, public IRevealAnimator, public IDamageable, public IMeleeUser, public IGenericTeamAgentInterface, public ISuppressable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentHealth, meta=(AllowPrivateAccess=true))
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsDead, meta=(AllowPrivateAccess=true))
    bool bIsDead;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsAlert, meta=(AllowPrivateAccess=true))
    bool bIsAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsDead, meta=(AllowPrivateAccess=true))
    bool bAttackHostileTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsAlert, meta=(AllowPrivateAccess=true))
    bool bAttackNeutralTeam;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Enraged, meta=(AllowPrivateAccess=true))
    bool bEnraged;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_KilledEdibleActor, meta=(AllowPrivateAccess=true))
    bool bKilledEdibleActor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Eating, meta=(AllowPrivateAccess=true))
    bool bEating;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Jittering, meta=(AllowPrivateAccess=true))
    bool bJittering;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_JitterOnCooldown, meta=(AllowPrivateAccess=true))
    bool bJitterOnCooldown;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Knocking, meta=(AllowPrivateAccess=true))
    bool bKnocking;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_KnockOnCooldown, meta=(AllowPrivateAccess=true))
    bool bKnockOnCooldown;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Attacking, meta=(AllowPrivateAccess=true))
    bool bIsAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusDetectionZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTargetActorKillEscapeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusDangerZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusDeathZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RadiiOriginOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionCooldownNonEdibleActorsSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionCooldownEdibleActorsSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LongRangeAttackCutoff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostKillDelayBeforeEating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> AttackDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDoorSquidAnimationInstance* AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange RandomDelayKnockingSoundSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange RandomDelayJitterAnimSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomCueFailedLockoutSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTongueTargetComponentSkeletal;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESAITeam TeamAffiliationID;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentTargetActorToKill;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TonguePhysicsHandleTargetSocketName;
    
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* AudioComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* IdleAudioComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> DoorPanelComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AudioDoorSquidDoorCrackingEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AudioDoorSquidDoorCrackingLongEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AudioDoorSquidLowJitteringEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AudioDoorSquidAggressiveJitteringEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AudioDoorSquidHeartBeatKnockEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AudioDoorSquidKnockingEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AudioDoorSquidDoorBreach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AudioDoorSquidKillingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AudioDoorSquidEatingEdibleEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AudioDoorSquidEatingInedibleEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AudioDoorSquidSpitOutEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AudioDoorSquidDeathAteGrenade;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* DetectionZoneSphereComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* DangerZoneSphereComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* DeathZoneSphereComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionStimuliSourceComponent* PerceptionStimuliSourceComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* TongueHookTargetComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BulletCatchTrigger;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsHandleComponent* PhysicsHandleComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> EnemyActorsHotList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AttackableActorGameplayTags;
    
public:
    ADoorSquid(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void TryKillActorInitiate(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TryKillActorFrameHit(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void SetTongueHookTargetComponent(UActorComponent* TargetComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTargetActorVisibleColliding(AActor* Actor, bool bIsVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetKnockOnCooldown(bool bInKnockOnCooldown);
    
    UFUNCTION(BlueprintCallable)
    void SetKnocking(bool bInKnocking);
    
    UFUNCTION(BlueprintCallable)
    void SetJitterOnCooldown(bool bInJitterOnCooldown);
    
    UFUNCTION(BlueprintCallable)
    void SetJittering(bool bInJittering);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAlert(bool bInAlert);
    
    UFUNCTION(BlueprintCallable)
    void SetEnraged(bool bInEnraged);
    
    UFUNCTION(BlueprintCallable)
    void SetEating(bool bInEating);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDoorPanelCollidesPhysicsBodies(const bool bCollides);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAttacking(bool bInAttacking);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveActorFromHotList(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void PlayRandomIdleKnockSound();
    
    UFUNCTION(BlueprintCallable)
    void PlayRandomIdleJitterAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayEatingAnimationAndSound();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_KnockOnCooldown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Knocking();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_KilledEdibleActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_JitterOnCooldown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Jittering();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_IsDead();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_IsAlert();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Enraged();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Eating();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CurrentHealth();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Attacking();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDetectionZoneSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeathZoneSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDangerZoneSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastKillActorSucceeded(AActor* TargetActor, bool bWasLongRange);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastKillActorInitiate(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastKillActorFailed(AActor* TargetActor, bool bWasLongRange);
    
    UFUNCTION(BlueprintCallable)
    void LoopRandomCue_Knock_Start_AwaitAudioEnd();
    
    UFUNCTION(BlueprintCallable)
    void LoopRandomCue_Knock_Middle_UnsetKnockAwaitCooldownRandomDelay();
    
    UFUNCTION(BlueprintCallable)
    void LoopRandomCue_Knock_End_UnsetKnockOnCooldownAwaitFinalDelay();
    
    UFUNCTION(BlueprintCallable)
    void LoopRandomCue_Jitter_Start_AwaitAudioEnd();
    
    UFUNCTION(BlueprintCallable)
    void LoopRandomCue_Jitter_Middle_UnsetJitterAwaitCooldownRandomDelay();
    
    UFUNCTION(BlueprintCallable)
    void LoopRandomCue_Jitter_End_UnsetJitteringAwaitFinalDelay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInsideKillEscapeRadius(const AActor* OtherActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsInFrontOfSquid(const AActor* OtherActor) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsActorOnHotList(const AActor* TargetActor) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetRandomFloatInRange(const FFloatRange FloatRange) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetJittering() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAlert() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnraged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetClosestHotlistCreature() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAttacking() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void Die(AActor* Causer, AController* InstigatedBy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticDie();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void AISuppressedRequestJitterNow(const AActor* Suppressor, const bool bIsSuppressed);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void AIEnragedRequestAttack(AActor* TargetActor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddActorToHotList(AActor* TargetActor);
    

    // Fix for true pure virtual functions not being implemented
};

