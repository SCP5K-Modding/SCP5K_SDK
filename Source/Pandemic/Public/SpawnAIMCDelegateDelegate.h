#pragma once
#include "CoreMinimal.h"
#include "SpawnAIMCDelegateDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnAIMCDelegate, const TArray<APawn*>&, SpawnedAI);

