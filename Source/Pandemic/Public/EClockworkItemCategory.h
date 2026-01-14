#pragma once
#include "CoreMinimal.h"
#include "EClockworkItemCategory.generated.h"

UENUM(BlueprintType)
enum class EClockworkItemCategory : uint8 {
    IC_NONE,
    IC_Category1,
    IC_Category2,
    IC_Category3,
    IC_Category4,
    IC_Category5,
    IC_CategoryX,
    IC_CategorySCP,
};

