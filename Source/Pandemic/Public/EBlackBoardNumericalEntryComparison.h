#pragma once
#include "CoreMinimal.h"
#include "EBlackBoardNumericalEntryComparison.generated.h"

UENUM(BlueprintType)
namespace EBlackBoardNumericalEntryComparison {
    enum Type {
        Equal,
        NotEqual,
        Greater,
        Less,
        GreaterEqual,
        LessEqual,
    };
}

