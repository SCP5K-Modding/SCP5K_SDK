#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MagazineData.generated.h"

USTRUCT(BlueprintType)
struct FMagazineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId AssetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Magazines;
    
    FPSCONTROLLER_API FMagazineData();
};

