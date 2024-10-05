#pragma once
#include "CoreMinimal.h"
#include "SecondaryAssetSize.h"
#include "PrimaryAssetSize.generated.h"

USTRUCT(BlueprintType)
struct FPrimaryAssetSize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSecondaryAssetSize> SecondaryLengths;
    
    MODULARASSETS_API FPrimaryAssetSize();
};

