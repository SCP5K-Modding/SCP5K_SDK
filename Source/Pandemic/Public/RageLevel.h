#pragma once
#include "CoreMinimal.h"
#include "RageAttackModifier.h"
#include "RageLevel.generated.h"

USTRUCT(BlueprintType)
struct FRageLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredRageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRageAttackModifier> AttackModifiers;
    
    PANDEMIC_API FRageLevel();
};

