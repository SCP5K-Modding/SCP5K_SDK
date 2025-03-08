#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Rotator_NetQuantize.generated.h"

USTRUCT(BlueprintType)
struct FRotator_NetQuantize : public FRotator {
    GENERATED_BODY()
public:
    PANDEMIC_API FRotator_NetQuantize();
};

