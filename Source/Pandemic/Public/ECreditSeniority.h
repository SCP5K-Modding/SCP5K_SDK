#pragma once
#include "CoreMinimal.h"
#include "ECreditSeniority.generated.h"

UENUM(BlueprintType)
enum class ECreditSeniority : uint8 {
    Director,
    HeadOfDepartment,
    Lead,
    Senior,
    Normal,
    Junior,
    Intern,
    Contract,
};

