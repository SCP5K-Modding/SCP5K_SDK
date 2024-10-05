#pragma once
#include "CoreMinimal.h"
#include "SecondaryAssetSize.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FSecondaryAssetSize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> Meshes;
    
    MODULARASSETS_API FSecondaryAssetSize();
};

