#pragma once
#include "CoreMinimal.h"
#include "EContainmentClass.generated.h"

UENUM(BlueprintType)
enum class EContainmentClass : uint8 {
    None,
    Safe,
    Euclid,
    Keter,
    Neutralized,
    Pending,
    Explained,
    Esoteric,
};

