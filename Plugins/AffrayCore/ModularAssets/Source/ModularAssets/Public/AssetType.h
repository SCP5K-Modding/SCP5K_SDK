#pragma once
#include "CoreMinimal.h"
#include "SecondaryAssetSize.h"
#include "AssetType.generated.h"

USTRUCT(BlueprintType)
struct FAssetType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSecondaryAssetSize> PrimaryLengths;
    
    MODULARASSETS_API FAssetType();
};

