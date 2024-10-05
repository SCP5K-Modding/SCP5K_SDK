#pragma once
#include "CoreMinimal.h"
#include "EMeleeFlags.generated.h"

UENUM(BlueprintType)
enum EMeleeFlags {
    M_None,
    M_UsingMelee,
    M_Hit,
    M_Kicking = 4,
    M_Canceled = 8,
};

