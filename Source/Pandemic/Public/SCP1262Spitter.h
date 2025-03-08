#pragma once
#include "CoreMinimal.h"
#include "Perception/AISightTargetInterface.h"
#include "EStaggerDirection.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "AIMeleeAttackType.h"
#include "Damageable.h"
#include "SimpleHitData.h"
#include "Suppressable.h"
#include "SignificanceUser.h"
#include "Templates/SubclassOf.h"
#include "SCP1262Spitter.generated.h"

class ASCP1262SpitterController;
class ASCP1262SpitterProjectile;
class UFMODAudioComponent;
class UFMODEvent;
class UHealthComponent;
class USAIMeleeComponent;
class USCP1262AnimationInstance;
class USignificanceComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ASCP1262Spitter : public APawn, public IDamageable, public IAISightTargetInterface, public ISuppressable, public ISignificanceUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultLookTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector CurrentLookTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector ShotOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartAttackDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaggerDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaggerDamageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FiringAngleVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASCP1262SpitterProjectile> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* IdleSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinBlendPhysicsSignificance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* LoopingAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USAIMeleeComponent* MeleeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignificanceComponent* SignificanceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCP1262AnimationInstance* AnimationInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASCP1262SpitterController* SCP1262Controller;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsFiring, meta=(AllowPrivateAccess=true))
    bool bIsFiring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StaggerDirection, meta=(AllowPrivateAccess=true))
    EStaggerDirection StaggerDirection;
    
public:
    ASCP1262Spitter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TryFireProjectile();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartStaggering(FVector StaggerVector);
    
    UFUNCTION(BlueprintCallable)
    void StartFireProjectile(FVector TargetLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ReviveOrReveal();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Revive();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StaggerDirection();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsFiring();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHealthComponentRevived(UHealthComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHealthComponentDied(UHealthComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHealthComponentDamaged(UHealthComponent* Component, FSimpleHitData HitData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAttackStarted(USAIMeleeComponent* AttackingComponent, uint8 AttackIndex, FAIMeleeAttackType Attack);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsStaggering() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHeadLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishFireProjectile();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticStartStaggering(EStaggerDirection Direction);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticRevive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticFireProjectile();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticFinishFireProjectile();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CosmeticDie();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Alert();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void ApplySignificance(USignificanceComponent* Component, float NewSignificance, float OldSignificance) override PURE_VIRTUAL(ApplySignificance,);
    
};

