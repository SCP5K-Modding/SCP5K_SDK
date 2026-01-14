#pragma once
#include "CoreMinimal.h"
#include "FakeDeathOverride.generated.h"

USTRUCT(BlueprintType)
struct FFakeDeathOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFakeDeathPossible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FakeDeathChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FakeDeathHealthPercentageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReanimationStartDelayMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReanimationStartDelayMax;
    
    PANDEMIC_API FFakeDeathOverride();
};

