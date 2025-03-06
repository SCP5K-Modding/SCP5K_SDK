#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Electronics -ObjectName=DoorInteraction -FallbackName=DoorInteraction
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseSnapshot -FallbackName=PoseSnapshot
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=AIMeleeAttackType -FallbackName=AIMeleeAttackType
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=Damageable -FallbackName=Damageable
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=SimpleHitData -FallbackName=SimpleHitData
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=Suppressable -FallbackName=Suppressable
#include "DeathAnimationData.h"
#include "EZombieLifeState.h"
#include "RagdollPuppet.h"
#include "ReanimationData.h"
#include "Templates/SubclassOf.h"
#include "AIZombieCharacter.generated.h"

class AController;
class AElectronicDoor;
class UAIPerceptionStimuliSourceComponent;
class UAnimMontage;
class UBodySubsystem;
class UDamageType;
class UDismembermentComponent;
class UEnemySubsystem;
class UFMODAudioComponent;
class UFMODEvent;
class UFastReplicatedRagdoll;
class UFootstepComponent;
class UGoreComponent;
class UHealthComponent;
class UNavLinkCustomComponent;
class UNavigationQueryFilter;
class UPhysicalAnimationComponent;
class UReanimationComponent;
class USAIMeleeComponent;
class USkeletalMesh;
class USplatterComponent;
class UTickOptimizerComponent;

UCLASS(Blueprintable)
class PANDEMIC_API AAIZombieCharacter : public ACharacter, public IDamageable, public ISuppressable, public IDoorInteraction, public IRagdollPuppet {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnZombieUpdatedLifeStateDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnZombiePrepareReanimationDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnZombieInteractDoorDelegate, const AElectronicDoor*, Door, const UNavLinkCustomComponent*, NavLinkComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZombieDiedDelegate, UHealthComponent*, HealthComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnZombieDamagedDelegate, UHealthComponent*, HealthComponent, FSimpleHitData, HitData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZombieBeganFakeDeathDelegate, UHealthComponent*, HealthComponent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnZombieDamagedDelegate OnZombieDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnZombieDiedDelegate OnZombieDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnZombieBeganFakeDeathDelegate OnZombieBeganFakeDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnZombieUpdatedLifeStateDelegate OnZombieUpdatedLifeState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnZombiePrepareReanimationDelegate OnZombiePrepareReanimation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnZombieInteractDoorDelegate OnZombieInteractDoor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSnapshot RagdolledPoseSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRagdollIsFaceUp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemySubsystem* EnemySubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBodySubsystem* BodySubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDismembermentComponent* DismembermentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGoreComponent* GoreComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* FMODAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFootstepComponent* FootstepComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPhysicalAnimationComponent* PhysicalAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USAIMeleeComponent* SAIMeleeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplatterComponent* SplatterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTickOptimizerComponent* TickOptimizerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIPerceptionStimuliSourceComponent* StimuliSourceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFastReplicatedRagdoll* ReplicatedRagdollComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UReanimationComponent* ReanimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxEventInstanceSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AmbientLoopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* DamageSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* DeathSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AlertSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AttackSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AttackHeavySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AttackSwingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AttackHeavySwingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPlayAttackSound;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsAlert, meta=(AllowPrivateAccess=true))
    bool bIsAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAIDying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsAIDead, meta=(AllowPrivateAccess=true))
    bool bIsAIDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyEnemyActorDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathHitImpulseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollHitImpulseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetTrulyDeadPrimitiveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VertAnimSpeedPrimDataChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReanimationData> ReanimationMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFakeDeathPossible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bCanFakeDeathBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FakeDeathChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FakeDeathHealthPercentageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReanimationStartDelayMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReanimationStartDelayMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize ServerRagdollLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FakeRagdollVelocityCheckDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FakeRagdollVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentLifeState, meta=(AllowPrivateAccess=true))
    EZombieLifeState CurrentLifeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityCheckAbortDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopOnDeathRagdollDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialStopRagdollDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollVelocityReductionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollDeathAnimationChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaggerDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> MeleeAttackDamageTypeSample;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DoorAttackMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoorAttackRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseDoorDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DoorAttackDamageType;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPhysicsSleep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> ZombieNavigationFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeathAnimationData> DeathAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTargetSeen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize BodyHitPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFrontHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float HitDirectionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* ZombieDeathAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float DeathRagdollDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CanFlinch, meta=(AllowPrivateAccess=true))
    bool bCanFlinch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FlinchMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlinchRate;
    
