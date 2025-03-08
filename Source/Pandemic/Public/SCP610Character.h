#pragma once
#include "CoreMinimal.h"
#include "Perception/AISightTargetInterface.h"
#include "ESAIAwarenessState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DoorInteraction.h"
#include "GameFramework/Character.h"
#include "Damageable.h"
#include "SimpleHitData.h"
#include "EZombieLifeState.h"
#include "InterruptibleAnimator.h"
#include "RagdollPuppet.h"
#include "Rotator_NetQuantize.h"
#include "Templates/SubclassOf.h"
#include "SCP610Character.generated.h"

class AActor;
class AController;
class ASCP610Controller;
class UAIPerceptionStimuliSourceComponent;
class UAnimMontage;
class UBodySubsystem;
class UDamageType;
class UDoorAttackComponent;
class UEnemySubsystem;
class UFMODAudioComponent;
class UFMODEvent;
class UFastReplicatedRagdoll;
class UFootstepComponent;
class UGoreComponent;
class UHealthComponent;
class UHitReactionComponent;
class UInterruptibleAnimComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class UPhysicalAnimationComponent;
class URageComponent;
class UReanimationComponent;
class USAIAttackComponent;
class USkeletalMesh;
class USplatterComponent;
class UTickOptimizerComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ASCP610Character : public ACharacter, public IDamageable, public IRagdollPuppet, public IInterruptibleAnimator, public IDoorInteraction, public IAISightTargetInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOn610UpdatedLifeStateDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOn610PrepareReanimationDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOn610DiedDelegate, UHealthComponent*, HealthComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOn610BeganFakeDeathDelegate, UHealthComponent*, HealthComponent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOn610DiedDelegate On610Died;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOn610BeganFakeDeathDelegate On610BeganFakeDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOn610UpdatedLifeStateDelegate On610UpdatedLifeState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOn610PrepareReanimationDelegate On610PrepareReanimation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USAIAttackComponent* AttackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGoreComponent* GoreComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* FMODAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* LoopingAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFootstepComponent* FootstepComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicalAnimationComponent* PhysicalAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplatterComponent* SplatterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFastReplicatedRagdoll* ReplicatedRagdollComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReanimationComponent* ReanimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTickOptimizerComponent* TickOptimizerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URageComponent* RageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitReactionComponent* HitReactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInterruptibleAnimComponent* InterruptibleAnimComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDoorAttackComponent* DoorAttackComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionStimuliSourceComponent* PerceptionStimuliSourceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASCP610Controller* SCP610Controller;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsAIPermanentlyDead, meta=(AllowPrivateAccess=true))
    bool bIsAIPermanentlyDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyEnemyActorDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathHitImpulseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollHitImpulseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgniteWithFlareDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlaresDisableReanimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurnDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurnInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* BurnVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> FlareDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> BurnDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* BurnNiagaraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator_NetQuantize DesiredRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator_NetQuantize ControlRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* VocalLoopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* DamageSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* DeathSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bCanFakeDeathStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinDeathResets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDeathResets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 DeathResetCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetTrulyDeadPrimitiveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VertAnimSpeedPrimDataChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReanimationStartDelayMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReanimationStartDelayMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FakeRagdollVelocityCheckDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FakeRagdollVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentLifeState, meta=(AllowPrivateAccess=true))
    EZombieLifeState CurrentLifeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityCheckAbortDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AwarenessState, meta=(AllowPrivateAccess=true))
    ESAIAwarenessState AwarenessState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PelvisBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopOnDeathRagdollDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialStopRagdollDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollVelocityReductionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ThirdPersonMesh, meta=(AllowPrivateAccess=true))
    USkeletalMesh* ThirdPersonMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MeshScale, meta=(AllowPrivateAccess=true))
    float MeshScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRandomizedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> RandomizedPotentialMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinMeshScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMeshScale;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPhysicsSleep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemySubsystem* EnemySubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBodySubsystem* BodySubsystem;
    
public:
    ASCP610Character(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void StopFakeDeathRagdoll();
    
    UFUNCTION(BlueprintCallable)
    void StopActiveRagdoll();
    
    UFUNCTION(BlueprintCallable)
    void StartFakeDeathRagdoll();
    
    UFUNCTION(BlueprintCallable)
    void StartActiveRagdoll();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetThirdPersonMesh(const USkeletalMesh* DesiredSkeletalMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetReplicatedRagdollComponent(UFastReplicatedRagdoll* InReplicatedRagdollComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMeshScale(float DesiredMeshScale);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsAIPermanentlyDead(bool bHasDied);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDeathResetCount(int32 NewCount);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCurrentMoveSpeed(float DesiredSpeed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCurrentLifeState(EZombieLifeState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetCanFakeDeathStart(bool bCanStart);
    
    UFUNCTION(BlueprintCallable)
    void ServerSelectSkeletalMesh();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerFakeDeath();
    
public:
    UFUNCTION(BlueprintCallable)
    void ServerDie(AActor* Causer, AController* InstigatedBy);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RagdollStopAndReclaim();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RagdollPrepare();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RagdollInitiate();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayVocalAmbientSound();
    
    UFUNCTION(BlueprintCallable)
    void PlayUpdatedFMODEvent(const UFMODEvent* EventToPlay);
    
    UFUNCTION(BlueprintCallable)
    void OnStartReanimation(UReanimationComponent* InReanimationComponent, UAnimMontage* ReanimationMontage, FVector TargetCapsuleLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_ThirdPersonMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_MeshScale();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_IsAIPermanentlyDead();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CurrentMoveSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CurrentLifeState(EZombieLifeState PreviousLifeState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_AwarenessState(ESAIAwarenessState PrevAwarenessState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHealthComponentDied(UHealthComponent* UpdatedHealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthComponentDamaged(UHealthComponent* UpdatedHealthComponent, FSimpleHitData HitData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndReanimation(UReanimationComponent* InReanimationComponent);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_RagdollStopAndReclaim();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_RagdollPrepare();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_RagdollInitiate();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetVocalLoopSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMesh* GetThirdPersonMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USplatterComponent* GetSplatterComponent() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFastReplicatedRagdoll* GetReplicatedRagdollComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetReplicatedControlRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URageComponent* GetRageComponent() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhysicalAnimationComponent* GetPhysicalAnimationComponent() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinMoveSpeedVariance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinimumMovementSpeed() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMeshScale() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxMoveSpeedVariance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaximumMovementSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFakingDeath() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAIPermanentlyDead() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHealthComponent* GetHealthComponent() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGoreComponent* GetGoreComponent() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetDesiredRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EZombieLifeState GetCurrentLifeState() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanFakeDeathStart() const;
    
    UFUNCTION(BlueprintCallable)
    void CosmeticFakeDeath();
    
public:
    UFUNCTION(BlueprintCallable)
    void CosmeticDie();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CancelFakeDeath();
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    bool RagdollCanActivate() override PURE_VIRTUAL(RagdollCanActivate, return false;);
    
};

