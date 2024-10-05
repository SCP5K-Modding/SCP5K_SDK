#pragma once
#include "CoreMinimal.h"
#include "Framework/Text/TextLayout.h"
#include "Layout/Margin.h"
#include "Styling/SlateColor.h"
#include "Fonts/SlateFontInfo.h"
#include "ButtonTextState.generated.h"

USTRUCT(BlueprintType)
struct FButtonTextState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor TextColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextTransformPolicy TransformPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin TextPadding;
    
    PANDEMIC_API FButtonTextState();
};

