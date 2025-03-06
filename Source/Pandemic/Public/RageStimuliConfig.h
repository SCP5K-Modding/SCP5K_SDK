#pragma once
#include "CoreMinimal.h"
#include "ERageStimuliTypes.h"
#include "RageStimuliConfig.generated.h"

USTRUCT(BlueprintType)
struct FRageStimuliConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERageStimuliTypes Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputMultiplier;
    
    PANDEMIC_API FRageStimuliConfig();
};

