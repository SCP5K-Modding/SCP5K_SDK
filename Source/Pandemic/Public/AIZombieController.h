#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AISentience -ObjectName=SAIController -FallbackName=SAIController
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "AIZombieController.generated.h"

class AAIZombieCharacter;
class AElectronicDoor;
class UBehaviorTree;
class UBlackboardComponent;
class UHealthComponent;
class UNavLinkCustomComponent;
class USAIMeleeComponent;

UCLASS(Blueprintable)
class PANDEMIC_API AAIZombieController : public ASAIController {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FakingDeathKeyName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* ZombieBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBetweenAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAttackingDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoorCheckDelayDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoorCheckTraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoorAttackDelayDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AElectronicDoor> DoorTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentDistanceMovementValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvestigatingDistanceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvestigatingAlertnessWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChasingDistanceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChasingAlertnessWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchingForPlayerDistanceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchingForPlayerAlertnessWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WanderingDistanceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WanderingAlertnessWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InitialMoveToPathLength;
    
public:
    AAIZombieController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateMoveSpeed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopDoorAttacks();
    
    UFUNCTION(BlueprintCallable)
    void SetInitialMoveToPathLength(float PathLength);
    
    UFUNCTION(BlueprintCallable)
    void OnAIInteractDoor(const AElectronicDoor* CurrentDoor, const UNavLinkCustomComponent* CurrentNavLinkComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USAIMeleeComponent* GetZombieMeleeComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHealthComponent* GetZombieHealthComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAIZombieCharacter* GetZombieCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBlackboardComponent* GetZombieBlackboard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBehaviorTree* GetZombieBehaviorTree() const;
    
    UFUNCTION(BlueprintCallable)
    bool FireDoorAttackTrace(FHitResult& OutDoorHit);
    
private:
    UFUNCTION(BlueprintCallable)
    void DoorAttackEnd_Delayed();
    
    UFUNCTION(BlueprintCallable)
    void CheckValidDoorAttack_Delayed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAttackDoor() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void AttackDoor_Delayed();
    
};

