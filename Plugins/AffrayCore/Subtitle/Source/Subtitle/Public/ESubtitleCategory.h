#pragma once
#include "CoreMinimal.h"
#include "ESubtitleCategory.generated.h"

UENUM(BlueprintType)
enum class ESubtitleCategory : uint8 {
    SC_None,
    SC_Environment,
    SC_Character,
    SC_Dialogue,
};

