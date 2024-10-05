#pragma once
#include "CoreMinimal.h"
#include "EDiscordActivityJoinRequestReply.generated.h"

UENUM(BlueprintType)
enum class EDiscordActivityJoinRequestReply : uint8 {
    No,
    Yes,
    Ignore,
};

