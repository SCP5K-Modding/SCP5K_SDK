#pragma once
#include "CoreMinimal.h"
#include "EMeleeAttackDirection.generated.h"

UENUM(BlueprintType)
enum EMeleeAttackDirection {
    AD_None,
    AD_Left = 8,
    AD_Right = 16,
    AD_Centre = 32,
};

