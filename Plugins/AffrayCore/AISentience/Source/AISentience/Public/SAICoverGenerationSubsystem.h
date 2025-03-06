#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "SAICoverGenerationSubsystem.generated.h"

UCLASS(Blueprintable, Config=Game)
class AISENTIENCE_API USAICoverGenerationSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    USAICoverGenerationSubsystem();

    UFUNCTION(BlueprintCallable)
    void QueueTilesForCoverRegeneration(const TSet<uint32>& TileIndices);
    
};

