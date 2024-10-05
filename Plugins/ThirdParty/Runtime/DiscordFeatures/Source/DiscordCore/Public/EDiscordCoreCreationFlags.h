#pragma once
#include "CoreMinimal.h"
#include "EDiscordCoreCreationFlags.generated.h"

UENUM(BlueprintType)
enum class EDiscordCoreCreationFlags : uint8 {
    Default,
    NoRequireDiscord,
};

