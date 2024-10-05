#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SAICoverGenerationSubsystem.generated.h"

UCLASS(Blueprintable, Config=Game)
class AISENTIENCE_API USAICoverGenerationSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    USAICoverGenerationSubsystem();

    UFUNCTION(BlueprintCallable)
    void QueueTilesForCoverRegeneration(const TSet<int32>& TileIndices);
    
};

