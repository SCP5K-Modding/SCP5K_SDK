#pragma once
#include "CoreMinimal.h"
#include "EReportType.generated.h"

UENUM(BlueprintType)
enum EReportType {
    R_None,
    R_Aimbot,
    R_ESP,
    R_GenericCheat = 4,
    R_Exploit = 8,
    R_Griefing = 16,
    R_Harassment = 32,
    R_Other = 64,
};

