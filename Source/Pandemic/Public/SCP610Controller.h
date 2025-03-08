#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "SAIController.h"
#include "SimpleHitData.h"
#include "RageLevel.h"
#include "SCP610Controller.generated.h"

class AActor;
class ASCP610Character;
class UBehaviorTree;
class UHealthComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ASCP610Controller : public ASAIController {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RageLevelKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackRateMultiplierKeyName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASCP610Character* SCP610Character;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RageMovementSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RandomMoveSpeedVariance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OriginalMaxWalkSpeed;
    
public:
    ASCP610Controller(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateMoveSpeed();
    
    UFUNCTION(BlueprintCallable)
    void OnRageLevelUpdated(const FRageLevel& CurrentRageLevel);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
    
private:
    UFUNCTION(BlueprintCallable)
    void On610Damaged(UHealthComponent* UpdatedHealthComponent, FSimpleHitData HitData);
    
};

