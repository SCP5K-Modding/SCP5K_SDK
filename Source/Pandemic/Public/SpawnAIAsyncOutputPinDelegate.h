#pragma once
#include "CoreMinimal.h"
#include "SpawnAIAsyncOutputPinDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnAIAsyncOutputPin, const TArray<APawn*>&, SpawnedAI);

