#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "Components/RichTextBlockDecorator.h"
#include "RichTextBlockTooltipDecorator.generated.h"

UCLASS(Abstract, Blueprintable)
class USERINTERFACE_API URichTextBlockTooltipDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle TextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle TooltipTextStyle;
    
public:
    URichTextBlockTooltipDecorator();

};

