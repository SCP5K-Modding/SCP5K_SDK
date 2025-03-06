#pragma once
#include "CoreMinimal.h"
#include "AttackModifier.generated.h"

USTRUCT(BlueprintType)
struct FAttackModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisable;
    
    AISENTIENCE_API FAttackModifier();
};

