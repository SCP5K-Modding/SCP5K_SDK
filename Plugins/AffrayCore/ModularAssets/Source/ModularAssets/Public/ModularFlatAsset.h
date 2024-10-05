#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ModularAsset.h"
#include "ModularFlatAsset.generated.h"

UCLASS(Blueprintable)
class MODULARASSETS_API AModularFlatAsset : public AModularAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SecondaryAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxScaleRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDimensionRatio;
    
    AModularFlatAsset(const FObjectInitializer& ObjectInitializer);

};

