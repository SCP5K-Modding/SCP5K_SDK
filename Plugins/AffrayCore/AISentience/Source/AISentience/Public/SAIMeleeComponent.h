#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EObjectTypeQuery -FallbackName=EObjectTypeQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=AIMeleeAttackType -FallbackName=AIMeleeAttackType
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=EMeleeAttackDirection -FallbackName=EMeleeAttackDirection
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=MeleeHitData -FallbackName=MeleeHitData
#include "Templates/SubclassOf.h"
#include "SAIMeleeComponent.generated.h"

class AActor;
class UDamageType;
class USAIMeleeComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AISENTIENCE_API USAIMeleeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAttackStarted, USAIMeleeComponent*, AttackingComponent, uint8, AttackIndex, FAIMeleeAttackType, Attack);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnAttackCompleted, USAIMeleeComponent*, AttackingComponent, AActor*, AttackedActor, uint8, AttackIndex, FAIMeleeAttackType, Attack);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MeleeHitData, meta=(AllowPrivateAccess=true))
    FMeleeHitData MeleeHitData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackStarted OnAttackStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackCompleted OnAttackHitActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackCompleted OnAttackCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackCompleted OnAttackCanceled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIMeleeAttackType> Attacks;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> AttackDamageType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> DetectableObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HitActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWantsAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentAttackTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackDamageWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackDirectionWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackRandomWeight;
    
public:
    USAIMeleeComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool StartAttack(const TEnumAsByte<EMeleeAttackDirection>& Direction, uint8 AttackIndex, bool bForceAttack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 PickAttack(const AActor* TargetActor) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MeleeHitData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorDead(AActor* InputtedActor) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EMeleeAttackDirection> GetIdealAttackDirection(const AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAttackVector(const TEnumAsByte<EMeleeAttackDirection>& Direction, bool bUseControlRotation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CosmeticAttackHitActor(TEnumAsByte<EMeleeAttackDirection> Direction, USceneComponent* HitComponent, uint8 AttackIndex);
    
    UFUNCTION(BlueprintCallable)
    void CosmeticAttackFinished(TEnumAsByte<EMeleeAttackDirection> Direction, USceneComponent* HitComponent, uint8 AttackIndex);
    
    UFUNCTION(BlueprintCallable)
    void CosmeticAttackCanceled(TEnumAsByte<EMeleeAttackDirection> Direction, USceneComponent* HitComponent, uint8 AttackIndex);
    
    UFUNCTION(BlueprintCallable)
    void CosmeticAttack(TEnumAsByte<EMeleeAttackDirection> Direction, uint8 AttackIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartAttack(const FAIMeleeAttackType& NewAttack, const TEnumAsByte<EMeleeAttackDirection>& AttackDirection, float TargetDistance, float CurrentSpeedSquared) const;
    
    UFUNCTION(BlueprintCallable)
    void CancelAttack();
    
    UFUNCTION(BlueprintCallable)
    bool Attack(const TEnumAsByte<EMeleeAttackDirection>& Direction, FMeleeHitData& HitData);
    
};

