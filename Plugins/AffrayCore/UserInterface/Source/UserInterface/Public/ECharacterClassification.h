#pragma once
#include "CoreMinimal.h"
#include "ECharacterClassification.generated.h"

UENUM(BlueprintType)
enum class ECharacterClassification : uint8 {
    None,
    ClassA,
    ClassB,
    ClassC,
    ClassD,
    ClassE,
};

