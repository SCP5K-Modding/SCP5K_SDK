#pragma once
#include "CoreMinimal.h"
#include "EUIInputAction.generated.h"

UENUM(BlueprintType)
enum class EUIInputAction : uint8 {
    None,
    Back,
    PrimaryMenuLeft,
    PrimaryMenuRight,
};

