#pragma once
#include "CoreMinimal.h"
#include "ECharacterNationalality.generated.h"

UENUM(BlueprintType)
enum class ECharacterNationalality : uint8 {
    None,
    American,
    German,
    Swedish,
    Danish,
    Scottish,
    Icelandic,
    French,
    Italian,
    NativeAmerican,
};

