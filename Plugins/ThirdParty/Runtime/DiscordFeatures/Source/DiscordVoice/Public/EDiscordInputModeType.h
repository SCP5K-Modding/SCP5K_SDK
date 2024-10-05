#pragma once
#include "CoreMinimal.h"
#include "EDiscordInputModeType.generated.h"

UENUM(BlueprintType)
enum class EDiscordInputModeType : uint8 {
    VoiceActivity,
    PushToTalk,
};

