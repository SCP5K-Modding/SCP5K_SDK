#pragma once
#include "CoreMinimal.h"
#include "WallPieceOverride.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FWallPieceOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* OverrideMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideLength;
    
    MODULARASSETS_API FWallPieceOverride();
};

