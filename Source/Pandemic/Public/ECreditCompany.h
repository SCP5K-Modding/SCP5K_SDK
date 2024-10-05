#pragma once
#include "CoreMinimal.h"
#include "ECreditCompany.generated.h"

UENUM(BlueprintType)
enum class ECreditCompany : uint8 {
    Internal,
    External,
    BlackSite,
    DBolical,
};

