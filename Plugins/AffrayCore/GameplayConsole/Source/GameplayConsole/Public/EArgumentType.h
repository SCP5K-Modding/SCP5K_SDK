#pragma once
#include "CoreMinimal.h"
#include "EArgumentType.generated.h"

UENUM(BlueprintType)
enum EArgumentType {
    AT_Bool,
    AT_Int,
    AT_Float,
    AT_String,
    AT_Name,
};

