#pragma once
#include "CoreMinimal.h"
#include "AttackModifier.h"
#include "GameplayTagContainer.h"
#include "RageAttackModifier.generated.h"

USTRUCT(BlueprintType)
struct FRageAttackModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackModifier Modifier;
    
    PANDEMIC_API FRageAttackModifier();
};

