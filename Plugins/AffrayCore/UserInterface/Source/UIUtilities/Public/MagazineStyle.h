#pragma once
#include "CoreMinimal.h"
#include "MagazineStyle.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMagazineStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> MagazineBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> MagazineBorder;
    
    UIUTILITIES_API FMagazineStyle();
};

