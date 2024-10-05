#pragma once
#include "CoreMinimal.h"
#include "EDiscordLobbyType.generated.h"

UENUM(BlueprintType)
enum class EDiscordLobbyType : uint8 {
    None,
    Private,
    Public,
};

