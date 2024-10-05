#pragma once
#include "CoreMinimal.h"
#include "EDiscordLobbySearchCast.generated.h"

UENUM(BlueprintType)
enum class EDiscordLobbySearchCast : uint8 {
    None,
    String,
    Number,
};

