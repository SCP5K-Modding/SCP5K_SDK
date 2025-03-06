#pragma once
#include "CoreMinimal.h"
#include "CosmeticData.h"
#include "CosmeticPatchData.generated.h"

class UMaterialInterface;
class UTexture2D;

UCLASS(Blueprintable)
class PANDEMIC_API UCosmeticPatchData : public UCosmeticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    UCosmeticPatchData();

};

