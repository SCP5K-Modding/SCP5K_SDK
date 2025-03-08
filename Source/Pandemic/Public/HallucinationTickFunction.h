#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "HallucinationTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FHallucinationTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    PANDEMIC_API FHallucinationTickFunction();
};

template<>
struct TStructOpsTypeTraits<FHallucinationTickFunction> : public TStructOpsTypeTraitsBase2<FHallucinationTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

