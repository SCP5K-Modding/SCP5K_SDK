#pragma once
#include "CoreMinimal.h"
#include "EPlayerAnalyticsEventType.generated.h"

UENUM(BlueprintType)
enum class EPlayerAnalyticsEventType : uint8 {
    None,
    Location,
    Death,
    Spawn,
    EnemyKill,
    MissionItemPickup,
    ConsumablePickup,
    ItemPickup,
    CompleteObjective,
    EnterArea,
    Spectate,
    Custom,
};