public:
    AAIZombieCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void StopZombieAttackAnimation();
    
    UFUNCTION(BlueprintCallable)
    void StopReanimationMontage();
    
    UFUNCTION(BlueprintCallable)
    void StopFakeDeathRagdoll();
    
    UFUNCTION(BlueprintCallable)
    void StopActiveRagdoll();
    
    UFUNCTION(BlueprintCallable)
    void StartFakeDeathRagdoll();
    
    UFUNCTION(BlueprintCallable)
    void StartActiveRagdoll();
    
    UFUNCTION(BlueprintCallable)
    void Stagger();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetZombieDeathAnimation(const UAnimMontage* Animation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetThirdPersonMesh(const USkeletalMesh* DesiredSkeletalMesh);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTargetLocation(FVector_NetQuantize Location);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetServerRagdollLocation(FVector_NetQuantize RagdollLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetReplicatedRagdollComponent(UFastReplicatedRagdoll* InReplicatedRagdollComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetMinMoveSpeedVariance(float DesiredMinVariance);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimumMovementSpeed(float DesiredMinimum);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMeshScale(float DesiredMeshScale);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxMoveSpeedVariance(float DesiredMaxVariance);
    
    UFUNCTION(BlueprintCallable)
    void SetMaximumMovementSpeed(float DesiredMaximum);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsTargetSeen(bool bIsSeen);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsFrontHit(bool bDidHitFront);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsAIDying(bool bIsDying);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsAIDead(bool bIsDead);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHitDirectionAngle(float Direction);
    
    UFUNCTION(BlueprintCallable)
    void SetDoorAttackMontage(UAnimMontage* NewMontage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDeathRagdollDelay(float DesiredDelay);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCurrentMoveSpeed(float DesiredSpeed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCurrentLifeState(EZombieLifeState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleActive(bool bIsCapsuleActive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCanFlinch(bool bFlinch);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCanFakeDeathBegin(bool bCanBegin);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetBodyHitPosition(FVector_NetQuantize HitPosition);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAlert(bool bIsZombieAlert);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerFakeDeath();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ServerDie_Blueprints();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerDie(const AController* DamageInstigator, FName LastHitBone);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RagdollStopAndReclaim();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RagdollPrepare();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RagdollInitiate();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SelectSkeletalMesh();
    
    UFUNCTION(BlueprintCallable)
    void PlayAttackSwingSound(bool bIsHeavy);
    
    UFUNCTION(BlueprintCallable)
    void PlayAttackSound(bool bIsHeavy);
    
    UFUNCTION(BlueprintCallable)
    void PlayAmbientSound();
    
    UFUNCTION(BlueprintCallable)
    void OnZombieStartReanimation(UReanimationComponent* InReanimationComponent, UAnimMontage* ReanimationMontage, FVector TargetCapsuleLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnZombieEndReanimation(UReanimationComponent* InReanimationComponent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSAIMeleeAttackStarted(USAIMeleeComponent* AttackingComponent, uint8 AttackIndex, FAIMeleeAttackType Attack);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_ThirdPersonMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_MeshScale();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_IsAlert();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_IsAIDead();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CurrentMoveSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CurrentLifeState(EZombieLifeState PreviousLifeState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_CanFlinch();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHealthComponentDied(UHealthComponent* UpdatedHealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthComponentDamaged(UHealthComponent* UpdatedHealthComponent, FSimpleHitData HitData);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_RagdollStopAndReclaim();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_RagdollPrepare();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_RagdollInitiate();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastFakeDeath();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastCosmeticDoorAttack();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetZombieDeathAnimation() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTickOptimizerComponent* GetTickOptimizerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMesh* GetThirdPersonMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIPerceptionStimuliSourceComponent* GetStimuliSourceComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStaggerDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USplatterComponent* GetSplatterComponent() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector_NetQuantize GetServerRagdollLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USAIMeleeComponent* GetSAIMeleeComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFastReplicatedRagdoll* GetReplicatedRagdollComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRandomMoveSpeedVariance() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhysicalAnimationComponent* GetPhysicalAnimationComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinMoveSpeedVariance() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinimumMovementSpeed() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMeshScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxMoveSpeedVariance() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaximumMovementSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsTargetSeen() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInBounds() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFrontHit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFakingDeath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAlert() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAIDying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAIDead() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHitDirectionAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHealthComponent* GetHealthComponent() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGoreComponent* GetGoreComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFootstepComponent* GetFootstepComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODAudioComponent* GetFMODAudioComponent() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFlinchRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetFlinchMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDoorAttackRange() const;
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetDoorAttackMontage();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDismembermentComponent* GetDismembermentComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetDeathSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeathRagdollDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDeathAnimationData> GetDeathAnimations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetDamageSound() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentMoveSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EZombieLifeState GetCurrentLifeState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanFlinch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBodyHitPosition() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetAttackSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetAmbientLoopSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetAlertSound() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAITargetLocation() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CosmeticFlinch();
    
    UFUNCTION(BlueprintCallable)
    void CosmeticFakeDeath();
    
    UFUNCTION(BlueprintCallable)
    void CosmeticDie();
    
    UFUNCTION(BlueprintCallable)
    void CheckGroundedStatus();
    
    UFUNCTION(BlueprintCallable)
    void CancelFakeDeath();
    
public:
    UFUNCTION(BlueprintCallable)
    void AttackDoor(const FHitResult& Hit, AElectronicDoor* AttackedDoor);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool RagdollCanActivate() override PURE_VIRTUAL(RagdollCanActivate, return false;);
    
};

