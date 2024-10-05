#pragma once
#include "CoreMinimal.h"
#include "ButtonTextState.h"
#include "ButtonTextStyle.generated.h"

USTRUCT(BlueprintType)
struct FButtonTextStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonTextState Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonTextState NormalHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonTextState Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonTextState SelectedHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonTextState Disabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonTextState DisabledHovered;
    
    PANDEMIC_API FButtonTextStyle();
};

