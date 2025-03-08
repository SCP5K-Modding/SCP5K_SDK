#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SAICoverGenerationSubsystem.generated.h"

UCLASS(Blueprintable, Config=Game)
class AISENTIENCE_API USAICoverGenerationSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    USAICoverGenerationSubsystem();

    UFUNCTION()
    void QueueTilesForCoverRegeneration(const TSet<uint32>& TileIndices);
    
};

