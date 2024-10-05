#pragma once
#include "CoreMinimal.h"
#include "NavMesh/RecastNavMesh.h"
#include "SAINavMesh.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API ASAINavMesh : public ARecastNavMesh {
    GENERATED_BODY()
public:
    ASAINavMesh(const FObjectInitializer& ObjectInitializer);

};

