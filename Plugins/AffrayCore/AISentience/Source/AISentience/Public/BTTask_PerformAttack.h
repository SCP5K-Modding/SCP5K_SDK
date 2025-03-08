#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "BTTask_PerformAttack.generated.h"

class AActor;
class USAIAttack;
class USAIAttackComponent;

UCLASS(Blueprintable)
class AISENTIENCE_API UBTTask_PerformAttack : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Blackboard_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSucceedOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSucceedEvenIfDamageFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSucceedEvenIfCanceled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelAttackOnAbort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSpecificAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpecificAttackTag;
    
    UBTTask_PerformAttack();

    UFUNCTION(BlueprintCallable)
    void OnAttackFinished(USAIAttackComponent* AttackComponent, const AActor* Target, const USAIAttack* Attack, uint8 AttackIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackCanceled(USAIAttackComponent* AttackComponent, const AActor* Target, const USAIAttack* Attack, uint8 AttackIndex);
    
};

