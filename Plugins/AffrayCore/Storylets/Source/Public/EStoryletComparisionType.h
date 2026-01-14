#pragma once
#include "CoreMinimal.h"
#include "EStoryletComparisionType.generated.h"

UENUM(BlueprintType)
enum class EStoryletComparisionType : uint8 {
    IsSet,
    NotSet,
    Less,
    LessOrEqual,
    Greater,
    GreaterOrEqual,
    Equal,
    NotEqual,
};

