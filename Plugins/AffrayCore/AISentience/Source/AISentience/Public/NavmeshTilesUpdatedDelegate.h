#pragma once
#include "CoreMinimal.h"
#include "NavmeshTilesUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNavmeshTilesUpdated, const TSet<uint32>&, ChangedTiles);

