#pragma once
#include "CoreMinimal.h"
#include "EUIVisibility.h"
#include "HUDElementVisibility.generated.h"

USTRUCT(BlueprintType)
struct FHUDElementVisibility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIVisibility PlayerHealthVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIVisibility OtherHealthVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIVisibility AmmoCountVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIVisibility ItemModeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIVisibility HotbarVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIVisibility PVPScoreVisibility;
    
    UIUTILITIES_API FHUDElementVisibility();
};

