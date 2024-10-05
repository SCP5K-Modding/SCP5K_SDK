#pragma once
#include "CoreMinimal.h"
#include "EWidgetInputMode.generated.h"

UENUM(BlueprintType)
enum class EWidgetInputMode : uint8 {
    Default,
    GameAndMenu,
    Game,
    Menu,
};

