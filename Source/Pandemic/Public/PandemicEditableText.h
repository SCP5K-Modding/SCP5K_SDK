#pragma once
#include "CoreMinimal.h"
#include "Fonts/SlateFontInfo.h"
#include "Components/EditableText.h"
#include "PandemicEditableText.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UPandemicEditableText : public UEditableText {
    GENERATED_BODY()
public:
    UPandemicEditableText();

    UFUNCTION(BlueprintCallable)
    void SetInputPosition(int32 LineIndex, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void SetFontSize(int32 Size);
    
    UFUNCTION(BlueprintCallable)
    void SetFont(FSlateFontInfo NewFont);
    
};

