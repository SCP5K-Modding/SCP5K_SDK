#pragma once
#include "CoreMinimal.h"
#include "EDiscordHttpApiAuthenticationType.generated.h"

UENUM(BlueprintType)
enum class EDiscordHttpApiAuthenticationType : uint8 {
    None,
    Bot,
    Bearer,
};

