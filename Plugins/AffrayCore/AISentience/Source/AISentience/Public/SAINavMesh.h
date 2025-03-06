#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=RecastNavMesh -FallbackName=RecastNavMesh
#include "SAINavMesh.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API ASAINavMesh : public ARecastNavMesh {
    GENERATED_BODY()
public:
    ASAINavMesh(const FObjectInitializer& ObjectInitializer);

};

