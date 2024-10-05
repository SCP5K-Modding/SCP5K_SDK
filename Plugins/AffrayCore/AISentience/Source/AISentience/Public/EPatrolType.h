#pragma once
#include "CoreMinimal.h"
#include "EPatrolType.generated.h"

UENUM(BlueprintType)
namespace EPatrolType {
    enum Type {
        PT_Casual,
        PT_Guard,
        PT_Jog,
    };
}

