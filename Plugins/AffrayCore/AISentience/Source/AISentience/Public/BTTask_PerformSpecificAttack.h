#pragma once
#include "CoreMinimal.h"
#include "BTTask_PerformMeleeAttack.h"
#include "BTTask_PerformSpecificAttack.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API UBTTask_PerformSpecificAttack : public UBTTask_PerformMeleeAttack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DesiredAttackIndex;
    
    UBTTask_PerformSpecificAttack();

};

