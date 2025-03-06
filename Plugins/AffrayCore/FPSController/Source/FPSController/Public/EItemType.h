#pragma once
#include "CoreMinimal.h"
#include "EItemType.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8 {
    Generic,
    Consumable,
    Throwable,
    Grenade,
    Rifle,
    Pistol,
    SMG,
    LMG,
    AntiMateriel,
    DMR,
    Shotgun,
    Sniper,
    Launcher,
    Special,
    Melee,
};

