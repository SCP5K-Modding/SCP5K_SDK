#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ButtonColour.h"
#include "ButtonTextStyle.h"
#include "UIButtonStyle.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UUIButtonStyle : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonTextStyle PrimaryTextStyle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonTextStyle SecondaryTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonColour BackgroundStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonColour BorderStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonColour AccentStyle;
    
    UUIButtonStyle();

};

