#pragma once
#include "CoreMinimal.h"
#include "Framework/Text/TextLayout.h"
#include "Layout/Margin.h"
#include "Styling/SlateColor.h"
#include "Fonts/SlateFontInfo.h"
#include "ButtonTextStateOverride.generated.h"

USTRUCT(BlueprintType)
struct FButtonTextStateOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor TextColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextTransformPolicy TransformPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverridePadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin TextPadding;
    
    PANDEMIC_API FButtonTextStateOverride();
};

