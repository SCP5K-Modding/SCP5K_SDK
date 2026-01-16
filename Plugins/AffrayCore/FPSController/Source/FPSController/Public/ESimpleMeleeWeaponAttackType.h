#pragma once
#include "CoreMinimal.h"
#include "ESimpleMeleeWeaponAttackType.generated.h"

UENUM(BlueprintType)
enum class ESimpleMeleeWeaponAttackType : uint8 {
    None,
    Light,
    Heavy,
};

