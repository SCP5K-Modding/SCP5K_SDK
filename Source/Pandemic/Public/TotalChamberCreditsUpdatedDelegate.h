#pragma once
#include "CoreMinimal.h"
#include "TotalChamberCreditsUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTotalChamberCreditsUpdated, int32, UpdatedCreditsCount);

