#pragma once
#include "CoreMinimal.h"
#include "EItemType.generated.h"

UENUM()
enum class EItemType : int32 {
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

