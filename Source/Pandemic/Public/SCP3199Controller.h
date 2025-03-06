#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AISentience -ObjectName=SAITarget -FallbackName=SAITarget
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EObjectTypeQuery -FallbackName=EObjectTypeQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=AIMeleeAttackType -FallbackName=AIMeleeAttackType
#include "AIZombieController.h"
#include "ESCP3199ActionState.h"
#include "SCP3199NavmeshTarget.h"
#include "SCP3199Controller.generated.h"

class AActor;
class APawn;
class ASAIController;
class ASCP3199Character;
class USAIMeleeComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ASCP3199Controller : public AAIZombieController {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AgentAttackKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AgentDamagedKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackBlockKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AgentSeenKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AgentPanickingKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChargeCrashingKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EatingKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TraversalRangeKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChargeRangeKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackRangeKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionStateKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChargeLocationKeyName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetHealthWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RelevantNavmeshTargetsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESCP3199ActionState> NavmeshValidStates;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GeneralSightLineCost;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectSightLineCost;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectSightLineDot;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearProximityCost;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearProximityRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasAttackedRecently;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackRecencyDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasDamagedRecently;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagedRecencyDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSeenByTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraversalPathRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargePathRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackPathRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathingSightWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathingProximityWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathingInlineWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSpeedThreatCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesperationWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreatWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertIdleStateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackingStateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CalmIdleStateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargingStateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrashingStateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PanickingStateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvestigatingStateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunAwayStateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StalkingStateMultiplier;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> DetectableChargeObjectTypes;
    
public:
    ASCP3199Controller(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void WasDamagedRecently_Delayed(bool bDamaged);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetWasDamagedRecently(bool bWasDamaged);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSeenByTargets(bool bIsSeen);
    
    UFUNCTION(BlueprintCallable)
    void SetHasAttackedRecently(bool bHasAttacked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSCP3199NavmeshTarget> SelectBestNavmeshTargets(int32 DesiredAmount) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdatedActionState(ESCP3199ActionState NewActionState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSCP3199TargetLost(ASAIController* Controller, const FSAITarget& LostTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnSCP3199TargetDied(ASAIController* Controller, const FSAITarget& KilledTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnSCP3199TargetAdded(ASAIController* Controller, const FSAITarget& Target);
    
    UFUNCTION(BlueprintCallable)
    void OnSCP3199AllySpawned(APawn* Ally, int32 AllyCount);
    
    UFUNCTION(BlueprintCallable)
    void OnSCP3199AllyDied(APawn* Ally, int32 AllyCount);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSAIMeleeAttackCompleted(USAIMeleeComponent* AttackingComponent, AActor* AttackedActor, uint8 AttackIndex, FAIMeleeAttackType Attack);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayingAttackBlockAnim(bool bIsPlayingAnim);
    
    UFUNCTION(BlueprintCallable)
    void OnChargeCrashed(bool bIsAICrashing);
    
    UFUNCTION(BlueprintCallable)
    void OnAIPanicking(bool bIsAIPanicking);
    
    UFUNCTION(BlueprintCallable)
    void OnAIEating(bool bIsAIEating);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsAIFacingTarget();
    
private:
    UFUNCTION(BlueprintCallable)
    void HasAttackedRecently_Delayed(bool bAttacked);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWasDamagedRecently() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetHealthWeight() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASCP3199Character*> GetSCP3199CharacterAllies() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSeenByTargets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasAttackedRecently() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGeneralSightLineCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDirectSightLineDot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDirectSightLineCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindLowestFloatValueIndex(TArray<float>& FloatArray) const;
    
public:
    UFUNCTION(BlueprintCallable)
    FVector FindChargeLocation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSeenByTargets() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool CanAIChargeTo(const FVector& ChargeLocation);
    
};

