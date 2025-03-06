#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Rotator_NetQuantize.generated.h"

USTRUCT(BlueprintType)
struct FRotator_NetQuantize : public FRotator {
    GENERATED_BODY()
public:
    PANDEMIC_API FRotator_NetQuantize();
};

