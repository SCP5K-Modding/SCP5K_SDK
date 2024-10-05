#pragma once
#include "CoreMinimal.h"
#include "ButtonTextStateOverride.h"
#include "ButtonTextStyleOverride.generated.h"

USTRUCT(BlueprintType)
struct FButtonTextStyleOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonTextStateOverride Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonTextStateOverride NormalHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonTextStateOverride Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonTextStateOverride SelectedHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonTextStateOverride Disabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonTextStateOverride DisabledHovered;
    
    PANDEMIC_API FButtonTextStyleOverride();
};

