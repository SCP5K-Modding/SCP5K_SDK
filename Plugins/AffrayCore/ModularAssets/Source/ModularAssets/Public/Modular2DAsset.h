#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ModularAsset.h"
#include "Modular2DAsset.generated.h"

UCLASS(Blueprintable)
class MODULARASSETS_API AModular2DAsset : public AModularAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SecondaryAxis;
    
    AModular2DAsset(const FObjectInitializer& ObjectInitializer);

};

